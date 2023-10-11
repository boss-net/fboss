/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "common/stats/ServiceData.h"
#include "common/stats/ThreadCachedServiceData.h"
#include "fboss/agent/hw/CounterUtils.h"
#include "fboss/agent/hw/gen-cpp2/hardware_stats_constants.h"

#include <gtest/gtest.h>
using namespace facebook;
using namespace facebook::fboss;
using namespace facebook::fboss::utility;
using namespace facebook::stats;

namespace {
auto constexpr kUninit = hardware_stats_constants::STAT_UNINITIALIZED();
}
TEST(CounterUtilsTests, PrevUninitMultipleToSub) {
  EXPECT_EQ(
      0,
      subtractIncrements(
          CounterPrevAndCur{kUninit, 0},
          {CounterPrevAndCur{0, 0}, CounterPrevAndCur{0, 0}}));
  EXPECT_EQ(
      0,
      subtractIncrements(
          CounterPrevAndCur{0, 0},
          {CounterPrevAndCur{0, 0}, CounterPrevAndCur{kUninit, 0}}));
}
// Multiple counters
TEST(CounterUtilsTests, CurUninitMultipleToSub) {
  EXPECT_EQ(
      0,
      subtractIncrements(
          CounterPrevAndCur{0, kUninit},
          {CounterPrevAndCur{0, 10}, CounterPrevAndCur{10, 20}}));
  EXPECT_EQ(
      10,
      subtractIncrements(CounterPrevAndCur{0, 20}, {{0, 10}, {0, kUninit}}));
}

TEST(CounterUtilsTests, RolloverMultipleToSub) {
  EXPECT_EQ(
      0, subtractIncrements(CounterPrevAndCur{100, 1}, {{0, 0}, {10, 15}}));

  EXPECT_EQ(0, subtractIncrements(CounterPrevAndCur{0, 0}, {{0, 0}, {100, 1}}));
}

TEST(CounterUtilsTests, ComputeIncrementMultipleToSub) {
  // 100% increment came from to be subtracted counter
  EXPECT_EQ(
      0, subtractIncrements(CounterPrevAndCur{20, 30}, {{10, 15}, {10, 15}}));

  // Greater than 100% increment came from to be subtracted counter
  EXPECT_EQ(
      0, subtractIncrements(CounterPrevAndCur{20, 30}, {{10, 16}, {10, 15}}));
  // Less than 100% increment came from to be subtracted counter
  EXPECT_EQ(
      2, subtractIncrements(CounterPrevAndCur{20, 30}, {{10, 14}, {10, 14}}));
  EXPECT_EQ(
      1, subtractIncrements(CounterPrevAndCur{20, 30}, {{10, 10}, {10, 19}}));
  EXPECT_EQ(
      1, subtractIncrements(CounterPrevAndCur{20, 30}, {{10, 19}, {10, 10}}));
}

TEST(CounterUtilsTests, ExportedCounterIncrementValue) {
  tcData().publishStats();
  fbData->resetAllData();

  ExportedCounter counter{"foo", fb303::ExportTypeConsts::kSum};
  tcData().publishStats();
  EXPECT_TRUE(tcData().hasCounter("foo.sum"));

  counter.incrementValue(std::chrono::seconds(1), 10);
  tcData().publishStats();
  EXPECT_EQ(10, tcData().getCounter("foo.sum"));
}

TEST(CounterUtilsTests, ExportedCounterSetName) {
  tcData().publishStats();
  fbData->resetAllData();

  ExportedCounter counter{"foo", fb303::ExportTypeConsts::kSum};
  tcData().publishStats();
  EXPECT_TRUE(tcData().hasCounter("foo.sum"));

  counter.setName("foo2");
  tcData().publishStats();
  EXPECT_FALSE(tcData().hasCounter("foo.sum"));
  EXPECT_TRUE(tcData().hasCounter("foo2.sum"));

  counter.setName("");
  tcData().publishStats();
  EXPECT_FALSE(tcData().hasCounter("foo.sum"));
  EXPECT_FALSE(tcData().hasCounter("foo2.sum"));
}
