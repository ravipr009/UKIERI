// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TASK_MAPS_SPHERE_COLLISION_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TASK_MAPS_SPHERE_COLLISION_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers();
}

namespace exotica
{

class SphereCollisionInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/SphereCollision" ;}

    SphereCollisionInitializer() : InitializerBase(),
        Debug( false) ,
        EndEffector( std::vector<exotica::Initializer>()) ,
        ReferenceFrame( "/world") ,
        Alpha( 1.0) 
    {
    }

    SphereCollisionInitializer( std::string _Name, double _Precision, bool _Debug =  false, std::vector<exotica::Initializer> _EndEffector =  std::vector<exotica::Initializer>(), std::string _ReferenceFrame =  "/world", double _Alpha =  1.0) : InitializerBase(),
        Name(_Name) ,
        Precision(_Precision) ,
        Debug(_Debug) ,
        EndEffector(_EndEffector) ,
        ReferenceFrame(_ReferenceFrame) ,
        Alpha(_Alpha) 
    {
    }

    SphereCollisionInitializer(const Initializer& other) : SphereCollisionInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Precision")) {const Property& prop=other.properties_.at("Precision"); if(prop.IsSet()) Precision = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("EndEffector")) {const Property& prop=other.properties_.at("EndEffector"); if(prop.IsSet()) EndEffector = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("ReferenceFrame")) {const Property& prop=other.properties_.at("ReferenceFrame"); if(prop.IsSet()) ReferenceFrame = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Alpha")) {const Property& prop=other.properties_.at("Alpha"); if(prop.IsSet()) Alpha = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)SphereCollisionInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreTaskMapsInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer SphereCollisionInitializer requires property Name to be set!");
        if(!other.HasProperty("Precision") || !other.properties_.at("Precision").IsSet()) ThrowPretty("Initializer SphereCollisionInitializer requires property Precision to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Precision", Property("Precision", true, boost::any(Precision)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("EndEffector", Property("EndEffector", false, boost::any(EndEffector)));
        ret.properties_.emplace("ReferenceFrame", Property("ReferenceFrame", false, boost::any(ReferenceFrame)));
        ret.properties_.emplace("Alpha", Property("Alpha", false, boost::any(Alpha)));
        return ret;
    }

    std::string Name;
    double Precision;
    bool Debug;
    std::vector<exotica::Initializer> EndEffector;
    std::string ReferenceFrame;
    double Alpha;
};

}

#include<exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h>

#include <exotica_core/frame_initializer.h>

#endif