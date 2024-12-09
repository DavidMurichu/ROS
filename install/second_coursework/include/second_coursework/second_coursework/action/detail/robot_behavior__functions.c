// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice
#include "second_coursework/action/detail/robot_behavior__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
second_coursework__action__RobotBehavior_Goal__init(second_coursework__action__RobotBehavior_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  return true;
}

void
second_coursework__action__RobotBehavior_Goal__fini(second_coursework__action__RobotBehavior_Goal * msg)
{
  if (!msg) {
    return;
  }
  // duration
}

bool
second_coursework__action__RobotBehavior_Goal__are_equal(const second_coursework__action__RobotBehavior_Goal * lhs, const second_coursework__action__RobotBehavior_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Goal__copy(
  const second_coursework__action__RobotBehavior_Goal * input,
  second_coursework__action__RobotBehavior_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

second_coursework__action__RobotBehavior_Goal *
second_coursework__action__RobotBehavior_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Goal * msg = (second_coursework__action__RobotBehavior_Goal *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_Goal));
  bool success = second_coursework__action__RobotBehavior_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_Goal__destroy(second_coursework__action__RobotBehavior_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_Goal__Sequence__init(second_coursework__action__RobotBehavior_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Goal * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_Goal *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_Goal__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_Goal__Sequence__fini(second_coursework__action__RobotBehavior_Goal__Sequence * array)
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
      second_coursework__action__RobotBehavior_Goal__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_Goal__Sequence *
second_coursework__action__RobotBehavior_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Goal__Sequence * array = (second_coursework__action__RobotBehavior_Goal__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_Goal__Sequence__destroy(second_coursework__action__RobotBehavior_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_Goal__Sequence__are_equal(const second_coursework__action__RobotBehavior_Goal__Sequence * lhs, const second_coursework__action__RobotBehavior_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Goal__Sequence__copy(
  const second_coursework__action__RobotBehavior_Goal__Sequence * input,
  second_coursework__action__RobotBehavior_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_Goal * data =
      (second_coursework__action__RobotBehavior_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `people_positions`
// Member `dogs_positions`
// Member `cats_positions`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
second_coursework__action__RobotBehavior_Result__init(second_coursework__action__RobotBehavior_Result * msg)
{
  if (!msg) {
    return false;
  }
  // people_positions
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->people_positions, 0)) {
    second_coursework__action__RobotBehavior_Result__fini(msg);
    return false;
  }
  // dogs_positions
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->dogs_positions, 0)) {
    second_coursework__action__RobotBehavior_Result__fini(msg);
    return false;
  }
  // cats_positions
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->cats_positions, 0)) {
    second_coursework__action__RobotBehavior_Result__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_Result__fini(second_coursework__action__RobotBehavior_Result * msg)
{
  if (!msg) {
    return;
  }
  // people_positions
  geometry_msgs__msg__Pose__Sequence__fini(&msg->people_positions);
  // dogs_positions
  geometry_msgs__msg__Pose__Sequence__fini(&msg->dogs_positions);
  // cats_positions
  geometry_msgs__msg__Pose__Sequence__fini(&msg->cats_positions);
}

bool
second_coursework__action__RobotBehavior_Result__are_equal(const second_coursework__action__RobotBehavior_Result * lhs, const second_coursework__action__RobotBehavior_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // people_positions
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->people_positions), &(rhs->people_positions)))
  {
    return false;
  }
  // dogs_positions
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->dogs_positions), &(rhs->dogs_positions)))
  {
    return false;
  }
  // cats_positions
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->cats_positions), &(rhs->cats_positions)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Result__copy(
  const second_coursework__action__RobotBehavior_Result * input,
  second_coursework__action__RobotBehavior_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // people_positions
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->people_positions), &(output->people_positions)))
  {
    return false;
  }
  // dogs_positions
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->dogs_positions), &(output->dogs_positions)))
  {
    return false;
  }
  // cats_positions
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->cats_positions), &(output->cats_positions)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_Result *
second_coursework__action__RobotBehavior_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Result * msg = (second_coursework__action__RobotBehavior_Result *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_Result));
  bool success = second_coursework__action__RobotBehavior_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_Result__destroy(second_coursework__action__RobotBehavior_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_Result__Sequence__init(second_coursework__action__RobotBehavior_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Result * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_Result *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_Result__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_Result__Sequence__fini(second_coursework__action__RobotBehavior_Result__Sequence * array)
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
      second_coursework__action__RobotBehavior_Result__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_Result__Sequence *
second_coursework__action__RobotBehavior_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Result__Sequence * array = (second_coursework__action__RobotBehavior_Result__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_Result__Sequence__destroy(second_coursework__action__RobotBehavior_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_Result__Sequence__are_equal(const second_coursework__action__RobotBehavior_Result__Sequence * lhs, const second_coursework__action__RobotBehavior_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Result__Sequence__copy(
  const second_coursework__action__RobotBehavior_Result__Sequence * input,
  second_coursework__action__RobotBehavior_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_Result * data =
      (second_coursework__action__RobotBehavior_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `last_seen_position`
// already included above
// #include "geometry_msgs/msg/detail/pose__functions.h"

bool
second_coursework__action__RobotBehavior_Feedback__init(second_coursework__action__RobotBehavior_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // people_found
  // dogs_found
  // cats_found
  // last_seen_position
  if (!geometry_msgs__msg__Pose__init(&msg->last_seen_position)) {
    second_coursework__action__RobotBehavior_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_Feedback__fini(second_coursework__action__RobotBehavior_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // people_found
  // dogs_found
  // cats_found
  // last_seen_position
  geometry_msgs__msg__Pose__fini(&msg->last_seen_position);
}

bool
second_coursework__action__RobotBehavior_Feedback__are_equal(const second_coursework__action__RobotBehavior_Feedback * lhs, const second_coursework__action__RobotBehavior_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // people_found
  if (lhs->people_found != rhs->people_found) {
    return false;
  }
  // dogs_found
  if (lhs->dogs_found != rhs->dogs_found) {
    return false;
  }
  // cats_found
  if (lhs->cats_found != rhs->cats_found) {
    return false;
  }
  // last_seen_position
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->last_seen_position), &(rhs->last_seen_position)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Feedback__copy(
  const second_coursework__action__RobotBehavior_Feedback * input,
  second_coursework__action__RobotBehavior_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // people_found
  output->people_found = input->people_found;
  // dogs_found
  output->dogs_found = input->dogs_found;
  // cats_found
  output->cats_found = input->cats_found;
  // last_seen_position
  if (!geometry_msgs__msg__Pose__copy(
      &(input->last_seen_position), &(output->last_seen_position)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_Feedback *
second_coursework__action__RobotBehavior_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Feedback * msg = (second_coursework__action__RobotBehavior_Feedback *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_Feedback));
  bool success = second_coursework__action__RobotBehavior_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_Feedback__destroy(second_coursework__action__RobotBehavior_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_Feedback__Sequence__init(second_coursework__action__RobotBehavior_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Feedback * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_Feedback *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_Feedback__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_Feedback__Sequence__fini(second_coursework__action__RobotBehavior_Feedback__Sequence * array)
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
      second_coursework__action__RobotBehavior_Feedback__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_Feedback__Sequence *
second_coursework__action__RobotBehavior_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_Feedback__Sequence * array = (second_coursework__action__RobotBehavior_Feedback__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_Feedback__Sequence__destroy(second_coursework__action__RobotBehavior_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_Feedback__Sequence__are_equal(const second_coursework__action__RobotBehavior_Feedback__Sequence * lhs, const second_coursework__action__RobotBehavior_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_Feedback__Sequence__copy(
  const second_coursework__action__RobotBehavior_Feedback__Sequence * input,
  second_coursework__action__RobotBehavior_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_Feedback * data =
      (second_coursework__action__RobotBehavior_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"

bool
second_coursework__action__RobotBehavior_SendGoal_Request__init(second_coursework__action__RobotBehavior_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    second_coursework__action__RobotBehavior_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!second_coursework__action__RobotBehavior_Goal__init(&msg->goal)) {
    second_coursework__action__RobotBehavior_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_SendGoal_Request__fini(second_coursework__action__RobotBehavior_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  second_coursework__action__RobotBehavior_Goal__fini(&msg->goal);
}

bool
second_coursework__action__RobotBehavior_SendGoal_Request__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Request * lhs, const second_coursework__action__RobotBehavior_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!second_coursework__action__RobotBehavior_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_SendGoal_Request__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Request * input,
  second_coursework__action__RobotBehavior_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!second_coursework__action__RobotBehavior_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_SendGoal_Request *
second_coursework__action__RobotBehavior_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Request * msg = (second_coursework__action__RobotBehavior_SendGoal_Request *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_SendGoal_Request));
  bool success = second_coursework__action__RobotBehavior_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_SendGoal_Request__destroy(second_coursework__action__RobotBehavior_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__init(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Request * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_SendGoal_Request *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_SendGoal_Request__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__fini(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array)
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
      second_coursework__action__RobotBehavior_SendGoal_Request__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_SendGoal_Request__Sequence *
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array = (second_coursework__action__RobotBehavior_SendGoal_Request__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__destroy(second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * lhs, const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_SendGoal_Request__Sequence__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * input,
  second_coursework__action__RobotBehavior_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_SendGoal_Request * data =
      (second_coursework__action__RobotBehavior_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
second_coursework__action__RobotBehavior_SendGoal_Response__init(second_coursework__action__RobotBehavior_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    second_coursework__action__RobotBehavior_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_SendGoal_Response__fini(second_coursework__action__RobotBehavior_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
second_coursework__action__RobotBehavior_SendGoal_Response__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Response * lhs, const second_coursework__action__RobotBehavior_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_SendGoal_Response__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Response * input,
  second_coursework__action__RobotBehavior_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_SendGoal_Response *
second_coursework__action__RobotBehavior_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Response * msg = (second_coursework__action__RobotBehavior_SendGoal_Response *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_SendGoal_Response));
  bool success = second_coursework__action__RobotBehavior_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_SendGoal_Response__destroy(second_coursework__action__RobotBehavior_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__init(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Response * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_SendGoal_Response *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_SendGoal_Response__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__fini(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array)
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
      second_coursework__action__RobotBehavior_SendGoal_Response__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_SendGoal_Response__Sequence *
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array = (second_coursework__action__RobotBehavior_SendGoal_Response__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__destroy(second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__are_equal(const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * lhs, const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_SendGoal_Response__Sequence__copy(
  const second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * input,
  second_coursework__action__RobotBehavior_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_SendGoal_Response * data =
      (second_coursework__action__RobotBehavior_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
second_coursework__action__RobotBehavior_GetResult_Request__init(second_coursework__action__RobotBehavior_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    second_coursework__action__RobotBehavior_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_GetResult_Request__fini(second_coursework__action__RobotBehavior_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
second_coursework__action__RobotBehavior_GetResult_Request__are_equal(const second_coursework__action__RobotBehavior_GetResult_Request * lhs, const second_coursework__action__RobotBehavior_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_GetResult_Request__copy(
  const second_coursework__action__RobotBehavior_GetResult_Request * input,
  second_coursework__action__RobotBehavior_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_GetResult_Request *
second_coursework__action__RobotBehavior_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Request * msg = (second_coursework__action__RobotBehavior_GetResult_Request *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_GetResult_Request));
  bool success = second_coursework__action__RobotBehavior_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_GetResult_Request__destroy(second_coursework__action__RobotBehavior_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__init(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Request * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_GetResult_Request *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_GetResult_Request__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__fini(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array)
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
      second_coursework__action__RobotBehavior_GetResult_Request__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_GetResult_Request__Sequence *
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array = (second_coursework__action__RobotBehavior_GetResult_Request__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__destroy(second_coursework__action__RobotBehavior_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__are_equal(const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * lhs, const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_GetResult_Request__Sequence__copy(
  const second_coursework__action__RobotBehavior_GetResult_Request__Sequence * input,
  second_coursework__action__RobotBehavior_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_GetResult_Request * data =
      (second_coursework__action__RobotBehavior_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"

bool
second_coursework__action__RobotBehavior_GetResult_Response__init(second_coursework__action__RobotBehavior_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!second_coursework__action__RobotBehavior_Result__init(&msg->result)) {
    second_coursework__action__RobotBehavior_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_GetResult_Response__fini(second_coursework__action__RobotBehavior_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  second_coursework__action__RobotBehavior_Result__fini(&msg->result);
}

bool
second_coursework__action__RobotBehavior_GetResult_Response__are_equal(const second_coursework__action__RobotBehavior_GetResult_Response * lhs, const second_coursework__action__RobotBehavior_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!second_coursework__action__RobotBehavior_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_GetResult_Response__copy(
  const second_coursework__action__RobotBehavior_GetResult_Response * input,
  second_coursework__action__RobotBehavior_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!second_coursework__action__RobotBehavior_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_GetResult_Response *
second_coursework__action__RobotBehavior_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Response * msg = (second_coursework__action__RobotBehavior_GetResult_Response *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_GetResult_Response));
  bool success = second_coursework__action__RobotBehavior_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_GetResult_Response__destroy(second_coursework__action__RobotBehavior_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__init(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Response * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_GetResult_Response *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_GetResult_Response__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__fini(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array)
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
      second_coursework__action__RobotBehavior_GetResult_Response__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_GetResult_Response__Sequence *
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array = (second_coursework__action__RobotBehavior_GetResult_Response__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__destroy(second_coursework__action__RobotBehavior_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__are_equal(const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * lhs, const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_GetResult_Response__Sequence__copy(
  const second_coursework__action__RobotBehavior_GetResult_Response__Sequence * input,
  second_coursework__action__RobotBehavior_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_GetResult_Response * data =
      (second_coursework__action__RobotBehavior_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "second_coursework/action/detail/robot_behavior__functions.h"

bool
second_coursework__action__RobotBehavior_FeedbackMessage__init(second_coursework__action__RobotBehavior_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    second_coursework__action__RobotBehavior_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!second_coursework__action__RobotBehavior_Feedback__init(&msg->feedback)) {
    second_coursework__action__RobotBehavior_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
second_coursework__action__RobotBehavior_FeedbackMessage__fini(second_coursework__action__RobotBehavior_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  second_coursework__action__RobotBehavior_Feedback__fini(&msg->feedback);
}

bool
second_coursework__action__RobotBehavior_FeedbackMessage__are_equal(const second_coursework__action__RobotBehavior_FeedbackMessage * lhs, const second_coursework__action__RobotBehavior_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!second_coursework__action__RobotBehavior_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_FeedbackMessage__copy(
  const second_coursework__action__RobotBehavior_FeedbackMessage * input,
  second_coursework__action__RobotBehavior_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!second_coursework__action__RobotBehavior_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

second_coursework__action__RobotBehavior_FeedbackMessage *
second_coursework__action__RobotBehavior_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_FeedbackMessage * msg = (second_coursework__action__RobotBehavior_FeedbackMessage *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__action__RobotBehavior_FeedbackMessage));
  bool success = second_coursework__action__RobotBehavior_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__action__RobotBehavior_FeedbackMessage__destroy(second_coursework__action__RobotBehavior_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__action__RobotBehavior_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__init(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_FeedbackMessage * data = NULL;

  if (size) {
    data = (second_coursework__action__RobotBehavior_FeedbackMessage *)allocator.zero_allocate(size, sizeof(second_coursework__action__RobotBehavior_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__action__RobotBehavior_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__action__RobotBehavior_FeedbackMessage__fini(&data[i - 1]);
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
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__fini(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array)
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
      second_coursework__action__RobotBehavior_FeedbackMessage__fini(&array->data[i]);
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

second_coursework__action__RobotBehavior_FeedbackMessage__Sequence *
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array = (second_coursework__action__RobotBehavior_FeedbackMessage__Sequence *)allocator.allocate(sizeof(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__destroy(second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__are_equal(const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * lhs, const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__action__RobotBehavior_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__action__RobotBehavior_FeedbackMessage__Sequence__copy(
  const second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * input,
  second_coursework__action__RobotBehavior_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__action__RobotBehavior_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__action__RobotBehavior_FeedbackMessage * data =
      (second_coursework__action__RobotBehavior_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__action__RobotBehavior_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__action__RobotBehavior_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__action__RobotBehavior_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
