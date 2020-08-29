// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_TIME_INDEXED_RRT_CONNECT_SOLVER_TIME_INDEXED_RRT_CONNECT_SOLVER_INITIALIZER_H
#define INITIALIZER_EXOTICA_TIME_INDEXED_RRT_CONNECT_SOLVER_TIME_INDEXED_RRT_CONNECT_SOLVER_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaTimeIndexedRrtConnectSolverInitializers();
}

namespace exotica
{

class TimeIndexedRRTConnectSolverInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/TimeIndexedRRTConnectSolver" ;}

    TimeIndexedRRTConnectSolverInitializer() : InitializerBase(),
        Debug( false) ,
        MaxIterations( 100) ,
        Smooth( true) ,
        Timeout( 60.0) ,
        Range( "1") ,
        AddTimeIntoSolution( false) ,
        ValidityCheckResolution( 0.01) ,
        RandomSeed( -1) ,
        TrajectoryPointsPerSecond( 0) 
    {
    }

    TimeIndexedRRTConnectSolverInitializer( std::string _Name, bool _Debug =  false, int _MaxIterations =  100, bool _Smooth =  true, double _Timeout =  60.0, std::string _Range =  "1", bool _AddTimeIntoSolution =  false, double _ValidityCheckResolution =  0.01, int _RandomSeed =  -1, int _TrajectoryPointsPerSecond =  0) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        MaxIterations(_MaxIterations) ,
        Smooth(_Smooth) ,
        Timeout(_Timeout) ,
        Range(_Range) ,
        AddTimeIntoSolution(_AddTimeIntoSolution) ,
        ValidityCheckResolution(_ValidityCheckResolution) ,
        RandomSeed(_RandomSeed) ,
        TrajectoryPointsPerSecond(_TrajectoryPointsPerSecond) 
    {
    }

    TimeIndexedRRTConnectSolverInitializer(const Initializer& other) : TimeIndexedRRTConnectSolverInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("MaxIterations")) {const Property& prop=other.properties_.at("MaxIterations"); if(prop.IsSet()) MaxIterations = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Smooth")) {const Property& prop=other.properties_.at("Smooth"); if(prop.IsSet()) Smooth = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("Timeout")) {const Property& prop=other.properties_.at("Timeout"); if(prop.IsSet()) Timeout = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Range")) {const Property& prop=other.properties_.at("Range"); if(prop.IsSet()) Range = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("AddTimeIntoSolution")) {const Property& prop=other.properties_.at("AddTimeIntoSolution"); if(prop.IsSet()) AddTimeIntoSolution = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("ValidityCheckResolution")) {const Property& prop=other.properties_.at("ValidityCheckResolution"); if(prop.IsSet()) ValidityCheckResolution = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("RandomSeed")) {const Property& prop=other.properties_.at("RandomSeed"); if(prop.IsSet()) RandomSeed = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("TrajectoryPointsPerSecond")) {const Property& prop=other.properties_.at("TrajectoryPointsPerSecond"); if(prop.IsSet()) TrajectoryPointsPerSecond = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)TimeIndexedRRTConnectSolverInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaTimeIndexedRrtConnectSolverInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer TimeIndexedRRTConnectSolverInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("MaxIterations", Property("MaxIterations", false, boost::any(MaxIterations)));
        ret.properties_.emplace("Smooth", Property("Smooth", false, boost::any(Smooth)));
        ret.properties_.emplace("Timeout", Property("Timeout", false, boost::any(Timeout)));
        ret.properties_.emplace("Range", Property("Range", false, boost::any(Range)));
        ret.properties_.emplace("AddTimeIntoSolution", Property("AddTimeIntoSolution", false, boost::any(AddTimeIntoSolution)));
        ret.properties_.emplace("ValidityCheckResolution", Property("ValidityCheckResolution", false, boost::any(ValidityCheckResolution)));
        ret.properties_.emplace("RandomSeed", Property("RandomSeed", false, boost::any(RandomSeed)));
        ret.properties_.emplace("TrajectoryPointsPerSecond", Property("TrajectoryPointsPerSecond", false, boost::any(TrajectoryPointsPerSecond)));
        return ret;
    }

    std::string Name;
    bool Debug;
    int MaxIterations;
    bool Smooth;
    double Timeout;
    std::string Range;
    bool AddTimeIntoSolution;
    double ValidityCheckResolution;
    int RandomSeed;
    int TrajectoryPointsPerSecond;
};

}

#include<exotica_time_indexed_rrt_connect_solver/exotica_time_indexed_rrt_connect_solver_initializers_numerator.h>


#endif