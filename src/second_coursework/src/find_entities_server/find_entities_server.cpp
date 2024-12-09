#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <second_coursework/action/find_entities.hpp>  // Auto-generated from action definition
#include <vector>

class FindEntitiesServer : public rclcpp::Node
{
public:
    using FindEntities = second_coursework::action::FindEntities;
    using GoalHandle = rclcpp_action::ServerGoalHandle<FindEntities>;

    FindEntitiesServer()
        : Node("find_entities_server")
    {
        this->action_server_ = rclcpp_action::create_server<FindEntities>(
            this,
            "find_entities",
            std::bind(&FindEntitiesServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&FindEntitiesServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&FindEntitiesServer::handle_accepted, this, std::placeholders::_1));
    }

private:
    rclcpp_action::Server<FindEntities>::SharedPtr action_server_;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const FindEntities::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received goal request with duration: %f", goal->duration);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
    {
        std::thread{std::bind(&FindEntitiesServer::execute, this, goal_handle)}.detach();
    }

    void execute(const std::shared_ptr<GoalHandle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Executing goal...");
        auto result = std::make_shared<FindEntities::Result>();
        auto feedback = std::make_shared<FindEntities::Feedback>();

        rclcpp::Rate loop_rate(1.0);
        auto goal = goal_handle->get_goal();

        float elapsed_time = 0.0;
        while (elapsed_time < goal->duration && rclcpp::ok())
        {
            // Simulate new detections
            feedback->people_found = rand() % 3;
            feedback->cats_found = rand() % 2;
            feedback->dogs_found = rand() % 2;

            // Simulate robot pose
            geometry_msgs::msg::Pose detected_pose;
            detected_pose.position.x = rand() % 10;
            detected_pose.position.y = rand() % 10;
            detected_pose.position.z = 0.0;

            feedback->last_seen_position = detected_pose;

            RCLCPP_INFO(this->get_logger(), "Feedback: People: %d, Cats: %d, Dogs: %d",
                        feedback->people_found, feedback->cats_found, feedback->dogs_found);

            goal_handle->publish_feedback(feedback);

            // Store detected poses in the result
            if (feedback->people_found > 0)
                result->people_positions.push_back(detected_pose);
            if (feedback->cats_found > 0)
                result->cats_positions.push_back(detected_pose);
            if (feedback->dogs_found > 0)
                result->dogs_positions.push_back(detected_pose);

            elapsed_time += 1.0;
            loop_rate.sleep();
        }

        if (goal_handle->is_canceling())
        {
            RCLCPP_INFO(this->get_logger(), "Goal canceled");
            goal_handle->canceled(result);
            return;
        }

        RCLCPP_INFO(this->get_logger(), "Goal succeeded");
        goal_handle->succeed(result);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FindEntitiesServer>());
    rclcpp::shutdown();
    return 0;
}
