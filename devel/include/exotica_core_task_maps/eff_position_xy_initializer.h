// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TASK_MAPS_EFF_POSITION_XY_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TASK_MAPS_EFF_POSITION_XY_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers();
}

namespace exotica
{

class EffPositionXYInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/EffPositionXY" ;}

    EffPositionXYInitializer() : InitializerBase(),
        Debug( false) ,
        EndEffector( std::vector<exotica::Initializer>()) 
    {
    }

    EffPositionXYInitializer( std::string _Name, bool _Debug =  false, std::vector<exotica::Initializer> _EndEffector =  std::vector<exotica::Initializer>()) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        EndEffector(_EndEffector) 
    {
    }

    EffPositionXYInitializer(const Initializer& other) : EffPositionXYInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("EndEffector")) {const Property& prop=other.properties_.at("EndEffector"); if(prop.IsSet()) EndEffector = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)EffPositionXYInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreTaskMapsInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer EffPositionXYInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("EndEffector", Property("EndEffector", false, boost::any(EndEffector)));
        return ret;
    }

    std::string Name;
    bool Debug;
    std::vector<exotica::Initializer> EndEffector;
};

}

#include<exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h>

#include <exotica_core/frame_initializer.h>

#endif