import rospy
import math
from time import time as t
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

TOLERANCE = 1
DELTA = 5
K = 0.1
k1 = 35
LINEAR_VELOCITY = 2
ANGULAR_VELOCITY = 6


class TurtleBot():
    def __init__(self,id,topic):
        self.id=id
        self.topic=topic
        self.velocity_publisher = rospy.Publisher(self.topic, Twist, queue_size=10)
        self.pose_subscriber = rospy.Subscriber('/turtle{}/pose'.format(self.id), Pose, self.update_pose)
        self.pose = Pose()
        self.rate = rospy.Rate(10)

    def update_pose(self, pose_data):
        self.pose = pose_data
        self.pose.x = round(self.pose.x, 4)
        self.pose.y = round(self.pose.y, 4)

    def get_coordinate(self):
        return (self.pose.x, self.pose.y)

    def get_orientation(self):
        return self.pose.theta

    def euclidean_distance(self, goal):
        return math.sqrt(pow((goal[0] - self.pose.x), 2) + pow((goal[1] - self.pose.y), 2))

    def get_waypoint(self):
        x = float(input("Enter x coordinate: "))
        y = float(input("Enter y coordinate: "))
        return (x, y)

    def get_angle(self, point1, point2):
        return math.atan2((point2[1] - point1[1]), (point2[0] - point1[0]))

    def get_time(self):
        t = float(input("Enter time in seconds: "))
        return t

    def move2goal(self, waypoint_2):
        waypoint_1 = self.get_coordinate()
        theta = self.get_angle(waypoint_1, waypoint_2)
        vel_msg = Twist()
        while self.euclidean_distance(waypoint_2) >= TOLERANCE:
            R_u = self.euclidean_distance(waypoint_1)
            current_coordinate = self.get_coordinate()
            phi = self.get_orientation()
            alpha = self.get_angle(waypoint_1, current_coordinate)
            beta = (theta - alpha)
            R = R_u * math.cos(beta)
            x_target = waypoint_1[0] + (R + DELTA) * math.cos(theta)
            y_target = waypoint_1[1] + (R + DELTA) * math.sin(theta)
            target = (x_target, y_target)
            phi_d = self.get_angle(current_coordinate, target)
            phi_dash = phi_d - phi

            vel_msg.linear.x = LINEAR_VELOCITY
            vel_msg.linear.y = 0
            vel_msg.linear.z = 0

            vel_msg.angular.x = 0
            vel_msg.angular.y = 0
            vel_msg.angular.z = ANGULAR_VELOCITY * phi_dash

            self.velocity_publisher.publish(vel_msg)
            self.rate.sleep()

        vel_msg.linear.x = 0
        vel_msg.linear.y = 0
        vel_msg.linear.z = 0

        vel_msg.angular.x = 0
        vel_msg.angular.y = 0
        vel_msg.angular.z = 0

        self.velocity_publisher.publish(vel_msg)
