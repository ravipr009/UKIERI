// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZE_PROJECT_HEADER_EXOTICA_CORE_TASK_MAPS_H_$
#define INITIALIZE_PROJECT_HEADER_EXOTICA_CORE_TASK_MAPS_H_$

#include <exotica_core/property.h>
#include <exotica_core_task_maps/avoid_look_at_sphere_initializer.h>
#include <exotica_core_task_maps/center_of_mass_initializer.h>
#include <exotica_core_task_maps/continuous_joint_pose_initializer.h>
#include <exotica_core_task_maps/interaction_mesh_initializer.h>
#include <exotica_core_task_maps/eff_position_initializer.h>
#include <exotica_core_task_maps/eff_position_xy_initializer.h>
#include <exotica_core_task_maps/eff_orientation_initializer.h>
#include <exotica_core_task_maps/eff_frame_initializer.h>
#include <exotica_core_task_maps/frame_with_axis_and_direction_initializer.h>
#include <exotica_core_task_maps/frame_with_box_limits_initializer.h>
#include <exotica_core_task_maps/eff_axis_alignment_initializer.h>
#include <exotica_core_task_maps/eff_box_initializer.h>
#include <exotica_core_task_maps/eff_velocity_initializer.h>
#include <exotica_core_task_maps/gaze_at_constraint_initializer.h>
#include <exotica_core_task_maps/joint_limit_initializer.h>
#include <exotica_core_task_maps/joint_torque_minimization_proxy_initializer.h>
#include <exotica_core_task_maps/joint_velocity_limit_initializer.h>
#include <exotica_core_task_maps/distance_initializer.h>
#include <exotica_core_task_maps/point_to_line_initializer.h>
#include <exotica_core_task_maps/joint_pose_initializer.h>
#include <exotica_core_task_maps/sphere_collision_initializer.h>
#include <exotica_core_task_maps/sphere_initializer.h>
#include <exotica_core_task_maps/collision_check_initializer.h>
#include <exotica_core_task_maps/point_to_plane_initializer.h>
#include <exotica_core_task_maps/quasi_static_initializer.h>
#include <exotica_core_task_maps/joint_velocity_limit_constraint_initializer.h>
#include <exotica_core_task_maps/joint_velocity_backward_difference_initializer.h>
#include <exotica_core_task_maps/joint_acceleration_backward_difference_initializer.h>
#include <exotica_core_task_maps/joint_jerk_backward_difference_initializer.h>
#include <exotica_core_task_maps/look_at_initializer.h>
#include <exotica_core_task_maps/manipulability_initializer.h>
#include <exotica_core_task_maps/collision_distance_initializer.h>
#include <exotica_core_task_maps/smooth_collision_distance_initializer.h>
#include <exotica_core_task_maps/sum_of_penetrations_initializer.h>


namespace exotica
{

inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers()
{
    std::vector<Initializer> ret;
    ret.push_back(AvoidLookAtSphereInitializer().GetTemplate());
    ret.push_back(CenterOfMassInitializer().GetTemplate());
    ret.push_back(ContinuousJointPoseInitializer().GetTemplate());
    ret.push_back(InteractionMeshInitializer().GetTemplate());
    ret.push_back(EffPositionInitializer().GetTemplate());
    ret.push_back(EffPositionXYInitializer().GetTemplate());
    ret.push_back(EffOrientationInitializer().GetTemplate());
    ret.push_back(EffFrameInitializer().GetTemplate());
    ret.push_back(FrameWithAxisAndDirectionInitializer().GetTemplate());
    ret.push_back(FrameWithBoxLimitsInitializer().GetTemplate());
    ret.push_back(EffAxisAlignmentInitializer().GetTemplate());
    ret.push_back(EffBoxInitializer().GetTemplate());
    ret.push_back(EffVelocityInitializer().GetTemplate());
    ret.push_back(GazeAtConstraintInitializer().GetTemplate());
    ret.push_back(JointLimitInitializer().GetTemplate());
    ret.push_back(JointTorqueMinimizationProxyInitializer().GetTemplate());
    ret.push_back(JointVelocityLimitInitializer().GetTemplate());
    ret.push_back(DistanceInitializer().GetTemplate());
    ret.push_back(PointToLineInitializer().GetTemplate());
    ret.push_back(JointPoseInitializer().GetTemplate());
    ret.push_back(SphereCollisionInitializer().GetTemplate());
    ret.push_back(SphereInitializer().GetTemplate());
    ret.push_back(CollisionCheckInitializer().GetTemplate());
    ret.push_back(PointToPlaneInitializer().GetTemplate());
    ret.push_back(QuasiStaticInitializer().GetTemplate());
    ret.push_back(JointVelocityLimitConstraintInitializer().GetTemplate());
    ret.push_back(JointVelocityBackwardDifferenceInitializer().GetTemplate());
    ret.push_back(JointAccelerationBackwardDifferenceInitializer().GetTemplate());
    ret.push_back(JointJerkBackwardDifferenceInitializer().GetTemplate());
    ret.push_back(LookAtInitializer().GetTemplate());
    ret.push_back(ManipulabilityInitializer().GetTemplate());
    ret.push_back(CollisionDistanceInitializer().GetTemplate());
    ret.push_back(SmoothCollisionDistanceInitializer().GetTemplate());
    ret.push_back(SumOfPenetrationsInitializer().GetTemplate());
   return ret;
}

}

#endif
