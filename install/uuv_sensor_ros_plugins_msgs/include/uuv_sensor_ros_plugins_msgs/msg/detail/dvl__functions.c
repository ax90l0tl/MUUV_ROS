// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVL.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `beams`
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__init(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  // velocity_covariance
  // altitude
  // beams
  if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(&msg->beams, 0)) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__fini(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // velocity_covariance
  // altitude
  // beams
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(&msg->beams);
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__are_equal(const uuv_sensor_ros_plugins_msgs__msg__DVL * lhs, const uuv_sensor_ros_plugins_msgs__msg__DVL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->velocity_covariance[i] != rhs->velocity_covariance[i]) {
      return false;
    }
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // beams
  if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__are_equal(
      &(lhs->beams), &(rhs->beams)))
  {
    return false;
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__copy(
  const uuv_sensor_ros_plugins_msgs__msg__DVL * input,
  uuv_sensor_ros_plugins_msgs__msg__DVL * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->velocity_covariance[i] = input->velocity_covariance[i];
  }
  // altitude
  output->altitude = input->altitude;
  // beams
  if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__copy(
      &(input->beams), &(output->beams)))
  {
    return false;
  }
  return true;
}

uuv_sensor_ros_plugins_msgs__msg__DVL *
uuv_sensor_ros_plugins_msgs__msg__DVL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVL * msg = (uuv_sensor_ros_plugins_msgs__msg__DVL *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL));
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__destroy(uuv_sensor_ros_plugins_msgs__msg__DVL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVL * data = NULL;

  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__DVL *)allocator.zero_allocate(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__DVL__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array)
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
      uuv_sensor_ros_plugins_msgs__msg__DVL__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence *
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__are_equal(const uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * lhs, const uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_sensor_ros_plugins_msgs__msg__DVL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence__copy(
  const uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * input,
  uuv_sensor_ros_plugins_msgs__msg__DVL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL);
    uuv_sensor_ros_plugins_msgs__msg__DVL * data =
      (uuv_sensor_ros_plugins_msgs__msg__DVL *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_sensor_ros_plugins_msgs__msg__DVL__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_sensor_ros_plugins_msgs__msg__DVL__fini(&data[i]);
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
    if (!uuv_sensor_ros_plugins_msgs__msg__DVL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
