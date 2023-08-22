// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `added_mass`
// Member `linear_damping`
// Member `linear_damping_forward_speed`
// Member `quadratic_damping`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cob`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `inertia`
#include "geometry_msgs/msg/detail/inertia__functions.h"

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  if (!msg) {
    return false;
  }
  // added_mass
  if (!rosidl_runtime_c__double__Sequence__init(&msg->added_mass, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // linear_damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_damping, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // linear_damping_forward_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->linear_damping_forward_speed, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // quadratic_damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->quadratic_damping, 0)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // volume
  // bbox_height
  // bbox_length
  // bbox_width
  // fluid_density
  // cob
  if (!geometry_msgs__msg__Vector3__init(&msg->cob)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  // neutrally_buoyant
  // inertia
  if (!geometry_msgs__msg__Inertia__init(&msg->inertia)) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
    return false;
  }
  return true;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  if (!msg) {
    return;
  }
  // added_mass
  rosidl_runtime_c__double__Sequence__fini(&msg->added_mass);
  // linear_damping
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_damping);
  // linear_damping_forward_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->linear_damping_forward_speed);
  // quadratic_damping
  rosidl_runtime_c__double__Sequence__fini(&msg->quadratic_damping);
  // volume
  // bbox_height
  // bbox_length
  // bbox_width
  // fluid_density
  // cob
  geometry_msgs__msg__Vector3__fini(&msg->cob);
  // neutrally_buoyant
  // inertia
  geometry_msgs__msg__Inertia__fini(&msg->inertia);
}

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * lhs, const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // added_mass
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->added_mass), &(rhs->added_mass)))
  {
    return false;
  }
  // linear_damping
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->linear_damping), &(rhs->linear_damping)))
  {
    return false;
  }
  // linear_damping_forward_speed
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->linear_damping_forward_speed), &(rhs->linear_damping_forward_speed)))
  {
    return false;
  }
  // quadratic_damping
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->quadratic_damping), &(rhs->quadratic_damping)))
  {
    return false;
  }
  // volume
  if (lhs->volume != rhs->volume) {
    return false;
  }
  // bbox_height
  if (lhs->bbox_height != rhs->bbox_height) {
    return false;
  }
  // bbox_length
  if (lhs->bbox_length != rhs->bbox_length) {
    return false;
  }
  // bbox_width
  if (lhs->bbox_width != rhs->bbox_width) {
    return false;
  }
  // fluid_density
  if (lhs->fluid_density != rhs->fluid_density) {
    return false;
  }
  // cob
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->cob), &(rhs->cob)))
  {
    return false;
  }
  // neutrally_buoyant
  if (lhs->neutrally_buoyant != rhs->neutrally_buoyant) {
    return false;
  }
  // inertia
  if (!geometry_msgs__msg__Inertia__are_equal(
      &(lhs->inertia), &(rhs->inertia)))
  {
    return false;
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * input,
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * output)
{
  if (!input || !output) {
    return false;
  }
  // added_mass
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->added_mass), &(output->added_mass)))
  {
    return false;
  }
  // linear_damping
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->linear_damping), &(output->linear_damping)))
  {
    return false;
  }
  // linear_damping_forward_speed
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->linear_damping_forward_speed), &(output->linear_damping_forward_speed)))
  {
    return false;
  }
  // quadratic_damping
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->quadratic_damping), &(output->quadratic_damping)))
  {
    return false;
  }
  // volume
  output->volume = input->volume;
  // bbox_height
  output->bbox_height = input->bbox_height;
  // bbox_length
  output->bbox_length = input->bbox_length;
  // bbox_width
  output->bbox_width = input->bbox_width;
  // fluid_density
  output->fluid_density = input->fluid_density;
  // cob
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->cob), &(output->cob)))
  {
    return false;
  }
  // neutrally_buoyant
  output->neutrally_buoyant = input->neutrally_buoyant;
  // inertia
  if (!geometry_msgs__msg__Inertia__copy(
      &(input->inertia), &(output->inertia)))
  {
    return false;
  }
  return true;
}

uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel));
  bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * data = NULL;

  if (size) {
    data = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)allocator.zero_allocate(size, sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(&data[i - 1]);
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
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array)
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
      uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(&array->data[i]);
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

uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array = (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence *)allocator.allocate(sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__destroy(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__are_equal(const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * lhs, const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence__copy(
  const uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * input,
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel);
    uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * data =
      (uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(&data[i]);
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
    if (!uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
