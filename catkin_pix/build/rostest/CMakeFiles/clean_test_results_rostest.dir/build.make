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
CMAKE_SOURCE_DIR = /home/rishi/catkin_pix/src/ros_comm/tools/rostest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rishi/catkin_pix/build/rostest

# Utility rule file for clean_test_results_rostest.

# Include the progress variables for this target.
include CMakeFiles/clean_test_results_rostest.dir/progress.make

CMakeFiles/clean_test_results_rostest:
	/usr/bin/python3 /home/rishi/catkin_pix/src/catkin/cmake/test/remove_test_results.py /home/rishi/catkin_pix/build/rostest/test_results/rostest

clean_test_results_rostest: CMakeFiles/clean_test_results_rostest
clean_test_results_rostest: CMakeFiles/clean_test_results_rostest.dir/build.make

.PHONY : clean_test_results_rostest

# Rule to build all files generated by this target.
CMakeFiles/clean_test_results_rostest.dir/build: clean_test_results_rostest

.PHONY : CMakeFiles/clean_test_results_rostest.dir/build

CMakeFiles/clean_test_results_rostest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_rostest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clean_test_results_rostest.dir/clean

CMakeFiles/clean_test_results_rostest.dir/depend:
	cd /home/rishi/catkin_pix/build/rostest && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rishi/catkin_pix/src/ros_comm/tools/rostest /home/rishi/catkin_pix/src/ros_comm/tools/rostest /home/rishi/catkin_pix/build/rostest /home/rishi/catkin_pix/build/rostest /home/rishi/catkin_pix/build/rostest/CMakeFiles/clean_test_results_rostest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clean_test_results_rostest.dir/depend

