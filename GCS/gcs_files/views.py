# Import the necessary modules and classes
import rospy
from django.shortcuts import render
from gcs.turtle_movement import TurtleBot
from turtlesim.msg import Pose
from django.http import HttpResponse
import _json

# Initialize ROS node
rospy.init_node('web_control', anonymous=True)




def control_ugv(request):
    try:
        # Establish a WebSocket connection with the ROSbridge server
        connected_to_ros = True
    except Exception as e:
        connected_to_ros = False

    # Get the command_list from the session or initialize it as an empty list

    
    command_list = request.session.get('command_list', [])
    turtle_bots_data= request.session.get('turtle_bots_data', [])

    
    # Prepare the context data to be passed to the template
    context = {
        'connected_to_ros': connected_to_ros,
        'command_list': command_list,
        "bot_list": turtle_bots_data
    }

    if request.method == 'POST':
        if 'add_command' in request.POST:
            x_coordinate = request.POST.get('x-coordinate')
            y_coordinate = request.POST.get('y-coordinate')
            success_message='Not reached'
            # Perform any necessary data processing or validation

            if x_coordinate is not None and y_coordinate is not None:
                # Create a command dictionary
                try:
                    # Convert the coordinates to float
                    x_coordinate = float(x_coordinate)
                    y_coordinate = float(y_coordinate)

                    # Create a command dictionary
                    command = {
                        'x_coordinate': x_coordinate,
                        'y_coordinate': y_coordinate,
                        'success_message':success_message
                    }

                    # Add the command to the command list
                    command_list.append(command)
                except ValueError:
                    # Handle the case when the coordinates cannot be converted to float
                    context['error_message'] = 'Invalid coordinates'
                print(command_list)
        
        elif 'execute_commands' in request.POST:
            turtle_ids =request.POST.get('turtle_id')
            turtle_bots=[]
            for data in turtle_bots_data:
                turtle_bot = TurtleBot(id=data['id'], topic=data['topic'])
                turtle_bots.append(turtle_bot)
            print(turtle_bots)
            for bots in turtle_bots:
                print(bots.id)
            for bots in turtle_bots:
                if bots.id==2:
                    print("hello1")
            print(turtle_ids)
            selected_turtle_bot = None
            for bots in turtle_bots:
                if bots.id == int(turtle_ids):
                    print('hello')
                    selected_turtle_bot = bots
                    
            print(selected_turtle_bot.id)
                
            

            # Execute the commands in the command list
            for command in command_list:
                print('Entering Loop')
                
                x1_coordinate = command['x_coordinate']
                y1_coordinate = command['y_coordinate']

               
                
                
                # Convert the input coordinates to the desired format for your existing code
                start_x = 0.0  # Set the starting x-coordinate of the turtle
                start_y = 0.0  # Set the starting y-coordinate of the turtle
                end_x = float(x1_coordinate)  # Convert the input to a float
                end_y = float(y1_coordinate) # Convert the input to a float

                # Create a goal pose
                goal_pose = Pose()
                goal_pose.x = end_x
                goal_pose.y = end_y
                waypoint=[end_x,end_y]

                # Call the move2goal method with the goal pose
                success_message = selected_turtle_bot.move2goal(waypoint)

                # Update the success message in the command dictionary
                command['success_message'] = success_message
                turtle_bots.clear()

            # Set the success message to indicate completion of executing commands
        
                # ... existing code ...
            
            # Clear the command_list in the session after executing the commands


            # Set the success message to indicate completion of executing commands
            context['success_message'] = 'All commands executed successfully'

        elif 'add_bot' in request.POST:
            turtle_id = len(turtle_bots_data) + 1

            # Generate a unique topic based on the turtle ID
            topic = f'/turtle{turtle_id}/cmd_vel'

            # Create a TurtleBot instance with the unique ID and topic
            data={'id':turtle_id,'topic':topic}
              # Save the TurtleBot instance in the database
            
            turtle_bots_data.append(data)
            # Append the TurtleBot instance to the list of TurtleBots
            
            
            
        

        elif 'clear_commands' in request.POST:
            # Clear the command list
            command_list.clear()

            # Set the success message to indicate clearing of the command list
            context['success_message'] = 'Command list cleared successfully'
        elif 'clear_bots' in request.POST:
            turtle_bots_data.clear()
        
        
        
        request.session['command_list'] = command_list
        request.session['turtle_bots_data'] = turtle_bots_data
        print(turtle_bots_data)
    
    return render(request, 'control_ugv.html', context)  
       
       
       
   
