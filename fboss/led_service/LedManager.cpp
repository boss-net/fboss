// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/led_service/LedManager.h"
#include "fboss/agent/EnumUtils.h"
#include "fboss/agent/platforms/common/darwin/DarwinPlatformMapping.h"
#include "fboss/agent/platforms/common/elbert/ElbertPlatformMapping.h"
#include "fboss/agent/platforms/common/fuji/FujiPlatformMapping.h"
#include "fboss/lib/CommonFileUtils.h"
#include "fboss/lib/CommonPortUtils.h"
#include "fboss/lib/platforms/PlatformProductInfo.h"

namespace facebook::fboss {

/*
 * LedManager ctor()
 *
 * LedManager constructor will create PubSub manager to subscribe to the
 * SwitchState update on FSDB. The switch state info is pushed by callback from
 * FsdbSwitchStateSubscriber and the updates used here
 */
LedManager::LedManager() {
  // Create Event base
  eventBase_ = std::make_unique<folly::EventBase>();
  auto* evb = eventBase_.get();
  ledManagerThread_ =
      std::make_unique<std::thread>([=] { evb->loopForever(); });

  // Read the LED config from file
  try {
    ledConfig_ = LedConfig::fromDefaultFile();
  } catch (FbossError& e) {
    XLOG(ERR) << "LED config file not present: " << e.what();
  }

  // Subscribe to Fsdb
  fsdbPubSubMgr_ = std::make_unique<fsdb::FsdbPubSubManager>("led_service");
  fsdbSwitchStateSubscriber_ =
      std::make_unique<FsdbSwitchStateSubscriber>(fsdbPubSubMgr_.get());
  fsdbSwitchStateSubscriber_->subscribeToSwitchState(this);

  XLOG(INFO) << "Created base LED Manager and subscribed to FSDB";
}

/*
 * LedManager destructor()
 *
 * Stop event base thread for Led Manager
 */
LedManager::~LedManager() {
  fsdbSwitchStateSubscriber_->removeSwitchStateSubscription();
  XLOG(INFO) << "Removed LED manager subscription from FSDB";

  if (eventBase_) {
    eventBase_->terminateLoopSoon();
  }
  if (ledManagerThread_) {
    ledManagerThread_->join();
  }
  XLOG(INFO)
      << "Removed LED manager thread and deleting Led Manager object now";
}

/*
 * updateLedStatus
 *
 * This function does these two things:
 * 1. Look into the FSDB pushed data (switch states) in newSwitchState and
 *    updates the local structure portDisplayMap_ as per the operational values
 *    in latest switch state
 * 2. Compute LED colors for new state and if the color for a port is different
 *    than existing one then set the new color on LED
 */
void LedManager::updateLedStatus(
    std::map<short, LedSwitchStateUpdate> newSwitchState) {
  if (newSwitchState.empty()) {
    // No change in port info so return from here
    return;
  }

  for (const auto& [portId, switchStateUpdate] : newSwitchState) {
    // Step 1. Update all operational info
    auto portName = switchStateUpdate.portName;
    auto portProfile = switchStateUpdate.portProfile;
    auto portProfileEnumVal = nameToEnum<cfg::PortProfileID>(portProfile);
    PortDisplayInfo portInfo;
    portInfo.portName = portName;
    portInfo.portProfileId = portProfileEnumVal;
    portInfo.operationStateUp = switchStateUpdate.operState;
    if (switchStateUpdate.ledExternalState.has_value()) {
      portInfo.cablingError = switchStateUpdate.ledExternalState.value() ==
          PortLedExternalState::CABLING_ERROR;
    }
    portInfo.currentLedColor =
        (portDisplayMap_.find(portId) == portDisplayMap_.end())
        ? led::LedColor::UNKNOWN
        : portDisplayMap_.at(portId).currentLedColor;
    portDisplayMap_[portId] = portInfo;
  }

  for (const auto& [portId, switchStateUpdate] : newSwitchState) {
    // Step 2. Update LED color if required
    auto portName = switchStateUpdate.portName;
    auto portProfile = switchStateUpdate.portProfile;
    auto portProfileEnumVal = nameToEnum<cfg::PortProfileID>(portProfile);
    auto newLedColor = calculateLedColor(portId, portProfileEnumVal);
    if (newLedColor != portDisplayMap_[portId].currentLedColor) {
      setLedColor(portId, portProfileEnumVal, newLedColor);
      portDisplayMap_[portId].currentLedColor = newLedColor;
      XLOG(DBG2) << folly::sformat(
          "Port {:s} LED color changed to {:s}",
          portName,
          enumToName<led::LedColor>(newLedColor));
    }
  }
}

/*
 * setExternalLedState
 *
 * This function sets the LED forced mode (on/off) as told through thrift call.
 * This function will also set the led color accordingly. The regular FSDB
 * based update function will treat the user forced on/off as higher priority
 * and they will not override it based on current port status
 */
void LedManager::setExternalLedState(
    int32_t portNum,
    PortLedExternalState ledState) {
  // Set the Forced on/off values in portDisplayMap_
  if (portDisplayMap_.find(portNum) == portDisplayMap_.end()) {
    PortDisplayInfo portInfo;
    portInfo.forcedOn = ledState == PortLedExternalState::EXTERNAL_FORCE_ON;
    portInfo.forcedOff = ledState == PortLedExternalState::EXTERNAL_FORCE_OFF;
    portInfo.currentLedColor = led::LedColor::UNKNOWN;
    portDisplayMap_[portNum] = portInfo;
  } else {
    portDisplayMap_[portNum].forcedOn =
        ledState == PortLedExternalState::EXTERNAL_FORCE_ON;
    portDisplayMap_[portNum].forcedOff =
        ledState == PortLedExternalState::EXTERNAL_FORCE_OFF;
  }

  // Step 2. Update LED color if required
  auto portName = portDisplayMap_[portNum].portName;
  auto portProfile = portDisplayMap_[portNum].portProfileId;
  auto newLedColor = calculateLedColor(portNum, portProfile);
  if (newLedColor != portDisplayMap_[portNum].currentLedColor) {
    setLedColor(portNum, portProfile, newLedColor);
    portDisplayMap_[portNum].currentLedColor = newLedColor;
    XLOG(DBG2) << folly::sformat(
        "Port {:s} LED color changed to {:s}",
        portName,
        enumToName<led::LedColor>(newLedColor));
  }
}

/*
 * isLedControlledThroughService
 *
 * Returns if the LED is being controlled through LED Service
 * - If /etc/coop/led.conf does not exist then return false
 * - If the led.conf file exist then return the value of boolean
 *   ledControlledThroughService from that file
 */
bool LedManager::isLedControlledThroughService() {
  if (ledConfig_.get()) {
    return ledConfig_->thriftConfig_.ledControlledThroughService().value();
  }
  return false;
}

/*
 * getLedColorForPort
 *
 * Returns the latest LED color for a given SW Port
 */
led::LedColor LedManager::getCurrentLedColor(int32_t portNum) const {
  led::LedColor ledColor = led::LedColor::UNKNOWN;

  if (portDisplayMap_.find(portNum) != portDisplayMap_.end()) {
    ledColor = portDisplayMap_.at(portNum).currentLedColor;
  } else {
    auto portName = platformMapping_->getPortNameByPortId(PortID(portNum));
    XLOG(ERR) << folly::sformat(
        "Port {:s} not found in portDisplayMap_",
        (portName.has_value() ? portName.value() : ""));
  }

  return ledColor;
}

} // namespace facebook::fboss
