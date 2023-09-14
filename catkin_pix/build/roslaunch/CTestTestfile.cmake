# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/ros_comm/tools/roslaunch
# Build directory: /home/rishi/catkin_pix/build/roslaunch
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_roslaunch_nosetests_test.unit "/home/rishi/catkin_pix/build/roslaunch/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/roslaunch/test_results/roslaunch/nosetests-test.unit.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/rishi/catkin_pix/build/roslaunch/test_results/roslaunch" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/rishi/catkin_pix/src/ros_comm/tools/roslaunch/test/unit --with-xunit --xunit-file=/home/rishi/catkin_pix/build/roslaunch/test_results/roslaunch/nosetests-test.unit.xml")
set_tests_properties(_ctest_roslaunch_nosetests_test.unit PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/tools/roslaunch/CMakeLists.txt;26;catkin_add_nosetests;/home/rishi/catkin_pix/src/ros_comm/tools/roslaunch/CMakeLists.txt;0;")
subdirs("gtest")
