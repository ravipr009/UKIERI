// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TIME_INDEXED_PROBLEM_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TIME_INDEXED_PROBLEM_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreInitializers();
}

namespace exotica
{

class TimeIndexedProblemInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/TimeIndexedProblem" ;}

    TimeIndexedProblemInitializer() : InitializerBase(),
        Debug( false) ,
        Maps( std::vector<exotica::Initializer>()) ,
        StartState( Eigen::VectorXd()) ,
        StartTime( 0) ,
        DerivativeOrder( -1) ,
        Wrate( 1.0) ,
        W( Eigen::VectorXd()) ,
        Cost( std::vector<exotica::Initializer>()) ,
        Inequality( std::vector<exotica::Initializer>()) ,
        Equality( std::vector<exotica::Initializer>()) ,
        LowerBound( Eigen::VectorXd()) ,
        UpperBound( Eigen::VectorXd()) ,
        UseBounds( true) ,
        InequalityFeasibilityTolerance( 1e-5) ,
        EqualityFeasibilityTolerance( 1e-5) ,
        JointVelocityLimits( Eigen::VectorXd::Constant(1, -1)) 
    {
    }

    TimeIndexedProblemInitializer( std::string _Name, exotica::Initializer _PlanningScene, int _T, double _tau, bool _Debug =  false, std::vector<exotica::Initializer> _Maps =  std::vector<exotica::Initializer>(), Eigen::VectorXd _StartState =  Eigen::VectorXd(), double _StartTime =  0, int _DerivativeOrder =  -1, double _Wrate =  1.0, Eigen::VectorXd _W =  Eigen::VectorXd(), std::vector<exotica::Initializer> _Cost =  std::vector<exotica::Initializer>(), std::vector<exotica::Initializer> _Inequality =  std::vector<exotica::Initializer>(), std::vector<exotica::Initializer> _Equality =  std::vector<exotica::Initializer>(), Eigen::VectorXd _LowerBound =  Eigen::VectorXd(), Eigen::VectorXd _UpperBound =  Eigen::VectorXd(), bool _UseBounds =  true, double _InequalityFeasibilityTolerance =  1e-5, double _EqualityFeasibilityTolerance =  1e-5, Eigen::VectorXd _JointVelocityLimits =  Eigen::VectorXd::Constant(1, -1)) : InitializerBase(),
        Name(_Name) ,
        PlanningScene(_PlanningScene) ,
        T(_T) ,
        tau(_tau) ,
        Debug(_Debug) ,
        Maps(_Maps) ,
        StartState(_StartState) ,
        StartTime(_StartTime) ,
        DerivativeOrder(_DerivativeOrder) ,
        Wrate(_Wrate) ,
        W(_W) ,
        Cost(_Cost) ,
        Inequality(_Inequality) ,
        Equality(_Equality) ,
        LowerBound(_LowerBound) ,
        UpperBound(_UpperBound) ,
        UseBounds(_UseBounds) ,
        InequalityFeasibilityTolerance(_InequalityFeasibilityTolerance) ,
        EqualityFeasibilityTolerance(_EqualityFeasibilityTolerance) ,
        JointVelocityLimits(_JointVelocityLimits) 
    {
    }

    TimeIndexedProblemInitializer(const Initializer& other) : TimeIndexedProblemInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("PlanningScene")) {const Property& prop=other.properties_.at("PlanningScene"); if(prop.IsSet()) PlanningScene = prop.IsInitializerVectorType()?boost::any_cast<std::vector<exotica::Initializer>>(prop.Get()).at(0):boost::any_cast<exotica::Initializer>(prop.Get());}
        if (other.HasProperty("T")) {const Property& prop=other.properties_.at("T"); if(prop.IsSet()) T = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("tau")) {const Property& prop=other.properties_.at("tau"); if(prop.IsSet()) tau = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("Maps")) {const Property& prop=other.properties_.at("Maps"); if(prop.IsSet()) Maps = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("StartState")) {const Property& prop=other.properties_.at("StartState"); if(prop.IsSet()) StartState = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("StartTime")) {const Property& prop=other.properties_.at("StartTime"); if(prop.IsSet()) StartTime = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("DerivativeOrder")) {const Property& prop=other.properties_.at("DerivativeOrder"); if(prop.IsSet()) DerivativeOrder = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Wrate")) {const Property& prop=other.properties_.at("Wrate"); if(prop.IsSet()) Wrate = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("W")) {const Property& prop=other.properties_.at("W"); if(prop.IsSet()) W = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Cost")) {const Property& prop=other.properties_.at("Cost"); if(prop.IsSet()) Cost = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("Inequality")) {const Property& prop=other.properties_.at("Inequality"); if(prop.IsSet()) Inequality = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("Equality")) {const Property& prop=other.properties_.at("Equality"); if(prop.IsSet()) Equality = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("LowerBound")) {const Property& prop=other.properties_.at("LowerBound"); if(prop.IsSet()) LowerBound = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("UpperBound")) {const Property& prop=other.properties_.at("UpperBound"); if(prop.IsSet()) UpperBound = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("UseBounds")) {const Property& prop=other.properties_.at("UseBounds"); if(prop.IsSet()) UseBounds = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("InequalityFeasibilityTolerance")) {const Property& prop=other.properties_.at("InequalityFeasibilityTolerance"); if(prop.IsSet()) InequalityFeasibilityTolerance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("EqualityFeasibilityTolerance")) {const Property& prop=other.properties_.at("EqualityFeasibilityTolerance"); if(prop.IsSet()) EqualityFeasibilityTolerance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("JointVelocityLimits")) {const Property& prop=other.properties_.at("JointVelocityLimits"); if(prop.IsSet()) JointVelocityLimits = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)TimeIndexedProblemInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer TimeIndexedProblemInitializer requires property Name to be set!");
        if(!other.HasProperty("PlanningScene") || !other.properties_.at("PlanningScene").IsSet()) ThrowPretty("Initializer TimeIndexedProblemInitializer requires property PlanningScene to be set!");
        if(!other.HasProperty("T") || !other.properties_.at("T").IsSet()) ThrowPretty("Initializer TimeIndexedProblemInitializer requires property T to be set!");
        if(!other.HasProperty("tau") || !other.properties_.at("tau").IsSet()) ThrowPretty("Initializer TimeIndexedProblemInitializer requires property tau to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("PlanningScene", Property("PlanningScene", true, boost::any(PlanningScene)));
        ret.properties_.emplace("T", Property("T", true, boost::any(T)));
        ret.properties_.emplace("tau", Property("tau", true, boost::any(tau)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("Maps", Property("Maps", false, boost::any(Maps)));
        ret.properties_.emplace("StartState", Property("StartState", false, boost::any(StartState)));
        ret.properties_.emplace("StartTime", Property("StartTime", false, boost::any(StartTime)));
        ret.properties_.emplace("DerivativeOrder", Property("DerivativeOrder", false, boost::any(DerivativeOrder)));
        ret.properties_.emplace("Wrate", Property("Wrate", false, boost::any(Wrate)));
        ret.properties_.emplace("W", Property("W", false, boost::any(W)));
        ret.properties_.emplace("Cost", Property("Cost", false, boost::any(Cost)));
        ret.properties_.emplace("Inequality", Property("Inequality", false, boost::any(Inequality)));
        ret.properties_.emplace("Equality", Property("Equality", false, boost::any(Equality)));
        ret.properties_.emplace("LowerBound", Property("LowerBound", false, boost::any(LowerBound)));
        ret.properties_.emplace("UpperBound", Property("UpperBound", false, boost::any(UpperBound)));
        ret.properties_.emplace("UseBounds", Property("UseBounds", false, boost::any(UseBounds)));
        ret.properties_.emplace("InequalityFeasibilityTolerance", Property("InequalityFeasibilityTolerance", false, boost::any(InequalityFeasibilityTolerance)));
        ret.properties_.emplace("EqualityFeasibilityTolerance", Property("EqualityFeasibilityTolerance", false, boost::any(EqualityFeasibilityTolerance)));
        ret.properties_.emplace("JointVelocityLimits", Property("JointVelocityLimits", false, boost::any(JointVelocityLimits)));
        return ret;
    }

    std::string Name;
    exotica::Initializer PlanningScene;
    int T;
    double tau;
    bool Debug;
    std::vector<exotica::Initializer> Maps;
    Eigen::VectorXd StartState;
    double StartTime;
    int DerivativeOrder;
    double Wrate;
    Eigen::VectorXd W;
    std::vector<exotica::Initializer> Cost;
    std::vector<exotica::Initializer> Inequality;
    std::vector<exotica::Initializer> Equality;
    Eigen::VectorXd LowerBound;
    Eigen::VectorXd UpperBound;
    bool UseBounds;
    double InequalityFeasibilityTolerance;
    double EqualityFeasibilityTolerance;
    Eigen::VectorXd JointVelocityLimits;
};

}

#include<exotica_core/exotica_core_initializers_numerator.h>

#include <exotica_core/scene_initializer.h>

#endif