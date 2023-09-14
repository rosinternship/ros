import rospy
from std_srvs.srv import Empty
from geometry_msgs.msg import PoseStamped
from actionlib import SimpleActionClient
from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

def navigate_to_goal(x, y, theta):
    goal = MoveBaseGoal()
    goal.target_pose.header.frame_id = 'map'
    goal.target_pose.pose.position.x = x
    goal.target_pose.pose.position.y = y
    goal.target_pose.pose.orientation.z = theta

    client = SimpleActionClient('/move_base', MoveBaseAction)
    client.wait_for_server()
    client.send_goal(goal)
    client.wait_for_result()

if __name__ == '__main__':
    try:
        rospy.init_node('turtlebot3_navigation_demo')
        goal_x = float(input('Enter the goal X coordinate: '))
        goal_y = float(input('Enter the goal Y coordinate: '))
        goal_theta = float(input('Enter the goal orientation (in radians): '))

        navigate_to_goal(goal_x, goal_y, goal_theta)
    except rospy.ROSInterruptException:
        pass