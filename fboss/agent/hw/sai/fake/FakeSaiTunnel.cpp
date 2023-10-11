// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/agent/hw/sai/fake/FakeSaiTunnel.h"
#include <optional>
#include "fboss/agent/hw/sai/api/AddressUtil.h"
#include "fboss/agent/hw/sai/fake/FakeSai.h"
namespace {

using facebook::fboss::FakeSai;
using facebook::fboss::toSaiIpAddress;

sai_status_t create_tunnel_fn(
    sai_object_id_t* tunnel_id,
    sai_object_id_t /* switch_id */,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();
  sai_tunnel_type_t type;
  sai_object_id_t underlay;
  sai_object_id_t overlay;
  std::optional<sai_tunnel_ttl_mode_t> ttlMode{
      SAI_TUNNEL_TTL_MODE_UNIFORM_MODEL};
  std::optional<sai_tunnel_dscp_mode_t> dscpMode{
      SAI_TUNNEL_DSCP_MODE_UNIFORM_MODEL};
  std::optional<sai_tunnel_decap_ecn_mode_t> ecnMode{
      SAI_TUNNEL_DECAP_ECN_MODE_STANDARD};
  for (int i = 0; i < attr_count; i++) {
    switch (attr_list[i].id) {
      case SAI_TUNNEL_ATTR_TYPE:
        type = static_cast<sai_tunnel_type_t>(attr_list[i].value.s32);
        break;
      case SAI_TUNNEL_ATTR_UNDERLAY_INTERFACE:
        if (type == SAI_TUNNEL_TYPE_IPINIP) {
          // There are a few conditions that can work with this attr
          // We only support IPinIP for now
          underlay = attr_list[i].value.oid;
        } else {
          return SAI_STATUS_INVALID_PARAMETER;
        }
        break;
      case SAI_TUNNEL_ATTR_OVERLAY_INTERFACE:
        if (type == SAI_TUNNEL_TYPE_IPINIP) {
          // only support IPinIP for now
          overlay = attr_list[i].value.oid;
        } else {
          return SAI_STATUS_INVALID_PARAMETER;
        }
        break;
      case SAI_TUNNEL_ATTR_DECAP_TTL_MODE:
        ttlMode = static_cast<sai_tunnel_ttl_mode_t>(attr_list[i].value.s32);
        break;
      case SAI_TUNNEL_ATTR_DECAP_DSCP_MODE:
        dscpMode = static_cast<sai_tunnel_dscp_mode_t>(attr_list[i].value.s32);
        break;
      case SAI_TUNNEL_ATTR_DECAP_ECN_MODE:
        ecnMode =
            static_cast<sai_tunnel_decap_ecn_mode_t>(attr_list[i].value.s32);
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
    }
  }
  *tunnel_id = fs->tunnelManager.create(
      type, underlay, overlay, std::nullopt, std::nullopt, std::nullopt);
  auto& tunnel = fs->tunnelManager.get(*tunnel_id);
  if (ttlMode.has_value()) {
    tunnel.ttlMode = ttlMode.value();
  }
  if (dscpMode.has_value()) {
    tunnel.dscpMode = dscpMode.value();
  }
  if (ecnMode.has_value()) {
    tunnel.ecnMode = ecnMode.value();
  }
  return SAI_STATUS_SUCCESS;
}

sai_status_t remove_tunnel_fn(sai_object_id_t tunnel_id) {
  auto fs = FakeSai::getInstance();
  fs->tunnelManager.remove(tunnel_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t get_tunnel_attribute_fn(
    sai_object_id_t tunnel_id,
    uint32_t attr_count,
    sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  auto& tunnel = fs->tunnelManager.get(tunnel_id);
  for (int i = 0; i < attr_count; i++) {
    switch (attr[i].id) {
      case SAI_TUNNEL_ATTR_TYPE:
        attr[i].value.s32 = tunnel.type;
        break;
      case SAI_TUNNEL_ATTR_UNDERLAY_INTERFACE:
        attr[i].value.oid = tunnel.underlay;
        break;
      case SAI_TUNNEL_ATTR_OVERLAY_INTERFACE:
        attr[i].value.oid = tunnel.overlay;
        break;
      case SAI_TUNNEL_ATTR_DECAP_TTL_MODE:
        attr[i].value.s32 =
            tunnel.ttlMode.has_value() ? tunnel.ttlMode.value() : 0;
        break;
      case SAI_TUNNEL_ATTR_DECAP_DSCP_MODE:
        attr[i].value.s32 =
            tunnel.dscpMode.has_value() ? tunnel.dscpMode.value() : 0;
        break;
      case SAI_TUNNEL_ATTR_DECAP_ECN_MODE:
        attr[i].value.s32 =
            tunnel.ecnMode.has_value() ? tunnel.ecnMode.value() : 0;
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
    }
  }
  return SAI_STATUS_SUCCESS;
}

sai_status_t set_tunnel_attribute_fn(
    sai_object_id_t tunnel_id,
    const sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  auto& tunnel = fs->tunnelManager.get(tunnel_id);
  switch (attr->id) {
    case SAI_TUNNEL_ATTR_TYPE:
      tunnel.type = static_cast<sai_tunnel_type_t>(attr->value.s32);
      break;
    case SAI_TUNNEL_ATTR_UNDERLAY_INTERFACE:
      tunnel.underlay = attr->value.oid;
      break;
    case SAI_TUNNEL_ATTR_OVERLAY_INTERFACE:
      tunnel.overlay = attr->value.oid;
      break;
    case SAI_TUNNEL_ATTR_DECAP_TTL_MODE:
      tunnel.ttlMode = static_cast<sai_tunnel_ttl_mode_t>(attr->value.s32);
      break;
    case SAI_TUNNEL_ATTR_DECAP_DSCP_MODE:
      tunnel.dscpMode = static_cast<sai_tunnel_dscp_mode_t>(attr->value.s32);
      break;
    case SAI_TUNNEL_ATTR_DECAP_ECN_MODE:
      tunnel.ecnMode =
          static_cast<sai_tunnel_decap_ecn_mode_t>(attr->value.s32);
      break;
    default:
      return SAI_STATUS_INVALID_PARAMETER;
  }

  return SAI_STATUS_SUCCESS;
}

sai_status_t get_tunnel_stats_fn(
    sai_object_id_t /*tunnel*/,
    uint32_t num_of_counters,
    const sai_stat_id_t* /*counter_ids*/,
    uint64_t* counters) {
  for (auto i = 0; i < num_of_counters; ++i) {
    counters[i] = 0;
  }
  return SAI_STATUS_SUCCESS;
}
/*
 * In fake sai there isn't a dataplane, so all stats
 * stay at 0. Leverage the corresponding non _ext
 * stats fn to get the stats. If stats are always 0,
 * modes (READ, READ_AND_CLEAR) don't matter
 */
sai_status_t get_tunnel_stats_ext_fn(
    sai_object_id_t tunnel,
    uint32_t num_of_counters,
    const sai_stat_id_t* counter_ids,
    sai_stats_mode_t /*mode*/,
    uint64_t* counters) {
  return get_tunnel_stats_fn(tunnel, num_of_counters, counter_ids, counters);
}
/*
 *  noop clear stats API. Since fake doesnt have a
 *  dataplane stats are always set to 0, so
 *  no need to clear them
 */
sai_status_t clear_tunnel_stats_fn(
    sai_object_id_t /*tunnel*/,
    uint32_t /*number_of_counters*/,
    const sai_stat_id_t* /*counter_ids*/) {
  return SAI_STATUS_SUCCESS;
}

sai_status_t create_tunnel_term_table_entry_fn(
    sai_object_id_t* tunnel_term_table_entry_id,
    sai_object_id_t /* switch_id */,
    uint32_t attr_count,
    const sai_attribute_t* attr_list) {
  auto fs = FakeSai::getInstance();
  sai_tunnel_term_table_entry_type_t type;
  sai_object_id_t vrId;
  sai_ip_address_t dstIp;
  std::optional<sai_ip_address_t> dstIpMask;
  std::optional<sai_ip_address_t> srcIp;
  std::optional<sai_ip_address_t> srcIpMask;
  sai_tunnel_type_t tunnelType;
  sai_object_id_t tunnelId;
  for (int i = 0; i < attr_count; i++) {
    switch (attr_list[i].id) {
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TYPE:
        type = static_cast<sai_tunnel_term_table_entry_type_t>(
            attr_list[i].value.s32);
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID:
        vrId = attr_list[i].value.oid;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP:
        dstIp = attr_list[i].value.ipaddr;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP_MASK:
        dstIpMask = attr_list[i].value.ipaddr;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP:
        srcIp = attr_list[i].value.ipaddr;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP_MASK:
        srcIpMask = attr_list[i].value.ipaddr;
        break;
        return SAI_STATUS_ATTR_NOT_IMPLEMENTED_0;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TUNNEL_TYPE:
        tunnelType = static_cast<sai_tunnel_type_t>(attr_list[i].value.s32);
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_ACTION_TUNNEL_ID:
        tunnelId = attr_list[i].value.oid;
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
    }
  }
  if (type == SAI_TUNNEL_TERM_TABLE_ENTRY_TYPE_P2MP) {
    *tunnel_term_table_entry_id = fs->tunnelTermManager.create(
        type, vrId, dstIp, tunnelType, tunnelId, srcIp, dstIpMask, srcIpMask);
    return SAI_STATUS_SUCCESS;
  } else {
    return SAI_STATUS_ATTR_NOT_SUPPORTED_0;
  }
}

sai_status_t remove_tunnel_term_table_entry_fn(
    sai_object_id_t tunnel_term_table_entry_id) {
  auto fs = FakeSai::getInstance();
  fs->tunnelTermManager.remove(tunnel_term_table_entry_id);
  return SAI_STATUS_SUCCESS;
}

sai_status_t get_tunnel_term_table_entry_attribute_fn(
    sai_object_id_t tunnel_term_table_entry_id,
    uint32_t attr_count,
    sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  auto& term = fs->tunnelTermManager.get(tunnel_term_table_entry_id);
  for (int i = 0; i < attr_count; i++) {
    switch (attr[i].id) {
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TYPE:
        attr[i].value.s32 = term.type;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID:
        attr[i].value.oid = term.vrId;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP:
        attr[i].value.ipaddr = term.dstIp;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP_MASK:
        attr[i].value.ipaddr = term.dstIpMask.has_value()
            ? term.dstIpMask.value()
            : toSaiIpAddress(folly::IPAddress("255.255.255.255"));
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP:
        attr[i].value.ipaddr = term.srcIp.value();
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP_MASK:
        attr[i].value.ipaddr = term.srcIpMask.has_value()
            ? term.srcIpMask.value()
            : toSaiIpAddress(folly::IPAddress("255.255.255.255"));
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TUNNEL_TYPE:
        attr[i].value.s32 = term.tunnelType;
        break;
      case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_ACTION_TUNNEL_ID:
        attr[i].value.oid = term.tunnelId;
        break;
      default:
        return SAI_STATUS_INVALID_PARAMETER;
    }
  }
  return SAI_STATUS_SUCCESS;
}

sai_status_t set_tunnel_term_table_entry_attribute_fn(
    sai_object_id_t tunnel_term_table_entry_id,
    const sai_attribute_t* attr) {
  auto fs = FakeSai::getInstance();
  auto& term = fs->tunnelTermManager.get(tunnel_term_table_entry_id);
  switch (attr->id) {
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TYPE:
      term.type =
          static_cast<sai_tunnel_term_table_entry_type_t>(attr->value.s32);
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_VR_ID:
      term.vrId = attr->value.oid;
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP:
      term.dstIp = attr->value.ipaddr;
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_DST_IP_MASK:
      term.dstIpMask = attr->value.ipaddr;
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP:
      term.srcIp = attr->value.ipaddr;
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_SRC_IP_MASK:
      term.srcIpMask = attr->value.ipaddr;
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_TUNNEL_TYPE:
      term.tunnelType = static_cast<sai_tunnel_type_t>(attr->value.s32);
      break;
    case SAI_TUNNEL_TERM_TABLE_ENTRY_ATTR_ACTION_TUNNEL_ID:
      term.tunnelId = attr->value.oid;
      break;
    default:
      return SAI_STATUS_INVALID_PARAMETER;
  }
  return SAI_STATUS_SUCCESS;
}

} // namespace

namespace facebook::fboss {
static sai_tunnel_api_t _tunnel_api;

void populate_tunnel_api(sai_tunnel_api_t** tunnel_api) {
  _tunnel_api.create_tunnel = &create_tunnel_fn;
  _tunnel_api.remove_tunnel = &remove_tunnel_fn;
  _tunnel_api.get_tunnel_attribute = &get_tunnel_attribute_fn;
  _tunnel_api.set_tunnel_attribute = &set_tunnel_attribute_fn;

  _tunnel_api.get_tunnel_stats = &get_tunnel_stats_fn;
  _tunnel_api.get_tunnel_stats_ext = &get_tunnel_stats_ext_fn;
  _tunnel_api.clear_tunnel_stats = &clear_tunnel_stats_fn;

  _tunnel_api.create_tunnel_term_table_entry =
      &create_tunnel_term_table_entry_fn;
  _tunnel_api.remove_tunnel_term_table_entry =
      &remove_tunnel_term_table_entry_fn;
  _tunnel_api.get_tunnel_term_table_entry_attribute =
      &get_tunnel_term_table_entry_attribute_fn;
  _tunnel_api.set_tunnel_term_table_entry_attribute =
      &set_tunnel_term_table_entry_attribute_fn;

  *tunnel_api = &_tunnel_api;
}

} // namespace facebook::fboss
