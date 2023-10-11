// Copyright 2004-present Facebook. All Rights Reserved.

#pragma once

#include <fboss/fsdb/common/Utils.h>
#include <fboss/fsdb/if/gen-cpp2/fsdb_oper_types.h>
#include <fboss/thrift_cow/storage/CowStorage.h>
#include <fboss/thrift_cow/visitors/DeltaVisitor.h>
#include "fboss/fsdb/client/FsdbPubSubManager.h"
#include "fboss/fsdb/client/FsdbStreamClient.h"
#include "fboss/thrift_cow/storage/CowStorageMgr.h"

#include <folly/io/async/EventBase.h>
#include <atomic>
#include <memory>

DECLARE_bool(publish_use_id_paths);

namespace facebook::fboss::fsdb {

template <typename PubRootT>
class FsdbSyncManager {
 public:
  using CowStorageManager = CowStorageMgr<PubRootT>;
  using CowState = typename CowStorageManager::CowState;
  using PubRoot = PubRootT;

  FsdbSyncManager(
      const std::string& clientId,
      const std::vector<std::string>& basePath,
      bool isStats,
      bool publishDeltas,
      bool useIdPaths = FLAGS_publish_use_id_paths)
      : FsdbSyncManager(
            std::make_shared<fsdb::FsdbPubSubManager>(clientId),
            basePath,
            isStats,
            publishDeltas,
            useIdPaths) {}

  FsdbSyncManager(
      const std::shared_ptr<fsdb::FsdbPubSubManager>& pubSubMr,
      const std::vector<std::string>& basePath,
      bool isStats,
      bool publishDeltas,
      bool useIdPaths = FLAGS_publish_use_id_paths)
      : pubSubMgr_(pubSubMr),
        basePath_(basePath),
        isStats_(isStats),
        publishDeltas_(publishDeltas),
        storage_([this](const auto& oldState, const auto& newState) {
          processDelta(oldState, newState);
        }),
        useIdPaths_(useIdPaths) {
    CHECK(pubSubMr);
    // make sure publisher is not already created for shared pubSubMgr
    if (publishDeltas_) {
      CHECK(!(pubSubMgr_->getDeltaPublisher(isStats)));
    } else {
      CHECK(!(pubSubMgr_->getPathPublisher(isStats)));
    }
  }

  ~FsdbSyncManager() {
    CHECK(!pubSubMgr_) << "Syncer not stopped";
    CHECK(!readyForPublishing_.load());
  }

  // Starts publishing to fsdb. This method should only be called once all state
  // components are ready and the SyncManager's internal storage has be
  // populated to a sane state. Initial sync will follow asyncronously after
  // start is called.
  void start() {
    CHECK(pubSubMgr_) << "Syncer already stopped";
    auto stateChangeCb = [this](auto oldState, auto newState) {
      publisherStateChanged(oldState, newState);
    };

    if (isStats_ && FLAGS_publish_stats_to_fsdb) {
      if (publishDeltas_) {
        pubSubMgr_->createStatDeltaPublisher(
            basePath_, std::move(stateChangeCb));
      } else {
        pubSubMgr_->createStatPathPublisher(
            basePath_, std::move(stateChangeCb));
      }
    } else if (!isStats_ && FLAGS_publish_state_to_fsdb) {
      if (publishDeltas_) {
        pubSubMgr_->createStateDeltaPublisher(
            basePath_, std::move(stateChangeCb));
      } else {
        pubSubMgr_->createStatePathPublisher(
            basePath_, std::move(stateChangeCb));
      }
    }
  }

  void stop() {
    storage_.getEventBase()->runInEventBaseThreadAndWait([this]() {
      readyForPublishing_.store(false);
      stopInternal();
    });
  }

  //  update internal storage of SyncManager which will then automatically be
  //  queued to be published
  void updateState(typename CowStorageManager::CowStateUpdateFn updateFun) {
    // TODO: might be able to do coalescing before publishing has started
    storage_.updateStateNoCoalescing(
        "Update internal state to publish", updateFun);
  }

  FsdbPubSubManager* pubSubMgr() {
    return pubSubMgr_.get();
  }

  const std::shared_ptr<CowState> getState() const {
    return storage_.getState();
  }

 private:
  void processDelta(
      const std::shared_ptr<CowState>& oldState,
      const std::shared_ptr<CowState>& newState) {
    // TODO: hold lock here to sync with stop()?
    if (readyForPublishing_.load()) {
      if (publishDeltas_) {
        publishDelta(oldState, newState);
      } else {
        publishPath(newState);
      }
    }
  }

  void publisherStateChanged(
      FsdbStreamClient::State /* oldState */,
      FsdbStreamClient::State newState) {
    if (newState == FsdbStreamClient::State::CONNECTED) {
      storage_.getEventBase()->runInEventBaseThreadAndWait([this]() {
        doInitialSync();
        readyForPublishing_.store(true);
      });
    } else {
      // TODO: sync b/w here and processDelta?
      readyForPublishing_.store(false);
    }
  }

  void doInitialSync() {
    CHECK(storage_.getEventBase()->isInEventBaseThread());
    const auto currentState = storage_.getState();
    if (publishDeltas_) {
      auto deltaUnit = buildOperDeltaUnit(
          basePath_,
          std::shared_ptr<CowState>(),
          currentState,
          OperProtocol::BINARY);
      publish(createDelta({deltaUnit}));
    } else {
      publishPath(currentState);
    }
  }

  void publishDelta(
      const std::shared_ptr<CowState>& oldState,
      const std::shared_ptr<CowState>& newState) {
    publish(computeOperDelta(oldState, newState, basePath_, useIdPaths_));
  }

  void publishPath(const std::shared_ptr<CowState>& newState) {
    OperState state;
    state.contents() = newState->encode(OperProtocol::BINARY);
    state.protocol() = fsdb::OperProtocol::BINARY;
    publish(std::move(state));
  }

  template <typename T>
  void publish(T&& state) {
    if (isStats_) {
      pubSubMgr_->publishStat(std::forward<T>(state));
    } else {
      pubSubMgr_->publishState(std::forward<T>(state));
    }
  }

  void stopInternal() {
    if (isStats_ && FLAGS_publish_stats_to_fsdb) {
      if (publishDeltas_) {
        pubSubMgr_->removeStatDeltaPublisher();
      } else {
        pubSubMgr_->removeStatPathPublisher();
      }
    } else if (!isStats_ && FLAGS_publish_state_to_fsdb) {
      if (publishDeltas_) {
        pubSubMgr_->removeStateDeltaPublisher();
      } else {
        pubSubMgr_->removeStatePathPublisher();
      }
    }
    pubSubMgr_.reset();
  }

  std::shared_ptr<FsdbPubSubManager> pubSubMgr_;
  std::vector<std::string> basePath_;
  bool isStats_;
  bool publishDeltas_;
  CowStorageManager storage_;
  std::atomic_bool readyForPublishing_ = false;
  bool useIdPaths_ = false;
};

} // namespace facebook::fboss::fsdb
