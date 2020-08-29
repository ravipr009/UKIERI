# Install script for directory: /home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_core_task_maps" TYPE FILE FILES
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/avoid_look_at_sphere_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/center_of_mass_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/continuous_joint_pose_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/interaction_mesh_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_position_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_position_xy_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_orientation_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_frame_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/frame_with_axis_and_direction_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/frame_with_box_limits_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_axis_alignment_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_box_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/eff_velocity_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/gaze_at_constraint_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_limit_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_torque_minimization_proxy_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_velocity_limit_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/distance_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/point_to_line_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_pose_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/sphere_collision_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/sphere_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/collision_check_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/point_to_plane_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/quasi_static_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_velocity_limit_constraint_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_velocity_backward_difference_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_acceleration_backward_difference_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/joint_jerk_backward_difference_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/look_at_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/manipulability_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/collision_distance_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/smooth_collision_distance_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/sum_of_penetrations_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core_task_maps/init" TYPE FILE FILES
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/avoid_look_at_sphere.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/center_of_mass.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/continuous_joint_pose.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/interaction_mesh.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_position.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_position_xy.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_orientation.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_frame.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/frame_with_axis_and_direction.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/frame_with_box_limits.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_axis_alignment.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_box.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/eff_velocity.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/gaze_at_constraint.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_limit.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_torque_minimization_proxy.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_velocity_limit.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/distance.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/point_to_line.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_pose.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/sphere_collision.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/sphere.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/collision_check.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/point_to_plane.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/quasi_static.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_velocity_limit_constraint.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_velocity_backward_difference.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_acceleration_backward_difference.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/joint_jerk_backward_difference.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/look_at.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/manipulability.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/collision_distance.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/smooth_collision_distance.in"
    "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/init/sum_of_penetrations.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ravi/UKIERI/build/exotica/exotations/exotica_core_task_maps/catkin_generated/installspace/exotica_core_task_maps.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core_task_maps/cmake" TYPE FILE FILES
    "/home/ravi/UKIERI/build/exotica/exotations/exotica_core_task_maps/catkin_generated/installspace/exotica_core_task_mapsConfig.cmake"
    "/home/ravi/UKIERI/build/exotica/exotations/exotica_core_task_maps/catkin_generated/installspace/exotica_core_task_mapsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core_task_maps" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ravi/UKIERI/devel/lib/libexotica_core_task_maps.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so"
         OLD_RPATH "/home/ravi/UKIERI/devel/lib:/opt/ros/kinetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_core_task_maps.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_core_task_maps" TYPE DIRECTORY FILES "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/include/exotica_core_task_maps/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_core_task_maps" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotations/exotica_core_task_maps/exotica_plugins.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE MODULE FILES "/home/ravi/UKIERI/devel/lib/python2.7/dist-packages/exotica_core_task_maps_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so"
         OLD_RPATH "/opt/ros/kinetic/lib:/home/ravi/UKIERI/devel/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_core_task_maps_py.so")
    endif()
  endif()
endif()

