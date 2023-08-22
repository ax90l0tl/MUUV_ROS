// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef UUV_AUV_CONTROL_ALLOCATOR__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define UUV_AUV_CONTROL_ALLOCATOR__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_uuv_auv_control_allocator __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_uuv_auv_control_allocator __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_uuv_auv_control_allocator __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_uuv_auv_control_allocator __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_uuv_auv_control_allocator
    #define ROSIDL_GENERATOR_CPP_PUBLIC_uuv_auv_control_allocator ROSIDL_GENERATOR_CPP_EXPORT_uuv_auv_control_allocator
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_uuv_auv_control_allocator ROSIDL_GENERATOR_CPP_IMPORT_uuv_auv_control_allocator
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_uuv_auv_control_allocator __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_uuv_auv_control_allocator
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_uuv_auv_control_allocator __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_uuv_auv_control_allocator
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // UUV_AUV_CONTROL_ALLOCATOR__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
