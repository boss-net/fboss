# CMake to build libraries and binaries in fboss/lib/thrift_service_client

# In general, libraries and binaries in fboss/foo/bar are built by
# cmake/FooBar.cmake

add_library(thrift_service_client
  fboss/lib/thrift_service_client/ThriftServiceClient.cpp
  fboss/lib/thrift_service_client/oss/ThriftServiceClient.cpp
)

target_link_libraries(thrift_service_client
  ctrl_cpp2
  qsfp_cpp2
  FBThrift::thriftcpp2
)
