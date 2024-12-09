#ifndef ACTION_SERVER_HPP
#define ACTION_SERVER_HPP

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <second_coursework/action/robot_behavior.hpp>
#include "feedback_manager.hpp"

class ActionServer : public rclcpp::Node
{
public:
    using RobotBehavior = second_coursework::action::RobotBehavior;
    using GoalHandleRobotBehavior = rclcpp_action::ServerGoalHandle<RobotBehavior>;

    explicit ActionServer(const rclcpp::NodeOptions &options = rclcpp::NodeOptions());

private:
    // Declare the action server pointer
    rclcpp_action::Server<RobotBehavior>::SharedPtr action_server_;

    // Declare the necessary member functions
    void initialize_action_server();

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid,
        std::shared_ptr<const RobotBehavior::Goal> goal);

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleRobotBehavior> goal_handle);

    void handle_accepted(const std::shared_ptr<GoalHandleRobotBehavior> goal_handle);

    void execute(const std::shared_ptr<GoalHandleRobotBehavior> goal_handle);

    void update_feedback(std::shared_ptr<RobotBehavior::Feedback> feedback);

    void generate_result(std::shared_ptr<RobotBehavior::Result> result);

    // FeedbackManager to handle data updates
    FeedbackManager feedback_manager_;
};

#endif // ACTION_SERVER_HPP
