# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${uuv_gazebo_plugins_DIR}/../../../include;/usr/include;/usr/include/gazebo-11;/usr/include/bullet;/usr/include/simbody;/usr/include/sdformat-9.10;/usr/include/ignition/math6;/usr/include/OGRE;/usr/include/OGRE/Terrain;/usr/include/OGRE/Paging;/usr/include/ignition/transport8;/usr/include/ignition/msgs5;/usr/include/ignition/common3;/usr/include/ignition/fuel_tools4")

# append include directories to uuv_gazebo_plugins_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'uuv_gazebo_plugins' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND uuv_gazebo_plugins_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
