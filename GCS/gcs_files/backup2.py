import rospy
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from math import pow, atan2, sqrt

class TurtleBot:
    def __init__(self):
        self.velocity_publisher = rospy.Publisher('/turtle1/cmd_vel', Twist, queue_size=10)
        self.velocity_subscriber = rospy.Subscriber('/turtle1/pose', Pose, self.update_pose)
        self.pose = Pose()
        self.rate = rospy.Rate(10)

    def update_pose(self, data):
        self.pose = data
        self.pose.x = round(self.pose.x, 4)
        self.pose.y = round(self.pose.y, 4)

    def euclidean_distance(self, goal_pose):
        return sqrt(pow((goal_pose.x - self.pose.x), 2) + pow((goal_pose.y - self.pose.y), 2))

    def linear_vel(self, goal_pose, constant=0.5):
        return constant * self.euclidean_distance(goal_pose)

    def steering_angle(self, goal_pose):
        return atan2(goal_pose.y - self.pose.y, goal_pose.x - self.pose.x)

    def angular_vel(self, goal_pose, constant=4):
        return constant * (self.steering_angle(goal_pose) - self.pose.theta)

    def move2goal(self, goal_pose):
        distance_tolerance = 0.1  # Set your tolerance here

        vel_msg = Twist()

        while self.euclidean_distance(goal_pose) >= distance_tolerance:
            vel_msg.linear.x = self.linear_vel(goal_pose)
            vel_msg.linear.y = 0
            vel_msg.linear.z = 0

            vel_msg.angular.x = 0
            vel_msg.angular.y = 0
            vel_msg.angular.z = self.angular_vel(goal_pose)

            self.velocity_publisher.publish(vel_msg)

            self.rate.sleep()

        vel_msg.linear.x = 0
        vel_msg.angular.z = 0
        self.velocity_publisher.publish(vel_msg)
        
        success_message = 'Reached the goal position successfully.'
        return success_message
 

 <!DOCTYPE html>
<html>
<head>
    <title>Control UGV</title>
    
</head>
<body>
    <h1>Control UGV</h1>
    {% if connected_to_ros %}
        <p>Connected to ROS successfully!</p>
    {% else %}
        <p>Failed to connect to ROS.</p>
    {% endif %}
    <style>
        .table-container {
            position: absolute;
            top: 40px;
            right: 100px;
        }
        .waypoints-title {
            text-align: center;
            font-weight: bold;
            font-size: 25px;
            margin-bottom: 10px;
            margin-top: 0;
        }
        .input-container {
            position: absolute;
            top: 400px; 
            right: 74px;
        }
        table {
            border-collapse: collapse;
            width: 100%;
            background-color: #ddd;
            border: 1px solid black;
        }
    
        th, td {
            text-align: left;
            padding: 4px;
            font-size: 14px;
            border-bottom: 1px solid black;
            border-right: 1px solid black;
        }
        th {
            background-color: lightblue;
            border-top: 1px solid black;
            border-left: 1px solid black;
        }
       
    
        tr:hover {
            background-color: grey ;
        }
    </style>

<div class="input-container">
    <form method="post" action="/control_ugv/">
        {% csrf_token %}
        <label for="turtle-id">TurtleBot ID:</label>
        <input type="number" id="turtle_id" name="turtle_id" >
        <br><br>
        <label for="x-coordinate">X Coordinate:</label>
        <input type="floatformat" id="x-coordinate" name="x-coordinate">
        <br>
        <label for="y-coordinate">Y Coordinate:</label>
        <input type="floatformat" id="y-coordinate" name="y-coordinate">
        <br>
        <br>
        <button type="submit" name="clear_bots">clear-bots</button>
        <button type="submit" name="add_command">Add</button>
        <button type="submit" name="execute_commands">Execute Waypoints</button>
        <button type="submit" name="clear_commands">Clear Waypoints</button>
        <button type="submit" name="add_bot">Add Bot</button>
    </form>

    {% if success_message %}
        <p>{{ success_message }}</p>
    {% endif %}
</div>
    {% if command_list %}
        

        <div class="table-container">
            <p class="waypoints-title">Waypoints</p>
            <table>
            <tr>
                <th>X Coordinate</th>
                <th>Y Coordinate</th>
                <th>Status</th>
            </tr>
            {% for command in command_list %}
                <tr>
                    <td>{{ command.x_coordinate }}</td>
                    <td>{{ command.y_coordinate }}</td>
                    <td>{{ command.success_message }}</td>
                </tr>
            {% endfor %}
            </table>
        </div>
    <div class="input-container">
    {% else %}
        <p>No commands in the list.</p>
    {% endif %}
    </div>
    <div class="table-container">
        <p class="bots-title">Turtle Bots</p>
        <table>
            <tr>
                <th>ID</th>
                <th>Status</th>
            </tr>
            {% for bot in turtle_bots %}
                <tr>
                    <td>{{ bot.id }}</td>
                    
                </tr>
            {% endfor %}
        </table>
    </div>
</body>
</html>
