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

# Utility rule file for _run_tests_test_roscpp_gtest_test_roscpp-serialization.

# Include the progress variables for this target.
include test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/progress.make

test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization:
	cd /home/rishi/catkin_pix/build/test_roscpp/test_serialization && ../catkin_generated/env_cached.sh /usr/bin/python3 /home/rishi/catkin_pix/src/catkin/cmake/test/run_tests.py /home/rishi/catkin_pix/build/test_roscpp/test_results/test_roscpp/gtest-test_roscpp-serialization.xml "/home/rishi/catkin_pix/devel/.private/test_roscpp/lib/test_roscpp/test_roscpp-serialization --gtest_output=xml:/home/rishi/catkin_pix/build/test_roscpp/test_results/test_roscpp/gtest-test_roscpp-serialization.xml"

_run_tests_test_roscpp_gtest_test_roscpp-serialization: test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization
_run_tests_test_roscpp_gtest_test_roscpp-serialization: test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/build.make

.PHONY : _run_tests_test_roscpp_gtest_test_roscpp-serialization

# Rule to build all files generated by this target.
test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/build: _run_tests_test_roscpp_gtest_test_roscpp-serialization

.PHONY : test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/build

test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/clean:
	cd /home/rishi/catkin_pix/build/test_roscpp/test_serialization && $(CMAKE_COMMAND) -P CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/cmake_clean.cmake
.PHONY : test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/clean

test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/depend:
	cd /home/rishi/catkin_pix/build/test_roscpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp /home/rishi/catkin_pix/src/ros_comm/test/test_roscpp/test_serialization /home/rishi/catkin_pix/build/test_roscpp /home/rishi/catkin_pix/build/test_roscpp/test_serialization /home/rishi/catkin_pix/build/test_roscpp/test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test_serialization/CMakeFiles/_run_tests_test_roscpp_gtest_test_roscpp-serialization.dir/depend

