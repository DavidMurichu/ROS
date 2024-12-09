#!/bin/bash

# Define paths and variables
WORKSPACE_PATH=/root/assignment_ws
PACKAGE_NAME=second_coursework
ACTION_SERVER_NODE=action_server_node
ACTION_NAME=/robot_behavior
ACTION_TYPE=second_coursework/action/RobotBehavior
GOAL="{duration: 60.0}"

# Function to kill a process by PID and confirm termination
kill_process() {
    local PID=$1
    if [ -n "$PID" ] && kill -0 "$PID" 2>/dev/null; then
        echo "Terminating process with PID: $PID"
        kill "$PID"
        sleep 2
        # Verify the process is terminated, if not, force kill
        if kill -0 "$PID" 2>/dev/null; then
            echo "Process $PID did not terminate. Forcing termination."
            kill -9 "$PID"
        fi
    else
        echo "Process $PID is not running or already terminated."
    fi
}

# Check and terminate any running ROS 2 node processes related to the action server
echo "Checking for running ROS 2 node processes..."
RUNNING_PROCESSES=$(ps -ef | grep "$ACTION_SERVER_NODE" | grep -v grep | grep -v "$$") # Exclude the current script (the $$ variable represents the PID of the current shell)
if [ -n "$RUNNING_PROCESSES" ]; then
    echo "Running ROS 2 processes detected. Terminating..."
    echo "$RUNNING_PROCESSES"
    # Handling possible "no such process" errors by redirecting stderr to /dev/null
    echo "$RUNNING_PROCESSES" | awk '{print $2}' | xargs -r kill -9 2>/dev/null
    sleep 2
else
    echo "No running ROS 2 processes detected."
fi

# Source the workspace
echo "Sourcing workspace..."
source "$WORKSPACE_PATH/install/setup.bash"

# Verify no duplicate action servers are active
echo "Checking if action server $ACTION_NAME is already active..."
ros2 action list | grep -q "$ACTION_NAME"
if [ $? -eq 0 ]; then
    echo "Action server $ACTION_NAME is already running. Exiting."
    exit 1
fi

# Step 1: Launch the Action Server
echo "Launching action server node..."
ros2 run "$PACKAGE_NAME" "$ACTION_SERVER_NODE" > action_server_output.log 2>&1 &
ACTION_SERVER_PID=$!
echo "Action server running with PID: $ACTION_SERVER_PID"

# Give the action server some time to initialize
sleep 3

# Step 2: Send a Goal to the Action Server
echo "Sending test goal to $ACTION_NAME..."
ros2 action send_goal "$ACTION_NAME" "$ACTION_TYPE" "$GOAL" > action_feedback.log 2>&1 &
ACTION_CLIENT_PID=$!
echo "Action client running with PID: $ACTION_CLIENT_PID"

# Wait for the action to complete
sleep 5

# Step 3: Capture Feedback and Result
echo "Action server feedback and result:"
cat action_feedback.log

# Step 4: Validate the Output
EXPECTED_FEEDBACK="some_expected_feedback"
if grep -q "$EXPECTED_FEEDBACK" action_feedback.log; then
    echo "Test Passed: Expected feedback received."
else
    echo "Test Failed: Expected feedback not found."
    echo "Debugging Information:"
    ros2 action list
    ros2 node list
fi

# Step 5: Clean Up
echo "Stopping action server node..."
kill_process "$ACTION_SERVER_PID"

echo "Stopping action client..."
kill_process "$ACTION_CLIENT_PID"

echo "Test completed."
