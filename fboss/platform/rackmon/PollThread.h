// Copyright 2021-present Facebook. All Rights Reserved.
#pragma once
#include <atomic>
#include <condition_variable>
#include <functional>
#include <thread>

namespace rackmon {

using PollThreadTime = std::chrono::seconds;
template <class T>
class PollThread {
 protected:
  std::mutex eventMutex_{};
  std::condition_variable ack_{};
  std::condition_variable eventCV_{};
  std::thread threadID_{};
  std::atomic<bool> tick_{false};
  std::atomic<bool> started_ = false;

  std::function<void(T*)> func_{};
  T* obj_ = nullptr;
  PollThreadTime sleepTime_{5};

  void worker() {
    std::unique_lock lk(eventMutex_);
    // Call once at start
    func_(obj_);
    while (started_.load()) {
      eventCV_.wait_for(lk, sleepTime_, [this]() {
        return !started_.load() || tick_.load();
      });
      if (started_.load()) {
        // Do not call function with lock held.
        lk.unlock();
        func_(obj_);
        lk.lock();
      }
      if (tick_.load()) {
        tick_ = false;
        ack_.notify_all();
      }
    }
  }
  void notifyStop() {
    std::unique_lock lk(eventMutex_);
    started_ = false;
    eventCV_.notify_all();
  }

 public:
  PollThread(
      std::function<void(T*)> func,
      T* obj,
      const PollThreadTime& pollInterval)
      : func_(func), obj_(obj), sleepTime_(pollInterval) {}
  ~PollThread() {
    stop();
  }
  void start() {
    if (!started_.load()) {
      started_ = true;
      threadID_ = std::thread(&PollThread::worker, this);
    }
  }
  void stop() {
    if (started_.load()) {
      notifyStop();
      threadID_.join();
    }
  }
  void tick(bool nonBlocking = false) {
    std::unique_lock lk(eventMutex_);
    tick_ = true;
    eventCV_.notify_all();
    if (!nonBlocking) {
      ack_.wait(lk, [this]() { return !tick_.load(); });
    }
  }
};

} // namespace rackmon
