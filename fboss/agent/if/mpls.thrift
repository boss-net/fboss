namespace cpp2 facebook.fboss
namespace go neteng.fboss.mpls
namespace php fboss_mpls
namespace py neteng.fboss.mpls
namespace py3 neteng.fboss
namespace py.asyncio neteng.fboss.asyncio.mpls

typedef i32 MplsLabel

// label is 20 bit in MPLS header
const MplsLabel MAX_MPLS_LABEL = 0xfffff;

// first element represents bottom of stack, last element represents top of stack
typedef list<i32> MplsLabelStack

enum MplsActionCode {
  PUSH = 0,
  SWAP = 1,
  PHP = 2, # Pen-ultimate hop popping => POP and FORWARD
  POP_AND_LOOKUP = 3,
  NOOP = 4,
}

struct MplsAction {
  1: MplsActionCode action;
  2: optional MplsLabel swapLabel; // Required if action == SWAP
  3: optional MplsLabelStack pushLabels; // Required if action == PUSH
}
