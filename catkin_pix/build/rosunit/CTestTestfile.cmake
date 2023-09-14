# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/ros/tools/rosunit
# Build directory: /home/rishi/catkin_pix/build/rosunit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosunit_nosetests_test "/home/rishi/catkin_pix/build/rosunit/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/rosunit/test_results/rosunit/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/rishi/catkin_pix/build/rosunit/test_results/rosunit" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/rishi/catkin_pix/src/ros/tools/rosunit/test --with-xunit --xunit-file=/home/rishi/catkin_pix/build/rosunit/test_results/rosunit/nosetests-test.xml")
set_tests_properties(_ctest_rosunit_nosetests_test PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros/tools/rosunit/CMakeLists.txt;17;catkin_add_nosetests;/home/rishi/catkin_pix/src/ros/tools/rosunit/CMakeLists.txt;0;")
subdirs("gtest")
