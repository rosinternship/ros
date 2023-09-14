import rospy
from . import turtle_movement

from django import forms
from django.http import HttpResponseRedirect
from django.shortcuts import render, reverse
import threading


# Initialize ROS node
rospy.init_node('web_control', anonymous=True)
bot_list = []
# Homepage
def index(request):

    # This clause gets executed if we click on add-bot or clear-bot
    if request.method == "POST":
        # If the user clicks on "add-bot"
        if "Add bot" in request.POST:
            turtle_id = len(bot_list)
            topic = f'/turtle{turtle_id}/cmd_vel'
            bot_data = {"id": turtle_id, "topic": topic, "bot": turtle_movement.TurtleBot(turtle_id, topic), "waypoints": []}
            bot_list.append(bot_data)

            return HttpResponseRedirect(reverse("index"))
        
        elif "Clear bots" in request.POST:
            bot_list.clear()
        
        elif "execute_all" in request.POST:
            execute_all()
        
    # This gets executed when the request method is GET
    return render(request, "control/index.html", {
        "bot_list": bot_list,
        "length": len(bot_list)
    })

def bot_page(request, botid):
    if request.method == "POST":
        if 'Add Waypoint' in request.POST:
            x_coordinate = float(request.POST.get('x-coordinate'))
            y_coordinate = float(request.POST.get('y-coordinate'))
            coordinate = (x_coordinate, y_coordinate)
            bot_list[botid]["waypoints"].append(coordinate)
        
        elif 'clear_commands' in request.POST:
            # Clear the command list
             bot_list[botid]["waypoints"].clear()
        
        elif 'execute' in request.POST:
            execute(botid)

    return render(request, "control/botpage.html", {
        "bot": bot_list[botid],
    })

def execute(botid):
    robot = bot_list[botid]["bot"]
    waypoints = bot_list[botid]["waypoints"]

    for point in waypoints:
        turtle_movement.TurtleBot.move2goal(robot, point)



def execute_all():
    threads = []
    for bot_id, bot_data in enumerate(bot_list):
        thread = threading.Thread(target=execute, args=(bot_id,))
        threads.append(thread)
        thread.start()

    # Wait for all threads to finish
    for thread in threads:
        thread.join()
