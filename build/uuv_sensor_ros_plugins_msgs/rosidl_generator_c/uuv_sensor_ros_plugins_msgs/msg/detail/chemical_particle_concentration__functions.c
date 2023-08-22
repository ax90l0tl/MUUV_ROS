// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/ChemicalParticleConcentration.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/chemical_particle_concentration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // depth
  // concentration
  // is_measuring
  return true;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // latitude
  // longitude
  // depth
  // concentration
  // is_measuring
}

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__are_equal(const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * lhs, const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * rhs)
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
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // concentration
  if (lhs->concentration != rhs->concentration) {
    return false;
  }
  // is_measuring
  if (lhs->is_measuring != rhs->is_measuring) {
    return false;
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__copy(
  const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * input,
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * output)
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
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // depth
  output->depth = input->depth;
  // concentration
  output->concentration = input->concentration;
  // is_measuring
  output->is_measuring = input->is_measuring;
  return true;
}

uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration));
  bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__destroy(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__init(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * data = NULL;

  if (size) {
    data = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *)allocator.zero_allocate(size, sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(&data[i - 1]);
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
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__fini(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array)
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
      uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(&array->data[i]);
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

uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence *
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array = (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence *)allocator.allocate(sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__destroy(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__are_equal(const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * lhs, const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence__copy(
  const uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * input,
  uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration);
    uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration * data =
      (uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__fini(&data[i]);
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
    if (!uuv_sensor_ros_plugins_msgs__msg__ChemicalParticleConcentration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
