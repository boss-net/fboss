/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/platform/data_corral_service/DataCorralServiceImpl.h"

#include <chrono>

#include <folly/FileUtil.h>
#include <folly/dynamic.h>
#include <folly/json.h>
#include <folly/logging/xlog.h>
#include <thrift/lib/cpp2/protocol/Serializer.h>

#include "fboss/lib/platforms/PlatformProductInfo.h"
#include "fboss/platform/config_lib/ConfigLib.h"
#include "fboss/platform/data_corral_service/LedManager.h"
#include "fboss/platform/data_corral_service/darwin/DarwinChassisManager.h"
#include "fboss/platform/weutil/Weutil.h"

namespace {
// ToDo
int kRefreshIntervalInMs = 10000;

} // namespace

using namespace facebook::fboss;

DEFINE_bool(use_led_manager, false, "Whether to use new LedManager class");

namespace facebook::fboss::platform::data_corral_service {

void DataCorralServiceImpl::init() {
  // ToDo
  XLOG(INFO) << "Init DataCorralServiceImpl";

  XLOG(INFO) << "Use Led Manager: " << FLAGS_use_led_manager;
  if (FLAGS_use_led_manager) {
    LedManagerConfig config;
    auto configJson = ConfigLib().getLedManagerConfig();
    apache::thrift::SimpleJSONSerializer::deserialize<LedManagerConfig>(
        configJson, config);

    auto ledManager = std::make_shared<LedManager>(
        *config.systemLedConfig(), *config.fruTypeLedConfigs());
    fruPresenceExplorer_ =
        std::make_shared<FruPresenceExplorer>(*config.fruConfigs(), ledManager);

    presenceDetectionScheduler_.addFunction(
        [this]() { fruPresenceExplorer_->detectFruPresence(); },
        std::chrono::milliseconds(kRefreshIntervalInMs),
        "PresenceDetection");
    presenceDetectionScheduler_.start();
    return;
  }

  auto productInfo =
      std::make_unique<PlatformProductInfo>(FLAGS_fruid_filepath);
  productInfo->initialize();
  auto type = productInfo->getType();
  if (type == PlatformType::PLATFORM_DARWIN) {
    chassisManager_ =
        std::make_unique<DarwinChassisManager>(kRefreshIntervalInMs);
  } else {
    XLOG(WARN) << "Unable to instantiate ChassisManager for platform "
               << toString(type);
  }
  chassisManager_->init();
}

std::vector<FruIdData> DataCorralServiceImpl::getFruid(bool uncached) {
  std::vector<FruIdData> vData;

  if (uncached || fruid_.empty()) {
    fruid_ = get_plat_weutil("chassis", "")->getInfo();
  }

  for (auto it : fruid_) {
    FruIdData data;
    data.name() = it.first;
    data.value() = it.second;
    vData.emplace_back(data);
  }

  return vData;
}
} // namespace facebook::fboss::platform::data_corral_service
