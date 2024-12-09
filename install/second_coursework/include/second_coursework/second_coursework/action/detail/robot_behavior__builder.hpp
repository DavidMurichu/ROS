// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__BUILDER_HPP_
#define SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "second_coursework/action/detail/robot_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_Goal_duration
{
public:
  Init_RobotBehavior_Goal_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::second_coursework::action::RobotBehavior_Goal duration(::second_coursework::action::RobotBehavior_Goal::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_Goal>()
{
  return second_coursework::action::builder::Init_RobotBehavior_Goal_duration();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_Result_cats_positions
{
public:
  explicit Init_RobotBehavior_Result_cats_positions(::second_coursework::action::RobotBehavior_Result & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_Result cats_positions(::second_coursework::action::RobotBehavior_Result::_cats_positions_type arg)
  {
    msg_.cats_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Result msg_;
};

class Init_RobotBehavior_Result_dogs_positions
{
public:
  explicit Init_RobotBehavior_Result_dogs_positions(::second_coursework::action::RobotBehavior_Result & msg)
  : msg_(msg)
  {}
  Init_RobotBehavior_Result_cats_positions dogs_positions(::second_coursework::action::RobotBehavior_Result::_dogs_positions_type arg)
  {
    msg_.dogs_positions = std::move(arg);
    return Init_RobotBehavior_Result_cats_positions(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Result msg_;
};

class Init_RobotBehavior_Result_people_positions
{
public:
  Init_RobotBehavior_Result_people_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_Result_dogs_positions people_positions(::second_coursework::action::RobotBehavior_Result::_people_positions_type arg)
  {
    msg_.people_positions = std::move(arg);
    return Init_RobotBehavior_Result_dogs_positions(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_Result>()
{
  return second_coursework::action::builder::Init_RobotBehavior_Result_people_positions();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_Feedback_last_seen_position
{
public:
  explicit Init_RobotBehavior_Feedback_last_seen_position(::second_coursework::action::RobotBehavior_Feedback & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_Feedback last_seen_position(::second_coursework::action::RobotBehavior_Feedback::_last_seen_position_type arg)
  {
    msg_.last_seen_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Feedback msg_;
};

class Init_RobotBehavior_Feedback_cats_found
{
public:
  explicit Init_RobotBehavior_Feedback_cats_found(::second_coursework::action::RobotBehavior_Feedback & msg)
  : msg_(msg)
  {}
  Init_RobotBehavior_Feedback_last_seen_position cats_found(::second_coursework::action::RobotBehavior_Feedback::_cats_found_type arg)
  {
    msg_.cats_found = std::move(arg);
    return Init_RobotBehavior_Feedback_last_seen_position(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Feedback msg_;
};

class Init_RobotBehavior_Feedback_dogs_found
{
public:
  explicit Init_RobotBehavior_Feedback_dogs_found(::second_coursework::action::RobotBehavior_Feedback & msg)
  : msg_(msg)
  {}
  Init_RobotBehavior_Feedback_cats_found dogs_found(::second_coursework::action::RobotBehavior_Feedback::_dogs_found_type arg)
  {
    msg_.dogs_found = std::move(arg);
    return Init_RobotBehavior_Feedback_cats_found(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Feedback msg_;
};

class Init_RobotBehavior_Feedback_people_found
{
public:
  Init_RobotBehavior_Feedback_people_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_Feedback_dogs_found people_found(::second_coursework::action::RobotBehavior_Feedback::_people_found_type arg)
  {
    msg_.people_found = std::move(arg);
    return Init_RobotBehavior_Feedback_dogs_found(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_Feedback>()
{
  return second_coursework::action::builder::Init_RobotBehavior_Feedback_people_found();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_SendGoal_Request_goal
{
public:
  explicit Init_RobotBehavior_SendGoal_Request_goal(::second_coursework::action::RobotBehavior_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_SendGoal_Request goal(::second_coursework::action::RobotBehavior_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_SendGoal_Request msg_;
};

class Init_RobotBehavior_SendGoal_Request_goal_id
{
public:
  Init_RobotBehavior_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_SendGoal_Request_goal goal_id(::second_coursework::action::RobotBehavior_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotBehavior_SendGoal_Request_goal(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_SendGoal_Request>()
{
  return second_coursework::action::builder::Init_RobotBehavior_SendGoal_Request_goal_id();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_SendGoal_Response_stamp
{
public:
  explicit Init_RobotBehavior_SendGoal_Response_stamp(::second_coursework::action::RobotBehavior_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_SendGoal_Response stamp(::second_coursework::action::RobotBehavior_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_SendGoal_Response msg_;
};

class Init_RobotBehavior_SendGoal_Response_accepted
{
public:
  Init_RobotBehavior_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_SendGoal_Response_stamp accepted(::second_coursework::action::RobotBehavior_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RobotBehavior_SendGoal_Response_stamp(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_SendGoal_Response>()
{
  return second_coursework::action::builder::Init_RobotBehavior_SendGoal_Response_accepted();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_GetResult_Request_goal_id
{
public:
  Init_RobotBehavior_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::second_coursework::action::RobotBehavior_GetResult_Request goal_id(::second_coursework::action::RobotBehavior_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_GetResult_Request>()
{
  return second_coursework::action::builder::Init_RobotBehavior_GetResult_Request_goal_id();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_GetResult_Response_result
{
public:
  explicit Init_RobotBehavior_GetResult_Response_result(::second_coursework::action::RobotBehavior_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_GetResult_Response result(::second_coursework::action::RobotBehavior_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_GetResult_Response msg_;
};

class Init_RobotBehavior_GetResult_Response_status
{
public:
  Init_RobotBehavior_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_GetResult_Response_result status(::second_coursework::action::RobotBehavior_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotBehavior_GetResult_Response_result(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_GetResult_Response>()
{
  return second_coursework::action::builder::Init_RobotBehavior_GetResult_Response_status();
}

}  // namespace second_coursework


namespace second_coursework
{

namespace action
{

namespace builder
{

class Init_RobotBehavior_FeedbackMessage_feedback
{
public:
  explicit Init_RobotBehavior_FeedbackMessage_feedback(::second_coursework::action::RobotBehavior_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::second_coursework::action::RobotBehavior_FeedbackMessage feedback(::second_coursework::action::RobotBehavior_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_FeedbackMessage msg_;
};

class Init_RobotBehavior_FeedbackMessage_goal_id
{
public:
  Init_RobotBehavior_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotBehavior_FeedbackMessage_feedback goal_id(::second_coursework::action::RobotBehavior_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RobotBehavior_FeedbackMessage_feedback(msg_);
  }

private:
  ::second_coursework::action::RobotBehavior_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::second_coursework::action::RobotBehavior_FeedbackMessage>()
{
  return second_coursework::action::builder::Init_RobotBehavior_FeedbackMessage_goal_id();
}

}  // namespace second_coursework

#endif  // SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__BUILDER_HPP_
