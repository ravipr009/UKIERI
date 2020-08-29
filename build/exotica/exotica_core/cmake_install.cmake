# Install script for directory: /home/ravi/UKIERI/src/exotica/exotica_core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ravi/UKIERI/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_core" TYPE FILE FILES
    "/home/ravi/UKIERI/devel/include/exotica_core/task_map_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/object_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/frame_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/link_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/attach_link_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/motion_solver_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/planning_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/scene_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/trajectory_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/unconstrained_time_indexed_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/unconstrained_end_pose_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/sampling_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/time_indexed_sampling_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/task_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/time_indexed_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/end_pose_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/bounded_time_indexed_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/bounded_end_pose_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/dynamic_time_indexed_shooting_problem_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/dynamics_solver_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core/exotica_core_initializers_numerator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/init" TYPE FILE FILES
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/task_map.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/object.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/frame.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/link.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/attach_link.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/motion_solver.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/planning_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/scene.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/trajectory.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/unconstrained_time_indexed_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/unconstrained_end_pose_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/sampling_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/time_indexed_sampling_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/task.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/time_indexed_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/end_pose_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/bounded_time_indexed_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/bounded_end_pose_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/dynamic_time_indexed_shooting_problem.in"
    "/home/ravi/UKIERI/src/exotica/exotica_core/init/dynamics_solver.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ravi/UKIERI/build/exotica/exotica_core/catkin_generated/installspace/exotica_core.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/cmake" TYPE FILE FILES
    "/home/ravi/UKIERI/src/exotica/exotica_core/cmake/exotica.cmake"
    "/home/ravi/UKIERI/src/exotica/exotica_core/cmake/add_initializer.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/cmake" TYPE FILE FILES
    "/home/ravi/UKIERI/build/exotica/exotica_core/catkin_generated/installspace/exotica_coreConfig.cmake"
    "/home/ravi/UKIERI/build/exotica/exotica_core/catkin_generated/installspace/exotica_coreConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotica_core/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ravi/UKIERI/devel/lib/libexotica_core.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so"
         OLD_RPATH "/opt/ros/kinetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_core" TYPE DIRECTORY FILES "/home/ravi/UKIERI/src/exotica/exotica_core/include/exotica_core/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/cmake/" TYPE DIRECTORY FILES "/home/ravi/UKIERI/src/exotica/exotica_core/cmake/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/cmake" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotica_core/cmake/initializer_project_header.h.in")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core/cmake" TYPE PROGRAM FILES "/home/ravi/UKIERI/src/exotica/exotica_core/cmake/generate_initializers.py")
endif()

