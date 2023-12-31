// Generated by gencpp from file test_roscpp/FixedLengthArrayOfExternal.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_FIXEDLENGTHARRAYOFEXTERNAL_H
#define TEST_ROSCPP_MESSAGE_FIXEDLENGTHARRAYOFEXTERNAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rosgraph_msgs/Log.h>

namespace test_roscpp
{
template <class ContainerAllocator>
struct FixedLengthArrayOfExternal_
{
  typedef FixedLengthArrayOfExternal_<ContainerAllocator> Type;

  FixedLengthArrayOfExternal_()
    : a()  {
    }
  FixedLengthArrayOfExternal_(const ContainerAllocator& _alloc)
    : a()  {
  (void)_alloc;
      a.assign( ::rosgraph_msgs::Log_<ContainerAllocator> (_alloc));
  }



   typedef boost::array< ::rosgraph_msgs::Log_<ContainerAllocator> , 4>  _a_type;
  _a_type a;





  typedef boost::shared_ptr< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> const> ConstPtr;

}; // struct FixedLengthArrayOfExternal_

typedef ::test_roscpp::FixedLengthArrayOfExternal_<std::allocator<void> > FixedLengthArrayOfExternal;

typedef boost::shared_ptr< ::test_roscpp::FixedLengthArrayOfExternal > FixedLengthArrayOfExternalPtr;
typedef boost::shared_ptr< ::test_roscpp::FixedLengthArrayOfExternal const> FixedLengthArrayOfExternalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator1> & lhs, const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator1> & lhs, const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_roscpp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc431047757f431ecd2754e03aa592f8";
  }

  static const char* value(const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc431047757f431eULL;
  static const uint64_t static_value2 = 0xcd2754e03aa592f8ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/FixedLengthArrayOfExternal";
  }

  static const char* value(const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This comment has \"quotes\" in it and \\slashes\\\n"
"rosgraph_msgs/Log[4] a\n"
"================================================================================\n"
"MSG: rosgraph_msgs/Log\n"
"##\n"
"## Severity level constants\n"
"##\n"
"byte DEBUG=1 #debug level\n"
"byte INFO=2  #general level\n"
"byte WARN=4  #warning level\n"
"byte ERROR=8 #error level\n"
"byte FATAL=16 #fatal/critical level\n"
"##\n"
"## Fields\n"
"##\n"
"Header header\n"
"byte level\n"
"string name # name of the node\n"
"string msg # message \n"
"string file # file the message came from\n"
"string function # function the message came from\n"
"uint32 line # line the message came from\n"
"string[] topics # topic names that the node publishes\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FixedLengthArrayOfExternal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::FixedLengthArrayOfExternal_<ContainerAllocator>& v)
  {
    s << indent << "a[]" << std::endl;
    for (size_t i = 0; i < v.a.size(); ++i)
    {
      s << indent << "  a[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::rosgraph_msgs::Log_<ContainerAllocator> >::stream(s, indent + "    ", v.a[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_FIXEDLENGTHARRAYOFEXTERNAL_H
