import rospy
import math
import tf
from time import time as t
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

TOLERANCE = 0.1
LINEAR_VELOCITY = 0.1
ANGULAR_TOLERANCE = 0.8

def main():
    robot = TurtleBot()
    robot.move2goal()

class TurtleBot():
    def __init__(self):
        rospy.init_node("nodeskdfjhkdfhs")
        self.id=id
        self.velocity_publisher = rospy.Publisher("/cmd_vel", Twist, queue_size=10)
        self.pose_subscriber = rospy.Subscriber("/odom", Odometry, self.update_odometry)
        self.odom = Odometry()
        self.rate = rospy.Rate(10)

    def update_odometry(self, odom_data):
        self.odom.pose.pose.position.x = round(odom_data.pose.pose.position.x, 6)
        self.odom.pose.pose.position.y = round(odom_data.pose.pose.position.y, 6)

        quaternion = [odom_data.pose.pose.orientation.x,odom_data.pose.pose.orientation.y,odom_data.pose.pose.orientation.z,odom_data.pose.pose.orientation.w]
        # print(quaternion)
        self.pose = [odom_data.pose.pose.position.x, odom_data.pose.pose.position.y, tf.transformations.euler_from_quaternion(quaternion)[2]]

    def get_coordinate(self):
        return (self.odom.pose.pose.position.x, self.odom.pose.pose.position.y)

    def get_orientation(self):
        # quaternion = [self.odom.pose.pose.orientation.x,self.odom.pose.pose.orientation.y,self.odom.pose.pose.orientation.z,self.odom.pose.pose.orientation.w]
        # euler = tf.transformations.euler_from_quaternion(quaternion)

        # # print(quaternion, euler)
        # yaw = euler[2]
        # print(self.pose)
        yaw = self.pose[2]
        # yaw= math.radians(90) - yaw 
       # Assuming yaw is in radians and you want to wrap it between -π and π
        # if yaw > math.pi:
        #     yaw -= 2 * math.pi
        # elif yaw < -math.pi:
        #     yaw += 2 * math.pi
        
        # print(yaw)
        return yaw
    

    def euclidean_distance(self, goal):
        return round(math.sqrt(pow((goal[0] - self.get_coordinate()[0]), 2) + pow((goal[1] - self.get_coordinate()[1]), 2)), 6)

    
    def steering_angle(self ,waypoint):
        # print(self.odom.pose.pose.position.y)

        angle = round(math.atan2(waypoint[1] - self.odom.pose.pose.position.y, waypoint[0] - self.odom.pose.pose.position.x), 6)

        # if angle > math.pi:
        #     angle -= 2 * math.pi
        # elif angle < -math.pi:
        #     angle += 2 * math.pi
        # print(angle,angle_X)
        # print(angle)
        # print("Orientation: ")
        print(self.get_orientation())
        angle_X = angle - self.get_orientation()

        if angle_X> math.pi:
            angle_X -= 2 * math.pi
        elif angle_X < -math.pi:
            angle_X += 2 * math.pi

        # print("X: ")
        print(angle_X)

        return angle_X
    
    def angular_vel(self,waypoint,constant=0.5):
        return constant * self.steering_angle(waypoint)

    def linear_vel(self, waypoint,constant=0.2):
        return constant * self.euclidean_distance(waypoint)
    
    def move2goal(self):
        rospy.sleep(1)
        
        # while True:
        #     print(self.pose[2])
        x = float(input("Set your x goal: "))
        y = float(input("Set your y goal: "))

        waypoint = (x, y)


        distance_tolerance = round(float(input("Set your tolerance: ")), 6)

        vel_msg = Twist()

        while self.euclidean_distance(waypoint) >= distance_tolerance:

            vel_msg.linear.x = self.linear_vel(waypoint)
            vel_msg.linear.y = 0
            vel_msg.linear.z = 0

            vel_msg.angular.x = 0
            vel_msg.angular.y = 0
            vel_msg.angular.z = self.angular_vel(waypoint)
            # print(vel_msg.angular.z)


            self.velocity_publisher.publish(vel_msg)

            self.rate.sleep()

       
        vel_msg.linear.x = 0
        vel_msg.angular.z = 0
        self.velocity_publisher.publish(vel_msg)
        # print(self.pose[2])
        rospy.signal_shutdown("Done")
        
        rospy.spin()


main()