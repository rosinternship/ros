# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/ros_comm/test/test_rosgraph
# Build directory: /home/rishi/catkin_pix/build/test_rosgraph
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosgraph_rostest_test_masterapi.test "/home/rishi/catkin_pix/build/test_rosgraph/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rosgraph/test_results/test_rosgraph/rostest-test_masterapi.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_rosgraph --package=test_rosgraph --results-filename test_masterapi.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_rosgraph/test_results\" /home/rishi/catkin_pix/src/ros_comm/test/test_rosgraph/test/masterapi.test ")
set_tests_properties(_ctest_test_rosgraph_rostest_test_masterapi.test PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rosgraph/CMakeLists.txt;8;add_rostest;/home/rishi/catkin_pix/src/ros_comm/test/test_rosgraph/CMakeLists.txt;0;")
subdirs("gtest")
