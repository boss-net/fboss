// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/platform/data_corral_service/LedManager.h"

#include <fb303/ServiceData.h>
#include <fmt/format.h>
#include <folly/logging/xlog.h>

#include "fboss/lib/CommonFileUtils.h"

namespace facebook::fboss::platform::data_corral_service {

LedManager::LedManager(
    const LedConfig& systemLedConfig,
    const std::map<std::string, LedConfig>& fruTypeLedConfigs)
    : systemLedConfig_(systemLedConfig),
      fruTypeLedConfigs_(fruTypeLedConfigs) {}

bool LedManager::programSystemLed(bool presence) const {
  XLOG(INFO) << fmt::format("Programming system LED with {}", presence);
  try {
    if (presence) {
      programLed(*systemLedConfig_.presentLedSysfsPath(), "1");
      programLed(*systemLedConfig_.absentLedSysfsPath(), "0");
    } else {
      programLed(*systemLedConfig_.absentLedSysfsPath(), "1");
      programLed(*systemLedConfig_.presentLedSysfsPath(), "0");
    }
    XLOG(INFO) << fmt::format("Programmed system LED with {}", presence);
    return true;
  } catch (const std::exception& ex) {
    XLOG(ERR) << fmt::format(
        "Failed to program systed LED with {} due to {}", presence, ex.what());
    return false;
  }
}

bool LedManager::programFruLed(const std::string& fruType, bool presence)
    const {
  XLOG(INFO) << fmt::format("Programming {} LED with {}", fruType, presence);
  try {
    auto ledConfig = fruTypeLedConfigs_.at(fruType);
    if (presence) {
      programLed(*ledConfig.presentLedSysfsPath(), "1");
      programLed(*ledConfig.absentLedSysfsPath(), "0");
    } else {
      programLed(*ledConfig.absentLedSysfsPath(), "1");
      programLed(*ledConfig.presentLedSysfsPath(), "0");
    }
    XLOG(INFO) << fmt::format(
        "Programmed {} LED with presence {}", fruType, presence);
    return true;
  } catch (const std::exception& ex) {
    XLOG(ERR) << fmt::format(
        "Failed to program {} LED with {} due to {}",
        fruType,
        presence,
        ex.what());
    return false;
  }
}

void LedManager::programLed(const std::string& sysfsPath, std::string value)
    const {
  auto res = writeSysfs(sysfsPath, value);
  if (!res) {
    auto errMsg =
        fmt::format("Failed to write {} to file {}", value, sysfsPath);
    XLOG(ERR) << errMsg;
    fb303::fbData->incrementCounter("led_manager.program_led_fail", 1);
    throw std::runtime_error(errMsg);
  }
  XLOG(INFO) << fmt::format("Wrote {} to file {}", value, sysfsPath);
  fb303::fbData->incrementCounter("led_manager.program_led_success", 1);
}

} // namespace facebook::fboss::platform::data_corral_service
