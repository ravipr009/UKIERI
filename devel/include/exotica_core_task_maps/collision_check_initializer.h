// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TASK_MAPS_COLLISION_CHECK_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TASK_MAPS_COLLISION_CHECK_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers();
}

namespace exotica
{

class CollisionCheckInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/CollisionCheck" ;}

    CollisionCheckInitializer() : InitializerBase(),
        Debug( false) ,
        EndEffector( std::vector<exotica::Initializer>()) ,
        SelfCollision( false) ,
        SafeDistance( 0.0) 
    {
    }

    CollisionCheckInitializer( std::string _Name, bool _Debug =  false, std::vector<exotica::Initializer> _EndEffector =  std::vector<exotica::Initializer>(), bool _SelfCollision =  false, double _SafeDistance =  0.0) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        EndEffector(_EndEffector) ,
        SelfCollision(_SelfCollision) ,
        SafeDistance(_SafeDistance) 
    {
    }

    CollisionCheckInitializer(const Initializer& other) : CollisionCheckInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("EndEffector")) {const Property& prop=other.properties_.at("EndEffector"); if(prop.IsSet()) EndEffector = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("SelfCollision")) {const Property& prop=other.properties_.at("SelfCollision"); if(prop.IsSet()) SelfCollision = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("SafeDistance")) {const Property& prop=other.properties_.at("SafeDistance"); if(prop.IsSet()) SafeDistance = prop.IsStringType()?ParseDouble(boost::any_cast<std::string>(prop.Get())):boost::any_cast<double>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)CollisionCheckInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreTaskMapsInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer CollisionCheckInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("EndEffector", Property("EndEffector", false, boost::any(EndEffector)));
        ret.properties_.emplace("SelfCollision", Property("SelfCollision", false, boost::any(SelfCollision)));
        ret.properties_.emplace("SafeDistance", Property("SafeDistance", false, boost::any(SafeDistance)));
        return ret;
    }

    std::string Name;
    bool Debug;
    std::vector<exotica::Initializer> EndEffector;
    bool SelfCollision;
    double SafeDistance;
};

}

#include<exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h>

#include <exotica_core/frame_initializer.h>

#endif