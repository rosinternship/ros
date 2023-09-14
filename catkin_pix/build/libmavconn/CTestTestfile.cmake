# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/mavros/libmavconn
# Build directory: /home/rishi/catkin_pix/build/libmavconn
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_libmavconn_gtest_mavconn-test "/home/rishi/catkin_pix/build/libmavconn/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/libmavconn/test_results/libmavconn/gtest-mavconn-test.xml" "--return-code" "/home/rishi/catkin_pix/devel/.private/libmavconn/lib/libmavconn/mavconn-test --gtest_output=xml:/home/rishi/catkin_pix/build/libmavconn/test_results/libmavconn/gtest-mavconn-test.xml")
set_tests_properties(_ctest_libmavconn_gtest_mavconn-test PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/rishi/catkin_pix/src/mavros/libmavconn/CMakeLists.txt;110;catkin_add_gtest;/home/rishi/catkin_pix/src/mavros/libmavconn/CMakeLists.txt;0;")
subdirs("gtest")
