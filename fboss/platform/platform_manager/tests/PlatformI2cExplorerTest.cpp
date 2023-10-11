// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include <gtest/gtest.h>
#include <stdexcept>
#include <string>

#include "fboss/platform/helpers/MockPlatformUtils.h"
#include "fboss/platform/platform_manager/PlatformI2cExplorer.h"

using namespace ::testing;
using namespace facebook::fboss::platform;
using namespace facebook::fboss::platform::platform_manager;

namespace {
class MockPlatformI2cExplorer : public PlatformI2cExplorer {
 public:
  explicit MockPlatformI2cExplorer(
      std::shared_ptr<MockPlatformUtils> platformUtils)
      : PlatformI2cExplorer(platformUtils) {}
  MOCK_METHOD(bool, isI2cDevicePresent, (uint16_t, const I2cAddr&));
  MOCK_METHOD(
      std::optional<std::string>,
      getI2cDeviceName,
      (uint16_t, const I2cAddr&));
};

} // namespace

TEST(PlatformI2cExplorerTest, createI2cDeviceSuccess) {
  auto platformUtils = std::make_shared<MockPlatformUtils>();
  auto i2cExplorer = MockPlatformI2cExplorer(platformUtils);

  // CASE-1: No device present; creation succeeds.
  EXPECT_CALL(i2cExplorer, isI2cDevicePresent(4, I2cAddr(15)))
      .WillOnce(Return(false));
  EXPECT_CALL(
      *platformUtils,
      execCommand("echo lm73 0x0f > /sys/bus/i2c/devices/i2c-4/new_device"))
      .WillOnce(Return(std::pair(0, "")));
  EXPECT_NO_THROW(i2cExplorer.createI2cDevice("lm73", 4, I2cAddr(15)));

  // CASE-2: Same device already present; creation skipped
  EXPECT_CALL(i2cExplorer, isI2cDevicePresent(5, I2cAddr(16)))
      .WillOnce(Return(true));
  EXPECT_CALL(i2cExplorer, getI2cDeviceName(5, I2cAddr(16)))
      .WillOnce(Return("lm73"));
  EXPECT_NO_THROW(i2cExplorer.createI2cDevice("lm73", 5, I2cAddr(16)));
}

TEST(PlatformI2cExplorerTest, createI2cDeviceFailure) {
  auto platformUtils = std::make_shared<MockPlatformUtils>();
  auto i2cExplorer = MockPlatformI2cExplorer(platformUtils);
  // CASE-1: echoing lm75 15 into the new_device file fails.
  EXPECT_CALL(i2cExplorer, isI2cDevicePresent(4, I2cAddr(15)))
      .WillOnce(Return(false));
  EXPECT_CALL(
      *platformUtils,
      execCommand("echo lm73 0x0f > /sys/bus/i2c/devices/i2c-4/new_device"))
      .WillOnce(Return(std::pair(-1, "")));
  EXPECT_THROW(
      i2cExplorer.createI2cDevice("lm73", 4, I2cAddr(15)), std::runtime_error);

  // CASE-2: different device already present.
  EXPECT_CALL(i2cExplorer, isI2cDevicePresent(5, I2cAddr(16)))
      .WillOnce(Return(true));
  EXPECT_CALL(i2cExplorer, getI2cDeviceName(5, I2cAddr(16)))
      .WillOnce(Return("pca9546"));
  EXPECT_THROW(
      i2cExplorer.createI2cDevice("lm73", 5, I2cAddr(16)), std::runtime_error);
}

TEST(PlatformI2cExplorerTest, getDeviceI2cPath) {
  auto i2cExplorer = PlatformI2cExplorer();
  EXPECT_EQ(
      i2cExplorer.getDeviceI2cPath(4, I2cAddr(5)),
      "/sys/bus/i2c/devices/4-0005");
  EXPECT_EQ(
      i2cExplorer.getDeviceI2cPath(4, I2cAddr(15)),
      "/sys/bus/i2c/devices/4-000f");
  EXPECT_EQ(
      i2cExplorer.getDeviceI2cPath(5, I2cAddr(16)),
      "/sys/bus/i2c/devices/5-0010");
}

TEST(PlatformI2cExplorerTest, I2cAddr) {
  EXPECT_EQ(I2cAddr("0x2f").hex2Str(), "0x2f");
  EXPECT_EQ(I2cAddr("0x2F").hex2Str(), "0x2f");
  EXPECT_EQ(I2cAddr(20).hex2Str(), "0x14");
  EXPECT_THROW(I2cAddr("0xGF"), std::invalid_argument);
  EXPECT_THROW(I2cAddr("20"), std::invalid_argument);
  EXPECT_THROW(I2cAddr("0x"), std::invalid_argument);
}
