// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_ILQR_SOLVER_ILQR_SOLVER_INITIALIZER_H
#define INITIALIZER_EXOTICA_ILQR_SOLVER_ILQR_SOLVER_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaIlqrSolverInitializers();
}

namespace exotica
{

class ILQRSolverInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/ILQRSolver" ;}

    ILQRSolverInitializer() : InitializerBase(),
        Debug( false) ,
        MaxIterations( 100) ,
        FunctionTolerancePatience( 10) ,
        FunctionTolerance( 1e-3) ,
        RegularizationRate( 1e-5) 
    {
    }

    ILQRSolverInitializer( std::string _Name, bool _Debug =  false, int _MaxIterations =  100, int _FunctionTolerancePatience =  10, double _FunctionTolerance =  1e-3, double _RegularizationRate =  1e-5) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        MaxIterations(_MaxIterations) ,
        FunctionTolerancePatience(_FunctionTolerancePatience) ,
        FunctionTolerance(_FunctionTolerance) ,
        RegularizationRate(_RegularizationRate) 
    {
    }

    ILQRSolverInitializer(const Initializer& other) : ILQRSolverInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("MaxIterations")) {const Property& prop=other.properties_.at("MaxIterations"); if(prop.IsSet()) MaxIterations = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("FunctionTolerancePatience")) {const Property& prop=other.properties_.at("FunctionTolerancePatience"); if(prop.IsSet()) FunctionTolerancePatience = prop.IsStringType()?ParseInt(boost::any_cast<std::string>(prop.Get())):boost::any_cast<int>(prop.Get());}
        if (other.HasProperty("FunctionTolerance")) {const Property& prop=other.properties_.at("FunctionTolerance"); if(prop.IsSet()) FunctionTolerance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("RegularizationRate")) {const Property& prop=other.properties_.at("RegularizationRate"); if(prop.IsSet()) RegularizationRate = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)ILQRSolverInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaIlqrSolverInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer ILQRSolverInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("MaxIterations", Property("MaxIterations", false, boost::any(MaxIterations)));
        ret.properties_.emplace("FunctionTolerancePatience", Property("FunctionTolerancePatience", false, boost::any(FunctionTolerancePatience)));
        ret.properties_.emplace("FunctionTolerance", Property("FunctionTolerance", false, boost::any(FunctionTolerance)));
        ret.properties_.emplace("RegularizationRate", Property("RegularizationRate", false, boost::any(RegularizationRate)));
        return ret;
    }

    std::string Name;
    bool Debug;
    int MaxIterations;
    int FunctionTolerancePatience;
    double FunctionTolerance;
    double RegularizationRate;
};

}

#include<exotica_ilqr_solver/exotica_ilqr_solver_initializers_numerator.h>


#endif