/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <cstdint>
#include <memory>
#ifndef IS_OSS
struct pci_device;
#endif

namespace facebook::fboss {
class PciSystem;

/**
 * PCI device access
 */
class PciDevice {
 public:
  PciDevice(uint32_t vendorId, uint32_t deviceId)
      : vendorId_(vendorId), deviceId_(deviceId) {}
  ~PciDevice();

  /**
   * Open a PCI device based on vendor and device IDs
   */
  void open();

  /**
   * Close PCI device
   */
  void close();

  /**
   * Get the BAR for a particular region (default = 0)
   */
  uint64_t getMemoryRegionAddress(uint32_t region = 0) const;

  /**
   * Get the BAR size for a particular region (default = 0)
   */
  uint64_t getMemoryRegionSize(uint32_t region = 0) const;

  /**
   * Get PCI device revision number
   */
  uint8_t getRevision() const;

  /**
   * Check if the PCI device was opened correctly
   */
  bool isGood() {
#ifndef IS_OSS
    return (pciDevice_ != nullptr);
#endif
    return false;
  }

  void setConfigControl();

 private:
  uint32_t vendorId_;
  uint32_t deviceId_;
#ifndef IS_OSS
  pci_device* pciDevice_{nullptr};
#endif
  std::shared_ptr<PciSystem> pciSystem_{nullptr};
};

} // namespace facebook::fboss
