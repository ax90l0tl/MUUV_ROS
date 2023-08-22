# Install script for directory: /home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/isopodin-time/ros2_ws/install/uuv_control_utils")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/uuv_control_utils" TYPE PROGRAM FILES
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/set_timed_current_perturbation.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/apply_link_wrench.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/disturbance_manager.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/start_helical_trajectory.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/start_circular_trajectory.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/set_thruster_state.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/trajectory_marker_publisher.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/set_thruster_output_efficiency.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/send_waypoint_file.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/set_gm_current_perturbation.py"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/scripts/set_scalar_parameter.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE DIRECTORY FILES
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/launch"
    "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/config"
    REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/uuv_control_utils")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/uuv_control_utils")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils/environment" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils/environment" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_index/share/ament_index/resource_index/packages/uuv_control_utils")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils/cmake" TYPE FILE FILES
    "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_core/uuv_control_utilsConfig.cmake"
    "/home/isopodin-time/ros2_ws/build/uuv_control_utils/ament_cmake_core/uuv_control_utilsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_control_utils" TYPE FILE FILES "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_control_utils/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/isopodin-time/ros2_ws/build/uuv_control_utils/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
