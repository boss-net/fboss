/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/cli/fboss2/CmdArgsLists.h"

#include <folly/Singleton.h>

namespace {
struct singleton_tag_type {};
} // namespace

namespace facebook::fboss {

using facebook::fboss::CmdArgsLists;
static folly::Singleton<CmdArgsLists, singleton_tag_type> cmdArgs_{};
std::shared_ptr<CmdArgsLists> CmdArgsLists::getInstance() {
  return cmdArgs_.try_get();
}
} // namespace facebook::fboss
