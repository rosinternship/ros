// Generated by gencpp from file test_roscpp/PointCloud.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_POINTCLOUD_H
#define TEST_ROSCPP_MESSAGE_POINTCLOUD_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <test_roscpp/Point32.h>
#include <test_roscpp/ChannelFloat32.h>

namespace test_roscpp
{
template <class ContainerAllocator>
struct PointCloud_
{
  typedef PointCloud_<ContainerAllocator> Type;

  PointCloud_()
    : header()
    , pts()
    , chan()  {
    }
  PointCloud_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pts(_alloc)
    , chan(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::test_roscpp::Point32_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::test_roscpp::Point32_<ContainerAllocator> >> _pts_type;
  _pts_type pts;

   typedef std::vector< ::test_roscpp::ChannelFloat32_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >> _chan_type;
  _chan_type chan;





  typedef boost::shared_ptr< ::test_roscpp::PointCloud_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::PointCloud_<ContainerAllocator> const> ConstPtr;

}; // struct PointCloud_

typedef ::test_roscpp::PointCloud_<std::allocator<void> > PointCloud;

typedef boost::shared_ptr< ::test_roscpp::PointCloud > PointCloudPtr;
typedef boost::shared_ptr< ::test_roscpp::PointCloud const> PointCloudConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::PointCloud_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::PointCloud_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_roscpp::PointCloud_<ContainerAllocator1> & lhs, const ::test_roscpp::PointCloud_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pts == rhs.pts &&
    lhs.chan == rhs.chan;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_roscpp::PointCloud_<ContainerAllocator1> & lhs, const ::test_roscpp::PointCloud_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_roscpp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::PointCloud_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::PointCloud_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::PointCloud_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::PointCloud_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::PointCloud_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::PointCloud_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::PointCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c47b5cedd2b77d241b27547ed7624840";
  }

  static const char* value(const ::test_roscpp::PointCloud_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc47b5cedd2b77d24ULL;
  static const uint64_t static_value2 = 0x1b27547ed7624840ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::PointCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/PointCloud";
  }

  static const char* value(const ::test_roscpp::PointCloud_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::PointCloud_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Point32[] pts\n"
"ChannelFloat32[] chan\n"
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
"\n"
"================================================================================\n"
"MSG: test_roscpp/Point32\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: test_roscpp/ChannelFloat32\n"
"string name\n"
"float32[] vals\n"
;
  }

  static const char* value(const ::test_roscpp::PointCloud_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::PointCloud_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pts);
      stream.next(m.chan);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointCloud_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::PointCloud_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::PointCloud_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pts[]" << std::endl;
    for (size_t i = 0; i < v.pts.size(); ++i)
    {
      s << indent << "  pts[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_roscpp::Point32_<ContainerAllocator> >::stream(s, indent + "    ", v.pts[i]);
    }
    s << indent << "chan[]" << std::endl;
    for (size_t i = 0; i < v.chan.size(); ++i)
    {
      s << indent << "  chan[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >::stream(s, indent + "    ", v.chan[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_POINTCLOUD_H
