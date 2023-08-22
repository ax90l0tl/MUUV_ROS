#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "uuv_gazebo_ros_plugins::uuv_joint_state_publisher" for configuration ""
set_property(TARGET uuv_gazebo_ros_plugins::uuv_joint_state_publisher APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(uuv_gazebo_ros_plugins::uuv_joint_state_publisher PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libuuv_joint_state_publisher.so"
  IMPORTED_SONAME_NOCONFIG "libuuv_joint_state_publisher.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS uuv_gazebo_ros_plugins::uuv_joint_state_publisher )
list(APPEND _IMPORT_CHECK_FILES_FOR_uuv_gazebo_ros_plugins::uuv_joint_state_publisher "${_IMPORT_PREFIX}/lib/libuuv_joint_state_publisher.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
