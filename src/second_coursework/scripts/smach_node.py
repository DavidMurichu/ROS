#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Pose
import smach
import smach_ros
import time

class PatrolState(smach.State):
    def __init__(self):
        smach.State.__init__(self, outcomes=['patrol_done'])
        self.node = rclpy.create_node('patrol_state')

    def execute(self, userdata):
        self.node.get_logger().info('Patrolling...')
        time.sleep(2)  # Simulate patrolling
        return 'patrol_done'

class NavigationState(smach.State):
    def __init__(self):
        smach.State.__init__(self, outcomes=['nav_done'])
        self.node = rclpy.create_node('navigation_state')

    def execute(self, userdata):
        self.node.get_logger().info('Navigating to points in the room...')
        time.sleep(2)  # Simulate navigation
        return 'nav_done'

class DetectionState(smach.State):
    def __init__(self):
        smach.State.__init__(self, outcomes=['detection_done'])
        self.node = rclpy.create_node('detection_state')

    def execute(self, userdata):
        self.node.get_logger().info('Detecting people and animals...')
        time.sleep(2)  # Simulate detection
        return 'detection_done'

class ReturnState(smach.State):
    def __init__(self):
        smach.State.__init__(self, outcomes=['return_done'])
        self.node = rclpy.create_node('return_state')

    def execute(self, userdata):
        self.node.get_logger().info('Returning to room E...')
        time.sleep(2)  # Simulate returning
        return 'return_done'

def main(args=None):
    rclpy.init(args=args)

    # Create a SMACH state machine
    sm = smach.StateMachine(outcomes=['succeeded', 'aborted', 'preempted'])
    with sm:
        smach.StateMachine.add('PATROL', PatrolState(), transitions={'patrol_done': 'NAVIGATE'})
        smach.StateMachine.add('NAVIGATE', NavigationState(), transitions={'nav_done': 'DETECT'})
        smach.StateMachine.add('DETECT', DetectionState(), transitions={'detection_done': 'RETURN'})
        smach.StateMachine.add('RETURN', ReturnState(), transitions={'return_done': 'succeeded'})

    # Create and start the introspection server
    sis = smach_ros.IntrospectionServer('smach_server', sm, '/SM_ROOT')
    sis.start()

    # Execute the state machine
    outcome = sm.execute()

    # Wait for ctrl-c to stop the application
    rclpy.spin()
    sis.stop()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
