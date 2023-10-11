// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/agent/hw/test/HwTestFabricUtils.h"

#include "fboss/agent/HwSwitch.h"
#include "fboss/agent/SwitchStats.h"
#include "fboss/agent/hw/HwSwitchFb303Stats.h"
#include "fboss/agent/hw/test/ConfigFactory.h"

#include <gtest/gtest.h>

namespace facebook::fboss {
void checkFabricReachability(TestEnsembleIf* ensemble) {
  ensemble->updateStats();
  auto reachability = ensemble->getFabricReachability();
  EXPECT_GT(reachability.size(), 0);
  for (auto [port, endpoint] : reachability) {
    if (!*endpoint.isAttached()) {
      continue;
    }

    int expectedPortId = -1;
    int expectedSwitchId = -1;

    if (endpoint.expectedPortId().has_value()) {
      expectedPortId = *endpoint.expectedPortId();
    }
    if (endpoint.expectedSwitchId().has_value()) {
      expectedSwitchId = *endpoint.expectedSwitchId();
    }

    XLOG(DBG2) << " On port: " << port
               << " got switch id: " << *endpoint.switchId()
               << " expected switch id: " << expectedSwitchId
               << " expected port id: " << expectedPortId
               << " got port id: " << *endpoint.portId();
    EXPECT_EQ(*endpoint.switchId(), expectedSwitchId);
    EXPECT_EQ(
        *endpoint.switchType(),
        ensemble->getHwAsicTable()
            ->getHwAsic(SwitchID(*endpoint.switchId()))
            ->getSwitchType());
    EXPECT_EQ(*endpoint.portId(), expectedPortId);
  }

  EXPECT_EQ(*(ensemble->getFabricReachabilityStats().mismatchCount()), 0);
  EXPECT_EQ(*(ensemble->getFabricReachabilityStats().missingCount()), 0);
}

void checkFabricReachabilityStats(TestEnsembleIf* ensemble) {
  ensemble->updateStats();
  auto reachability = ensemble->getFabricReachability();
  int count = 0;
  for (auto [_, endpoint] : reachability) {
    if (!*endpoint.isAttached()) {
      continue;
    }
    // all interfaces which have reachability info collected
    count++;
  }
  // expected all of interfaces to jump on mismatched and missing
  EXPECT_EQ(*(ensemble->getFabricReachabilityStats().mismatchCount()), count);
  EXPECT_EQ(*(ensemble->getFabricReachabilityStats().missingCount()), count);
}

void populatePortExpectedNeighbors(
    const std::vector<PortID>& ports,
    cfg::SwitchConfig& cfg) {
  const auto& dsfNode = cfg.dsfNodes()->begin()->second;
  for (const auto& portID : ports) {
    auto portCfg = utility::findCfgPort(cfg, portID);
    cfg::PortNeighbor nbr;
    if (portCfg->portType() == cfg::PortType::FABRIC_PORT) {
      // this is for neighbor reachability test. Since
      // ports are in loopback, expect itself to be the neighbor
      // hence put remotePort to be the same as itself
      // expect port name to exist for the fabric ports
      if (portCfg->name().has_value()) {
        nbr.remotePort() = *portCfg->name();
      }
      nbr.remoteSystem() = *dsfNode.name();
      portCfg->expectedNeighborReachability() = {nbr};
    }
  }
}

void checkPortFabricReachability(TestEnsembleIf* ensemble, PortID portId) {
  ensemble->updateStats();
  auto reachability = ensemble->getFabricReachability();
  auto itr = reachability.find(portId);
  ASSERT_TRUE(itr != reachability.end());
  auto endpoint = itr->second;
  EXPECT_TRUE(*endpoint.isAttached());
  XLOG(DBG2) << " On port: " << portId
             << " got switch id: " << *endpoint.switchId();
  EXPECT_EQ(
      SwitchID(*endpoint.switchId()),
      ensemble->scopeResolver().scope(portId).switchId());
  EXPECT_EQ(
      *endpoint.switchType(),
      ensemble->getHwAsicTable()
          ->getHwAsic(SwitchID(*endpoint.switchId()))
          ->getSwitchType());
}
} // namespace facebook::fboss
