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

#include <gtest/gtest.h>
#include <memory>
#include <thread>
#include <utility>

#include <thrift/lib/cpp2/server/ThriftServer.h>

#include <folly/experimental/FunctionScheduler.h>

#include "fboss/qsfp_service/QsfpServiceHandler.h"
#include "fboss/qsfp_service/platforms/wedge/WedgeManager.h"

namespace facebook {
namespace fboss {

class QsfpServiceTest : public ::testing::Test {
 public:
  QsfpServiceTest() = default;
  ~QsfpServiceTest() override = default;

  void SetUp() override;

 protected:
  WedgeManager* getWedgeManager() {
    return wedgeManager_.get();
  }
  const WedgeManager* getWedgeManager() const {
    return wedgeManager_.get();
  }

 private:
  std::unique_ptr<WedgeManager> wedgeManager_;
  // Forbidden copy constructor and assignment operator
  QsfpServiceTest(QsfpServiceTest const&) = delete;
  QsfpServiceTest& operator=(QsfpServiceTest const&) = delete;
};

} // namespace fboss
} // namespace facebook
