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

#include <boost/container/flat_map.hpp>
#include <folly/IPAddress.h>
#include <folly/Range.h>
#include <functional>
#include <memory>
#include <utility>
#include <vector>

#include "fboss/agent/gen-cpp2/switch_config_types.h"
#include "fboss/agent/rib/NetworkToRouteMap.h"
#include "fboss/agent/rib/RoutingInformationBase.h"
#include "fboss/agent/types.h"

namespace facebook::fboss {

class RibRouteUpdater;

// I considered templatizing this class by Iterator but decided against it
// because
// 1. it would never be instantiated with more than one set of template
// parameters
// 2. updating the below typedef's should provide a relatively easy way to
// accommodate a future scenario where the Iterator types change
class ConfigApplier {
 public:
  using DirectlyConnectedRouteIterator = boost::container::flat_map<
      folly::CIDRNetwork,
      std::pair<InterfaceID, folly::IPAddress>>::const_iterator;
  using StaticRouteNoNextHopsIterator =
      std::vector<cfg::StaticRouteNoNextHops>::const_iterator;
  using StaticRouteWithNextHopsIterator =
      std::vector<cfg::StaticRouteWithNextHops>::const_iterator;
  using StaticIp2MplsRouteIterator =
      std::vector<cfg::StaticIp2MplsRoute>::const_iterator;
  using StaticMplsRouteNoNextHopsIterator =
      std::vector<cfg::StaticMplsRouteNoNextHops>::const_iterator;
  using StaticMplsRouteWithNextHopsIterator =
      std::vector<cfg::StaticMplsRouteWithNextHops>::const_iterator;

  ConfigApplier(
      RouterID vrf,
      IPv4NetworkToRouteMap* v4RouteTable,
      IPv6NetworkToRouteMap* v6RouteTable,
      LabelToRouteMap* labelRouteTable,
      folly::Range<DirectlyConnectedRouteIterator> directlyConnectedRouteRange,
      folly::Range<StaticRouteNoNextHopsIterator> staticCpuRouteRange,
      folly::Range<StaticRouteNoNextHopsIterator> staticDropRouteRange,
      folly::Range<StaticRouteWithNextHopsIterator> staticRouteRange,
      folly::Range<StaticIp2MplsRouteIterator> staticIp2MplsRouteRange,
      folly::Range<StaticMplsRouteWithNextHopsIterator> staticMplsRouteRange,
      folly::Range<StaticMplsRouteNoNextHopsIterator> staticMplsDropRouteRange,
      folly::Range<StaticMplsRouteNoNextHopsIterator> staticMplsCpuRouteRange);

  void apply();

 private:
  RouterID vrf_;
  IPv4NetworkToRouteMap* v4NetworkToRoute_;
  IPv6NetworkToRouteMap* v6NetworkToRoute_;
  LabelToRouteMap* labelToRoute_;
  folly::Range<DirectlyConnectedRouteIterator> directlyConnectedRouteRange_;
  folly::Range<StaticRouteNoNextHopsIterator> staticCpuRouteRange_;
  folly::Range<StaticRouteNoNextHopsIterator> staticDropRouteRange_;
  folly::Range<StaticRouteWithNextHopsIterator> staticRouteRange_;
  folly::Range<StaticIp2MplsRouteIterator> staticIp2MplsRouteRange_;
  folly::Range<StaticMplsRouteWithNextHopsIterator> staticMplsRouteRange_;
  folly::Range<StaticMplsRouteNoNextHopsIterator> staticMplsDropRouteRange_;
  folly::Range<StaticMplsRouteNoNextHopsIterator> staticMplsCpuRouteRange_;
};

} // namespace facebook::fboss
