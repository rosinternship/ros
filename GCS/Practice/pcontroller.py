import rospy
import math
import tf
from time import time as t
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

TOLERANCE = 0.1
LINEAR_VELOCITY = 0.1
ANGULAR_TOLERANCE = 0.8


class TurtleBot():
    def __init__(self):
        rospy.init_node("nodeskdfjhkdfhs")
        self.id=id
        self.velocity_publisher = rospy.Publisher("/cmd_vel", Twist, queue_size=10)
        self.pose_subscriber = rospy.Subscriber("/odom", Odometry, self.update_odometry)
        self.odom = Odometry()
        self.rate = rospy.Rate(10)
        self.pose = None

    def update_odometry(self, odom_data):
        # self.odom.pose.pose.position.x = round(odom_data.pose.pose.position.x, 6)
        # self.odom.pose.pose.position.y = round(odom_data.pose.pose.position.y, 6)
        quaternion = (self.odom.pose.pose.orientation.x,self.odom.pose.pose.orientation.y,self.odom.pose.pose.orientation.z,self.odom.pose.pose.orientation.w)
        self.pose = [odom_data.pose.pose.position.x, odom_data.pose.pose.position.y, tf.transformations.euler_from_quaternion(quaternion)[2]]

    # def get_coordinate(self):
    #     return (self.odom.pose.pose.position.x, self.odom.pose.pose.position.y)

    # def get_orientation(self):
    #     quaternion = (self.odom.pose.pose.orientation.x,self.odom.pose.pose.orientation.y,self.odom.pose.pose.orientation.z,self.odom.pose.pose.orientation.w)
    #     euler = tf.transformations.euler_from_quaternion(quaternion)
    #     yaw = euler[2]

        # return yaw    

    def euclidean_distance(self, goal):
        return ((goal[0] - self.pose[0])**2 + (goal[1] - self.pose[1])**2)**0.5

    
    def steering_angle(self ,waypoint):
        angle = round(math.atan2(waypoint[1] - self.pose[1], waypoint[0] - self.pose[0]), 6)
        angle = angle - self.get_orientation()

        return angle
    
    # def angular_vel(self,waypoint,constant=0.3):
    #     return constant * self.steering_angle(waypoint)

    # def linear_vel(self, waypoint,constant=0.01):
    #     return constant * self.euclidean_distance(waypoint)
    
    def move2goal(self):
        
        x = float(input("Set your x goal: "))
        y = float(input("Set your y goal: "))

        waypoint = (x, y)

        distance_tolerance = round(float(input("Set your tolerance: ")), 6)

        vel_msg = Twist()

        while self.euclidean_distance(waypoint) >= distance_tolerance:

            vel_msg.linear.x = 0.5 * self.euclidean_distance(waypoint)
            vel_msg.linear.y = 0
            vel_msg.linear.z = 0

            vel_msg.angular.x = 0
            vel_msg.angular.y = 0
            vel_msg.angular.z = 0.5 * self.steering_angle(waypoint)

            print(vel_msg.angular.)


            self.velocity_publisher.publish(vel_msg)

            self.rate.sleep()

       
        vel_msg.linear.x = 0
        vel_msg.angular.z = 0
        self.velocity_publisher.publish(vel_msg)

        
        rospy.spin()


def main():
    robot = TurtleBot()
    robot.move2goal()
main()