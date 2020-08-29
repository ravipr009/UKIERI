// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_OMPL_SOLVER_RRT_SOLVER_INITIALIZER_H
#define INITIALIZER_EXOTICA_OMPL_SOLVER_RRT_SOLVER_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaOmplSolverInitializers();
}

namespace exotica
{

class RRTSolverInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/RRTSolver" ;}

    RRTSolverInitializer() : InitializerBase(),
        Debug( false) ,
        MaxIterations( 100) ,
        Smooth( true) ,
        ReduceVertices( true) ,
        ShortcutPath( true) ,
        SimplifyTryCnt( 10) ,
        SimplifyInterpolationLength( 20) ,
        RangeRatio( 0.33) ,
        SnapToVertex( 0.005) ,
        SmoothnessFactor( 1.0) ,
        Timeout( 60.0) ,
        Range( "1") ,
        LongestValidSegmentFraction( 0.01) ,
        UseGoalBias( false) ,
        GoalBias( "0.05") ,
        RandomSeed( -1) ,
        Projection( Eigen::VectorXd()) ,
        Epsilon( 0.01) ,
        FinalInterpolationLength( 0) 
    {
    }

    RRTSolverInitializer( std::string _Name, bool _Debug =  false, int _MaxIterations =  100, bool _Smooth =  true, bool _ReduceVertices =  true, bool _ShortcutPath =  true, int _SimplifyTryCnt =  10, int _SimplifyInterpolationLength =  20, double _RangeRatio =  0.33, double _SnapToVertex =  0.005, double _SmoothnessFactor =  1.0, double _Timeout =  60.0, std::string _Range =  "1", double _LongestValidSegmentFraction =  0.01, bool _UseGoalBias =  false, std::string _GoalBias =  "0.05", int _RandomSeed =  -1, Eigen::VectorXd _Projection =  Eigen::VectorXd(), double _Epsilon =  0.01, int _FinalInterpolationLength =  0) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        MaxIterations(_MaxIterations) ,
        Smooth(_Smooth) ,
        ReduceVertices(_ReduceVertices) ,
        ShortcutPath(_ShortcutPath) ,
        SimplifyTryCnt(_SimplifyTryCnt) ,
        SimplifyInterpolationLength(_SimplifyInterpolationLength) ,
        RangeRatio(_RangeRatio) ,
        SnapToVertex(_SnapToVertex) ,
        SmoothnessFactor(_SmoothnessFactor) ,
        Timeout(_Timeout) ,
        Range(_Range) ,
        LongestValidSegmentFraction(_LongestValidSegmentFraction) ,
        UseGoalBias(_UseGoalBias) ,
        GoalBias(_GoalBias) ,
        RandomSeed(_RandomSeed) ,
        Projection(_Projection) ,
        Epsilon(_Epsilon) ,
        FinalInterpolationLength(_FinalInterpolationLength) 
    {
    }

    RRTSolverInitializer(const Initializer& other) : RRTSolverInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("MaxIterations")) {const Property& prop=other.properties_.at("MaxIterations"); if(prop.IsSet()) MaxIterations = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Smooth")) {const Property& prop=other.properties_.at("Smooth"); if(prop.IsSet()) Smooth = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("ReduceVertices")) {const Property& prop=other.properties_.at("ReduceVertices"); if(prop.IsSet()) ReduceVertices = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("ShortcutPath")) {const Property& prop=other.properties_.at("ShortcutPath"); if(prop.IsSet()) ShortcutPath = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("SimplifyTryCnt")) {const Property& prop=other.properties_.at("SimplifyTryCnt"); if(prop.IsSet()) SimplifyTryCnt = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("SimplifyInterpolationLength")) {const Property& prop=other.properties_.at("SimplifyInterpolationLength"); if(prop.IsSet()) SimplifyInterpolationLength = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("RangeRatio")) {const Property& prop=other.properties_.at("RangeRatio"); if(prop.IsSet()) RangeRatio = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("SnapToVertex")) {const Property& prop=other.properties_.at("SnapToVertex"); if(prop.IsSet()) SnapToVertex = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("SmoothnessFactor")) {const Property& prop=other.properties_.at("SmoothnessFactor"); if(prop.IsSet()) SmoothnessFactor = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Timeout")) {const Property& prop=other.properties_.at("Timeout"); if(prop.IsSet()) Timeout = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Range")) {const Property& prop=other.properties_.at("Range"); if(prop.IsSet()) Range = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("LongestValidSegmentFraction")) {const Property& prop=other.properties_.at("LongestValidSegmentFraction"); if(prop.IsSet()) LongestValidSegmentFraction = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("UseGoalBias")) {const Property& prop=other.properties_.at("UseGoalBias"); if(prop.IsSet()) UseGoalBias = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("GoalBias")) {const Property& prop=other.properties_.at("GoalBias"); if(prop.IsSet()) GoalBias = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("RandomSeed")) {const Property& prop=other.properties_.at("RandomSeed"); if(prop.IsSet()) RandomSeed = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("Projection")) {const Property& prop=other.properties_.at("Projection"); if(prop.IsSet()) Projection = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Epsilon")) {const Property& prop=other.properties_.at("Epsilon"); if(prop.IsSet()) Epsilon = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("FinalInterpolationLength")) {const Property& prop=other.properties_.at("FinalInterpolationLength"); if(prop.IsSet()) FinalInterpolationLength = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)RRTSolverInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaOmplSolverInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer RRTSolverInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("MaxIterations", Property("MaxIterations", false, boost::any(MaxIterations)));
        ret.properties_.emplace("Smooth", Property("Smooth", false, boost::any(Smooth)));
        ret.properties_.emplace("ReduceVertices", Property("ReduceVertices", false, boost::any(ReduceVertices)));
        ret.properties_.emplace("ShortcutPath", Property("ShortcutPath", false, boost::any(ShortcutPath)));
        ret.properties_.emplace("SimplifyTryCnt", Property("SimplifyTryCnt", false, boost::any(SimplifyTryCnt)));
        ret.properties_.emplace("SimplifyInterpolationLength", Property("SimplifyInterpolationLength", false, boost::any(SimplifyInterpolationLength)));
        ret.properties_.emplace("RangeRatio", Property("RangeRatio", false, boost::any(RangeRatio)));
        ret.properties_.emplace("SnapToVertex", Property("SnapToVertex", false, boost::any(SnapToVertex)));
        ret.properties_.emplace("SmoothnessFactor", Property("SmoothnessFactor", false, boost::any(SmoothnessFactor)));
        ret.properties_.emplace("Timeout", Property("Timeout", false, boost::any(Timeout)));
        ret.properties_.emplace("Range", Property("Range", false, boost::any(Range)));
        ret.properties_.emplace("LongestValidSegmentFraction", Property("LongestValidSegmentFraction", false, boost::any(LongestValidSegmentFraction)));
        ret.properties_.emplace("UseGoalBias", Property("UseGoalBias", false, boost::any(UseGoalBias)));
        ret.properties_.emplace("GoalBias", Property("GoalBias", false, boost::any(GoalBias)));
        ret.properties_.emplace("RandomSeed", Property("RandomSeed", false, boost::any(RandomSeed)));
        ret.properties_.emplace("Projection", Property("Projection", false, boost::any(Projection)));
        ret.properties_.emplace("Epsilon", Property("Epsilon", false, boost::any(Epsilon)));
        ret.properties_.emplace("FinalInterpolationLength", Property("FinalInterpolationLength", false, boost::any(FinalInterpolationLength)));
        return ret;
    }

    std::string Name;
    bool Debug;
    int MaxIterations;
    bool Smooth;
    bool ReduceVertices;
    bool ShortcutPath;
    int SimplifyTryCnt;
    int SimplifyInterpolationLength;
    double RangeRatio;
    double SnapToVertex;
    double SmoothnessFactor;
    double Timeout;
    std::string Range;
    double LongestValidSegmentFraction;
    bool UseGoalBias;
    std::string GoalBias;
    int RandomSeed;
    Eigen::VectorXd Projection;
    double Epsilon;
    int FinalInterpolationLength;
};

}

#include<exotica_ompl_solver/exotica_ompl_solver_initializers_numerator.h>


#endif