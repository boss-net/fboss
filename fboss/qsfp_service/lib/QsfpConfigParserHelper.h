// (c) Facebook, Inc. and its affiliates. Confidential and proprietary.

#pragma once

#include "fboss/qsfp_service/if/gen-cpp2/qsfp_service_config_types.h"
#include "fboss/qsfp_service/if/gen-cpp2/transceiver_types.h"

namespace facebook {
namespace fboss {

bool overrideFactorMatchFound(
    const cfg::TransceiverConfigOverrideFactor& cfgFactor,
    const cfg::TransceiverConfigOverrideFactor& moduleFactor);

std::optional<RxEqualizerSettings> cmisRxEqualizerSettingOverride(
    const cfg::TransceiverOverrides& overrides);
std::optional<unsigned int> sffRxPreemphasisOverride(
    const cfg::TransceiverOverrides& overrides);
std::optional<unsigned int> sffRxAmplitudeOverride(
    const cfg::TransceiverOverrides& overrides);
std::optional<unsigned int> sffTxEqualizationOverride(
    const cfg::TransceiverOverrides& overrides);

cfg::TransceiverConfigOverrideFactor getModuleConfigOverrideFactor(
    std::optional<cfg::TransceiverPartNumber> partNumber,
    std::optional<SMFMediaInterfaceCode> applicationCode);
} // namespace fboss
} // namespace facebook
