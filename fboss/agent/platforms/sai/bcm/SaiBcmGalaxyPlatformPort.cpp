// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/platforms/sai/SaiBcmGalaxyPlatformPort.h"
#include "fboss/agent/platforms/common/utils/GalaxyLedUtils.h"

namespace facebook::fboss {

void SaiBcmGalaxyPlatformPort::linkStatusChanged(bool up, bool adminUp) {
  PortID phyPortId = static_cast<PortID>(getPhysicalPortId());

  if (phyPortId == static_cast<PortID>(129) ||
      phyPortId == static_cast<PortID>(131)) {
    return;
  }
  uint32_t index = GalaxyLedUtils::getPortIndex(phyPortId);
  auto led = GalaxyLedUtils::getLEDProcessorNumber(phyPortId);
  if (!led) {
    return;
  }
  index = GalaxyLedUtils::getPortOffset(index);
  uint32_t status = getLEDState(led.value(), index);
  GalaxyLedUtils::getDesiredLEDState(&status, up, adminUp);
  setLEDState(led.value(), index, status);
}

} // namespace facebook::fboss
