/*
 *  Copyright (c) 2004-present, Meta Platforms, Inc. and affiliates.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#pragma once

#include <string>
#include <unordered_map>
#include <vector>

#include <folly/Synchronized.h>

#include "fboss/platform/sensor_service/FsdbSyncer.h"
#include "fboss/platform/sensor_service/if/gen-cpp2/sensor_config_types.h"
#include "fboss/platform/sensor_service/if/gen-cpp2/sensor_service_types.h"

DECLARE_int32(fsdb_statsStream_interval_seconds);
DECLARE_string(mock_lmsensor_json_data);

namespace facebook::fboss::platform::sensor_service {

using namespace facebook::fboss::platform::sensor_config;

enum class SensorSource {
  LMSENSOR,
  SYSFS,
  MOCK,
  UNKNOWN,
};

struct SensorLiveData {
  std::string fru;
  std::string path;
  std::optional<float> value;
  std::optional<int64_t> timeStamp;
  std::string compute;
  Thresholds thresholds;
};

class SensorServiceImpl {
 public:
  explicit SensorServiceImpl(std::string confFileName);
  ~SensorServiceImpl();

  std::vector<SensorData> getSensorsData(
      const std::vector<std::string>& sensorNames);
  std::map<std::string, SensorData> getAllSensorData();
  void fetchSensorData();

  FsdbSyncer* fsdbSyncer() {
    return fsdbSyncer_.get();
  }

 private:
  // Sensor config file full path
  std::string confFileName_{};

  SensorSource sensorSource_{SensorSource::LMSENSOR};

  SensorConfig sensorTable_{};

  // Sensor Name map, sensor path -> sensor name
  std::unordered_map<std::string, std::string> sensorNameMap_{};

  // Live sensor data table, sensor name -> sensor live data
  folly::Synchronized<std::unordered_map<SensorName, struct SensorLiveData>>
      liveDataTable_{};

  std::unique_ptr<FsdbSyncer> fsdbSyncer_;

  std::optional<std::chrono::time_point<std::chrono::steady_clock>>
      publishedStatsToFsdbAt_;

  void parseSensorJsonData(const std::string&);
  void getSensorDataFromPath();
};

} // namespace facebook::fboss::platform::sensor_service
