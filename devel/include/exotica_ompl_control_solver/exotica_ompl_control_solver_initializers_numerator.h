// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZE_PROJECT_HEADER_EXOTICA_OMPL_CONTROL_SOLVER_H_$
#define INITIALIZE_PROJECT_HEADER_EXOTICA_OMPL_CONTROL_SOLVER_H_$

#include <exotica_core/property.h>
#include <exotica_ompl_control_solver/ompl_control_solver_initializer.h>
#include <exotica_ompl_control_solver/control_rrt_solver_initializer.h>
#include <exotica_ompl_control_solver/control_kpiece_solver_initializer.h>


namespace exotica
{

inline std::vector<Initializer> GetExoticaOmplControlSolverInitializers()
{
    std::vector<Initializer> ret;
    ret.push_back(OMPLControlSolverInitializer().GetTemplate());
    ret.push_back(ControlRRTSolverInitializer().GetTemplate());
    ret.push_back(ControlKPIECESolverInitializer().GetTemplate());
   return ret;
}

}

#endif
