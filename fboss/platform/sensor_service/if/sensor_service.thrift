namespace cpp2 facebook.fboss.platform.sensor_service
namespace go neteng.fboss.platform.sensor_service
namespace py neteng.fboss.platform.sensor_service
namespace py3 neteng.fboss.platform.sensor_service
namespace py.asyncio neteng.fboss.platform.asyncio.sensor_service

include "fboss/agent/if/fboss.thrift"

// SensorData contains the observed data of a sensor device's output.
//
// `name`: Name of the sensor device
//
// `value`: Lastest value of sensor read. Not set if the last read failed.
//
// `timeStamp`: Lastest timestamp of sensor read. Not set if the last read failed.
struct SensorData {
  1: string name;
  2: optional float value;
  3: optional i64 timeStamp;
}

// TODO: Add more FRU types
enum FruType {
  ALL = 0,
  SMB = 1,
  SCM = 2,
  PEM = 3,
  PSU = 4,
}

// Send back sensor data based on request
struct SensorReadResponse {
  1: i64 timeStamp;
  2: list<SensorData> sensorData;
}

service SensorServiceThrift {
  SensorReadResponse getSensorValuesByNames(
    1: list<string> sensorNames,
  ) throws (1: fboss.FbossBaseError error) (cpp.coroutine);
  SensorReadResponse getSensorValuesByFruTypes(
    1: list<FruType> fruTypes,
  ) throws (1: fboss.FbossBaseError error) (cpp.coroutine);
}
