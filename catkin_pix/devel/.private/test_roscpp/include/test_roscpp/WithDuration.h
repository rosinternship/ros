// Generated by gencpp from file test_roscpp/WithDuration.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_WITHDURATION_H
#define TEST_ROSCPP_MESSAGE_WITHDURATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct WithDuration_
{
  typedef WithDuration_<ContainerAllocator> Type;

  WithDuration_()
    : my_duration()  {
    }
  WithDuration_(const ContainerAllocator& _alloc)
    : my_duration()  {
  (void)_alloc;
    }



   typedef ros::Duration _my_duration_type;
  _my_duration_type my_duration;





  typedef boost::shared_ptr< ::test_roscpp::WithDuration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::WithDuration_<ContainerAllocator> const> ConstPtr;

}; // struct WithDuration_

typedef ::test_roscpp::WithDuration_<std::allocator<void> > WithDuration;

typedef boost::shared_ptr< ::test_roscpp::WithDuration > WithDurationPtr;
typedef boost::shared_ptr< ::test_roscpp::WithDuration const> WithDurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::WithDuration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::WithDuration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_roscpp::WithDuration_<ContainerAllocator1> & lhs, const ::test_roscpp::WithDuration_<ContainerAllocator2> & rhs)
{
  return lhs.my_duration == rhs.my_duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_roscpp::WithDuration_<ContainerAllocator1> & lhs, const ::test_roscpp::WithDuration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_roscpp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::WithDuration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::WithDuration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::WithDuration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::WithDuration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::WithDuration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::WithDuration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::WithDuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ad52ba9d0229ba8b9c032400c77c367";
  }

  static const char* value(const ::test_roscpp::WithDuration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ad52ba9d0229ba8ULL;
  static const uint64_t static_value2 = 0xb9c032400c77c367ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::WithDuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/WithDuration";
  }

  static const char* value(const ::test_roscpp::WithDuration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::WithDuration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duration my_duration\n"
;
  }

  static const char* value(const ::test_roscpp::WithDuration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::WithDuration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.my_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WithDuration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::WithDuration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::WithDuration_<ContainerAllocator>& v)
  {
    s << indent << "my_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.my_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_WITHDURATION_H
