/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/wedge/wedge40/Wedge40Port.h"

#include "fboss/agent/platforms/wedge/wedge40/Wedge40Platform.h"

namespace facebook::fboss {

Wedge40Port::Wedge40Port(PortID id, Wedge40Platform* platform)
    : WedgePort(id, platform) {}

} // namespace facebook::fboss
