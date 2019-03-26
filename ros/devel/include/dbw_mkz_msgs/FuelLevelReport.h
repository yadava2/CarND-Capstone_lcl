// Generated by gencpp from file dbw_mkz_msgs/FuelLevelReport.msg
// DO NOT EDIT!


#ifndef DBW_MKZ_MSGS_MESSAGE_FUELLEVELREPORT_H
#define DBW_MKZ_MSGS_MESSAGE_FUELLEVELREPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dbw_mkz_msgs
{
template <class ContainerAllocator>
struct FuelLevelReport_
{
  typedef FuelLevelReport_<ContainerAllocator> Type;

  FuelLevelReport_()
    : header()
    , fuel_level(0.0)  {
    }
  FuelLevelReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , fuel_level(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _fuel_level_type;
  _fuel_level_type fuel_level;





  typedef boost::shared_ptr< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> const> ConstPtr;

}; // struct FuelLevelReport_

typedef ::dbw_mkz_msgs::FuelLevelReport_<std::allocator<void> > FuelLevelReport;

typedef boost::shared_ptr< ::dbw_mkz_msgs::FuelLevelReport > FuelLevelReportPtr;
typedef boost::shared_ptr< ::dbw_mkz_msgs::FuelLevelReport const> FuelLevelReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dbw_mkz_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dbw_mkz_msgs': ['/home/workspace/CarND-Capstone_lcl/ros/src/dbw_mkz_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5ec1964dbda02fda82785b8035744e4";
  }

  static const char* value(const ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5ec1964dbda02fdULL;
  static const uint64_t static_value2 = 0xa82785b8035744e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dbw_mkz_msgs/FuelLevelReport";
  }

  static const char* value(const ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Fuel level (%, 0 to 100)\n\
float32 fuel_level\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.fuel_level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FuelLevelReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dbw_mkz_msgs::FuelLevelReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "fuel_level: ";
    Printer<float>::stream(s, indent + "  ", v.fuel_level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DBW_MKZ_MSGS_MESSAGE_FUELLEVELREPORT_H