#include "action_server/action_server.hpp"

ActionServer::ActionServer(const rclcpp::NodeOptions &options)
    : Node("action_server_node", options)
{
    // Initialize the action server
    this->initialize_action_server();
}

void ActionServer::initialize_action_server()
{
    this->action_server_ = rclcpp_action::create_server<RobotBehavior>(
        this->get_node_base_interface(),
        this->get_node_clock_interface(),
        this->get_node_logging_interface(),
        this->get_node_waitables_interface(),
        "robot_behavior",
        std::bind(&ActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
        std::bind(&ActionServer::handle_cancel, this, std::placeholders::_1),
        std::bind(&ActionServer::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "Action server 'robot_behavior' initialized");
}

rclcpp_action::GoalResponse ActionServer::handle_goal(
    const rclcpp_action::GoalUUID &uuid,
    std::shared_ptr<const RobotBehavior::Goal> goal)
{
    RCLCPP_INFO(this->get_logger(), "Received goal request with duration: %f seconds", goal->duration);

    if (goal->duration <= 0)
    {
        RCLCPP_WARN(this->get_logger(), "Rejected goal with invalid duration: %f", goal->duration);
        return rclcpp_action::GoalResponse::REJECT;
    }

    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse ActionServer::handle_cancel(
    const std::shared_ptr<GoalHandleRobotBehavior> goal_handle)
{
    RCLCPP_INFO(this->get_logger(), "Received cancel request for goal");
    return rclcpp_action::CancelResponse::ACCEPT;
}

void ActionServer::handle_accepted(const std::shared_ptr<GoalHandleRobotBehavior> goal_handle)
{
    RCLCPP_INFO(this->get_logger(), "Accepted goal, starting execution");
    std::thread(&ActionServer::execute, this, goal_handle).detach();
}

void ActionServer::execute(const std::shared_ptr<GoalHandleRobotBehavior> goal_handle)
{
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<RobotBehavior::Feedback>();
    auto result = std::make_shared<RobotBehavior::Result>();

    rclcpp::Rate rate(1);
    auto start_time = this->now();

    try
    {
        while (this->now() - start_time < rclcpp::Duration::from_seconds(goal->duration))
        {
            if (goal_handle->is_canceling())
            {
                RCLCPP_INFO(this->get_logger(), "Goal canceled");
                goal_handle->canceled(result);
                return;
            }

            update_feedback(feedback);
            goal_handle->publish_feedback(feedback);

            rate.sleep();
        }

        generate_result(result);
        goal_handle->succeed(result);

        RCLCPP_INFO(this->get_logger(), "Goal execution succeeded");
    }
    catch (const std::exception &e)
    {
        RCLCPP_ERROR(this->get_logger(), "Error during goal execution: %s", e.what());
        goal_handle->abort(result);
    }
}

void ActionServer::update_feedback(std::shared_ptr<RobotBehavior::Feedback> feedback)
{
    feedback->people_found = feedback_manager_.getNewPeople();
    feedback->dogs_found = feedback_manager_.getNewDogs();
    feedback->cats_found = feedback_manager_.getNewCats();
    feedback->last_seen_position = feedback_manager_.getLastDetectedPosition();
}

void ActionServer::generate_result(std::shared_ptr<RobotBehavior::Result> result)
{
    result->people_positions = feedback_manager_.getAllDetections("person");
    result->dogs_positions = feedback_manager_.getAllDetections("dog");
    result->cats_positions = feedback_manager_.getAllDetections("cat");
}
