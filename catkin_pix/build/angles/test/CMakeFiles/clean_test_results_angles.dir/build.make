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
CMAKE_SOURCE_DIR = /home/rishi/catkin_pix/src/angles/angles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rishi/catkin_pix/build/angles

# Utility rule file for clean_test_results_angles.

# Include the progress variables for this target.
include test/CMakeFiles/clean_test_results_angles.dir/progress.make

test/CMakeFiles/clean_test_results_angles:
	cd /home/rishi/catkin_pix/build/angles/test && /usr/bin/python3 /home/rishi/catkin_pix/src/catkin/cmake/test/remove_test_results.py /home/rishi/catkin_pix/build/angles/test_results/angles

clean_test_results_angles: test/CMakeFiles/clean_test_results_angles
clean_test_results_angles: test/CMakeFiles/clean_test_results_angles.dir/build.make

.PHONY : clean_test_results_angles

# Rule to build all files generated by this target.
test/CMakeFiles/clean_test_results_angles.dir/build: clean_test_results_angles

.PHONY : test/CMakeFiles/clean_test_results_angles.dir/build

test/CMakeFiles/clean_test_results_angles.dir/clean:
	cd /home/rishi/catkin_pix/build/angles/test && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_angles.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/clean_test_results_angles.dir/clean

test/CMakeFiles/clean_test_results_angles.dir/depend:
	cd /home/rishi/catkin_pix/build/angles && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rishi/catkin_pix/src/angles/angles /home/rishi/catkin_pix/src/angles/angles/test /home/rishi/catkin_pix/build/angles /home/rishi/catkin_pix/build/angles/test /home/rishi/catkin_pix/build/angles/test/CMakeFiles/clean_test_results_angles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/clean_test_results_angles.dir/depend

