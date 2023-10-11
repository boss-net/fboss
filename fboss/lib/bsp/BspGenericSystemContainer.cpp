// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/lib/bsp/BspGenericSystemContainer.h"
#include <folly/FileUtil.h>
#include <folly/Singleton.h>
#include "fboss/lib/bsp/meru400bfu/Meru400bfuBspPlatformMapping.h"
#include "fboss/lib/bsp/meru400bia/Meru400biaBspPlatformMapping.h"
#include "fboss/lib/bsp/meru400biu/Meru400biuBspPlatformMapping.h"
#include "fboss/lib/bsp/meru800bfa/Meru800bfaBspPlatformMapping.h"
#include "fboss/lib/bsp/meru800bia/Meru800biaBspPlatformMapping.h"
#include "fboss/lib/bsp/montblanc/MontblancBspPlatformMapping.h"

DEFINE_string(
    bsp_platform_mapping_override_path,
    "",
    "The path to the BSP Platform Mapping JSON file");

namespace facebook {
namespace fboss {

template <typename T>
BspPlatformMapping* BspGenericSystemContainer<T>::initBspPlatformMapping() {
  std::string platformMappingStr;
  if (!FLAGS_bsp_platform_mapping_override_path.empty()) {
    if (!folly::readFile(
            FLAGS_bsp_platform_mapping_override_path.data(),
            platformMappingStr)) {
      throw FbossError(
          "unable to read ", FLAGS_bsp_platform_mapping_override_path);
    }
    XLOG(INFO) << "Overriding BSP platform mapping from "
               << FLAGS_bsp_platform_mapping_override_path;
  }
  bspPlatformMapping_ = FLAGS_bsp_platform_mapping_override_path.empty()
      ? new T()
      : new T(platformMappingStr);
  return bspPlatformMapping_;
}

using Meru400bfuSystemContainer =
    BspGenericSystemContainer<Meru400bfuBspPlatformMapping>;
folly::Singleton<Meru400bfuSystemContainer> _meru400bfuSystemContainer;
template <>
std::shared_ptr<Meru400bfuSystemContainer>
Meru400bfuSystemContainer::getInstance() {
  return _meru400bfuSystemContainer.try_get();
}

using Meru400biaSystemContainer =
    BspGenericSystemContainer<Meru400biaBspPlatformMapping>;
folly::Singleton<Meru400biaSystemContainer> _meru400biaSystemContainer;
template <>
std::shared_ptr<Meru400biaSystemContainer>
Meru400biaSystemContainer::getInstance() {
  return _meru400biaSystemContainer.try_get();
}

using Meru400biuSystemContainer =
    BspGenericSystemContainer<Meru400biuBspPlatformMapping>;
folly::Singleton<Meru400biuSystemContainer> _meru400biuSystemContainer;
template <>
std::shared_ptr<Meru400biuSystemContainer>
Meru400biuSystemContainer::getInstance() {
  return _meru400biuSystemContainer.try_get();
}

using Meru800biaSystemContainer =
    BspGenericSystemContainer<Meru800biaBspPlatformMapping>;
folly::Singleton<Meru800biaSystemContainer> _meru800biaSystemContainer;
template <>
std::shared_ptr<Meru800biaSystemContainer>
Meru800biaSystemContainer::getInstance() {
  return _meru800biaSystemContainer.try_get();
}

using Meru800bfaSystemContainer =
    BspGenericSystemContainer<Meru800bfaBspPlatformMapping>;
folly::Singleton<Meru800bfaSystemContainer> _meru800bfaSystemContainer;
template <>
std::shared_ptr<Meru800bfaSystemContainer>
Meru800bfaSystemContainer::getInstance() {
  return _meru800bfaSystemContainer.try_get();
}

using MontblancSystemContainer =
    BspGenericSystemContainer<MontblancBspPlatformMapping>;
folly::Singleton<MontblancSystemContainer> _montblancSystemContainer;
template <>
std::shared_ptr<MontblancSystemContainer>
MontblancSystemContainer::getInstance() {
  return _montblancSystemContainer.try_get();
}

} // namespace fboss
} // namespace facebook
