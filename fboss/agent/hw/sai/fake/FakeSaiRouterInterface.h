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

#include "fboss/agent/hw/sai/fake/FakeManager.h"

#include <folly/MacAddress.h>

extern "C" {
#include <sai.h>
}

namespace facebook::fboss {

class FakeRouterInterface {
 public:
  FakeRouterInterface(
      const sai_object_id_t& virtualRouterId,
      const sai_object_id_t portOrVlanId,
      int32_t type)
      : virtualRouterId(virtualRouterId),
        type(type),
        portOrVlanId(portOrVlanId) {}
  explicit FakeRouterInterface(const sai_object_id_t& virtualRouterId)
      : virtualRouterId(virtualRouterId),
        type(SAI_ROUTER_INTERFACE_TYPE_MPLS_ROUTER) {}

  void setSrcMac(const sai_mac_t& mac) {
    folly::ByteRange r(std::begin(mac), std::end(mac));
    srcMac_ = folly::MacAddress::fromBinary(r);
  }
  void setSrcMac(const folly::MacAddress& mac) {
    srcMac_ = mac;
  }
  folly::MacAddress srcMac() const {
    return srcMac_;
  }
  sai_object_id_t virtualRouterId;
  int32_t type;
  sai_object_id_t portOrVlanId{0};
  sai_object_id_t id;
  sai_uint32_t mtu{1514};

 private:
  folly::MacAddress srcMac_;
};
using FakeRouterInterfaceManager =
    FakeManager<sai_object_id_t, FakeRouterInterface>;

void populate_router_interface_api(
    sai_router_interface_api_t** router_interface_api);

} // namespace facebook::fboss
