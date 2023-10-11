// Copyright 2004-present Facebook. All Rights Reserved.

#include "fboss/agent/hw/bcm/tests/BcmMplsTestUtils.h"
#include "fboss/agent/hw/bcm/BcmEcmpUtils.h"
#include "fboss/agent/hw/bcm/tests/BcmTest.h"

namespace facebook::fboss::utility {

void verifyLabeledEgress(bcm_if_t egressId, bcm_mpls_label_t label) {
  // verify that egress id has given label attached
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_EQ(egr.mpls_label, label);
}

void verifyTunnel(
    bcm_if_t tunnel,
    const LabelForwardingAction::LabelStack& stack) {
  // verify that tunnel interface has given stack attached
  std::vector<bcm_mpls_egress_label_t> label_array;
  int label_count = 0;
  bcm_mpls_egress_label_t init_label;
  bcm_mpls_egress_label_t_init(&init_label);
  label_array.resize(stack.size());
  std::fill(std::begin(label_array), std::end(label_array), init_label);
  bcm_mpls_tunnel_initiator_get(
      0, tunnel, label_array.size(), label_array.data(), &label_count);
  EXPECT_EQ(label_count, stack.size());

  for (auto i = 0; i < stack.size(); i++) {
    EXPECT_EQ(stack[i], label_array[i].label);
  }
}

void verifyTunneledEgress(
    bcm_if_t egressId,
    bcm_mpls_label_t tunnelLabel,
    const LabelForwardingAction::LabelStack& tunnelStack) {
  // verify that given egress is tunneled egress
  // its egress label must be tunnelLabel (top of stack)
  // rest of srack is from tunnel interface attached to egress
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_EQ(egr.mpls_label, tunnelLabel);
  verifyTunnel(egr.intf, tunnelStack);
}

void verifyTunneledEgress(
    bcm_if_t egressId,
    const LabelForwardingAction::LabelStack& tunnelStack) {
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_EQ(egr.mpls_label, tunnelStack[0]);
  verifyTunnel(
      egr.intf,
      LabelForwardingAction::LabelStack{
          tunnelStack.begin() + 1, tunnelStack.end()});
}

void verifyTunneledEgressToCPU(
    bcm_if_t egressId,
    bcm_mpls_label_t tunnelLabel,
    const LabelForwardingAction::LabelStack& tunnelStack) {
  // verify that given egress is tunneled egress
  // its egress label must be tunnelLabel (top of stack)
  // rest of srack is from tunnel interface attached to egress
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_NE(egr.flags & (BCM_L3_L2TOCPU | BCM_L3_COPY_TO_CPU), 0);
  EXPECT_EQ(egr.mpls_label, tunnelLabel);
  verifyTunnel(egr.intf, tunnelStack);
}

void verifyTunneledEgressToDrop(
    bcm_if_t egressId,
    bcm_mpls_label_t tunnelLabel,
    const LabelForwardingAction::LabelStack& tunnelStack) {
  // verify that given egress is tunneled egress
  // its egress label must be tunnelLabel (top of stack)
  // rest of srack is from tunnel interface attached to egress
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_NE(egr.flags & BCM_L3_DST_DISCARD, 0);
  EXPECT_EQ(egr.mpls_label, tunnelLabel);
  verifyTunnel(egr.intf, tunnelStack);
}

void verifyTunneledEgressToDrop(
    bcm_if_t egressId,
    const LabelForwardingAction::LabelStack& tunnelStack) {
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_NE(egr.flags & BCM_L3_DST_DISCARD, 0);
  EXPECT_EQ(egr.mpls_label, tunnelStack[0]);
  verifyTunnel(
      egr.intf,
      LabelForwardingAction::LabelStack{
          tunnelStack.begin() + 1, tunnelStack.end()});
}

void verifyLabeledMultiPathEgress(
    const BcmSwitch* hw,
    uint32_t unLabeled,
    uint32_t labeled,
    bcm_if_t egressId,
    const std::map<
        bcm_port_t,
        std::pair<bcm_mpls_label_t, LabelForwardingAction::LabelStack>>&
        stacks) {
  // verify ecmp egress,
  // number of members in ecmp hroup = labaled + unlabaled
  // labeled will be
  // get each member of ecmp group and check if its labeled
  // a labeled member can have tunnel,
  // if it tunnel has then verify tunneled egress
  // if it tunnel has then verify labaled egress
  int members_sw = unLabeled + labeled;
  auto ecmp_members = getEcmpGroupInHw(hw, egressId, members_sw);
  EXPECT_EQ(ecmp_members.size(), members_sw);
  for (const auto& ecmp_member : ecmp_members) {
    bcm_l3_egress_t egr;
    bcm_l3_egress_get(0, ecmp_member, &egr);
    auto itr = stacks.find(egr.port);
    ASSERT_NE(itr, stacks.end());
    EXPECT_EQ(egr.mpls_label, itr->second.first);
    if (itr->second.first == BCM_MPLS_LABEL_INVALID) {
      unLabeled--;
      continue;
    }
    labeled--;
    if (!itr->second.second.size()) {
      verifyLabeledEgress(ecmp_member, egr.mpls_label);
    } else {
      verifyTunneledEgress(ecmp_member, egr.mpls_label, itr->second.second);
    }
  }
  EXPECT_EQ(unLabeled, 0);
  EXPECT_EQ(labeled, 0);
}

void verifyLabeledMultiPathEgress(
    const BcmSwitch* hw,
    uint32_t unLabeled,
    uint32_t labeled,
    bcm_if_t egressId,
    const std::map<bcm_port_t, LabelForwardingAction::LabelStack>& stacks) {
  int members_sw = unLabeled + labeled;
  auto ecmp_members = getEcmpGroupInHw(hw, egressId, members_sw);
  EXPECT_EQ(ecmp_members.size(), members_sw);
  for (const auto& ecmp_member : ecmp_members) {
    bcm_l3_egress_t egr;
    bcm_l3_egress_get(0, ecmp_member, &egr);
    auto itr = stacks.find(egr.port);
    ASSERT_NE(itr, stacks.end());
    auto [label, stack] =
        getEgressLabelAndTunnelStackFromPushStack(itr->second);
    EXPECT_EQ(egr.mpls_label, label);
    if (label == BCM_MPLS_LABEL_INVALID) {
      unLabeled--;
      continue;
    }
    labeled--;
    if (!stack.size()) {
      verifyLabeledEgress(ecmp_member, egr.mpls_label);
    } else {
      verifyTunneledEgress(ecmp_member, egr.mpls_label, stack);
    }
  }
  EXPECT_EQ(unLabeled, 0);
  EXPECT_EQ(labeled, 0);
}

void verifyEgress(
    bcm_if_t egressId,
    bcm_port_t port,
    const bcm_mac_t& mac,
    bcm_if_t intf) {
  ASSERT_NE(egressId, -1);
  bcm_l3_egress_t egr;
  bcm_l3_egress_t_init(&egr);
  bcm_l3_egress_get(0, egressId, &egr);
  EXPECT_EQ(egr.port, port);
  for (auto i = 0; i < 6; i++) {
    EXPECT_EQ(egr.mac_addr[i], mac[i]);
  }
  EXPECT_EQ(egr.intf, intf);
}

void verifyMultiPathEgress(
    const BcmSwitch* hw,
    bcm_if_t egressId,
    const std::vector<bcm_port_t>& ports,
    const std::vector<bcm_mac_t>& macs,
    const std::vector<bcm_if_t>& intfs) {
  int members_sw = ports.size();
  auto ecmp_members = getEcmpGroupInHw(hw, egressId, members_sw);
  EXPECT_EQ(ecmp_members.size(), members_sw);
  for (const auto& ecmp_member : ecmp_members) {
    bcm_l3_egress_t egr;
    bcm_l3_egress_get(0, ecmp_member, &egr);

    auto itr = std::find(std::begin(ports), std::end(ports), egr.port);
    ASSERT_NE(itr, ports.end());
    auto index = itr - ports.begin();
    verifyEgress(ecmp_member, ports[index], macs[index], intfs[index]);
  }
}

std::pair<bcm_mpls_label_t, LabelForwardingAction::LabelStack>
getEgressLabelAndTunnelStackFromPushStack(
    const LabelForwardingAction::LabelStack& pushStack) {
  if (pushStack.empty()) {
    return std::make_pair(
        BCM_MPLS_LABEL_INVALID, LabelForwardingAction::LabelStack());
  }
  return std::make_pair(
      *pushStack.begin(),
      LabelForwardingAction::LabelStack(
          pushStack.begin() + 1, pushStack.end()));
}

} // namespace facebook::fboss::utility
