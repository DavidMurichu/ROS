// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice
#include "second_coursework/msg/detail/emergency_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
second_coursework__msg__EmergencyMsg__init(second_coursework__msg__EmergencyMsg * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    second_coursework__msg__EmergencyMsg__fini(msg);
    return false;
  }
  // duration
  return true;
}

void
second_coursework__msg__EmergencyMsg__fini(second_coursework__msg__EmergencyMsg * msg)
{
  if (!msg) {
    return;
  }
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // duration
}

bool
second_coursework__msg__EmergencyMsg__are_equal(const second_coursework__msg__EmergencyMsg * lhs, const second_coursework__msg__EmergencyMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
second_coursework__msg__EmergencyMsg__copy(
  const second_coursework__msg__EmergencyMsg * input,
  second_coursework__msg__EmergencyMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // duration
  output->duration = input->duration;
  return true;
}

second_coursework__msg__EmergencyMsg *
second_coursework__msg__EmergencyMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__msg__EmergencyMsg * msg = (second_coursework__msg__EmergencyMsg *)allocator.allocate(sizeof(second_coursework__msg__EmergencyMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(second_coursework__msg__EmergencyMsg));
  bool success = second_coursework__msg__EmergencyMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
second_coursework__msg__EmergencyMsg__destroy(second_coursework__msg__EmergencyMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    second_coursework__msg__EmergencyMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
second_coursework__msg__EmergencyMsg__Sequence__init(second_coursework__msg__EmergencyMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__msg__EmergencyMsg * data = NULL;

  if (size) {
    data = (second_coursework__msg__EmergencyMsg *)allocator.zero_allocate(size, sizeof(second_coursework__msg__EmergencyMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = second_coursework__msg__EmergencyMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        second_coursework__msg__EmergencyMsg__fini(&data[i - 1]);
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
second_coursework__msg__EmergencyMsg__Sequence__fini(second_coursework__msg__EmergencyMsg__Sequence * array)
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
      second_coursework__msg__EmergencyMsg__fini(&array->data[i]);
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

second_coursework__msg__EmergencyMsg__Sequence *
second_coursework__msg__EmergencyMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  second_coursework__msg__EmergencyMsg__Sequence * array = (second_coursework__msg__EmergencyMsg__Sequence *)allocator.allocate(sizeof(second_coursework__msg__EmergencyMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = second_coursework__msg__EmergencyMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
second_coursework__msg__EmergencyMsg__Sequence__destroy(second_coursework__msg__EmergencyMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    second_coursework__msg__EmergencyMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
second_coursework__msg__EmergencyMsg__Sequence__are_equal(const second_coursework__msg__EmergencyMsg__Sequence * lhs, const second_coursework__msg__EmergencyMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!second_coursework__msg__EmergencyMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
second_coursework__msg__EmergencyMsg__Sequence__copy(
  const second_coursework__msg__EmergencyMsg__Sequence * input,
  second_coursework__msg__EmergencyMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(second_coursework__msg__EmergencyMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    second_coursework__msg__EmergencyMsg * data =
      (second_coursework__msg__EmergencyMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!second_coursework__msg__EmergencyMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          second_coursework__msg__EmergencyMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!second_coursework__msg__EmergencyMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
