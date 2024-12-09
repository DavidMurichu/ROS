#!/bin/bash

# Define paths and variables
WORKSPACE_PATH=/root/assignment_ws
PACKAGE_NAME=second_coursework
NODE_NAME=emergency_subscriber
TOPIC_NAME=/emergency
MESSAGE_TYPE=second_coursework/msg/EmergencyMsg
TEST_MESSAGE="{description: 'Fire detected', duration: 10.0}"

# Source the workspace
echo "Sourcing workspace..."
source "$WORKSPACE_PATH/install/setup.bash"

# Step 1: Launch subscriber in the background
echo "Launching subscriber node..."
ros2 run "$PACKAGE_NAME" "$NODE_NAME" > subscriber_output.log 2>&1 &
SUBSCRIBER_PID=$!
echo "Subscriber node running with PID: $SUBSCRIBER_PID"

# Give the subscriber some time to initialize
sleep 3

# Step 2: Publish a test message
echo "Publishing test message to $TOPIC_NAME..."
ros2 topic pub "$TOPIC_NAME" "$MESSAGE_TYPE" "$TEST_MESSAGE" --once

# Wait a moment for the message to be processed
sleep 2

# Step 3: Capture and display the subscriber output
echo "Subscriber output:"
cat subscriber_output.log

# Clean up the background subscriber process
echo "Stopping subscriber node..."
kill $SUBSCRIBER_PID
