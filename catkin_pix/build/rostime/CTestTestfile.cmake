# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/roscpp_core/rostime
# Build directory: /home/rishi/catkin_pix/build/rostime
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rostime_gtest_rostime-test_duration "/home/rishi/catkin_pix/build/rostime/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/rostime/test_results/rostime/gtest-rostime-test_duration.xml" "--return-code" "/home/rishi/catkin_pix/devel/.private/rostime/lib/rostime/rostime-test_duration --gtest_output=xml:/home/rishi/catkin_pix/build/rostime/test_results/rostime/gtest-rostime-test_duration.xml")
set_tests_properties(_ctest_rostime_gtest_rostime-test_duration PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/rishi/catkin_pix/src/roscpp_core/rostime/CMakeLists.txt;35;catkin_add_gtest;/home/rishi/catkin_pix/src/roscpp_core/rostime/CMakeLists.txt;0;")
add_test(_ctest_rostime_gtest_rostime-test_time "/home/rishi/catkin_pix/build/rostime/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/rostime/test_results/rostime/gtest-rostime-test_time.xml" "--return-code" "/home/rishi/catkin_pix/devel/.private/rostime/lib/rostime/rostime-test_time --gtest_output=xml:/home/rishi/catkin_pix/build/rostime/test_results/rostime/gtest-rostime-test_time.xml")
set_tests_properties(_ctest_rostime_gtest_rostime-test_time PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/rishi/catkin_pix/src/roscpp_core/rostime/CMakeLists.txt;39;catkin_add_gtest;/home/rishi/catkin_pix/src/roscpp_core/rostime/CMakeLists.txt;0;")
subdirs("gtest")