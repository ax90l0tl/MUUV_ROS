# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_plankton_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED plankton_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(plankton_FOUND FALSE)
  elseif(NOT plankton_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(plankton_FOUND FALSE)
  endif()
  return()
endif()
set(_plankton_CONFIG_INCLUDED TRUE)

# output package information
if(NOT plankton_FIND_QUIETLY)
  message(STATUS "Found plankton: 0.6.1 (${plankton_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'plankton' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${plankton_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(plankton_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${plankton_DIR}/${_extra}")
endforeach()
