// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TRAJECTORY_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TRAJECTORY_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreInitializers();
}

namespace exotica
{

class TrajectoryInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/Trajectory" ;}

    TrajectoryInitializer() : InitializerBase(),
        File( "") ,
        Trajectory( "") 
    {
    }

    TrajectoryInitializer( std::string _Link, std::string _File =  "", std::string _Trajectory =  "") : InitializerBase(),
        Link(_Link) ,
        File(_File) ,
        Trajectory(_Trajectory) 
    {
    }

    TrajectoryInitializer(const Initializer& other) : TrajectoryInitializer()
    {
        if (other.HasProperty("Link")) {const Property& prop=other.properties_.at("Link"); if(prop.IsSet()) Link = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("File")) {const Property& prop=other.properties_.at("File"); if(prop.IsSet()) File = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Trajectory")) {const Property& prop=other.properties_.at("Trajectory"); if(prop.IsSet()) Trajectory = boost::any_cast<std::string>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)TrajectoryInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Link") || !other.properties_.at("Link").IsSet()) ThrowPretty("Initializer TrajectoryInitializer requires property Link to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Link", Property("Link", true, boost::any(Link)));
        ret.properties_.emplace("File", Property("File", false, boost::any(File)));
        ret.properties_.emplace("Trajectory", Property("Trajectory", false, boost::any(Trajectory)));
        return ret;
    }

    std::string Link;
    std::string File;
    std::string Trajectory;
};

}

#include<exotica_core/exotica_core_initializers_numerator.h>


#endif