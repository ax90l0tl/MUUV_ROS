cmake_minimum_required(VERSION 3.5)
project(muuv_sensors)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in further dependencies
# manually. find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(drivers REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(include/${PROJECT_NAME})

add_executable(imu src/${PROJECT_NAME}/imu_node.cpp)
ament_target_dependencies(imu rclcpp sensor_msgs geometry_msgs)
target_link_libraries(imu drivers::xsens_mti_i2c)

target_include_directories(
  imu PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
                 "$<INSTALL_INTERFACE:include>")

install(TARGETS imu DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

ament_package()
