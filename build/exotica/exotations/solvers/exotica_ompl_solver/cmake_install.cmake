# Install script for directory: /home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ompl_solver/catkin_generated/installspace/exotica_ompl_solver.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_ompl_solver/cmake" TYPE FILE FILES
    "/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ompl_solver/catkin_generated/installspace/exotica_ompl_solverConfig.cmake"
    "/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ompl_solver/catkin_generated/installspace/exotica_ompl_solverConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_ompl_solver" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_ompl_solver" TYPE FILE FILES
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/ompl_solver_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/rrt_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/rrt_connect_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/prm_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/lazy_prm_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/est_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/kpiece_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/bkpiece_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/rrt_star_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/lbt_rrt_initializer.h"
    "/home/ravi/UKIERI/devel/include/exotica_ompl_solver/exotica_ompl_solver_initializers_numerator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_ompl_solver/init" TYPE FILE FILES
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/ompl_solver.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/rrt.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/rrt_connect.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/prm.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/lazy_prm.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/est.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/kpiece.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/bkpiece.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/rrt_star.in"
    "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/init/lbt_rrt.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE MODULE FILES "/home/ravi/UKIERI/devel/lib/python2.7/dist-packages/exotica_ompl_solver_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so"
         OLD_RPATH "/opt/ros/kinetic/lib:/home/ravi/UKIERI/devel/lib:/opt/ros/kinetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/exotica_ompl_solver_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ravi/UKIERI/devel/lib/libexotica_ompl_solver.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so"
         OLD_RPATH "/opt/ros/kinetic/lib:/home/ravi/UKIERI/devel/lib:/opt/ros/kinetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexotica_ompl_solver.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/exotica_ompl_solver" TYPE DIRECTORY FILES "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/exotica_ompl_solver" TYPE FILE FILES "/home/ravi/UKIERI/src/exotica/exotations/solvers/exotica_ompl_solver/exotica_plugins.xml")
endif()

