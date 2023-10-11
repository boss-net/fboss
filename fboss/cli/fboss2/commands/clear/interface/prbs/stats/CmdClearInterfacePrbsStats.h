// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#pragma once

#include <fboss/agent/if/gen-cpp2/ctrl_types.h>
#include <folly/String.h>
#include <folly/gen/Base.h>
#include <cstdint>
#include "fboss/agent/if/gen-cpp2/common_types.h"
#include "fboss/cli/fboss2/CmdHandler.h"
#include "fboss/cli/fboss2/commands/clear/interface/prbs/CmdClearInterfacePrbs.h"
#include "fboss/cli/fboss2/utils/CmdUtils.h"
#include "fboss/cli/fboss2/utils/PrbsUtils.h"
#include "fboss/cli/fboss2/utils/Table.h"
#include "fboss/lib/phy/gen-cpp2/phy_types.h"
#include "thrift/lib/cpp/util/EnumUtils.h"

namespace facebook::fboss {

struct CmdClearInterfacePrbsStatsTraits : public BaseCommandTraits {
  using ParentCmd = CmdClearInterfacePrbs;
  static constexpr utils::ObjectArgTypeId ObjectArgTypeId =
      utils::ObjectArgTypeId::OBJECT_ARG_TYPE_ID_NONE;
  using ObjectArgType = std::monostate;
  using RetType = std::string;
};

class CmdClearInterfacePrbsStats : public CmdHandler<
                                       CmdClearInterfacePrbsStats,
                                       CmdClearInterfacePrbsStatsTraits> {
 public:
  RetType queryClient(
      const HostInfo& hostInfo,
      const std::vector<std::string>& queriedIfs,
      const std::vector<std::string>& components) {
    // Since clearing stats could make a write to hardware, don't clear stats on
    // uninteded components. Set returnAllIfEmpty to false in PortComponents()
    return createModel(
        hostInfo,
        queriedIfs,
        prbsComponents(components, false /* returnAllIfEmpty */));
  }

  void printOutput(const RetType& model, std::ostream& out = std::cout) {
    out << model << std::endl;
  }

  RetType createModel(
      const HostInfo& hostInfo,
      const std::vector<std::string>& queriedIfs,
      const std::vector<phy::PortComponent>& components) {
    auto componentsStrings = folly::gen::from(components) |
        folly::gen::mapped([](phy::PortComponent p) {
                               return apache::thrift::util::enumNameSafe(p);
                             }) |
        folly::gen::as<std::vector>();
    for (const auto& intf : queriedIfs) {
      for (const auto& component : components) {
        clearPrbsStats(hostInfo, intf, component);
      }
    }
    return fmt::format(
        "Cleared PRBS stats on interfaces {}, components {}",
        folly::join(",", queriedIfs),
        folly::join(",", componentsStrings));
  }

  void clearPrbsStats(
      const HostInfo& hostInfo,
      const std::string& interfaceName,
      const phy::PortComponent& component) {
    if (component == phy::PortComponent::TRANSCEIVER_LINE ||
        component == phy::PortComponent::TRANSCEIVER_SYSTEM ||
        component == phy::PortComponent::GB_LINE ||
        component == phy::PortComponent::GB_SYSTEM) {
      auto qsfpClient = utils::createClient<QsfpServiceAsyncClient>(hostInfo);
      qsfpClient->sync_clearInterfacePrbsStats(interfaceName, component);
    } else if (component == phy::PortComponent::ASIC) {
      auto agentClient =
          utils::createClient<facebook::fboss::FbossCtrlAsyncClient>(hostInfo);
      if (portEntries_.empty()) {
        // Fetch all the port info once
        agentClient->sync_getAllPortInfo(portEntries_);
      }
      agentClient->sync_clearPortPrbsStats(
          utils::getPortIDList({interfaceName}, portEntries_)[0], component);
    } else {
      std::runtime_error(
          "Unsupported component " +
          apache::thrift::util::enumNameSafe(component));
    }
  }

 private:
  std::map<int32_t, facebook::fboss::PortInfoThrift> portEntries_;
};

} // namespace facebook::fboss
