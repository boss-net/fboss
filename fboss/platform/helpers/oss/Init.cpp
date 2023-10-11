// Copyright 2004-present Facebook. All Rights Reserved.
//
//
#include "fboss/platform/helpers/Init.h"

#include <folly/init/Init.h>

namespace facebook::fboss::platform::helpers {

void init(int argc, char** argv) {
  folly::init(&argc, &argv, true);
}

void runThriftService(
    std::shared_ptr<apache::thrift::ThriftServer> server,
    std::shared_ptr<apache::thrift::ServerInterface> /* handler */,
    const std::string& /* serviceName */,
    uint32_t /* port */) {
  server->serve();
}
} // namespace facebook::fboss::platform::helpers
