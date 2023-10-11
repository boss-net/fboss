// Copyright 2004-present Facebook. All Rights Reserved.

#pragma once

#include "fboss/agent/hw/sai/store/SaiObject.h"
#include "fboss/agent/hw/sai/store/SaiStore.h"

namespace facebook::fboss {

namespace detail {
template <typename PublishedObjectTrait>
SaiObjectEventSubscriber<PublishedObjectTrait>::SaiObjectEventSubscriber(
    typename PublisherKey<PublishedObjectTrait>::type attr)
    : publisherAttrs_(attr) {}

template <typename PublishedObjectTrait>
SaiObjectEventSubscriber<PublishedObjectTrait>::~SaiObjectEventSubscriber() {}

template <typename PublishedObjectTrait>
typename SaiObjectEventSubscriber<PublishedObjectTrait>::PublisherObjectWeakPtr
SaiObjectEventSubscriber<PublishedObjectTrait>::getPublisherObject() const {
  return publisherObject_;
}

template <typename PublishedObjectTrait>
void SaiObjectEventSubscriber<PublishedObjectTrait>::setPublisherObject(
    PublisherObjectSharedPtr object) {
  publisherObject_ = object;
}
} // namespace detail

template <
    typename SubscriberImpl,
    typename SubscriberTraits,
    typename... PublisherObjectTraits>
bool SaiObjectEventAggregateSubscriber<
    SubscriberImpl,
    SubscriberTraits,
    PublisherObjectTraits...>::isAlive() const {
  return object_.get();
}

template <
    typename SubscriberImpl,
    typename SubscriberTraits,
    typename... PublisherObjectTraits>
void SaiObjectEventAggregateSubscriber<
    SubscriberImpl,
    SubscriberTraits,
    PublisherObjectTraits...>::resetObject() {
  if (!object_) {
    return;
  }
  XLOGF(DBG3, "subscriber object destroyed {}", *object_);
  object_.reset();
}

} // namespace facebook::fboss
