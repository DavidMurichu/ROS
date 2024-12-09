// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from second_coursework:action/RobotBehavior.idl
// generated code does not contain a copyright notice

#ifndef SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_HPP_
#define SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_Goal __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_Goal __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_Goal_
{
  using Type = RobotBehavior_Goal_<ContainerAllocator>;

  explicit RobotBehavior_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  explicit RobotBehavior_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0f;
    }
  }

  // field types and members
  using _duration_type =
    float;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__duration(
    const float & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Goal
    std::shared_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Goal
    std::shared_ptr<second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_Goal_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_Goal_

// alias to use template instance with default allocator
using RobotBehavior_Goal =
  second_coursework::action::RobotBehavior_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'people_positions'
// Member 'dogs_positions'
// Member 'cats_positions'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_Result __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_Result __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_Result_
{
  using Type = RobotBehavior_Result_<ContainerAllocator>;

  explicit RobotBehavior_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RobotBehavior_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _people_positions_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _people_positions_type people_positions;
  using _dogs_positions_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _dogs_positions_type dogs_positions;
  using _cats_positions_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _cats_positions_type cats_positions;

  // setters for named parameter idiom
  Type & set__people_positions(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->people_positions = _arg;
    return *this;
  }
  Type & set__dogs_positions(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->dogs_positions = _arg;
    return *this;
  }
  Type & set__cats_positions(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->cats_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Result
    std::shared_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Result
    std::shared_ptr<second_coursework::action::RobotBehavior_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_Result_ & other) const
  {
    if (this->people_positions != other.people_positions) {
      return false;
    }
    if (this->dogs_positions != other.dogs_positions) {
      return false;
    }
    if (this->cats_positions != other.cats_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_Result_

// alias to use template instance with default allocator
using RobotBehavior_Result =
  second_coursework::action::RobotBehavior_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'last_seen_position'
// already included above
// #include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_Feedback __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_Feedback_
{
  using Type = RobotBehavior_Feedback_<ContainerAllocator>;

  explicit RobotBehavior_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_seen_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->people_found = 0l;
      this->dogs_found = 0l;
      this->cats_found = 0l;
    }
  }

  explicit RobotBehavior_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_seen_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->people_found = 0l;
      this->dogs_found = 0l;
      this->cats_found = 0l;
    }
  }

  // field types and members
  using _people_found_type =
    int32_t;
  _people_found_type people_found;
  using _dogs_found_type =
    int32_t;
  _dogs_found_type dogs_found;
  using _cats_found_type =
    int32_t;
  _cats_found_type cats_found;
  using _last_seen_position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _last_seen_position_type last_seen_position;

  // setters for named parameter idiom
  Type & set__people_found(
    const int32_t & _arg)
  {
    this->people_found = _arg;
    return *this;
  }
  Type & set__dogs_found(
    const int32_t & _arg)
  {
    this->dogs_found = _arg;
    return *this;
  }
  Type & set__cats_found(
    const int32_t & _arg)
  {
    this->cats_found = _arg;
    return *this;
  }
  Type & set__last_seen_position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->last_seen_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Feedback
    std::shared_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_Feedback
    std::shared_ptr<second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_Feedback_ & other) const
  {
    if (this->people_found != other.people_found) {
      return false;
    }
    if (this->dogs_found != other.dogs_found) {
      return false;
    }
    if (this->cats_found != other.cats_found) {
      return false;
    }
    if (this->last_seen_position != other.last_seen_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_Feedback_

// alias to use template instance with default allocator
using RobotBehavior_Feedback =
  second_coursework::action::RobotBehavior_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "second_coursework/action/detail/robot_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Request __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_SendGoal_Request_
{
  using Type = RobotBehavior_SendGoal_Request_<ContainerAllocator>;

  explicit RobotBehavior_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RobotBehavior_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    second_coursework::action::RobotBehavior_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const second_coursework::action::RobotBehavior_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Request
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Request
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_SendGoal_Request_

// alias to use template instance with default allocator
using RobotBehavior_SendGoal_Request =
  second_coursework::action::RobotBehavior_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Response __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_SendGoal_Response_
{
  using Type = RobotBehavior_SendGoal_Response_<ContainerAllocator>;

  explicit RobotBehavior_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RobotBehavior_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Response
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_SendGoal_Response
    std::shared_ptr<second_coursework::action::RobotBehavior_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_SendGoal_Response_

// alias to use template instance with default allocator
using RobotBehavior_SendGoal_Response =
  second_coursework::action::RobotBehavior_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework

namespace second_coursework
{

namespace action
{

struct RobotBehavior_SendGoal
{
  using Request = second_coursework::action::RobotBehavior_SendGoal_Request;
  using Response = second_coursework::action::RobotBehavior_SendGoal_Response;
};

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Request __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_GetResult_Request_
{
  using Type = RobotBehavior_GetResult_Request_<ContainerAllocator>;

  explicit RobotBehavior_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RobotBehavior_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Request
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Request
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_GetResult_Request_

// alias to use template instance with default allocator
using RobotBehavior_GetResult_Request =
  second_coursework::action::RobotBehavior_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'result'
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Response __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_GetResult_Response_
{
  using Type = RobotBehavior_GetResult_Response_<ContainerAllocator>;

  explicit RobotBehavior_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RobotBehavior_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    second_coursework::action::RobotBehavior_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const second_coursework::action::RobotBehavior_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Response
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_GetResult_Response
    std::shared_ptr<second_coursework::action::RobotBehavior_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_GetResult_Response_

// alias to use template instance with default allocator
using RobotBehavior_GetResult_Response =
  second_coursework::action::RobotBehavior_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework

namespace second_coursework
{

namespace action
{

struct RobotBehavior_GetResult
{
  using Request = second_coursework::action::RobotBehavior_GetResult_Request;
  using Response = second_coursework::action::RobotBehavior_GetResult_Response;
};

}  // namespace action

}  // namespace second_coursework


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "second_coursework/action/detail/robot_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__second_coursework__action__RobotBehavior_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__second_coursework__action__RobotBehavior_FeedbackMessage __declspec(deprecated)
#endif

namespace second_coursework
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RobotBehavior_FeedbackMessage_
{
  using Type = RobotBehavior_FeedbackMessage_<ContainerAllocator>;

  explicit RobotBehavior_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RobotBehavior_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const second_coursework::action::RobotBehavior_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__second_coursework__action__RobotBehavior_FeedbackMessage
    std::shared_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__second_coursework__action__RobotBehavior_FeedbackMessage
    std::shared_ptr<second_coursework::action::RobotBehavior_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotBehavior_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotBehavior_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotBehavior_FeedbackMessage_

// alias to use template instance with default allocator
using RobotBehavior_FeedbackMessage =
  second_coursework::action::RobotBehavior_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace second_coursework

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace second_coursework
{

namespace action
{

struct RobotBehavior
{
  /// The goal message defined in the action definition.
  using Goal = second_coursework::action::RobotBehavior_Goal;
  /// The result message defined in the action definition.
  using Result = second_coursework::action::RobotBehavior_Result;
  /// The feedback message defined in the action definition.
  using Feedback = second_coursework::action::RobotBehavior_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = second_coursework::action::RobotBehavior_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = second_coursework::action::RobotBehavior_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = second_coursework::action::RobotBehavior_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RobotBehavior RobotBehavior;

}  // namespace action

}  // namespace second_coursework

#endif  // SECOND_COURSEWORK__ACTION__DETAIL__ROBOT_BEHAVIOR__STRUCT_HPP_
