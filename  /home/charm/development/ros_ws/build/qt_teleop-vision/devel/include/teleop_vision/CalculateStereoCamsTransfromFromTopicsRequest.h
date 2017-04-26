// Generated by gencpp from file teleop_vision/CalculateStereoCamsTransfromFromTopicsRequest.msg
// DO NOT EDIT!


#ifndef TELEOP_VISION_MESSAGE_CALCULATESTEREOCAMSTRANSFROMFROMTOPICSREQUEST_H
#define TELEOP_VISION_MESSAGE_CALCULATESTEREOCAMSTRANSFROMFROMTOPICSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace teleop_vision
{
template <class ContainerAllocator>
struct CalculateStereoCamsTransfromFromTopicsRequest_
{
  typedef CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> Type;

  CalculateStereoCamsTransfromFromTopicsRequest_()
    : cam_1_pose_topic_name()
    , cam_2_pose_topic_name()  {
    }
  CalculateStereoCamsTransfromFromTopicsRequest_(const ContainerAllocator& _alloc)
    : cam_1_pose_topic_name(_alloc)
    , cam_2_pose_topic_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cam_1_pose_topic_name_type;
  _cam_1_pose_topic_name_type cam_1_pose_topic_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cam_2_pose_topic_name_type;
  _cam_2_pose_topic_name_type cam_2_pose_topic_name;




  typedef boost::shared_ptr< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CalculateStereoCamsTransfromFromTopicsRequest_

typedef ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<std::allocator<void> > CalculateStereoCamsTransfromFromTopicsRequest;

typedef boost::shared_ptr< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest > CalculateStereoCamsTransfromFromTopicsRequestPtr;
typedef boost::shared_ptr< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest const> CalculateStereoCamsTransfromFromTopicsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace teleop_vision

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'teleop_vision': ['/home/charm/development/ros_ws/src/teleop-vision/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba287fa136b90cf933f718565b5b1486";
  }

  static const char* value(const ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba287fa136b90cf9ULL;
  static const uint64_t static_value2 = 0x33f718565b5b1486ULL;
};

template<class ContainerAllocator>
struct DataType< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "teleop_vision/CalculateStereoCamsTransfromFromTopicsRequest";
  }

  static const char* value(const ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string cam_1_pose_topic_name\n\
string cam_2_pose_topic_name\n\
";
  }

  static const char* value(const ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cam_1_pose_topic_name);
      stream.next(m.cam_2_pose_topic_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalculateStereoCamsTransfromFromTopicsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::teleop_vision::CalculateStereoCamsTransfromFromTopicsRequest_<ContainerAllocator>& v)
  {
    s << indent << "cam_1_pose_topic_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cam_1_pose_topic_name);
    s << indent << "cam_2_pose_topic_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cam_2_pose_topic_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TELEOP_VISION_MESSAGE_CALCULATESTEREOCAMSTRANSFROMFROMTOPICSREQUEST_H