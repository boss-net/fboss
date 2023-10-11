// Copyright 2004-present Facebook. All Rights Reserved.

#pragma once

#include "fboss/fsdb/client/FsdbPublisher.h"

namespace facebook::fboss::fsdb {
class FsdbDeltaPublisher : public FsdbPublisher<OperDelta> {
  using BaseT = FsdbPublisher<OperDelta>;

 public:
  using BaseT::BaseT;
  ~FsdbDeltaPublisher() override {
    cancel();
  }

 private:
#if FOLLY_HAS_COROUTINES && !defined(IS_OSS)
  folly::coro::Task<StreamT> setupStream() override;
  folly::coro::Task<void> serveStream(StreamT&& stream) override;
#endif
};
} // namespace facebook::fboss::fsdb
