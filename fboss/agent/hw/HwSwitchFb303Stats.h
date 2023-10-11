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

#include <fb303/ThreadCachedServiceData.h>
#include <folly/ThreadLocal.h>
#include "fboss/agent/hw/gen-cpp2/hardware_stats_types.h"

namespace facebook::fboss {

class HwSwitchFb303Stats {
 public:
  using ThreadLocalStatsMap =
      fb303::ThreadCachedServiceData::ThreadLocalStatsMap;

  HwSwitchFb303Stats(ThreadLocalStatsMap* map, const std::string& vendor);

  void txPktAlloc() {
    txPktAlloc_.addValue(1);
  }
  void txPktFree() {
    txPktFree_.addValue(1);
  }
  void txSent() {
    txSent_.addValue(1);
  }
  void txSentDone(uint64_t q) {
    txSentDone_.addValue(1);
    txQueued_.addValue(q);
  }
  void txError() {
    txErrors_.addValue(1);
  }
  void txPktAllocErrors() {
    txErrors_.addValue(1);
    txPktAllocErrors_.addValue(1);
  }

  void corrParityError() {
    parityErrors_.addValue(1);
    corrParityErrors_.addValue(1);
  }

  void uncorrParityError() {
    parityErrors_.addValue(1);
    uncorrParityErrors_.addValue(1);
  }

  void asicError() {
    asicErrors_.addValue(1);
  }

  void fabricReachabilityMissingCount(int64_t value);
  void fabricReachabilityMismatchCount(int64_t value);

  void update(const HwSwitchDramStats& dramStats);
  void update(const HwSwitchDropStats& dropStats);
  // TODO: FSDB needs to support count() method on stats

  int64_t getTxPktAllocCount() const {
    return txPktAlloc_.count();
  }
  int64_t getTxPktFreeCount() const {
    return txPktFree_.count();
  }
  int64_t getTxSentCount() const {
    return txSent_.count();
  }
  int64_t getTxSentDoneCount() const {
    return txSentDone_.count();
  }
  int64_t getTxErrorCount() const {
    return txErrors_.count();
  }
  int64_t getTxPktAllocErrorsCount() const {
    return txPktAllocErrors_.count();
  }
  int64_t getCorrParityErrorCount() const {
    return corrParityErrors_.count();
  }
  int64_t getUncorrParityErrorCount() const {
    return uncorrParityErrors_.count();
  }
  int64_t getAsicErrorCount() const {
    return asicErrors_.count();
  }
  int64_t getFabricReachabilityMismatchCount() const;
  int64_t getFabricReachabilityMissingCount() const;
  int64_t getPacketIntegrityDropsCount() const {
    return packetIntegrityDrops_.count();
  }
  int64_t getDramEnqueuedBytes() const;
  int64_t getDramDequeuedBytes() const;

  HwAsicErrors getHwAsicErrors() const;
  FabricReachabilityStats getFabricReachabilityStats();

 private:
  // Forbidden copy constructor and assignment operator
  HwSwitchFb303Stats(HwSwitchFb303Stats const&) = delete;
  HwSwitchFb303Stats& operator=(HwSwitchFb303Stats const&) = delete;

  using TLTimeseries = fb303::ThreadCachedServiceData::TLTimeseries;
  using TLHistogram = fb303::ThreadCachedServiceData::TLHistogram;
  using TLCounter = fb303::ThreadCachedServiceData::TLCounter;

  // Total number of Tx packet allocated right now
  TLTimeseries txPktAlloc_;
  TLTimeseries txPktFree_;
  TLTimeseries txSent_;
  TLTimeseries txSentDone_;

  // Errors in sending packets
  TLTimeseries txErrors_;
  TLTimeseries txPktAllocErrors_;

  // Time spent for each Tx packet queued in HW
  TLHistogram txQueued_;

  // parity errors
  TLTimeseries parityErrors_;
  TLTimeseries corrParityErrors_;
  TLTimeseries uncorrParityErrors_;

  // Other ASIC errors
  TLTimeseries asicErrors_;
  // Drops
  TLTimeseries globalDrops_;
  TLTimeseries globalReachDrops_;
  TLTimeseries packetIntegrityDrops_;
  // Dram enqueue, dequeue bytes
  TLTimeseries dramEnqueuedBytes_;
  TLTimeseries dramDequeuedBytes_;
  // fabric reachability errors
  TLCounter fabricReachabilityMissingCount_;
  TLCounter fabricReachabilityMismatchCount_;
};

} // namespace facebook::fboss
