/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/platforms/sai/SaiTajoPlatformPort.h"

namespace facebook::fboss {

uint32_t SaiTajoPlatformPort::getPhysicalLaneId(
    uint32_t chipId,
    uint32_t logicalLaneId) const {
  return (chipId << 8) + logicalLaneId;
}

bool SaiTajoPlatformPort::supportsTransceiver() const {
  return true;
}
} // namespace facebook::fboss
