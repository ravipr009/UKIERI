// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TIME_INDEXED_SAMPLING_PROBLEM_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TIME_INDEXED_SAMPLING_PROBLEM_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreInitializers();
}

namespace exotica
{

class TimeIndexedSamplingProblemInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/TimeIndexedSamplingProblem" ;}

    TimeIndexedSamplingProblemInitializer() : InitializerBase(),
        Debug( false) ,
        Maps( std::vector<exotica::Initializer>()) ,
        StartState( Eigen::VectorXd()) ,
        StartTime( 0) ,
        DerivativeOrder( -1) ,
        Goal( Eigen::VectorXd()) ,
        FloatingBaseLowerLimits( Eigen::VectorXd()) ,
        FloatingBaseUpperLimits( Eigen::VectorXd()) ,
        Inequality( std::vector<exotica::Initializer>()) ,
        Equality( std::vector<exotica::Initializer>()) ,
        ConstraintTolerance( 0.0) ,
        T( 1.0) ,
        GoalTime( -1.0) 
    {
    }

    TimeIndexedSamplingProblemInitializer( std::string _Name, exotica::Initializer _PlanningScene, Eigen::VectorXd _JointVelocityLimits, bool _Debug =  false, std::vector<exotica::Initializer> _Maps =  std::vector<exotica::Initializer>(), Eigen::VectorXd _StartState =  Eigen::VectorXd(), double _StartTime =  0, int _DerivativeOrder =  -1, Eigen::VectorXd _Goal =  Eigen::VectorXd(), Eigen::VectorXd _FloatingBaseLowerLimits =  Eigen::VectorXd(), Eigen::VectorXd _FloatingBaseUpperLimits =  Eigen::VectorXd(), std::vector<exotica::Initializer> _Inequality =  std::vector<exotica::Initializer>(), std::vector<exotica::Initializer> _Equality =  std::vector<exotica::Initializer>(), double _ConstraintTolerance =  0.0, double _T =  1.0, double _GoalTime =  -1.0) : InitializerBase(),
        Name(_Name) ,
        PlanningScene(_PlanningScene) ,
        JointVelocityLimits(_JointVelocityLimits) ,
        Debug(_Debug) ,
        Maps(_Maps) ,
        StartState(_StartState) ,
        StartTime(_StartTime) ,
        DerivativeOrder(_DerivativeOrder) ,
        Goal(_Goal) ,
        FloatingBaseLowerLimits(_FloatingBaseLowerLimits) ,
        FloatingBaseUpperLimits(_FloatingBaseUpperLimits) ,
        Inequality(_Inequality) ,
        Equality(_Equality) ,
        ConstraintTolerance(_ConstraintTolerance) ,
        T(_T) ,
        GoalTime(_GoalTime) 
    {
    }

    TimeIndexedSamplingProblemInitializer(const Initializer& other) : TimeIndexedSamplingProblemInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("PlanningScene")) {const Property& prop=other.properties_.at("PlanningScene"); if(prop.IsSet()) PlanningScene = prop.IsInitializerVectorType()?boost::any_cast<std::vector<exotica::Initializer>>(prop.Get()).at(0):boost::any_cast<exotica::Initializer>(prop.Get());}
        if (other.HasProperty("JointVelocityLimits")) {const Property& prop=other.properties_.at("JointVelocityLimits"); if(prop.IsSet()) JointVelocityLimits = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("Maps")) {const Property& prop=other.properties_.at("Maps"); if(prop.IsSet()) Maps = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("StartState")) {const Property& prop=other.properties_.at("StartState"); if(prop.IsSet()) StartState = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("StartTime")) {const Property& prop=other.properties_.at("StartTime"); if(prop.IsSet()) StartTime = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("DerivativeOrder")) {const Property& prop=other.properties_.at("DerivativeOrder"); if(prop.IsSet()) DerivativeOrder = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Goal")) {const Property& prop=other.properties_.at("Goal"); if(prop.IsSet()) Goal = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("FloatingBaseLowerLimits")) {const Property& prop=other.properties_.at("FloatingBaseLowerLimits"); if(prop.IsSet()) FloatingBaseLowerLimits = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("FloatingBaseUpperLimits")) {const Property& prop=other.properties_.at("FloatingBaseUpperLimits"); if(prop.IsSet()) FloatingBaseUpperLimits = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Inequality")) {const Property& prop=other.properties_.at("Inequality"); if(prop.IsSet()) Inequality = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("Equality")) {const Property& prop=other.properties_.at("Equality"); if(prop.IsSet()) Equality = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("ConstraintTolerance")) {const Property& prop=other.properties_.at("ConstraintTolerance"); if(prop.IsSet()) ConstraintTolerance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("T")) {const Property& prop=other.properties_.at("T"); if(prop.IsSet()) T = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("GoalTime")) {const Property& prop=other.properties_.at("GoalTime"); if(prop.IsSet()) GoalTime = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)TimeIndexedSamplingProblemInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer TimeIndexedSamplingProblemInitializer requires property Name to be set!");
        if(!other.HasProperty("PlanningScene") || !other.properties_.at("PlanningScene").IsSet()) ThrowPretty("Initializer TimeIndexedSamplingProblemInitializer requires property PlanningScene to be set!");
        if(!other.HasProperty("JointVelocityLimits") || !other.properties_.at("JointVelocityLimits").IsSet()) ThrowPretty("Initializer TimeIndexedSamplingProblemInitializer requires property JointVelocityLimits to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("PlanningScene", Property("PlanningScene", true, boost::any(PlanningScene)));
        ret.properties_.emplace("JointVelocityLimits", Property("JointVelocityLimits", true, boost::any(JointVelocityLimits)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("Maps", Property("Maps", false, boost::any(Maps)));
        ret.properties_.emplace("StartState", Property("StartState", false, boost::any(StartState)));
        ret.properties_.emplace("StartTime", Property("StartTime", false, boost::any(StartTime)));
        ret.properties_.emplace("DerivativeOrder", Property("DerivativeOrder", false, boost::any(DerivativeOrder)));
        ret.properties_.emplace("Goal", Property("Goal", false, boost::any(Goal)));
        ret.properties_.emplace("FloatingBaseLowerLimits", Property("FloatingBaseLowerLimits", false, boost::any(FloatingBaseLowerLimits)));
        ret.properties_.emplace("FloatingBaseUpperLimits", Property("FloatingBaseUpperLimits", false, boost::any(FloatingBaseUpperLimits)));
        ret.properties_.emplace("Inequality", Property("Inequality", false, boost::any(Inequality)));
        ret.properties_.emplace("Equality", Property("Equality", false, boost::any(Equality)));
        ret.properties_.emplace("ConstraintTolerance", Property("ConstraintTolerance", false, boost::any(ConstraintTolerance)));
        ret.properties_.emplace("T", Property("T", false, boost::any(T)));
        ret.properties_.emplace("GoalTime", Property("GoalTime", false, boost::any(GoalTime)));
        return ret;
    }

    std::string Name;
    exotica::Initializer PlanningScene;
    Eigen::VectorXd JointVelocityLimits;
    bool Debug;
    std::vector<exotica::Initializer> Maps;
    Eigen::VectorXd StartState;
    double StartTime;
    int DerivativeOrder;
    Eigen::VectorXd Goal;
    Eigen::VectorXd FloatingBaseLowerLimits;
    Eigen::VectorXd FloatingBaseUpperLimits;
    std::vector<exotica::Initializer> Inequality;
    std::vector<exotica::Initializer> Equality;
    double ConstraintTolerance;
    double T;
    double GoalTime;
};

}

#include<exotica_core/exotica_core_initializers_numerator.h>

#include <exotica_core/scene_initializer.h>

#endif