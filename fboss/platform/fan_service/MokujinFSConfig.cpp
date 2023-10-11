// Copyright (c) 2004-present, Meta Platforms, Inc. and affiliates.
// All Rights Reserved.

#include <string>

namespace facebook::fboss::platform::fan_service {

std::string getMokujinFSConfig() {
  return R"({
  "bspType" : 4,
  "watchdog" : {
    "access" : {
      "accessType" : "ACCESS_TYPE_SYSFS",
      "path" : "/sys/bus/i2c/drivers/iob_cpld/watchdog"
    },
    "value" : 1
  },
  "pwmBoostOnNumDeadFan" : true,
  "pwmBoostOnNumDeadSensor" : false,
  "pwmBoostOnNoQsfpAfterInSec" : 90,
  "pwmBoostValue" : 70,
  "pwmLowerThreshold" : 10,
  "pwmUpperThreshold" : 70,
  "shutdownCmd" : "wedge_power reset -s",
  "optics" : [
    {
      "opticName" : "qsfp_group_1",
      "access" : {
        "accessType" : "ACCESS_TYPE_QSFP"
      },
      "portList" : [],
      "aggregationType" : "OPTIC_AGGREGATION_TYPE_MAX",
      "tempToPwmMaps" : {
        "OPTIC_TYPE_100_GENERIC" : {
          "40" : 35,
          "42" : 50,
          "44" : 75,
          "50" : 100
        },
        "OPTIC_TYPE_200_GENERIC" : {
          "42" : 35,
          "44" : 50,
          "46" : 75,
          "52" : 100
        },
        "OPTIC_TYPE_400_GENERIC" : {
          "46" : 35,
          "48" : 50,
          "50" : 75,
          "52" : 100
        }
      }
    }
  ],
  "sensors" : [
    {
      "sensorName" : "test_sensor_1",
      "scale" : 1000.0,
      "access" : {
        "accessType" : "ACCESS_TYPE_THRIFT"
      },
      "adjustmentTable" : {
        "10" : 5,
        "25" : 4,
        "30" : 1
      },
      "pwmCalcType" : "SENSOR_PWM_CALC_TYPE_FOUR_LINEAR_TABLE",
      "normalUpTable" : {
        "28" : 30,
        "29" : 35,
        "30" : 40,
        "31" : 45,
        "33" : 50,
        "34" : 55,
        "35" : 60
      },
      "normalDownTable" : {
        "26" : 30,
        "27" : 35,
        "28" : 40,
        "29" : 45,
        "30" : 50,
        "31" : 55,
        "33" : 60
      },
      "failUpTable" : {
        "27" : 40,
        "28" : 45,
        "29" : 50,
        "31" : 55,
        "33" : 60,
        "34" : 65,
        "35" : 70
      },
      "failDownTable" : {
        "25" : 40,
        "26" : 45,
        "27" : 50,
        "29" : 55,
        "31" : 60,
        "32" : 65,
        "33" : 70
      },
      "alarm" : {
        "highMajor" : 70.0,
        "highMinor" : 65.0,
        "minorSoakSeconds" : 15
      }
    },
    {
      "sensorName" : "test_sensor_2",
      "scale" : 1000.0,
      "access" : {
        "accessType" : "ACCESS_TYPE_THRIFT"
      },
      "adjustmentTable" : {
        "10" : 5,
        "25" : 4,
        "30" : 1
      },
      "pwmCalcType" : "SENSOR_PWM_CALC_TYPE_FOUR_LINEAR_TABLE",
      "normalUpTable" : {
        "28" : 30,
        "29" : 35,
        "30" : 40,
        "31" : 45,
        "33" : 50,
        "34" : 55,
        "35" : 60
      },
      "normalDownTable" : {
        "26" : 30,
        "27" : 35,
        "28" : 40,
        "29" : 45,
        "30" : 50,
        "31" : 55,
        "33" : 60
      },
      "failUpTable" : {
        "27" : 40,
        "28" : 45,
        "29" : 50,
        "31" : 55,
        "33" : 60,
        "34" : 65,
        "35" : 70
      },
      "failDownTable" : {
        "25" : 40,
        "26" : 45,
        "27" : 50,
        "29" : 55,
        "31" : 60,
        "32" : 65,
        "33" : 70
      },
      "alarm" : {
        "highMajor" : 70.0,
        "highMinor" : 65.0,
        "minorSoakSeconds" : 15
      }
    },
    {
      "sensorName" : "test_sensor_3",
      "scale" : 1000.0,
      "access" : {
        "accessType" : "ACCESS_TYPE_THRIFT",
      },
      "adjustmentTable" : {
        "60" : 0,
        "80" : 0,
        "95" : 0
      },
      "pwmCalcType" : "SENSOR_PWM_CALC_TYPE_PID",
      "setPoint" : 92,
      "posHysteresis" : 0,
      "negHysteresis" : 3,
      "kp" : 2,
      "ki" : 0.1,
      "kd" : 0.1,
      "alarm" : {
        "highMajor" : 120.0,
        "highMinor" : 105.0,
        "minorSoakSeconds" : 30
      },
      "rangeCheck" : {
        "low" : 0,
        "high" : 130,
        "tolerance" : 10,
        "invalidRangeAction" : "shutdown"
      }
    },
    {
      "sensorName" : "test_sensor_4",
      "scale" : 1000.0,
      "access" : {
        "accessType" : "ACCESS_TYPE_THRIFT",
      },
      "adjustmentTable" : {
        "60" : 0,
        "80" : 0,
        "95" : 0
      },
      "pwmCalcType" : "SENSOR_PWM_CALC_TYPE_INCREMENT_PID",
      "setPoint" : 92,
      "posHysteresis" : 0,
      "negHysteresis" : 3,
      "kp" : 2,
      "ki" : 0.5,
      "kd" : 0.5,
      "alarm" : {
        "highMajor" : 120.0,
        "highMinor" : 105.0,
        "minorSoakSeconds" : 30
      },
      "rangeCheck" : {
        "low" : 0,
        "high" : 130,
        "tolerance" : 10,
        "invalidRangeAction" : "shutdown"
      }
    }
  ],
  "fans" : [
    {
      "fanName" : "fan_1",
      "rpmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan1_rpm"
      },
      "pwmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan1_pwm"
      },
      "presenceAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan1_presence"
      },
      "ledAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan1_led"
      },
      "fanPresentVal" : 1,
      "fanMissingVal" : 0,
      "fanGoodLedVal" : 1,
      "fanFailLedVal" : 0
    },
    {
      "fanName" : "fan_2",
      "rpmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan2_rpm"
      },
      "pwmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan2_pwm"
      },
      "presenceAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan2_presence"
      },
      "ledAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan2_led"
      },
      "fanPresentVal" : 1,
      "fanMissingVal" : 0,
      "fanGoodLedVal" : 1,
      "fanFailLedVal" : 0
    },
    {
      "fanName" : "fan_3",
      "rpmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan3_rpm"
      },
      "pwmAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan3_pwm"
      },
      "presenceAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan3_presence"
      },
      "ledAccess" : {
        "accessType" : "ACCESS_TYPE_SYSFS",
        "path" : "/sys/bus/i2c/drivers/fan_cpld/fan3_led"
      },
      "fanPresentVal" : 1,
      "fanMissingVal" : 0,
      "fanGoodLedVal" : 1,
      "fanFailLedVal" : 0
    }
  ],
  "zones" : [
    {
      "zoneType" : "ZONE_TYPE_MAX",
      "zoneName" : "left_zone",
      "sensorNames" : [
        "test_sensor_1",
        "test_sensor_2",
        "qsfp_group_1"
      ],
      "fanNames" : [
        "fan_1",
        "qsfp_group_1"
      ],
      "slope" : 3
    },
    {
      "zoneType" : "ZONE_TYPE_AVG",
      "zoneName" : "center_zone",
      "sensorNames" : [
        "test_sensor_3",
        "qsfp_group_1"
      ],
      "fanNames" : [
        "fan_2"
      ],
      "slope" : 3
    },
    {
      "zoneType" : "ZONE_TYPE_MIN",
      "zoneName" : "right_zone",
      "sensorNames" : [
        "test_sensor_4"
      ],
      "fanNames" : [
        "fan_3"
      ],
      "slope" : 3
    }
  ]
})";
}
} // namespace facebook::fboss::platform::fan_service
