// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVLBeam.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  if (!msg) {
    return false;
  }
  // range
  // range_covariance
  // velocity
  // velocity_covariance
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(msg);
    return false;
  }
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  if (!msg) {
    return;
  }
  // range
  // range_covariance
  // velocity
  // velocity_covariance
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__are_equal(const uuv_sensor_ros_plugins_msgs__msg__DVLBeam * lhs, const uuv_sensor_ros_plugins_msgs__msg__DVLBeam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // range_covariance
  if (lhs->range_covariance != rhs->range_covariance) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // velocity_covariance
  if (lhs->velocity_covariance != rhs->velocity_covariance) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__copy(
  const uuv_sensor_ros_plugins_msgs__msg__DVLBeam * input,
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  // range_covariance
  output->range_covariance = input->range_covariance;
  // velocity
  output->velocity = input->velocity;
  // velocity_covariance
  output->velocity_covariance = input->velocity_covariance;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

uuv_sensor_ros_plugins_msgs__msg__DVLBeam *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam));
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam * data = NULL;

  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam *)allocator.zero_allocate(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array)
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
      uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__are_equal(const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * lhs, const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__copy(
  const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * input,
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_sensor_ros_plugins_msgs__msg__DVLBeam);
    uuv_sensor_ros_plugins_msgs__msg__DVLBeam * data =
      (uuv_sensor_ros_plugins_msgs__msg__DVLBeam *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_sensor_ros_plugins_msgs__msg__DVLBeam__fini(&data[i]);
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
    if (!uuv_sensor_ros_plugins_msgs__msg__DVLBeam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
