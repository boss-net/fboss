/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/platforms/sai/SaiBcmDarwinPlatformPort.h"

namespace facebook::fboss {

void SaiBcmDarwinPlatformPort::linkStatusChanged(
    bool /*up*/,
    bool /*adminUp*/) {}

void SaiBcmDarwinPlatformPort::externalState(PortLedExternalState /*lfs*/) {}

} // namespace facebook::fboss
