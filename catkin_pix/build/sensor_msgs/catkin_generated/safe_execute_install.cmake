execute_process(COMMAND "/home/rishi/catkin_pix/build/sensor_msgs/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/rishi/catkin_pix/build/sensor_msgs/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
