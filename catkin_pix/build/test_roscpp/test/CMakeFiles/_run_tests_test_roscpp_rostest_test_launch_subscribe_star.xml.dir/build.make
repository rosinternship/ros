# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rishi/catkin_pix/build/test_roscpp

# Utility rule file for _run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.

# Include the progress variables for this target.
include test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/progress.make

test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml:
	cd /home/rishi/catkin_pix/build/test_roscpp/test && ../catkin_generated/env_cached.sh /usr/bin/python3 /home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py /home/rishi/catkin_pix/build/test_roscpp/test_results/test_roscpp/rostest-test_launch_subscribe_star.xml "/usr/bin/python3 /home/rishi/catkin_pix/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/rishi/catkin_pix/src/ros_comm/test/test_roscpp --package=test_roscpp --results-filename test_launch_subscribe_star.xml --results-base-dir \"/home/rishi/catkin_pix/build/test_roscpp/test_results\" /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp/test/launch/subscribe_star.xml "

_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml: test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml
_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml: test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/build.make

.PHONY : _run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml

# Rule to build all files generated by this target.
test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/build: _run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml

.PHONY : test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/build

test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/clean:
	cd /home/rishi/catkin_pix/build/test_roscpp/test && $(CMAKE_COMMAND) -P CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/clean

test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/depend:
	cd /home/rishi/catkin_pix/build/test_roscpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp/test /home/rishi/catkin_pix/build/test_roscpp /home/rishi/catkin_pix/build/test_roscpp/test /home/rishi/catkin_pix/build/test_roscpp/test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/_run_tests_test_roscpp_rostest_test_launch_subscribe_star.xml.dir/depend
