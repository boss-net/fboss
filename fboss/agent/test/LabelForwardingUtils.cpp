// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/test/LabelForwardingUtils.h"

namespace {
using namespace facebook::fboss;

const std::vector<folly::IPAddress> kNextHopAddrs{
    folly::IPAddress("10.0.0.1"),
    folly::IPAddress("10.0.0.2"),
};
const std::array<LabelForwardingAction::LabelStack, 2> kLabelStacks{
    LabelForwardingAction::LabelStack{1001, 1002},
    LabelForwardingAction::LabelStack{2001, 2002}};
} // namespace

namespace facebook::fboss {

namespace util {

LabelForwardingAction getSwapAction(LabelForwardingAction::Label swapWith) {
  return LabelForwardingAction(
      LabelForwardingAction::LabelForwardingType::SWAP, swapWith);
}

LabelForwardingAction getPhpAction(bool isPhp) {
  return LabelForwardingAction(
      isPhp ? LabelForwardingAction::LabelForwardingType::PHP
            : LabelForwardingAction::LabelForwardingType::POP_AND_LOOKUP);
}

LabelForwardingAction getPushAction(LabelForwardingAction::LabelStack stack) {
  return LabelForwardingAction(
      LabelForwardingAction::LabelForwardingType::PUSH, std::move(stack));
}

LabelNextHopEntry getSwapLabelNextHopEntry(
    AdminDistance distance,
    InterfaceID intfId,
    std::vector<folly::IPAddress> addrs) {
  LabelNextHopSet nexthops;
  auto& nexthopAddrs = addrs.size() > 0 ? addrs : kNextHopAddrs;
  for (auto i = 0; i < nexthopAddrs.size(); i++) {
    nexthops.emplace(ResolvedNextHop(
        nexthopAddrs[i],
        intfId,
        ECMP_WEIGHT,
        getSwapAction(kLabelStacks[i][0])));
  }
  return LabelNextHopEntry(std::move(nexthops), distance);
}

LabelNextHopEntry getPushLabelNextHopEntry(
    AdminDistance distance,
    InterfaceID intfId,
    std::vector<folly::IPAddress> addrs) {
  LabelNextHopSet nexthops;
  auto& nexthopAddrs = addrs.size() > 0 ? addrs : kNextHopAddrs;
  for (auto i = 0; i < nexthopAddrs.size(); i++) {
    nexthops.emplace(ResolvedNextHop(
        nexthopAddrs[i], intfId, ECMP_WEIGHT, getPushAction(kLabelStacks[i])));
  }
  return LabelNextHopEntry(std::move(nexthops), distance);
}

LabelNextHopEntry getPhpLabelNextHopEntry(
    AdminDistance distance,
    InterfaceID intfId,
    std::vector<folly::IPAddress> addrs) {
  LabelNextHopSet nexthops;
  auto& nexthopAddrs = addrs.size() > 0 ? addrs : kNextHopAddrs;
  for (auto i = 0; i < nexthopAddrs.size(); i++) {
    nexthops.emplace(
        ResolvedNextHop(nexthopAddrs[i], intfId, ECMP_WEIGHT, getPhpAction()));
  }
  return LabelNextHopEntry(std::move(nexthops), distance);
}

LabelNextHopEntry getPopLabelNextHopEntry(
    AdminDistance distance,
    InterfaceID intfId,
    std::vector<folly::IPAddress> addrs) {
  LabelNextHopSet nexthops;
  std::vector<folly::IPAddress> popAddrs{folly::IPAddress("::")};
  auto& nexthopAddrs = addrs.size() > 0 ? addrs : popAddrs;
  for (auto i = 0; i < nexthopAddrs.size(); i++) {
    nexthops.emplace(ResolvedNextHop(
        nexthopAddrs[i], intfId, ECMP_WEIGHT, getPhpAction(false)));
  }
  return LabelNextHopEntry(std::move(nexthops), distance);
}

NextHopThrift getSwapNextHopThrift(int offset) {
  auto nexthopIp = folly::IPAddressV6::tryFromString(
      folly::to<std::string>("fe80::", offset));
  NextHopThrift nexthop;
  nexthop.address()->addr()->append(
      reinterpret_cast<const char*>(nexthopIp->bytes()),
      folly::IPAddressV6::byteCount());
  nexthop.address()->ifName() = "fboss1";
  MplsAction action;
  *action.action() = MplsActionCode::SWAP;
  action.swapLabel() = 601;
  nexthop.mplsAction() = action;
  return nexthop;
}

MplsRoute getMplsRoute(MplsLabel label, AdminDistance distance) {
  MplsRoute route;
  *route.topLabel() = label;
  route.adminDistance() = distance;
  for (auto i = 1; i < 5; i++) {
    route.nextHops()->emplace_back(getSwapNextHopThrift(i));
  }
  return route;
}

void modifyMplsRoute(MplsRoute& route, int index) {
  route.nextHops()->emplace_back(getSwapNextHopThrift(index));
}

std::vector<MplsRoute> getTestRoutes(int base, int count) {
  // TODO - put this in resource generator
  std::vector<MplsRoute> routes;
  for (auto i = base; i < base + count; i++) {
    routes.emplace_back(
        getMplsRoute(501 + i, AdminDistance::DIRECTLY_CONNECTED));
  }
  return routes;
}

std::unique_ptr<UnicastRoute> makeUnicastRoute(
    std::string prefix,
    int prefixLen,
    std::string nxtHop,
    AdminDistance distance) {
  auto nr = std::make_unique<UnicastRoute>();
  nr->dest()->ip() = network::toBinaryAddress(folly::IPAddress(prefix));
  nr->dest()->prefixLength() = prefixLen;
  nr->nextHopAddrs()->push_back(
      network::toBinaryAddress(folly::IPAddress(nxtHop)));
  nr->adminDistance() = distance;
  return nr;
}

} // namespace util

} // namespace facebook::fboss
