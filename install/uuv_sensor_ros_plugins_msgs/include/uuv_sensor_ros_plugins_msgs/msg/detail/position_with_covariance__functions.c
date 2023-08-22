// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__init(&msg->pos)) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // pos
  geometry_msgs__msg__Point__fini(&msg->pos);
  // covariance
}

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__are_equal(const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * lhs, const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->covariance[i] != rhs->covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__copy(
  const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * input,
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // covariance
  for (size_t i = 0; i < 9; ++i) {
    output->covariance[i] = input->covariance[i];
  }
  return true;
}

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance));
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * data = NULL;

  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *)allocator.zero_allocate(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array)
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
      uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence *
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__are_equal(const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * lhs, const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence__copy(
  const uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * input,
  uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance);
    uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance * data =
      (uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__fini(&data[i]);
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
    if (!uuv_sensor_ros_plugins_msgs__msg__PositionWithCovariance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
