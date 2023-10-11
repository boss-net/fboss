// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/hw/bcm/BcmLabelSwitchingUtils.h"

#include "fboss/agent/FbossError.h"

namespace facebook::fboss::utility {
bcm_mpls_switch_action_t getLabelSwitchAction(
    LabelNextHopEntry::Action action,
    LabelForwardingAction::LabelForwardingType type) {
  using LabelForwardingType = LabelForwardingAction::LabelForwardingType;

  // To drop or punt a packet, the label switch entry needs to point to the drop
  // or punt egress id. Broadcom hardware supports a set of operations for each
  // type of label switch action. Setting an egress id is not a valid operation
  // for BCM_MPLS_SWITCH_ACTION_INVALID or BCM_MPLS_SWITCH_ACTION_NOP.
  // BCM_MPLS_SWITCH_ACTION_PHP allows setting egress id as operation.
  // Packets punted to CPU will include the ingress label as PHP action is not
  // performed for punted packets
  if (action == LabelNextHopEntry::Action::DROP) {
    return BCM_MPLS_SWITCH_ACTION_PHP;
  } else if (action == LabelNextHopEntry::Action::TO_CPU) {
    return BCM_MPLS_SWITCH_ACTION_PHP;
  }
  switch (type) {
    case LabelForwardingType::PUSH:
      // for push, label switch action is swap
      // LSR swaps top label with stack
      return BCM_MPLS_SWITCH_ACTION_SWAP;
    case LabelForwardingType::PHP:
      return BCM_MPLS_SWITCH_ACTION_PHP;
    case LabelForwardingType::SWAP:
      return BCM_MPLS_SWITCH_ACTION_SWAP;
    case LabelForwardingType::POP_AND_LOOKUP:
      return BCM_MPLS_SWITCH_ACTION_POP;
    case LabelForwardingType::NOOP:
      return BCM_MPLS_SWITCH_ACTION_NOP;
    default:
      throw FbossError("unknown label forwarding type");
      folly::assume_unreachable();
  }
}

bool isValidLabeledNextHopSet(
    uint32_t maxLabelStackDepth,
    const LabelNextHopSet& nexthops) {
  std::optional<facebook::fboss::LabelForwardingAction::LabelForwardingType>
      forwardingType;
  for (const auto& nexthop : nexthops) {
    if (!isValidLabeledNextHop(maxLabelStackDepth, nexthop)) {
      return false;
    }
    if (!forwardingType) {
      forwardingType = nexthop.labelForwardingAction()->type();
    } else if (forwardingType != nexthop.labelForwardingAction()->type()) {
      //  each next hop must have same LabelForwardingAction type.
      return false;
    }
  }
  return true;
}

bool isValidLabeledNextHop(
    uint32_t maxLabelStackDepth,
    const NextHop& nexthop) {
  if (!nexthop.isResolved()) {
    // LabelForwardingEntry must have resolved next hops
    return false;
  }

  const auto& labelForwardingAction = nexthop.labelForwardingAction();
  if (!labelForwardingAction.has_value()) {
    // LabelForwardingEntry must have LabelForwardingAction
    return false;
  }
  if (labelForwardingAction->type() ==
          facebook::fboss::LabelForwardingAction::LabelForwardingType::PUSH &&
      labelForwardingAction->pushStack()->size() > maxLabelStackDepth) {
    // label stack to push exceeds what platform can support
    return false;
  }
  return true;
}

RouteNextHopEntry::NextHopSet stripLabelForwarding(
    RouteNextHopEntry::NextHopSet nexthops) {
  RouteNextHopEntry::NextHopSet strippedNextHops;
  for (const auto& nhop : nexthops) {
    strippedNextHops.insert(
        ResolvedNextHop(nhop.addr(), nhop.intf(), nhop.weight()));
  }
  return strippedNextHops;
}

} // namespace facebook::fboss::utility
