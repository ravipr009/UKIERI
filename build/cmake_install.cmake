# Install script for directory: /home/ravi/UKIERI/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE PROGRAM FILES "/home/ravi/UKIERI/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE PROGRAM FILES "/home/ravi/UKIERI/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/setup.bash;/home/ravi/UKIERI/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE FILE FILES
    "/home/ravi/UKIERI/build/catkin_generated/installspace/setup.bash"
    "/home/ravi/UKIERI/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/setup.sh;/home/ravi/UKIERI/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE FILE FILES
    "/home/ravi/UKIERI/build/catkin_generated/installspace/setup.sh"
    "/home/ravi/UKIERI/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/setup.zsh;/home/ravi/UKIERI/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE FILE FILES
    "/home/ravi/UKIERI/build/catkin_generated/installspace/setup.zsh"
    "/home/ravi/UKIERI/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/ravi/UKIERI/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/ravi/UKIERI/install" TYPE FILE FILES "/home/ravi/UKIERI/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ravi/UKIERI/build/gtest/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotica/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_dynamics_solvers/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotica_core/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_aico_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_cartpole_dynamics_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/exotica_collision_scene_fcl/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/exotica_collision_scene_fcl_latest/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_double_integrator_dynamics_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ik_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_levenberg_marquardt_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ompl_control_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_pendulum_dynamics_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_pinocchio_dynamics_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotica_python/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/exotica_core_task_maps/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ddp_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotica_examples/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ilqg_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ilqr_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_ompl_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/dynamics_solvers/exotica_quadrotor_dynamics_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_scipy_solver/cmake_install.cmake")
  include("/home/ravi/UKIERI/build/exotica/exotations/solvers/exotica_time_indexed_rrt_connect_solver/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ravi/UKIERI/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
