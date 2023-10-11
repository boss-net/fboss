/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/sai/switch/SaiSwitch.h"

#include "fboss/agent/FabricReachabilityManager.h"
#include "fboss/agent/hw/HwResourceStatsPublisher.h"
#include "fboss/agent/hw/sai/switch/ConcurrentIndices.h"
#include "fboss/agent/hw/sai/switch/SaiAclTableManager.h"
#include "fboss/agent/hw/sai/switch/SaiBufferManager.h"
#include "fboss/agent/hw/sai/switch/SaiCounterManager.h"
#include "fboss/agent/hw/sai/switch/SaiHostifManager.h"
#include "fboss/agent/hw/sai/switch/SaiLagManager.h"
#include "fboss/agent/hw/sai/switch/SaiPortManager.h"
#include "fboss/agent/hw/sai/switch/SaiSwitchManager.h"
#include "fboss/agent/hw/sai/switch/SaiSystemPortManager.h"

namespace facebook::fboss {
void SaiSwitch::updateStatsImpl() {
  auto now =
      std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  bool updateWatermarks = now - watermarkStatsUpdateTime_ >=
      FLAGS_update_watermark_stats_interval_s;
  if (updateWatermarks) {
    watermarkStatsUpdateTime_ = now;
  }

  int64_t missingCount = 0, mismatchCount = 0;
  auto portsIter = concurrentIndices_->portIds.begin();
  while (portsIter != concurrentIndices_->portIds.end()) {
    {
      std::lock_guard<std::mutex> locked(saiSwitchMutex_);
      managerTable_->portManager().updateStats(
          portsIter->second, updateWatermarks);
      auto endpointOpt =
          managerTable_->portManager().getFabricReachabilityForPort(
              portsIter->second);
      if (endpointOpt.has_value()) {
        fabricReachabilityManager_->processReachabilityInfoForPort(
            portsIter->second, *endpointOpt);
        if (fabricReachabilityManager_->isReachabilityInfoMissing(
                portsIter->second)) {
          missingCount++;
        }
        if (fabricReachabilityManager_->isReachabilityInfoMismatch(
                portsIter->second)) {
          mismatchCount++;
        }
      }
    }
    ++portsIter;
  }

  getSwitchStats()->fabricReachabilityMissingCount(missingCount);
  getSwitchStats()->fabricReachabilityMismatchCount(mismatchCount);

  auto sysPortsIter = concurrentIndices_->sysPortIds.begin();
  while (sysPortsIter != concurrentIndices_->sysPortIds.end()) {
    {
      std::lock_guard<std::mutex> locked(saiSwitchMutex_);
      managerTable_->systemPortManager().updateStats(
          sysPortsIter->second, updateWatermarks);
    }
    ++sysPortsIter;
  }
  auto lagsIter = concurrentIndices_->aggregatePortIds.begin();
  while (lagsIter != concurrentIndices_->aggregatePortIds.end()) {
    {
      std::lock_guard<std::mutex> locked(saiSwitchMutex_);
      managerTable_->lagManager().updateStats(lagsIter->second);
    }
    ++lagsIter;
  }
  if (platform_->getAsic()->isSupported(HwAsic::Feature::CPU_PORT)) {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    managerTable_->hostifManager().updateStats(updateWatermarks);
  }

  {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    managerTable_->bufferManager().updateStats();
  }
  {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    HwResourceStatsPublisher().publish(hwResourceStats_);
  }
  {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    managerTable_->aclTableManager().updateStats();
  }
  {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    managerTable_->counterManager().updateStats();
  }
  {
    std::lock_guard<std::mutex> locked(saiSwitchMutex_);
    managerTable_->switchManager().updateStats();
  }
}
} // namespace facebook::fboss
