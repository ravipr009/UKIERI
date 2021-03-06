// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_BOUNDED_END_POSE_PROBLEM_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_BOUNDED_END_POSE_PROBLEM_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreInitializers();
}

namespace exotica
{

class BoundedEndPoseProblemInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/BoundedEndPoseProblem" ;}

    BoundedEndPoseProblemInitializer() : InitializerBase(),
        Debug( false) ,
        Maps( std::vector<exotica::Initializer>()) ,
        StartState( Eigen::VectorXd()) ,
        StartTime( 0) ,
        DerivativeOrder( -1) ,
        Cost( std::vector<exotica::Initializer>()) ,
        W( Eigen::VectorXd()) ,
        LowerBound( Eigen::VectorXd()) ,
        UpperBound( Eigen::VectorXd()) 
    {
    }

    BoundedEndPoseProblemInitializer( std::string _Name, exotica::Initializer _PlanningScene, bool _Debug =  false, std::vector<exotica::Initializer> _Maps =  std::vector<exotica::Initializer>(), Eigen::VectorXd _StartState =  Eigen::VectorXd(), double _StartTime =  0, int _DerivativeOrder =  -1, std::vector<exotica::Initializer> _Cost =  std::vector<exotica::Initializer>(), Eigen::VectorXd _W =  Eigen::VectorXd(), Eigen::VectorXd _LowerBound =  Eigen::VectorXd(), Eigen::VectorXd _UpperBound =  Eigen::VectorXd()) : InitializerBase(),
        Name(_Name) ,
        PlanningScene(_PlanningScene) ,
        Debug(_Debug) ,
        Maps(_Maps) ,
        StartState(_StartState) ,
        StartTime(_StartTime) ,
        DerivativeOrder(_DerivativeOrder) ,
        Cost(_Cost) ,
        W(_W) ,
        LowerBound(_LowerBound) ,
        UpperBound(_UpperBound) 
    {
    }

    BoundedEndPoseProblemInitializer(const Initializer& other) : BoundedEndPoseProblemInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("PlanningScene")) {const Property& prop=other.properties_.at("PlanningScene"); if(prop.IsSet()) PlanningScene = prop.IsInitializerVectorType()?boost::any_cast<std::vector<exotica::Initializer>>(prop.Get()).at(0):boost::any_cast<exotica::Initializer>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("Maps")) {const Property& prop=other.properties_.at("Maps"); if(prop.IsSet()) Maps = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("StartState")) {const Property& prop=other.properties_.at("StartState"); if(prop.IsSet()) StartState = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("StartTime")) {const Property& prop=other.properties_.at("StartTime"); if(prop.IsSet()) StartTime = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("DerivativeOrder")) {const Property& prop=other.properties_.at("DerivativeOrder"); if(prop.IsSet()) DerivativeOrder = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Cost")) {const Property& prop=other.properties_.at("Cost"); if(prop.IsSet()) Cost = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("W")) {const Property& prop=other.properties_.at("W"); if(prop.IsSet()) W = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("LowerBound")) {const Property& prop=other.properties_.at("LowerBound"); if(prop.IsSet()) LowerBound = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("UpperBound")) {const Property& prop=other.properties_.at("UpperBound"); if(prop.IsSet()) UpperBound = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)BoundedEndPoseProblemInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer BoundedEndPoseProblemInitializer requires property Name to be set!");
        if(!other.HasProperty("PlanningScene") || !other.properties_.at("PlanningScene").IsSet()) ThrowPretty("Initializer BoundedEndPoseProblemInitializer requires property PlanningScene to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("PlanningScene", Property("PlanningScene", true, boost::any(PlanningScene)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("Maps", Property("Maps", false, boost::any(Maps)));
        ret.properties_.emplace("StartState", Property("StartState", false, boost::any(StartState)));
        ret.properties_.emplace("StartTime", Property("StartTime", false, boost::any(StartTime)));
        ret.properties_.emplace("DerivativeOrder", Property("DerivativeOrder", false, boost::any(DerivativeOrder)));
        ret.properties_.emplace("Cost", Property("Cost", false, boost::any(Cost)));
        ret.properties_.emplace("W", Property("W", false, boost::any(W)));
        ret.properties_.emplace("LowerBound", Property("LowerBound", false, boost::any(LowerBound)));
        ret.properties_.emplace("UpperBound", Property("UpperBound", false, boost::any(UpperBound)));
        return ret;
    }

    std::string Name;
    exotica::Initializer PlanningScene;
    bool Debug;
    std::vector<exotica::Initializer> Maps;
    Eigen::VectorXd StartState;
    double StartTime;
    int DerivativeOrder;
    std::vector<exotica::Initializer> Cost;
    Eigen::VectorXd W;
    Eigen::VectorXd LowerBound;
    Eigen::VectorXd UpperBound;
};

}

#include<exotica_core/exotica_core_initializers_numerator.h>

#include <exotica_core/scene_initializer.h>

#endif