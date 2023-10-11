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

#include "fboss/agent/hw/sai/api/SaiApiError.h"
#include "fboss/agent/hw/sai/api/SaiVersion.h"
#include "fboss/agent/hw/sai/api/Traits.h"

#include <type_traits>

extern "C" {
#include <sai.h>
}

/*
 * This library provide a wrapper around the facilities in sai_object.h for
 * bulk object and attribute traversal in SAI. These are primarily for use
 * during warm boot, but are not necessarily restricted to that use case.
 */

namespace facebook::fboss {

namespace detail {
template <typename SaiObjectTraits>
typename std::enable_if_t<
    AdapterKeyIsEntryStruct<SaiObjectTraits>::value,
    typename SaiObjectTraits::AdapterKey>
getAdapterKey(const sai_object_key_t& key) {
  typename SaiObjectTraits::AdapterKey k{key};
  return k;
}

template <typename SaiObjectTraits>
typename std::enable_if_t<
    AdapterKeyIsObjectId<SaiObjectTraits>::value,
    typename SaiObjectTraits::AdapterKey>
getAdapterKey(const sai_object_key_t& key) {
  return typename SaiObjectTraits::AdapterKey{key.key.object_id};
}
} // namespace detail

template <typename SaiObjectTraits>
uint32_t getObjectCount(sai_object_id_t switch_id) {
  uint32_t count = 0;
  sai_status_t status =
      sai_get_object_count(switch_id, SaiObjectTraits::ObjectType, &count);
  // For objects that are not supported yet by SAI SDK, return count 0.
  if (status == SAI_STATUS_NOT_IMPLEMENTED ||
      status == SAI_STATUS_NOT_SUPPORTED) {
    return 0;
  }
  saiCheckError(
      status, SaiObjectTraits::SaiApiT::ApiType, "Failed to get object count");
  return count;
}

template <typename SaiObjectTraits>
std::vector<typename SaiObjectTraits::AdapterKey> getObjectKeys(
    sai_object_id_t switch_id) {
  std::vector<typename SaiObjectTraits::AdapterKey> ret;
  if constexpr (!GetObjectKeySupported<SaiObjectTraits>::value) {
    return ret;
  }
  std::vector<sai_object_key_t> keys;
  uint32_t c = getObjectCount<SaiObjectTraits>(switch_id);
  keys.resize(c);
  sai_status_t status = sai_get_object_key(
      switch_id, SaiObjectTraits::ObjectType, &c, keys.data());
  saiLogError(
      status,
      SAI_API_UNSPECIFIED,
      "Failed to get object key for ",
      saiObjectTypeToString(SaiObjectTraits::ObjectType));
  for (const auto k : keys) {
    ret.push_back(detail::getAdapterKey<SaiObjectTraits>(k));
  }
  return ret;
}

} // namespace facebook::fboss
