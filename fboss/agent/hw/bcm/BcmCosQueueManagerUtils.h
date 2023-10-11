/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once
#include "fboss/agent/hw/bcm/BcmCosQueueCounterType.h"
#include "fboss/agent/hw/switch_asics/HwAsic.h"
#include "fboss/agent/state/PortQueue.h"

extern "C" {
#include <bcm/cosq.h>
}

namespace facebook::fboss::utility {
enum class BcmChip {
  TRIDENT2,
  TOMAHAWK,
  TOMAHAWK3,
  TOMAHAWK4,
};

bcm_cosq_stat_t getBcmCosqStatType(
    BcmCosQueueStatType type,
    cfg::AsicType asic);

const PortQueue& getDefaultPortQueueSettings(
    BcmChip chip,
    cfg::StreamType streamType);

const PortQueue& getDefaultControlPlaneQueueSettings(
    BcmChip chip,
    cfg::StreamType streamType);

int getMaxCPUQueueSize(int unit);
} // namespace facebook::fboss::utility
