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

#include "fboss/cli/fboss2/utils/CmdUtilsCommon.h"

namespace facebook::fboss {

class CmdLocalOptions {
 public:
  static std::shared_ptr<CmdLocalOptions> getInstance();

  std::map<std::string, std::string>& getLocalOptionMap(
      const std::string& fullCmd) {
    if (auto cmdEntry = data_.find(fullCmd); cmdEntry != data_.end()) {
      return cmdEntry->second;
    }
    data_[fullCmd] = std::map<std::string, std::string>();
    return data_[fullCmd];
  }

  std::string getLocalOption(
      const std::string& fullCmd,
      const std::string& localOption) {
    auto& localOptions = getLocalOptionMap(fullCmd);
    if (auto localOptionEntry = localOptions.find(localOption);
        localOptionEntry != localOptions.end()) {
      return localOptionEntry->second;
    }
    return "";
  }

  void setLocalOption(
      const std::string& fullCmd,
      const std::string& localOption,
      const std::string& value) {
    auto& localOptions = getLocalOptionMap(fullCmd);
    localOptions[localOption] = value;
  }

 private:
  std::map<std::string, std::map<std::string, std::string>> data_;
};

} // namespace facebook::fboss
