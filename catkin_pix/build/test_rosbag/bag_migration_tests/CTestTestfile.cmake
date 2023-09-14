# CMake generated Testfile for 
# Source directory: /home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests
# Build directory: /home/rishi/catkin_pix/build/test_rosbag/bag_migration_tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosbag_nosetests_test.migrate_test.py "/home/rishi/catkin_pix/build/test_rosbag/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag/nosetests-test.migrate_test.py.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag" "/usr/bin/nosetests3 -P --process-timeout=60 /home/rishi/catkin_pix/build/test_rosbag/test/migrate_test.py --with-xunit --xunit-file=/home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag/nosetests-test.migrate_test.py.xml")
set_tests_properties(_ctest_test_rosbag_nosetests_test.migrate_test.py PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;84;catkin_add_nosetests;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;0;")
add_test(_ctest_test_rosbag_rostest_test_random_record.xml "/home/rishi/catkin_pix/build/test_rosbag/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag/rostest-test_random_record.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_record.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_rosbag/test_results\" /home/rishi/catkin_pix/build/test_rosbag/test/random_record.xml ")
set_tests_properties(_ctest_test_rosbag_rostest_test_random_record.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;87;add_rostest;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;0;")
add_test(_ctest_test_rosbag_rostest_test_random_play.xml "/home/rishi/catkin_pix/build/test_rosbag/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag/rostest-test_random_play.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_play.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_rosbag/test_results\" /home/rishi/catkin_pix/build/test_rosbag/test/random_play.xml ")
set_tests_properties(_ctest_test_rosbag_rostest_test_random_play.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;94;add_rostest;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;0;")
add_test(_ctest_test_rosbag_rostest_test_random_play_sim.xml "/home/rishi/catkin_pix/build/test_rosbag/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py" "/home/rishi/catkin_pix/build/test_rosbag/test_results/test_rosbag/rostest-test_random_play_sim.xml" "--return-code" "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_random_play_sim.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_rosbag/test_results\" /home/rishi/catkin_pix/build/test_rosbag/test/random_play_sim.xml ")
set_tests_properties(_ctest_test_rosbag_rostest_test_random_play_sim.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/rishi/catkin_pix/src/catkin/cmake/test/tests.cmake;160;add_test;/home/rishi/catkin_pix/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;98;add_rostest;/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/CMakeLists.txt;0;")