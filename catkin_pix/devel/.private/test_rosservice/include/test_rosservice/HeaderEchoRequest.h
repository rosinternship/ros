// Generated by gencpp from file test_rosservice/HeaderEchoRequest.msg
// DO NOT EDIT!


#ifndef TEST_ROSSERVICE_MESSAGE_HEADERECHOREQUEST_H
#define TEST_ROSSERVICE_MESSAGE_HEADERECHOREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace test_rosservice
{
template <class ContainerAllocator>
struct HeaderEchoRequest_
{
  typedef HeaderEchoRequest_<ContainerAllocator> Type;

  HeaderEchoRequest_()
    : header()  {
    }
  HeaderEchoRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;





  typedef boost::shared_ptr< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct HeaderEchoRequest_

typedef ::test_rosservice::HeaderEchoRequest_<std::allocator<void> > HeaderEchoRequest;

typedef boost::shared_ptr< ::test_rosservice::HeaderEchoRequest > HeaderEchoRequestPtr;
typedef boost::shared_ptr< ::test_rosservice::HeaderEchoRequest const> HeaderEchoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator1> & lhs, const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator1> & lhs, const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rosservice

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7be0bb39af8fb9129d5a76e6b63a290";
  }

  static const char* value(const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7be0bb39af8fb91ULL;
  static const uint64_t static_value2 = 0x29d5a76e6b63a290ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosservice/HeaderEchoRequest";
  }

  static const char* value(const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
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

  static const char* value(const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HeaderEchoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosservice::HeaderEchoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosservice::HeaderEchoRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSSERVICE_MESSAGE_HEADERECHOREQUEST_H
