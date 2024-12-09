// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_HPP_
#define SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__second_coursework__msg__EmergencyMsg __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__msg__EmergencyMsg __declspec(deprecated)
#endif

namespace second_coursework
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyMsg_
{
  using Type = EmergencyMsg_<ContainerAllocator>;

  explicit EmergencyMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->duration = 0.0f;
    }
  }

  explicit EmergencyMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::msg::EmergencyMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::msg::EmergencyMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::msg::EmergencyMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::msg::EmergencyMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__msg__EmergencyMsg
    std::shared_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__msg__EmergencyMsg
    std::shared_ptr<second_coursework::msg::EmergencyMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyMsg_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyMsg_

// alias to use template instance with default allocator
using EmergencyMsg =
  second_coursework::msg::EmergencyMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace second_coursework

#endif  // SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__STRUCT_HPP_
