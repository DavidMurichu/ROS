// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from second_coursework:msg/EmergencyMsg.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__BUILDER_HPP_
#define SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "second_coursework/msg/detail/emergency_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace second_coursework
{

namespace msg
{

namespace builder
{

class Init_EmergencyMsg_duration
{
public:
  explicit Init_EmergencyMsg_duration(::second_coursework::msg::EmergencyMsg & msg)
  : msg_(msg)
  {}
  ::second_coursework::msg::EmergencyMsg duration(::second_coursework::msg::EmergencyMsg::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::msg::EmergencyMsg msg_;
};

class Init_EmergencyMsg_description
{
public:
  Init_EmergencyMsg_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyMsg_duration description(::second_coursework::msg::EmergencyMsg::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_EmergencyMsg_duration(msg_);
  }

private:
  ::second_coursework::msg::EmergencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::msg::EmergencyMsg>()
{
  return second_coursework::msg::builder::Init_EmergencyMsg_description();
}

}  // namespace second_coursework

#endif  // SECOND_COURSEWORK__MSG__DETAIL__EMERGENCY_MSG__BUILDER_HPP_
