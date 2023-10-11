/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/common/meru800bia/Meru800biaPlatformMapping.h"

namespace facebook::fboss {
namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports": {
    "1": {
        "mapping": {
          "id": 1,
          "name": "rcy1/1/55",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_RCY-slot1/chip1/core55",
                "lane": 0
              }
            }
          ],
          "portType": 3,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 1
        },
        "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_RCY-slot1/chip1/core55",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "2": {
        "mapping": {
          "id": 2,
          "name": "eth1/19/1",
          "controllingPort": 2,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 2
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core0",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip19",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "4": {
        "mapping": {
          "id": 4,
          "name": "eth1/16/1",
          "controllingPort": 4,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 4
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core1",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip16",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "6": {
        "mapping": {
          "id": 6,
          "name": "eth1/18/1",
          "controllingPort": 6,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 6
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core2",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip18",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "8": {
        "mapping": {
          "id": 8,
          "name": "eth1/15/1",
          "controllingPort": 8,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 8
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core3",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip15",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "10": {
        "mapping": {
          "id": 10,
          "name": "eth1/17/1",
          "controllingPort": 10,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 0,
          "attachedCorePortIndex": 10
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core4",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip17",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "12": {
        "mapping": {
          "id": 12,
          "name": "eth1/13/1",
          "controllingPort": 12,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 12
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core5",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip13",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "14": {
        "mapping": {
          "id": 14,
          "name": "eth1/11/1",
          "controllingPort": 14,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 14
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core6",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip11",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "16": {
        "mapping": {
          "id": 16,
          "name": "eth1/14/1",
          "controllingPort": 16,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 16
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core7",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip14",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "18": {
        "mapping": {
          "id": 18,
          "name": "eth1/12/1",
          "controllingPort": 18,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 1,
          "attachedCorePortIndex": 18
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core8",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip12",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "20": {
        "mapping": {
          "id": 20,
          "name": "eth1/20/1",
          "controllingPort": 20,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 20
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core9",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip20",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "22": {
        "mapping": {
          "id": 22,
          "name": "eth1/22/1",
          "controllingPort": 22,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 22
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core10",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip22",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "24": {
        "mapping": {
          "id": 24,
          "name": "eth1/21/1",
          "controllingPort": 24,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 24
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core11",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip21",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "26": {
        "mapping": {
          "id": 26,
          "name": "eth1/24/1",
          "controllingPort": 26,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 2,
          "attachedCorePortIndex": 26
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core12",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip24",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "28": {
        "mapping": {
          "id": 28,
          "name": "eth1/27/1",
          "controllingPort": 28,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 28
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core13",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip27",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "30": {
        "mapping": {
          "id": 30,
          "name": "eth1/28/1",
          "controllingPort": 30,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 30
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core14",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip28",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "32": {
        "mapping": {
          "id": 32,
          "name": "eth1/25/1",
          "controllingPort": 32,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 32
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core15",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip25",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "34": {
        "mapping": {
          "id": 34,
          "name": "eth1/26/1",
          "controllingPort": 34,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 34
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core16",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip26",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "36": {
        "mapping": {
          "id": 36,
          "name": "eth1/23/1",
          "controllingPort": 36,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "NPU-J3_NIF-slot1/chip1/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 0,
          "attachedCoreId": 3,
          "attachedCorePortIndex": 36
        },
        "supportedProfiles": {
          "24": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "38": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "39": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "NPU-J3_NIF-slot1/chip1/core17",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 3
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip23",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1024": {
        "mapping": {
          "id": 1024,
          "name": "fab1/10/3",
          "controllingPort": 1024,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1025": {
        "mapping": {
          "id": 1025,
          "name": "fab1/10/2",
          "controllingPort": 1025,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1026": {
        "mapping": {
          "id": 1026,
          "name": "fab1/10/1",
          "controllingPort": 1026,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1027": {
        "mapping": {
          "id": 1027,
          "name": "fab1/10/5",
          "controllingPort": 1027,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1028": {
        "mapping": {
          "id": 1028,
          "name": "fab1/10/8",
          "controllingPort": 1028,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1029": {
        "mapping": {
          "id": 1029,
          "name": "fab1/10/7",
          "controllingPort": 1029,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1030": {
        "mapping": {
          "id": 1030,
          "name": "fab1/10/6",
          "controllingPort": 1030,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1031": {
        "mapping": {
          "id": 1031,
          "name": "fab1/10/4",
          "controllingPort": 1031,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core0",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1032": {
        "mapping": {
          "id": 1032,
          "name": "fab1/9/3",
          "controllingPort": 1032,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1033": {
        "mapping": {
          "id": 1033,
          "name": "fab1/9/2",
          "controllingPort": 1033,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1034": {
        "mapping": {
          "id": 1034,
          "name": "fab1/9/1",
          "controllingPort": 1034,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1035": {
        "mapping": {
          "id": 1035,
          "name": "fab1/9/5",
          "controllingPort": 1035,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1036": {
        "mapping": {
          "id": 1036,
          "name": "fab1/9/8",
          "controllingPort": 1036,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1037": {
        "mapping": {
          "id": 1037,
          "name": "fab1/9/7",
          "controllingPort": 1037,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1038": {
        "mapping": {
          "id": 1038,
          "name": "fab1/9/6",
          "controllingPort": 1038,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1039": {
        "mapping": {
          "id": 1039,
          "name": "fab1/9/4",
          "controllingPort": 1039,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core1",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1040": {
        "mapping": {
          "id": 1040,
          "name": "fab1/8/3",
          "controllingPort": 1040,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1041": {
        "mapping": {
          "id": 1041,
          "name": "fab1/8/4",
          "controllingPort": 1041,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1042": {
        "mapping": {
          "id": 1042,
          "name": "fab1/8/1",
          "controllingPort": 1042,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1043": {
        "mapping": {
          "id": 1043,
          "name": "fab1/8/2",
          "controllingPort": 1043,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1044": {
        "mapping": {
          "id": 1044,
          "name": "fab1/8/5",
          "controllingPort": 1044,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1045": {
        "mapping": {
          "id": 1045,
          "name": "fab1/8/6",
          "controllingPort": 1045,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1046": {
        "mapping": {
          "id": 1046,
          "name": "fab1/8/7",
          "controllingPort": 1046,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1047": {
        "mapping": {
          "id": 1047,
          "name": "fab1/8/8",
          "controllingPort": 1047,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core2",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip8",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1048": {
        "mapping": {
          "id": 1048,
          "name": "fab1/7/1",
          "controllingPort": 1048,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1049": {
        "mapping": {
          "id": 1049,
          "name": "fab1/7/2",
          "controllingPort": 1049,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1050": {
        "mapping": {
          "id": 1050,
          "name": "fab1/7/3",
          "controllingPort": 1050,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1051": {
        "mapping": {
          "id": 1051,
          "name": "fab1/7/4",
          "controllingPort": 1051,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1052": {
        "mapping": {
          "id": 1052,
          "name": "fab1/7/5",
          "controllingPort": 1052,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1053": {
        "mapping": {
          "id": 1053,
          "name": "fab1/7/6",
          "controllingPort": 1053,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1054": {
        "mapping": {
          "id": 1054,
          "name": "fab1/7/7",
          "controllingPort": 1054,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1055": {
        "mapping": {
          "id": 1055,
          "name": "fab1/7/8",
          "controllingPort": 1055,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core3",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip7",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1056": {
        "mapping": {
          "id": 1056,
          "name": "fab1/6/7",
          "controllingPort": 1056,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1057": {
        "mapping": {
          "id": 1057,
          "name": "fab1/6/4",
          "controllingPort": 1057,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1058": {
        "mapping": {
          "id": 1058,
          "name": "fab1/6/6",
          "controllingPort": 1058,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1059": {
        "mapping": {
          "id": 1059,
          "name": "fab1/6/8",
          "controllingPort": 1059,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1060": {
        "mapping": {
          "id": 1060,
          "name": "fab1/6/5",
          "controllingPort": 1060,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1061": {
        "mapping": {
          "id": 1061,
          "name": "fab1/6/1",
          "controllingPort": 1061,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1062": {
        "mapping": {
          "id": 1062,
          "name": "fab1/6/3",
          "controllingPort": 1062,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1063": {
        "mapping": {
          "id": 1063,
          "name": "fab1/6/2",
          "controllingPort": 1063,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core4",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip6",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1064": {
        "mapping": {
          "id": 1064,
          "name": "fab1/5/7",
          "controllingPort": 1064,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1065": {
        "mapping": {
          "id": 1065,
          "name": "fab1/5/4",
          "controllingPort": 1065,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1066": {
        "mapping": {
          "id": 1066,
          "name": "fab1/5/6",
          "controllingPort": 1066,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1067": {
        "mapping": {
          "id": 1067,
          "name": "fab1/5/8",
          "controllingPort": 1067,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1068": {
        "mapping": {
          "id": 1068,
          "name": "fab1/5/5",
          "controllingPort": 1068,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1069": {
        "mapping": {
          "id": 1069,
          "name": "fab1/5/3",
          "controllingPort": 1069,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1070": {
        "mapping": {
          "id": 1070,
          "name": "fab1/5/1",
          "controllingPort": 1070,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1071": {
        "mapping": {
          "id": 1071,
          "name": "fab1/5/2",
          "controllingPort": 1071,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core5",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip5",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1072": {
        "mapping": {
          "id": 1072,
          "name": "fab1/4/3",
          "controllingPort": 1072,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1073": {
        "mapping": {
          "id": 1073,
          "name": "fab1/4/4",
          "controllingPort": 1073,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1074": {
        "mapping": {
          "id": 1074,
          "name": "fab1/4/1",
          "controllingPort": 1074,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1075": {
        "mapping": {
          "id": 1075,
          "name": "fab1/4/2",
          "controllingPort": 1075,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1076": {
        "mapping": {
          "id": 1076,
          "name": "fab1/4/5",
          "controllingPort": 1076,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1077": {
        "mapping": {
          "id": 1077,
          "name": "fab1/4/6",
          "controllingPort": 1077,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1078": {
        "mapping": {
          "id": 1078,
          "name": "fab1/4/7",
          "controllingPort": 1078,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1079": {
        "mapping": {
          "id": 1079,
          "name": "fab1/4/8",
          "controllingPort": 1079,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core6",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip4",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1080": {
        "mapping": {
          "id": 1080,
          "name": "fab1/3/1",
          "controllingPort": 1080,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1081": {
        "mapping": {
          "id": 1081,
          "name": "fab1/3/2",
          "controllingPort": 1081,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1082": {
        "mapping": {
          "id": 1082,
          "name": "fab1/3/3",
          "controllingPort": 1082,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1083": {
        "mapping": {
          "id": 1083,
          "name": "fab1/3/4",
          "controllingPort": 1083,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1084": {
        "mapping": {
          "id": 1084,
          "name": "fab1/3/5",
          "controllingPort": 1084,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1085": {
        "mapping": {
          "id": 1085,
          "name": "fab1/3/6",
          "controllingPort": 1085,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1086": {
        "mapping": {
          "id": 1086,
          "name": "fab1/3/7",
          "controllingPort": 1086,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1087": {
        "mapping": {
          "id": 1087,
          "name": "fab1/3/8",
          "controllingPort": 1087,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core7",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip3",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1088": {
        "mapping": {
          "id": 1088,
          "name": "fab1/1/3",
          "controllingPort": 1088,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1089": {
        "mapping": {
          "id": 1089,
          "name": "fab1/1/2",
          "controllingPort": 1089,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1090": {
        "mapping": {
          "id": 1090,
          "name": "fab1/1/6",
          "controllingPort": 1090,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1091": {
        "mapping": {
          "id": 1091,
          "name": "fab1/1/4",
          "controllingPort": 1091,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1092": {
        "mapping": {
          "id": 1092,
          "name": "fab1/1/5",
          "controllingPort": 1092,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1093": {
        "mapping": {
          "id": 1093,
          "name": "fab1/1/1",
          "controllingPort": 1093,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1094": {
        "mapping": {
          "id": 1094,
          "name": "fab1/1/7",
          "controllingPort": 1094,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1095": {
        "mapping": {
          "id": 1095,
          "name": "fab1/1/8",
          "controllingPort": 1095,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core8",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip1",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1096": {
        "mapping": {
          "id": 1096,
          "name": "fab1/2/1",
          "controllingPort": 1096,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1097": {
        "mapping": {
          "id": 1097,
          "name": "fab1/2/4",
          "controllingPort": 1097,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1098": {
        "mapping": {
          "id": 1098,
          "name": "fab1/2/3",
          "controllingPort": 1098,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1099": {
        "mapping": {
          "id": 1099,
          "name": "fab1/2/8",
          "controllingPort": 1099,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1100": {
        "mapping": {
          "id": 1100,
          "name": "fab1/2/5",
          "controllingPort": 1100,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1101": {
        "mapping": {
          "id": 1101,
          "name": "fab1/2/6",
          "controllingPort": 1101,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1102": {
        "mapping": {
          "id": 1102,
          "name": "fab1/2/7",
          "controllingPort": 1102,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1103": {
        "mapping": {
          "id": 1103,
          "name": "fab1/2/2",
          "controllingPort": 1103,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core9",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip2",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1104": {
        "mapping": {
          "id": 1104,
          "name": "fab1/30/7",
          "controllingPort": 1104,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1105": {
        "mapping": {
          "id": 1105,
          "name": "fab1/30/4",
          "controllingPort": 1105,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1106": {
        "mapping": {
          "id": 1106,
          "name": "fab1/30/6",
          "controllingPort": 1106,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1107": {
        "mapping": {
          "id": 1107,
          "name": "fab1/30/8",
          "controllingPort": 1107,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1108": {
        "mapping": {
          "id": 1108,
          "name": "fab1/30/5",
          "controllingPort": 1108,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1109": {
        "mapping": {
          "id": 1109,
          "name": "fab1/30/3",
          "controllingPort": 1109,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1110": {
        "mapping": {
          "id": 1110,
          "name": "fab1/30/1",
          "controllingPort": 1110,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1111": {
        "mapping": {
          "id": 1111,
          "name": "fab1/30/2",
          "controllingPort": 1111,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core10",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip30",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1112": {
        "mapping": {
          "id": 1112,
          "name": "fab1/29/3",
          "controllingPort": 1112,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1113": {
        "mapping": {
          "id": 1113,
          "name": "fab1/29/8",
          "controllingPort": 1113,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1114": {
        "mapping": {
          "id": 1114,
          "name": "fab1/29/7",
          "controllingPort": 1114,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1115": {
        "mapping": {
          "id": 1115,
          "name": "fab1/29/5",
          "controllingPort": 1115,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1116": {
        "mapping": {
          "id": 1116,
          "name": "fab1/29/2",
          "controllingPort": 1116,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1117": {
        "mapping": {
          "id": 1117,
          "name": "fab1/29/1",
          "controllingPort": 1117,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1118": {
        "mapping": {
          "id": 1118,
          "name": "fab1/29/6",
          "controllingPort": 1118,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1119": {
        "mapping": {
          "id": 1119,
          "name": "fab1/29/4",
          "controllingPort": 1119,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core11",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip29",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1120": {
        "mapping": {
          "id": 1120,
          "name": "fab1/32/1",
          "controllingPort": 1120,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1121": {
        "mapping": {
          "id": 1121,
          "name": "fab1/32/4",
          "controllingPort": 1121,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1122": {
        "mapping": {
          "id": 1122,
          "name": "fab1/32/6",
          "controllingPort": 1122,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1123": {
        "mapping": {
          "id": 1123,
          "name": "fab1/32/2",
          "controllingPort": 1123,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1124": {
        "mapping": {
          "id": 1124,
          "name": "fab1/32/5",
          "controllingPort": 1124,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1125": {
        "mapping": {
          "id": 1125,
          "name": "fab1/32/3",
          "controllingPort": 1125,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1126": {
        "mapping": {
          "id": 1126,
          "name": "fab1/32/7",
          "controllingPort": 1126,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1127": {
        "mapping": {
          "id": 1127,
          "name": "fab1/32/8",
          "controllingPort": 1127,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core12",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip32",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1128": {
        "mapping": {
          "id": 1128,
          "name": "fab1/33/6",
          "controllingPort": 1128,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1129": {
        "mapping": {
          "id": 1129,
          "name": "fab1/33/8",
          "controllingPort": 1129,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1130": {
        "mapping": {
          "id": 1130,
          "name": "fab1/33/7",
          "controllingPort": 1130,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1131": {
        "mapping": {
          "id": 1131,
          "name": "fab1/33/5",
          "controllingPort": 1131,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1132": {
        "mapping": {
          "id": 1132,
          "name": "fab1/33/2",
          "controllingPort": 1132,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1133": {
        "mapping": {
          "id": 1133,
          "name": "fab1/33/1",
          "controllingPort": 1133,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1134": {
        "mapping": {
          "id": 1134,
          "name": "fab1/33/3",
          "controllingPort": 1134,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1135": {
        "mapping": {
          "id": 1135,
          "name": "fab1/33/4",
          "controllingPort": 1135,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core13",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip33",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1136": {
        "mapping": {
          "id": 1136,
          "name": "fab1/31/6",
          "controllingPort": 1136,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1137": {
        "mapping": {
          "id": 1137,
          "name": "fab1/31/8",
          "controllingPort": 1137,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1138": {
        "mapping": {
          "id": 1138,
          "name": "fab1/31/1",
          "controllingPort": 1138,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1139": {
        "mapping": {
          "id": 1139,
          "name": "fab1/31/2",
          "controllingPort": 1139,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1140": {
        "mapping": {
          "id": 1140,
          "name": "fab1/31/5",
          "controllingPort": 1140,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1141": {
        "mapping": {
          "id": 1141,
          "name": "fab1/31/3",
          "controllingPort": 1141,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1142": {
        "mapping": {
          "id": 1142,
          "name": "fab1/31/7",
          "controllingPort": 1142,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1143": {
        "mapping": {
          "id": 1143,
          "name": "fab1/31/4",
          "controllingPort": 1143,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core14",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip31",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1144": {
        "mapping": {
          "id": 1144,
          "name": "fab1/34/3",
          "controllingPort": 1144,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1145": {
        "mapping": {
          "id": 1145,
          "name": "fab1/34/8",
          "controllingPort": 1145,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1146": {
        "mapping": {
          "id": 1146,
          "name": "fab1/34/5",
          "controllingPort": 1146,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1147": {
        "mapping": {
          "id": 1147,
          "name": "fab1/34/7",
          "controllingPort": 1147,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1148": {
        "mapping": {
          "id": 1148,
          "name": "fab1/34/6",
          "controllingPort": 1148,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1149": {
        "mapping": {
          "id": 1149,
          "name": "fab1/34/1",
          "controllingPort": 1149,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1150": {
        "mapping": {
          "id": 1150,
          "name": "fab1/34/2",
          "controllingPort": 1150,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1151": {
        "mapping": {
          "id": 1151,
          "name": "fab1/34/4",
          "controllingPort": 1151,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core15",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip34",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1152": {
        "mapping": {
          "id": 1152,
          "name": "fab1/38/5",
          "controllingPort": 1152,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1153": {
        "mapping": {
          "id": 1153,
          "name": "fab1/38/4",
          "controllingPort": 1153,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1154": {
        "mapping": {
          "id": 1154,
          "name": "fab1/38/6",
          "controllingPort": 1154,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1155": {
        "mapping": {
          "id": 1155,
          "name": "fab1/38/8",
          "controllingPort": 1155,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1156": {
        "mapping": {
          "id": 1156,
          "name": "fab1/38/1",
          "controllingPort": 1156,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1157": {
        "mapping": {
          "id": 1157,
          "name": "fab1/38/3",
          "controllingPort": 1157,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1158": {
        "mapping": {
          "id": 1158,
          "name": "fab1/38/7",
          "controllingPort": 1158,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1159": {
        "mapping": {
          "id": 1159,
          "name": "fab1/38/2",
          "controllingPort": 1159,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core16",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip38",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1160": {
        "mapping": {
          "id": 1160,
          "name": "fab1/37/3",
          "controllingPort": 1160,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1161": {
        "mapping": {
          "id": 1161,
          "name": "fab1/37/8",
          "controllingPort": 1161,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1162": {
        "mapping": {
          "id": 1162,
          "name": "fab1/37/5",
          "controllingPort": 1162,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1163": {
        "mapping": {
          "id": 1163,
          "name": "fab1/37/7",
          "controllingPort": 1163,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1164": {
        "mapping": {
          "id": 1164,
          "name": "fab1/37/6",
          "controllingPort": 1164,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1165": {
        "mapping": {
          "id": 1165,
          "name": "fab1/37/1",
          "controllingPort": 1165,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1166": {
        "mapping": {
          "id": 1166,
          "name": "fab1/37/2",
          "controllingPort": 1166,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1167": {
        "mapping": {
          "id": 1167,
          "name": "fab1/37/4",
          "controllingPort": 1167,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core17",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip37",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1168": {
        "mapping": {
          "id": 1168,
          "name": "fab1/35/1",
          "controllingPort": 1168,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1169": {
        "mapping": {
          "id": 1169,
          "name": "fab1/35/4",
          "controllingPort": 1169,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "1170": {
        "mapping": {
          "id": 1170,
          "name": "fab1/35/6",
          "controllingPort": 1170,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1171": {
        "mapping": {
          "id": 1171,
          "name": "fab1/35/2",
          "controllingPort": 1171,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1172": {
        "mapping": {
          "id": 1172,
          "name": "fab1/35/5",
          "controllingPort": 1172,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1173": {
        "mapping": {
          "id": 1173,
          "name": "fab1/35/3",
          "controllingPort": 1173,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1174": {
        "mapping": {
          "id": 1174,
          "name": "fab1/35/7",
          "controllingPort": 1174,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1175": {
        "mapping": {
          "id": 1175,
          "name": "fab1/35/8",
          "controllingPort": 1175,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core18",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core18",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip35",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1176": {
        "mapping": {
          "id": 1176,
          "name": "fab1/36/1",
          "controllingPort": 1176,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 0
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 0
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 0
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 0
                    }
                  }
                ]
              }
          }
        }
    },
    "1177": {
        "mapping": {
          "id": 1177,
          "name": "fab1/36/2",
          "controllingPort": 1177,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 1
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 1
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 1
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 1
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 1
                    }
                  }
                ]
              }
          }
        }
    },
    "1178": {
        "mapping": {
          "id": 1178,
          "name": "fab1/36/3",
          "controllingPort": 1178,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 2
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 2
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 2
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 2
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 2
                    }
                  }
                ]
              }
          }
        }
    },
    "1179": {
        "mapping": {
          "id": 1179,
          "name": "fab1/36/7",
          "controllingPort": 1179,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 6
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 6
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 3
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 6
                    }
                  }
                ]
              }
          }
        }
    },
    "1180": {
        "mapping": {
          "id": 1180,
          "name": "fab1/36/6",
          "controllingPort": 1180,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 5
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 4
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 5
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 4
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 5
                    }
                  }
                ]
              }
          }
        }
    },
    "1181": {
        "mapping": {
          "id": 1181,
          "name": "fab1/36/5",
          "controllingPort": 1181,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 4
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 5
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 4
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 5
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 4
                    }
                  }
                ]
              }
          }
        }
    },
    "1182": {
        "mapping": {
          "id": 1182,
          "name": "fab1/36/8",
          "controllingPort": 1182,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 7
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 6
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 7
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 6
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 7
                    }
                  }
                ]
              }
          }
        }
    },
    "1183": {
        "mapping": {
          "id": 1183,
          "name": "fab1/36/4",
          "controllingPort": 1183,
          "pins": [
            {
              "a": {
                "chip": "NPU-J3_FE-slot1/chip1/core19",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                  "lane": 3
                }
              }
            }
          ],
          "portType": 1
        },
        "supportedProfiles": {
          "36": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "37": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "41": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "42": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "NPU-J3_FE-slot1/chip1/core19",
                      "lane": 7
                    },
                    "tx": {
                      "pre": -24,
                      "pre2": 4,
                      "main": 128,
                      "post": 0,
                      "post2": 0,
                      "post3": 0
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "TRANSCEIVER-OSFP-slot1/chip36",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    }
  },
  "chips": [
    {
      "name": "NPU-J3_FE-slot1/chip1/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_NIF-slot1/chip1/core17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "NPU-J3_FE-slot1/chip1/core19",
      "type": 1,
      "physicalID": 19
    },
    {
      "name": "NPU-J3_RCY-slot1/chip1/core55",
      "type": 1,
      "physicalID": 55
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip1",
      "type": 3,
      "physicalID": 0
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip2",
      "type": 3,
      "physicalID": 1
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip3",
      "type": 3,
      "physicalID": 2
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip4",
      "type": 3,
      "physicalID": 3
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip5",
      "type": 3,
      "physicalID": 4
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip6",
      "type": 3,
      "physicalID": 5
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip7",
      "type": 3,
      "physicalID": 6
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip8",
      "type": 3,
      "physicalID": 7
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip9",
      "type": 3,
      "physicalID": 8
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip10",
      "type": 3,
      "physicalID": 9
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip11",
      "type": 3,
      "physicalID": 10
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip12",
      "type": 3,
      "physicalID": 11
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip13",
      "type": 3,
      "physicalID": 12
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip14",
      "type": 3,
      "physicalID": 13
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip15",
      "type": 3,
      "physicalID": 14
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip16",
      "type": 3,
      "physicalID": 15
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip17",
      "type": 3,
      "physicalID": 16
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip18",
      "type": 3,
      "physicalID": 17
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip19",
      "type": 3,
      "physicalID": 18
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip20",
      "type": 3,
      "physicalID": 19
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip21",
      "type": 3,
      "physicalID": 20
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip22",
      "type": 3,
      "physicalID": 21
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip23",
      "type": 3,
      "physicalID": 22
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip24",
      "type": 3,
      "physicalID": 23
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip25",
      "type": 3,
      "physicalID": 24
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip26",
      "type": 3,
      "physicalID": 25
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip27",
      "type": 3,
      "physicalID": 26
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip28",
      "type": 3,
      "physicalID": 27
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip29",
      "type": 3,
      "physicalID": 28
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip30",
      "type": 3,
      "physicalID": 29
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip31",
      "type": 3,
      "physicalID": 30
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip32",
      "type": 3,
      "physicalID": 31
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip33",
      "type": 3,
      "physicalID": 32
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip34",
      "type": 3,
      "physicalID": 33
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip35",
      "type": 3,
      "physicalID": 34
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip36",
      "type": 3,
      "physicalID": 35
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip37",
      "type": 3,
      "physicalID": 36
    },
    {
      "name": "TRANSCEIVER-OSFP-slot1/chip38",
      "type": 3,
      "physicalID": 37
    }
  ],
  "platformSupportedProfiles": [
    {
      "factor": {
        "profileID": 36
      },
      "profile": {
        "speed": 53125,
        "iphy": {
          "numLanes": 1,
          "modulation": 2,
          "fec": 545,
          "medium": 1,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 37
      },
      "profile": {
        "speed": 53125,
        "iphy": {
          "numLanes": 1,
          "modulation": 2,
          "fec": 545,
          "medium": 2,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 38
      },
      "profile": {
        "speed": 400000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 21
        }
      }
    },
    {
      "factor": {
        "profileID": 39
      },
      "profile": {
        "speed": 800000,
        "iphy": {
          "numLanes": 8,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 23
        }
      }
    },
    {
      "factor": {
        "profileID": 41
      },
      "profile": {
        "speed": 106250,
        "iphy": {
          "numLanes": 1,
          "modulation": 2,
          "fec": 11,
          "medium": 1,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 42
      },
      "profile": {
        "speed": 106250,
        "iphy": {
          "numLanes": 1,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceType": 41
        }
      }
    },
    {
      "factor": {
        "profileID": 11
      },
      "profile": {
        "speed": 10000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceType": 10
        }
      }
    },
    {
      "factor": {
        "profileID": 24
      },
      "profile": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 1,
          "interfaceType": 12
        }
      }
    }
  ]
}
)";
} // namespace

Meru800biaPlatformMapping::Meru800biaPlatformMapping()
    : PlatformMapping(kJsonPlatformMappingStr) {}

Meru800biaPlatformMapping::Meru800biaPlatformMapping(
    const std::string& platformMappingStr)
    : PlatformMapping(platformMappingStr) {}

} // namespace facebook::fboss
