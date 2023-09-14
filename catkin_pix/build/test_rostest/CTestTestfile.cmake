# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/ros_comm/test/test_rostest
# Build directory: /home/rishi/catkin_pix/build/test_rostest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rostest_rostest_test_publishtest.test "/home/rishi/catkin_pix/build/test_rostest/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rostest/test_results/test_rostest/rostest-test_publishtest.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_rostest --package=test_rostest --results-filename test_publishtest.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_rostest/test_results\" /home/rishi/catkin_pix/src/ros_comm/test/test_rostest/test/publishtest.test ")
set_tests_properties(_ctest_test_rostest_rostest_test_publishtest.test PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rostest/CMakeLists.txt;10;add_rostest;/home/rishi/catkin_pix/src/ros_comm/test/test_rostest/CMakeLists.txt;0;")
subdirs("gtest")
