# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/diagnostics/diagnostic_updater
# Build directory: /home/rishi/catkin_pix/build/diagnostic_updater
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_test.xml "/home/rishi/catkin_pix/build/diagnostic_updater/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/diagnostic_updater/test_results/diagnostic_updater/rostest-test_diagnostic_updater_test.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater --package=diagnostic_updater --results-filename test_diagnostic_updater_test.xml --results-base-dir \"/home/rishi/catkin_pix/build/diagnostic_updater/test_results\" /home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/test/diagnostic_updater_test.xml ")
set_tests_properties(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_test.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;80;add_rostest;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;100;_add_rostest_google_test;/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/CMakeLists.txt;27;add_rostest_gtest;/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
add_test(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_fast_test.xml "/home/rishi/catkin_pix/build/diagnostic_updater/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/diagnostic_updater/test_results/diagnostic_updater/rostest-test_diagnostic_updater_fast_test.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater --package=diagnostic_updater --results-filename test_diagnostic_updater_fast_test.xml --results-base-dir \"/home/rishi/catkin_pix/build/diagnostic_updater/test_results\" /home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/test/diagnostic_updater_fast_test.xml ")
set_tests_properties(_ctest_diagnostic_updater_rostest_test_diagnostic_updater_fast_test.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/CMakeLists.txt;28;add_rostest;/home/rishi/catkin_pix/src/diagnostics/diagnostic_updater/CMakeLists.txt;0;")
subdirs("gtest")