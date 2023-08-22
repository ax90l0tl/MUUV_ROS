// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `function_name`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
// Member `lookup_table_input`
// Member `lookup_table_output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  if (!msg) {
    return false;
  }
  // function_name
  if (!rosidl_runtime_c__String__init(&msg->function_name)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tags, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // lookup_table_input
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lookup_table_input, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  // lookup_table_output
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lookup_table_output, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
    return false;
  }
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  if (!msg) {
    return;
  }
  // function_name
  rosidl_runtime_c__String__fini(&msg->function_name);
  // tags
  rosidl_runtime_c__String__Sequence__fini(&msg->tags);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
  // lookup_table_input
  rosidl_runtime_c__double__Sequence__fini(&msg->lookup_table_input);
  // lookup_table_output
  rosidl_runtime_c__double__Sequence__fini(&msg->lookup_table_output);
}

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * lhs, const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // function_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->function_name), &(rhs->function_name)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // lookup_table_input
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lookup_table_input), &(rhs->lookup_table_input)))
  {
    return false;
  }
  // lookup_table_output
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lookup_table_output), &(rhs->lookup_table_output)))
  {
    return false;
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * input,
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * output)
{
  if (!input || !output) {
    return false;
  }
  // function_name
  if (!rosidl_runtime_c__String__copy(
      &(input->function_name), &(output->function_name)))
  {
    return false;
  }
  // tags
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // lookup_table_input
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lookup_table_input), &(output->lookup_table_input)))
  {
    return false;
  }
  // lookup_table_output
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lookup_table_output), &(output->lookup_table_output)))
  {
    return false;
  }
  return true;
}

uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__destroy(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * data = NULL;

  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *)allocator.zero_allocate(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * lhs, const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * input,
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn);
    uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn * data =
      (uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
