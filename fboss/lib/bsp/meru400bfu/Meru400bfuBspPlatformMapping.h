// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#pragma once

#include "fboss/lib/bsp/BspPlatformMapping.h"

namespace facebook::fboss {

class Meru400bfuBspPlatformMapping : public BspPlatformMapping {
 public:
  Meru400bfuBspPlatformMapping();
  explicit Meru400bfuBspPlatformMapping(const std::string& platformMappingStr);
};

} // namespace facebook::fboss
