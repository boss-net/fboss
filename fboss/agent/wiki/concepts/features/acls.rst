.. fbmeta::
   hide_page_title=true

ACLs
####

Feature Description
===================

ACLs Overview
-------------

An ACL entry consists of an Action that is performed if a packet matches
specified Matcher criteria.

For example, an ACL can drop (Action) all packets with specific source IP (Matcher).
A wide variety of Matchers (based on different packet fields, source/dst port etc.) and
Actions (drop, increment counter, modify packet contents etc.) are supported.

An ACL Table consists of multiple ACL entries. Only the first ACL entry
matching a packet takes effect and the rest of the ACL entries in the ACL Table
are ignored. In order to match on multiple ACL entries on the same packet, the
ACL entries must reside in separate ACL Tables.

An ACL Table Group consists of multiple ACL Tables.

ACLs Design
-----------

The current FBOSS implementation supports single ACL Table. Support for Multiple
ACL table is being planned. Check the Multiple ACL table section for more details

List of ACLs (which all belong to the single Table) are represented in
SwitchState. HwSwitch implementation processes delta for the list of ACLs and
programs hardware.

ACLs Use Case
-------------

- Copying certain traffic to CPU: this is typically control plane traffic that
  is copied to CPU, and egress via specific queue. For example, Matcher: traffic
  with linkLocal DstIP + DSCP 48, Action: Copy to CPU via egress queue 9.
- Queue-per-host ACLs: these are used to provide QoS. For example, Matcher:
  classID associated with a neighbor entry, Action: egress via specific front
  panel queue.

ACLs Configuration
==================

- List of ACL entries (struct AclEntry): each entry carries a name, and list of matchers.
- DataPlaneTrafficPolicy: list of actions e.g. egress via specific queue, mirror etc. for front panel ports.
- CPUTrafficPolicy: list of actions e.g. egress via specific queue, mirror etc. for CPU port.

ACL entry's 'name' is matched against MatchToAction.matcher to determine
corresponding matcher. A sample config for an ACL entry is as shown below.
::
  "acls": [
    {
      "dscp": 48,
      "name": "cpuPolicing-high-NetworkControl-dstLocalIp6",
      "actionType": 1,
      "lookupClassNeighbor": 2
    },

and its corresponding matcher
::
      "matchToAction": [
        {
          "matcher": "cpuPolicing-high-NetworkControl-dstLocalIp6",
          "action": {
            "sendToQueue": {
              "queueId": 9
            },
            "toCpuAction": 0
          }
        },

Build and Test
==============

- Unit tests: fboss/agent/state/tests/Acl*
- HwTests: fboss/agent/HwAcl*

Multiple ACL Table
------------------

With the current design, any incoming packet can only hit one ACL entry at most. However,
there are some use cases where we need more than one ACL to be hit per packet (Refer
https://fb.workplace.com/notes/1100553534120230/). To address these use cases, we have the need
for multiple ACL table where the incoming packet can hit one ACL entry per table and so has the
possibility of hitting more than one ACL entry.

Multiple ACL table can be implemented by declaring an ACL table group which can hold multiple ACL
tables. ACL entries which need to be processed for the same packets need to go in different ACL
tables. In the current design, the switch config contains the AclEntry list that contains the ACL
entries. But with Multiple ACL table, the config will contain as AclTableGroup which contains the
AclTable and the AclEntry underneath. The code snippet below shows the AclTableGroup data structure


.. fb:diffusion::
    :repo: FBS
    :path: fbcode/fboss/agent/switch_config.thrift
    :from: 509
    :to: 527

In the current agent code, the SwitchState contains only the ACL entries and the SAI code creates
a default AclTableGroup and the default AclTable. This ensures that the hardware creates all the
SAI attributes necessary to implement Multiple ACL table. So when the feature is rolled out, we can
tweak the agent code to modify the SwitchState to contain the AclTableGroup instead of AclEntry and
by doing so, move from non Multiple ACL table to Multple ACL table with a single table

HW Test:
========

- HwTests: hw/sai/hw_test/SaiAclTableGroupTests.cpp, hw_test/
           dataplane_tests/SaiAclTableGroupTrafficTests.cpp
