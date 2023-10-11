L2 Learning
===========

This document describes L2 Learning modes used in FBOSS viz. HARDWARE and SOFTWARE.

HARDWARE L2 Learning
--------------------

In this mode, wedge_agent is *not* involved in Learning/Aging and is thus unware
of the MACs learned/aged. Specifically, SwitchState->vlan's MAC table remains
empty.

Learning Workflow:

- When ASIC sees a packet with unknown source MAC+vlan (L2 table miss) on a
  port, it adds entry to L2 table for this MAC+vlan and port.
- Using the L2 entry, subsequent packets to this MAC+vlan are switched to that
  port.
- When running with native Broadcom SDK, L2 add event callbacks are not registered 
  and will not be triggered by SDK. When running with SAI, L2 add event callbacks 
  are always registered through SAI_SWITCH_ATTR_FDB_EVENT_NOTIFY and will be 
  triggered but later ignored by FBOSS. 

Aging workflow:

- SDK runs a thread that ages out L2 entries.
- Similar to learning workflow, when running with native SDK, L2 delete event 
  callbacks are not registered and will not be triggered. When running with SAI,
  L2 delete event callbacks are always registered and will be triggered. However, 
  these callbacks are ignored by FBOSS. 


SOFTWARE L2 Learning
--------------------

In this mode, wedge_agent gets call back on Learning/Aging. Specifically,
SwitchState->vlan's MAC table reflects ASIC L2 table.

However, there are some differences depending on the ASIC.


SOFTWARE L2 Learning: TD2, TH
------------------------------

Learning Workflow:

- With SOFTWARE L2 Learning enabled, when ASIC sees a packet with unknown
  source MAC (L2 table miss), it adds PENDING entry for this MAC+vlan and
  generates a callback.
- PENDING entry means that subsequent traffic with same source MAC+vlan does
  not result into further callbacks.
- Traffic to PENDING entry is still treated as unknown unicast and would be flooded.
- BCM layer receives callback with PENDING L2 entry and passes it up to SwSwitch.
- SwitchState's vlan maintains MacTable. SwSwitch adds this L2 entry to
  corresponding MAC Table and schedules a state update.
- The MAC table delta processing in BCM layer will program the MAC on to the
  ASIC. The L2 entry is now VALIDATED and packets to this MAC+vlan would no
  longer be flooded but switched to the port in L2 entry.
- On SAI switches (needL2EntryForNeighbor() return true), after ARP/NDP entries
  are learned, the correponding L2 entry type will be moved from default
  dynamic to static. Static L2 entries will not be expired by SDK, until ARP/NDP 
  entries are gone, and then explicitly be removed by fboss.

Aging Workflow:

- SDK runs a thread that ages out stale L2 entries.
- When L2 entry is aged out, it generates a callback to BCM layer, which in
  turn passes the callback up to SwSwitch.
- SwSwitch removes the MAC from SwitchState->vlan's MAC Table and schedules a
  state update.
- MAC table delta processing in BCM layer would attempt to remove the MAC. 
  Although this should be a no-op since MACs is already aged out, this might 
  actually remove another entry that is quickly re-learned from subsequent 
  arriving packets. So, to avoid potentail L2 entry churns, FBOSS only
  removes static L2 entries programmed by FBOSS. FBOSS does not attempt to touch 
  dynamic L2 entries, which are assumed to be learned and removed by SDK.
- If static L2 entry is removed by FBOSS, this might trigger another unexpected
  callback although it is from cpu instead of ASIC L2 learning. FBOSS need to 
  suppress these callbacks through bcm configs like bcmSwitchL2ApplCallbackDisable 
  or sai_l2_cpu_fdb_event_suppress.


SOFTWARE L2 Learning: TH3, TH4
------------------------------

There is no notion of PENDING for TH3 and TH4.

Learning Workflow:

- With SOFTWARE L2 Learning enabled, when ASIC sees a packet with unknown
  source MAC (L2 table miss), it adds entry for this MAC+vlan and
  generates a callback.
- Unlike TD2, TH, this is *not* a PENDING entry, thus subsequent traffic with
  same source MAC+vlan is switched to the port.
- BCM layer receives callback with VALIDATED L2 entry and passes it up to SwSwitch.
- SwitchState's vlan maintains MacTable. SwSwitch adds this L2 entry to
  corresponding MAC Table and schedules a state update.
- The MAC table delta processing in BCM layer will program the MAC on to the
  ASIC. The L2 entry is already VALIDATED, so this is a no-op.
- Similar to TD2, TH, after ARP/NDP entries are learned on SAI switches, the 
  correponding L2 entry type will be moved from default dynamic to static. 

Aging Workflow:

- This wofkflow is same as Aging Workflow for "SoftwareL2 Learning: TD2, TH"

  
NOTES
-----

Above HARDWARE L2 learning and SOFTWARE MAC learning terminologies used
in FBOSS context are a little different from HW learning, SW learning used by
Broadcom or SAI community, and might cause confusion during discussion.

In Broadcom world, SW learning means above PENDING entry feature, which is not 
supported on TH3,TH4. It correspond to SAI L2 learning mode attribute 
SAI_BRIDGE_PORT_FDB_LEARNING_MODE_FDB_NOTIFICATION. Broadcom HW learning means 
no PENDING entry feature. It corresponds to SAI L2 learning mode attribute 
SAI_BRIDGE_PORT_FDB_LEARNING_MODE_HW.

In other words:

FBOSS SOFTWARE L2 Learning = Broadcom HW L2 learning on TH3,TH4 + 
register L2 callbacks, Broadcom SW L2 learning on TD2,TH + register L2 callbacks

FBOSS HARDWARE L2 learning = Broadcom HW L2 learning + do not register 
L2 callbacks in SDK or ignore L2 callbacks in FBOSS
