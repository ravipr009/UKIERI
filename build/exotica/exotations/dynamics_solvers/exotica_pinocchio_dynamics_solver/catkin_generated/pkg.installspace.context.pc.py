# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/kinetic/include;/usr/include/eigen3".split(';') if "${prefix}/include;/opt/ros/kinetic/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "exotica_core".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lexotica_pinocchio_dynamics_solver;-lpinocchio;-lboost_filesystem;-lboost_serialization;-lboost_system;-lurdfdom_sensor;-lurdfdom_model_state;-lurdfdom_model;-lurdfdom_world;-lconsole_bridge".split(';') if "-lexotica_pinocchio_dynamics_solver;-lpinocchio;-lboost_filesystem;-lboost_serialization;-lboost_system;-lurdfdom_sensor;-lurdfdom_model_state;-lurdfdom_model;-lurdfdom_world;-lconsole_bridge" != "" else []
PROJECT_NAME = "exotica_pinocchio_dynamics_solver"
PROJECT_SPACE_DIR = "/home/ravi/UKIERI/install"
PROJECT_VERSION = "0.0.1"
