// This file was automatically generated. Do not edit this file!
#ifndef INITIALIZER_EXOTICA_CORE_TASK_MAPS_FRAME_WITH_AXIS_AND_DIRECTION_INITIALIZER_H
#define INITIALIZER_EXOTICA_CORE_TASK_MAPS_FRAME_WITH_AXIS_AND_DIRECTION_INITIALIZER_H

#include <exotica_core/property.h>

namespace exotica
{
inline std::vector<Initializer> GetExoticaCoreTaskMapsInitializers();
}

namespace exotica
{

class FrameWithAxisAndDirectionInitializer : public InitializerBase
{
public:
    static std::string GetContainerName() {return "exotica/FrameWithAxisAndDirection" ;}

    FrameWithAxisAndDirectionInitializer() : InitializerBase(),
        LinkOffset( Eigen::IdentityTransform()) ,
        Base( "") ,
        BaseOffset( Eigen::IdentityTransform()) ,
        Axis( Eigen::Array3d(1,0,0)) ,
        Direction( Eigen::Array3d(1,0,0)) 
    {
    }

    FrameWithAxisAndDirectionInitializer( std::string _Link, Eigen::VectorXd _LinkOffset =  Eigen::IdentityTransform(), std::string _Base =  "", Eigen::VectorXd _BaseOffset =  Eigen::IdentityTransform(), Eigen::VectorXd _Axis =  Eigen::Array3d(1,0,0), Eigen::VectorXd _Direction =  Eigen::Array3d(1,0,0)) : InitializerBase(),
        Link(_Link) ,
        LinkOffset(_LinkOffset) ,
        Base(_Base) ,
        BaseOffset(_BaseOffset) ,
        Axis(_Axis) ,
        Direction(_Direction) 
    {
    }

    FrameWithAxisAndDirectionInitializer(const Initializer& other) : FrameWithAxisAndDirectionInitializer()
    {
        if (other.HasProperty("Link")) {const Property& prop=other.properties_.at("Link"); if(prop.IsSet()) Link = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("LinkOffset")) {const Property& prop=other.properties_.at("LinkOffset"); if(prop.IsSet()) LinkOffset = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Base")) {const Property& prop=other.properties_.at("Base"); if(prop.IsSet()) Base = boost::any_cast<std::string>(prop.Get());}
        if (other.HasProperty("BaseOffset")) {const Property& prop=other.properties_.at("BaseOffset"); if(prop.IsSet()) BaseOffset = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Axis")) {const Property& prop=other.properties_.at("Axis"); if(prop.IsSet()) Axis = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
        if (other.HasProperty("Direction")) {const Property& prop=other.properties_.at("Direction"); if(prop.IsSet()) Direction = prop.IsStringType()?ParseVector<double,Eigen::Dynamic>(boost::any_cast<std::string>(prop.Get())):boost::any_cast<Eigen::VectorXd>(prop.Get());}
    }

    virtual Initializer GetTemplate() const
    {
        return (Initializer)FrameWithAxisAndDirectionInitializer();
    }

    virtual std::vector<Initializer> GetAllTemplates() const
    {
        return GetExoticaCoreTaskMapsInitializers();
    }

    virtual void Check(const Initializer& other) const
    {
        if(!other.HasProperty("Link") || !other.properties_.at("Link").IsSet()) ThrowPretty("Initializer FrameWithAxisAndDirectionInitializer requires property Link to be set!");
    }

    operator Initializer()
    {
        Initializer ret(GetContainerName());
        ret.properties_.emplace("Link", Property("Link", true, boost::any(Link)));
        ret.properties_.emplace("LinkOffset", Property("LinkOffset", false, boost::any(LinkOffset)));
        ret.properties_.emplace("Base", Property("Base", false, boost::any(Base)));
        ret.properties_.emplace("BaseOffset", Property("BaseOffset", false, boost::any(BaseOffset)));
        ret.properties_.emplace("Axis", Property("Axis", false, boost::any(Axis)));
        ret.properties_.emplace("Direction", Property("Direction", false, boost::any(Direction)));
        return ret;
    }

    std::string Link;
    Eigen::VectorXd LinkOffset;
    std::string Base;
    Eigen::VectorXd BaseOffset;
    Eigen::VectorXd Axis;
    Eigen::VectorXd Direction;
};

}

#include<exotica_core_task_maps/exotica_core_task_maps_initializers_numerator.h>


#endif