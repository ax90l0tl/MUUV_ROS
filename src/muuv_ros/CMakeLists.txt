cmake_minimum_required(VERSION 3.5)
project(muuv_ros)

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
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs)
find_package(custom_msg_srv REQUIRED)
find_package(message_filters)

include_directories(include/${PROJECT_NAME} src/xsens_mti_i2c src/raspi_dma_pwm)

add_executable(thrusters src/${PROJECT_NAME}/thrusters.cpp
                         src/raspi_dma_pwm/raspi_dma_pwm.cpp)
ament_target_dependencies(thrusters rclcpp geometry_msgs)
target_link_libraries(thrusters pigpiod_if2)

add_executable(sensors src/${PROJECT_NAME}/sensors.cpp
                       src/xsens_mti_i2c/Xbus.cpp src/xsens_mti_i2c/MTi.cpp)
ament_target_dependencies(sensors rclcpp sensor_msgs)
target_link_libraries(sensors pigpiod_if2)

add_executable(pid_recombiner src/${PROJECT_NAME}/pid_recombiner.cpp)
ament_target_dependencies(pid_recombiner rclcpp geometry_msgs custom_msg_srv message_filters)

add_executable(imu_repub src/${PROJECT_NAME}/imu_repub.cpp)
ament_target_dependencies(imu_repub rclcpp geometry_msgs sensor_msgs custom_msg_srv)

target_include_directories(
  thrusters PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
                   "$<INSTALL_INTERFACE:include>")

target_include_directories(
  sensors PUBLIC "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
                 "$<INSTALL_INTERFACE:include>")

install(TARGETS imu_repub pid_recombiner thrusters sensors DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch config DESTINATION share/${PROJECT_NAME})

ament_package()
