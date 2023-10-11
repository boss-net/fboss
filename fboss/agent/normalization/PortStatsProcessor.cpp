/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/normalization/PortStatsProcessor.h"

#include <fb303/ServiceData.h>
#include <fmt/core.h>
#include <folly/logging/xlog.h>

#include "fboss/agent/normalization/StatsExporter.h"
#include "fboss/agent/normalization/TransformHandler.h"

namespace facebook::fboss::normalization {
namespace {
const std::string kPrefix = "counter_normalization";
const std::string kInterfaceStatsModelName = "Interface_Stats";
} // namespace

PortStatsProcessor::PortStatsProcessor(
    TransformHandler* transformHandler,
    StatsExporter* statsExporter,
    CounterTagManager* counterTagManager)
    : transformHandler_(transformHandler),
      statsExporter_(statsExporter),
      counterTagManager_(counterTagManager) {}

void PortStatsProcessor::processStats(
    const folly::F14FastMap<std::string, HwPortStats>& hwStatsMap) {
  for (auto& [portName, hwPortStats] : hwStatsMap) {
    process(
        portName,
        "input_bps",
        StatTimestamp(*hwPortStats.timestamp_()),
        *hwPortStats.inBytes_(),
        TransformType::BPS,
        60);
    process(
        portName,
        "output_bps",
        StatTimestamp(*hwPortStats.timestamp_()),
        *hwPortStats.outBytes_(),
        TransformType::BPS,
        60);
    process(
        portName,
        "total_input_discards",
        StatTimestamp(*hwPortStats.timestamp_()),
        *hwPortStats.inDiscards_(),
        TransformType::RATE,
        60);
    process(
        portName,
        "total_output_discards",
        StatTimestamp(*hwPortStats.timestamp_()),
        *hwPortStats.outDiscards_(),
        TransformType::RATE,
        60);
  }

  statsExporter_->flushCounters();
}

void PortStatsProcessor::process(
    const std::string& portName,
    const std::string& normalizedPropertyName,
    StatTimestamp propertyTimestamp,
    int64_t propertyValue,
    TransformType type,
    int32_t processIntervalSec) {
  std::optional<double> transformedValue;
  switch (type) {
    case TransformType::RATE:
      transformedValue = transformHandler_->rate(
          portName,
          normalizedPropertyName,
          propertyTimestamp,
          propertyValue,
          processIntervalSec);
      break;
    case TransformType::BPS:
      transformedValue = transformHandler_->bps(
          portName,
          normalizedPropertyName,
          propertyTimestamp,
          propertyValue,
          processIntervalSec);
      break;
  }

  if (transformedValue) {
    auto counterTags = counterTagManager_->getCounterTags(portName);
    // create formatted ODS counter and publish it
    statsExporter_->publishPortStats(
        portName,
        normalizedPropertyName,
        propertyTimestamp,
        *transformedValue,
        processIntervalSec,
        std::move(counterTags));

    fb303::fbData->addStatValue(
        fmt::format(
            "{}.{}.{}",
            kPrefix,
            kInterfaceStatsModelName,
            normalizedPropertyName),
        1,
        fb303::ExportType::COUNT);
  }
}

} // namespace facebook::fboss::normalization
