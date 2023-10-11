// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/agent/HwSwitch.h"

#include "fboss/agent/state/StateDelta.h"

namespace facebook::fboss {

std::shared_ptr<SwitchState> HwSwitch::stateChanged(
    const StateDelta& delta,
    const HwWriteBehaviorRAII& /*behavior*/) {
  setProgrammedState(stateChangedImpl(delta));
  return getProgrammedState();
}

} // namespace facebook::fboss
