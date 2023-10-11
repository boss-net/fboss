/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/qsfp_service/module/QsfpModule.h"

namespace facebook {
namespace fboss {

bool QsfpModule::validateQsfpString(const std::string& /*value*/) const {
  return true;
}

std::string QsfpModule::getFwStorageHandle(
    const std::string& /* tcvrPartNumber */) const {
  return "";
}

} // namespace fboss
} // namespace facebook
