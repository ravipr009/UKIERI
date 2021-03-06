// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_IK_SOLVER_IK_SOLVER_INITIALIZER_H
#define INITIALIZER_EXOTICA_IK_SOLVER_IK_SOLVER_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaIkSolverInitializers();
}

namespace exotica
{

class IKSolverInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/IKSolver" ;}

    IKSolverInitializer() : InitializerBase(),
        Debug( false) ,
        MaxIterations( 100) ,
        Tolerance( 1e-5) ,
        Convergence( 0.0) ,
        MaxStep( 0.5) ,
        C( 0.0) ,
        Alpha( Eigen::VectorXd::Ones(1)) 
    {
    }

    IKSolverInitializer( std::string _Name, bool _Debug =  false, int _MaxIterations =  100, double _Tolerance =  1e-5, double _Convergence =  0.0, double _MaxStep =  0.5, double _C =  0.0, Eigen::VectorXd _Alpha =  Eigen::VectorXd::Ones(1)) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        MaxIterations(_MaxIterations) ,
        Tolerance(_Tolerance) ,
        Convergence(_Convergence) ,
        MaxStep(_MaxStep) ,
        C(_C) ,
        Alpha(_Alpha) 
    {
    }

    IKSolverInitializer(const Initializer& other) : IKSolverInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("MaxIterations")) {const Property& prop=other.properties_.at("MaxIterations"); if(prop.IsSet()) MaxIterations = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Tolerance")) {const Property& prop=other.properties_.at("Tolerance"); if(prop.IsSet()) Tolerance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Convergence")) {const Property& prop=other.properties_.at("Convergence"); if(prop.IsSet()) Convergence = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("MaxStep")) {const Property& prop=other.properties_.at("MaxStep"); if(prop.IsSet()) MaxStep = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("C")) {const Property& prop=other.properties_.at("C"); if(prop.IsSet()) C = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Alpha")) {const Property& prop=other.properties_.at("Alpha"); if(prop.IsSet()) Alpha = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)IKSolverInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaIkSolverInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer IKSolverInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("MaxIterations", Property("MaxIterations", false, boost::any(MaxIterations)));
        ret.properties_.emplace("Tolerance", Property("Tolerance", false, boost::any(Tolerance)));
        ret.properties_.emplace("Convergence", Property("Convergence", false, boost::any(Convergence)));
        ret.properties_.emplace("MaxStep", Property("MaxStep", false, boost::any(MaxStep)));
        ret.properties_.emplace("C", Property("C", false, boost::any(C)));
        ret.properties_.emplace("Alpha", Property("Alpha", false, boost::any(Alpha)));
        return ret;
    }

    std::string Name;
    bool Debug;
    int MaxIterations;
    double Tolerance;
    double Convergence;
    double MaxStep;
    double C;
    Eigen::VectorXd Alpha;
};

}

#include<exotica_ik_solver/exotica_ik_solver_initializers_numerator.h>


#endif