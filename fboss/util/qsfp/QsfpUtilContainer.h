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

#include "fboss/util/wedge_qsfp_util.h"
#include "folly/gen/Base.h"

namespace facebook::fboss {

class QsfpUtilContainer {
 public:
  static std::shared_ptr<QsfpUtilContainer> getInstance();

  QsfpUtilContainer();
  ~QsfpUtilContainer() {}

  TransceiverI2CApi* getTransceiverBus() {
    CHECK(bus_);
    return bus_.get();
  }

  folly::EventBase& getEventBase() {
    return evb_;
  }

  // Forbidden copy constructor and assignment operator
  QsfpUtilContainer(QsfpUtilContainer const&) = delete;
  QsfpUtilContainer& operator=(QsfpUtilContainer const&) = delete;

 private:
  void detectTransceiverBus();

  std::unique_ptr<TransceiverI2CApi> bus_;
  folly::EventBase evb_;
};

} // namespace facebook::fboss
