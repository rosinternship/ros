# Install script for directory: /home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/rishi/catkin_pix/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_rosbag/msg_current" TYPE FILE FILES
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/Converged.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/MigratedAddSub.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/MigratedExplicit.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/MigratedImplicit.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/MigratedMixed.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/PartiallyMigrated.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/Simple.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/SimpleMigrated.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/SubUnmigrated.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/Unmigrated.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/Constants.msg"
    "/home/rishi/catkin_pix/src/ros_comm/test/test_rosbag/bag_migration_tests/msg_current/Renamed5.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/test_rosbag/cmake" TYPE FILE FILES "/home/rishi/catkin_pix/build/test_rosbag/bag_migration_tests/catkin_generated/installspace/test_rosbag-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/rishi/catkin_pix/devel/.private/test_rosbag/include/test_rosbag")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/rishi/catkin_pix/devel/.private/test_rosbag/share/roseus/ros/test_rosbag")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/rishi/catkin_pix/devel/.private/test_rosbag/share/common-lisp/ros/test_rosbag")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/rishi/catkin_pix/devel/.private/test_rosbag/share/gennodejs/ros/test_rosbag")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/rishi/catkin_pix/devel/.private/test_rosbag/lib/python3/dist-packages/test_rosbag")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/rishi/catkin_pix/devel/.private/test_rosbag/lib/python3/dist-packages/test_rosbag")
endif()

