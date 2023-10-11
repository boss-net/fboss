/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/bcm/tests/BcmSwitchEnsemble.h"
#include "fboss/agent/hw/test/LinkStateToggler.h"

#include <memory>

namespace facebook::fboss {

std::unique_ptr<std::thread> BcmSwitchEnsemble::createThriftThread(
    const BcmSwitch* /*hwSwitch*/) {
  throw FbossError("Starting thrift server not supported");
}

} // namespace facebook::fboss
