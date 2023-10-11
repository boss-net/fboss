/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/hw/sai/api/WredApi.h"
#include "fboss/agent/hw/sai/fake/FakeSai.h"
#include "fboss/agent/hw/sai/store/SaiObject.h"
#include "fboss/agent/hw/sai/store/SaiStore.h"
#include "fboss/agent/hw/sai/store/tests/SaiStoreTest.h"

using namespace facebook::fboss;

class WredStoreTest : public SaiStoreTest {
 public:
  WredSaiId createWredProfile(
      const bool greenEnable,
      const uint32_t greenMinThreshold,
      const uint32_t greenMaxThreshold,
      const uint32_t greenDropProbability,
      const int32_t ecnMarkMode,
      const uint32_t ecnGreenMinThreshold,
      const uint32_t ecnGreenMaxThreshold) const {
    return saiApiTable->wredApi().create<SaiWredTraits>(
        {greenEnable,
         greenMinThreshold,
         greenMaxThreshold,
         greenDropProbability,
         ecnMarkMode,
         ecnGreenMinThreshold,
         ecnGreenMaxThreshold},
        0);
  }

  SaiWredTraits::AdapterHostKey createWredProfileAdapterHostKey(
      const bool greenEnable,
      const uint32_t greenMinThreshold,
      const uint32_t greenMaxThreshold,
      const uint32_t greenDropProbability,
      const int32_t ecnMarkMode,
      const uint32_t ecnGreenMinThreshold,
      const uint32_t ecnGreenMaxThreshold) const {
    SaiWredTraits::Attributes::GreenEnable greenEnableAttribute{greenEnable};
    SaiWredTraits::Attributes::GreenMinThreshold greenMinThresholdAttribute{
        greenMinThreshold};
    SaiWredTraits::Attributes::GreenMaxThreshold greenMaxThresholdAttribute{
        greenMaxThreshold};
    SaiWredTraits::Attributes::GreenDropProbability
        greenDropProbabilityAttribute{greenDropProbability};
    SaiWredTraits::Attributes::EcnMarkMode ecnMarkModeAttribute{ecnMarkMode};
    SaiWredTraits::Attributes::EcnGreenMinThreshold
        ecnGreenMinThresholdAttribute{ecnGreenMinThreshold};
    SaiWredTraits::Attributes::EcnGreenMaxThreshold
        ecnGreenMaxThresholdAttribute{ecnGreenMaxThreshold};
    SaiWredTraits::AdapterHostKey k{
        greenEnableAttribute,
        greenMinThresholdAttribute,
        greenMaxThresholdAttribute,
        greenDropProbabilityAttribute,
        ecnMarkModeAttribute,
        ecnGreenMinThresholdAttribute,
        ecnGreenMaxThresholdAttribute};
    return k;
  }

  sai_uint32_t kGreenMinThreshold() const {
    return 100;
  }

  sai_uint32_t kGreenMaxThreshold() const {
    return 200;
  }

  sai_uint32_t kGreenDropProbability() const {
    return 100;
  }

  sai_uint32_t kEcnGreenMinThreshold() const {
    return 300;
  }

  sai_uint32_t kEcnGreenMaxThreshold() const {
    return 400;
  }
};

TEST_F(WredStoreTest, loadWredProfile) {
  auto wredId0 = createWredProfile(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  auto wredId1 = createWredProfile(
      true,
      kGreenMinThreshold() + 100,
      kGreenMaxThreshold() + 100,
      kGreenDropProbability(),
      0,
      0,
      0);

  SaiStore s(0);
  s.reload();
  auto& store = s.get<SaiWredTraits>();

  SaiWredTraits::AdapterHostKey k0 = createWredProfileAdapterHostKey(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  SaiWredTraits::AdapterHostKey k1 = createWredProfileAdapterHostKey(
      true,
      kGreenMinThreshold() + 100,
      kGreenMaxThreshold() + 100,
      kGreenDropProbability(),
      0,
      0,
      0);

  auto got0 = store.get(k0);
  EXPECT_EQ(got0->adapterKey(), wredId0);
  auto got1 = store.get(k1);
  EXPECT_EQ(got1->adapterKey(), wredId1);
}

TEST_F(WredStoreTest, loadEcnProfile) {
  auto ecnId0 = createWredProfile(
      false, 0, 0, 0, 0, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  auto ecnId1 = createWredProfile(
      false,
      0,
      0,
      0,
      1,
      kEcnGreenMinThreshold() + 100,
      kEcnGreenMaxThreshold() + 100);

  SaiStore s(0);
  s.reload();
  auto& store = s.get<SaiWredTraits>();

  SaiWredTraits::AdapterHostKey k0 = createWredProfileAdapterHostKey(
      false, 0, 0, 0, 0, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  SaiWredTraits::AdapterHostKey k1 = createWredProfileAdapterHostKey(
      false,
      0,
      0,
      0,
      1,
      kEcnGreenMinThreshold() + 100,
      kEcnGreenMaxThreshold() + 100);

  auto got0 = store.get(k0);
  EXPECT_EQ(got0->adapterKey(), ecnId0);
  auto got1 = store.get(k1);
  EXPECT_EQ(got1->adapterKey(), ecnId1);
}

TEST_F(WredStoreTest, wredProfileLoadCtor) {
  auto wredId = createWredProfile(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  auto obj = createObj<SaiWredTraits>(wredId);
  EXPECT_EQ(obj.adapterKey(), wredId);
}

TEST_F(WredStoreTest, ecnProfileLoadCtor) {
  auto ecnId = createWredProfile(
      false, 0, 0, 0, 1, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  auto obj = createObj<SaiWredTraits>(ecnId);
  EXPECT_EQ(obj.adapterKey(), ecnId);
}

TEST_F(WredStoreTest, wredProfileCreateCtor) {
  SaiWredTraits::CreateAttributes c{
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0};
  SaiWredTraits::AdapterHostKey k = createWredProfileAdapterHostKey(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  auto obj = createObj<SaiWredTraits>(k, c, 0);
  EXPECT_TRUE(GET_ATTR(Wred, GreenEnable, obj.attributes()));
  EXPECT_EQ(
      GET_OPT_ATTR(Wred, GreenMinThreshold, obj.attributes()),
      kGreenMinThreshold());
  EXPECT_EQ(
      GET_OPT_ATTR(Wred, GreenMaxThreshold, obj.attributes()),
      kGreenMaxThreshold());
  EXPECT_EQ(GET_ATTR(Wred, EcnMarkMode, obj.attributes()), 0);
  EXPECT_EQ(GET_OPT_ATTR(Wred, EcnGreenMinThreshold, obj.attributes()), 0);
  EXPECT_EQ(GET_OPT_ATTR(Wred, EcnGreenMaxThreshold, obj.attributes()), 0);
}

TEST_F(WredStoreTest, ecnProfileCreateCtor) {
  SaiWredTraits::CreateAttributes c{
      false, 0, 0, 0, 1, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold()};
  SaiWredTraits::AdapterHostKey k = createWredProfileAdapterHostKey(
      false, 0, 0, 0, 1, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  auto obj = createObj<SaiWredTraits>(k, c, 0);
  EXPECT_FALSE(GET_ATTR(Wred, GreenEnable, obj.attributes()));
  EXPECT_EQ(GET_OPT_ATTR(Wred, GreenMinThreshold, obj.attributes()), 0);
  EXPECT_EQ(GET_OPT_ATTR(Wred, GreenMaxThreshold, obj.attributes()), 0);
  EXPECT_EQ(GET_ATTR(Wred, EcnMarkMode, obj.attributes()), 1);
  EXPECT_EQ(
      GET_OPT_ATTR(Wred, EcnGreenMinThreshold, obj.attributes()),
      kEcnGreenMinThreshold());
  EXPECT_EQ(
      GET_OPT_ATTR(Wred, EcnGreenMaxThreshold, obj.attributes()),
      kEcnGreenMaxThreshold());
}

TEST_F(WredStoreTest, serDeserWredProfileStore) {
  auto wredId = createWredProfile(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  verifyAdapterKeySerDeser<SaiWredTraits>({wredId});
}

TEST_F(WredStoreTest, serDeserEcnProfileStore) {
  auto ecnId = createWredProfile(
      false, 0, 0, 0, 1, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  verifyAdapterKeySerDeser<SaiWredTraits>({ecnId});
}

TEST_F(WredStoreTest, toStrWredProfileStore) {
  std::ignore = createWredProfile(
      true,
      kGreenMinThreshold(),
      kGreenMaxThreshold(),
      kGreenDropProbability(),
      0,
      0,
      0);
  verifyToStr<SaiWredTraits>();
}

TEST_F(WredStoreTest, toStrEcnProfileStore) {
  std::ignore = createWredProfile(
      false, 0, 0, 0, 1, kEcnGreenMinThreshold(), kEcnGreenMaxThreshold());
  verifyToStr<SaiWredTraits>();
}
