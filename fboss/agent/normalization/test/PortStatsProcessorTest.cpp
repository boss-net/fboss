/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <fb303/ServiceData.h>

#include "fboss/agent/normalization/CounterTagManager.h"
#include "fboss/agent/normalization/PortStatsProcessor.h"
#include "fboss/agent/normalization/StatsExporter.h"
#include "fboss/agent/normalization/TransformHandler.h"

using namespace ::testing;

namespace facebook::fboss::normalization {
namespace {
HwPortStats makeHwPortStatsEth0T0() {
  HwPortStats stats;
  stats.inBytes_() = 10000;
  stats.outBytes_() = 20000;
  stats.inDiscards_() = 100;
  stats.outDiscards_() = 300;

  stats.timestamp_() = 10000;
  return stats;
}

HwPortStats makeHwPortStatsEth1T0() {
  HwPortStats stats;
  stats.inBytes_() = 3000;
  stats.outBytes_() = 6000;
  stats.inDiscards_() = 20;
  stats.outDiscards_() = 70;

  stats.timestamp_() = 1000;
  return stats;
}

HwPortStats makeHwPortStatsEth0T1() {
  HwPortStats stats;
  stats.inBytes_() = 20000;
  stats.outBytes_() = 40000;
  stats.inDiscards_() = 200;
  stats.outDiscards_() = 600;

  stats.timestamp_() = 10100;
  return stats;
}

HwPortStats makeHwPortStatsEth1T1() {
  HwPortStats stats;
  stats.inBytes_() = 5000;
  stats.outBytes_() = 9000;
  stats.inDiscards_() = 70;
  stats.outDiscards_() = 100;

  stats.timestamp_() = 1010;
  return stats;
}

folly::F14FastMap<std::string, HwPortStats> makeHwPortStatsMapT0() {
  folly::F14FastMap<std::string, HwPortStats> statsMap;
  statsMap.emplace("eth0", makeHwPortStatsEth0T0());
  statsMap.emplace("eth1", makeHwPortStatsEth1T0());
  return statsMap;
}

folly::F14FastMap<std::string, HwPortStats> makeHwPortStatsMapT1() {
  folly::F14FastMap<std::string, HwPortStats> statsMap;
  statsMap.emplace("eth0", makeHwPortStatsEth0T1());
  statsMap.emplace("eth1", makeHwPortStatsEth1T1());
  return statsMap;
}

void setupCounterTagManager(CounterTagManager& counterTagManager) {
  cfg::SwitchConfig config;
  std::vector<cfg::Port> ports;

  auto addPort = [](std::vector<cfg::Port>& ports,
                    const std::string& name,
                    const std::vector<std::string>& tags) {
    cfg::Port port;
    port.name() = name;
    port.counterTags() = tags;
    ports.push_back(port);
  };

  addPort(ports, "eth0", {"tag_a", "tag_aa"});
  addPort(ports, "eth1", {"tag_b", "tag_bb"});
  config.ports() = ports;

  counterTagManager.reloadCounterTags(config);
}

class MockStatsExporter : public StatsExporter {
 public:
  explicit MockStatsExporter(const std::string& deviceName)
      : StatsExporter(deviceName) {}

  MOCK_METHOD6(
      publishPortStats,
      void(
          const std::string& portName,
          const std::string& propertyName,
          int64_t timestamp,
          double value,
          int32_t intervalSec,
          std::shared_ptr<std::vector<std::string>> tags));
  MOCK_METHOD0(flushCounters, void());
};

} // namespace

TEST(PortStatsProcessorTest, processStats) {
  TransformHandler handler;
  MockStatsExporter exporter("dev");

  CounterTagManager counterTagManager;
  setupCounterTagManager(counterTagManager);

  {
    // t0
    auto hwStatsMap = makeHwPortStatsMapT0();
    PortStatsProcessor processor(&handler, &exporter, &counterTagManager);
    EXPECT_CALL(exporter, publishPortStats(_, _, _, _, _, _)).Times(0);
    EXPECT_CALL(exporter, flushCounters()).Times(1);
    processor.processStats(hwStatsMap);
    Mock::VerifyAndClearExpectations(&exporter);
  }

  {
    // t1
    auto hwStatsMap = makeHwPortStatsMapT1();
    PortStatsProcessor processor(&handler, &exporter, &counterTagManager);
    EXPECT_CALL(
        exporter,
        publishPortStats(
            "eth0",
            "input_bps",
            10100,
            800,
            60,
            Pointee(ElementsAre("tag_a", "tag_aa"))))
        .Times(1);
    EXPECT_CALL(
        exporter,
        publishPortStats(
            "eth0",
            "output_bps",
            10100,
            1600,
            60,
            Pointee(ElementsAre("tag_a", "tag_aa"))))
        .Times(1);
    EXPECT_CALL(
        exporter,
        publishPortStats(
            "eth0",
            "total_input_discards",
            10100,
            1,
            60,
            Pointee(ElementsAre("tag_a", "tag_aa"))))
        .Times(1);
    EXPECT_CALL(
        exporter,
        publishPortStats(
            "eth0",
            "total_output_discards",
            10100,
            3,
            60,
            Pointee(ElementsAre("tag_a", "tag_aa"))))
        .Times(1);

    // No stats published for eth1

    EXPECT_CALL(exporter, flushCounters()).Times(1);
    processor.processStats(hwStatsMap);
    EXPECT_EQ(
        fb303::fbData->getCounter(
            "counter_normalization.Interface_Stats.input_bps.count"),
        1);
    EXPECT_EQ(
        fb303::fbData->getCounter(
            "counter_normalization.Interface_Stats.output_bps.count"),
        1);
    EXPECT_EQ(
        fb303::fbData->getCounter(
            "counter_normalization.Interface_Stats.total_input_discards.count"),
        1);
    EXPECT_EQ(
        fb303::fbData->getCounter(
            "counter_normalization.Interface_Stats.total_output_discards.count"),
        1);

    Mock::VerifyAndClearExpectations(&exporter);
  }
}

} // namespace facebook::fboss::normalization
