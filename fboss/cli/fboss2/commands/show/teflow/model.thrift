namespace cpp2 facebook.fboss.cli

include "fboss/cli/fboss2/commands/show/route/model.thrift"

struct ShowTeFlowEntryModel {
  1: list<TeFlowEntry> flowEntries;
}

struct TeFlowEntry {
  1: string dstIp;
  2: i32 dstIpPrefixLength;
  3: i32 srcPort;
  4: bool enabled;
  5: string counterID;
  6: list<NextHopInfo> nextHops;
  7: list<NextHopInfo> resolvedNextHops;
  8: string srcPortName;
}
