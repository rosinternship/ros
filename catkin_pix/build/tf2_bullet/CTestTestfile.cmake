# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/geometry2/tf2_bullet
# Build directory: /home/rishi/catkin_pix/build/tf2_bullet
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_tf2_bullet_gtest_test_bullet "/home/rishi/catkin_pix/build/tf2_bullet/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/tf2_bullet/test_results/tf2_bullet/gtest-test_bullet.xml" "--return-code" "/home/rishi/catkin_pix/devel/.private/tf2_bullet/lib/tf2_bullet/test_bullet --gtest_output=xml:/home/rishi/catkin_pix/build/tf2_bullet/test_results/tf2_bullet/gtest-test_bullet.xml")
set_tests_properties(_ctest_tf2_bullet_gtest_test_bullet PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/rishi/catkin_pix/src/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/rishi/catkin_pix/src/geometry2/tf2_bullet/CMakeLists.txt;29;catkin_add_gtest;/home/rishi/catkin_pix/src/geometry2/tf2_bullet/CMakeLists.txt;0;")
subdirs("gtest")
