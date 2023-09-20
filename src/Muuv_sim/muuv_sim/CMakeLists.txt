cmake_minimum_required(VERSION 3.5)
project(muuv_sim)

find_package(ament_cmake REQUIRED)

install(DIRECTORY launch
DESTINATION share/${PROJECT_NAME}
  PATTERN "*~"
  EXCLUDE)

ament_package()