// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TASK_MAPS_INTERACTION_MESH_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TASK_MAPS_INTERACTION_MESH_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers();
}

namespace exotica
{

class InteractionMeshInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/InteractionMesh" ;}

    InteractionMeshInitializer() : InitializerBase(),
        Debug( false) ,
        EndEffector( std::vector<exotica::Initializer>()) ,
        ReferenceFrame( "/world") ,
        Weights( Eigen::VectorXd()) 
    {
    }

    InteractionMeshInitializer( std::string _Name, bool _Debug =  false, std::vector<exotica::Initializer> _EndEffector =  std::vector<exotica::Initializer>(), std::string _ReferenceFrame =  "/world", Eigen::VectorXd _Weights =  Eigen::VectorXd()) : InitializerBase(),
        Name(_Name) ,
        Debug(_Debug) ,
        EndEffector(_EndEffector) ,
        ReferenceFrame(_ReferenceFrame) ,
        Weights(_Weights) 
    {
    }

    InteractionMeshInitializer(const Initializer& other) : InteractionMeshInitializer()
    {
        if (other.HasProperty("Name")) {const Property& prop=other.properties_.at("Name"); if(prop.IsSet()) Name = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Debug")) {const Property& prop=other.properties_.at("Debug"); if(prop.IsSet()) Debug = prop.IsStringType()?ParseBool(boost::any_cast<std::string>(prop.Get())):boost::any_cast<bool>(prop.Get());}
        if (other.HasProperty("EndEffector")) {const Property& prop=other.properties_.at("EndEffector"); if(prop.IsSet()) EndEffector = boost::any_cast<std::vector<exotica::Initializer>>(prop.Get());}
        if (other.HasProperty("ReferenceFrame")) {const Property& prop=other.properties_.at("ReferenceFrame"); if(prop.IsSet()) ReferenceFrame = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("Weights")) {const Property& prop=other.properties_.at("Weights"); if(prop.IsSet()) Weights = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)InteractionMeshInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreTaskMapsInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Name") || !other.properties_.at("Name").IsSet()) ThrowPretty("Initializer InteractionMeshInitializer requires property Name to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Name", Property("Name", true, boost::any(Name)));
        ret.properties_.emplace("Debug", Property("Debug", false, boost::any(Debug)));
        ret.properties_.emplace("EndEffector", Property("EndEffector", false, boost::any(EndEffector)));
        ret.properties_.emplace("ReferenceFrame", Property("ReferenceFrame", false, boost::any(ReferenceFrame)));
        ret.properties_.emplace("Weights", Property("Weights", false, boost::any(Weights)));
        return ret;
    }

    std::string Name;
    bool Debug;
    std::vector<exotica::Initializer> EndEffector;
    std::string ReferenceFrame;
    Eigen::VectorXd Weights;
};

}

#include<exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h>

#include <exotica_core/frame_initializer.h>

#endif