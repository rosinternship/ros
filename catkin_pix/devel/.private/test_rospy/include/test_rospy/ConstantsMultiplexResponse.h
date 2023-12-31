// Generated by gencpp from file test_rospy/ConstantsMultiplexResponse.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXRESPONSE_H
#define TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rospy
{
template <class ContainerAllocator>
struct ConstantsMultiplexResponse_
{
  typedef ConstantsMultiplexResponse_<ContainerAllocator> Type;

  ConstantsMultiplexResponse_()
    : select_confirm(0)
    , ret_byte(0)
    , ret_int32(0)
    , ret_uint32(0)
    , ret_float32(0.0)  {
    }
  ConstantsMultiplexResponse_(const ContainerAllocator& _alloc)
    : select_confirm(0)
    , ret_byte(0)
    , ret_int32(0)
    , ret_uint32(0)
    , ret_float32(0.0)  {
  (void)_alloc;
    }



   typedef int8_t _select_confirm_type;
  _select_confirm_type select_confirm;

   typedef int8_t _ret_byte_type;
  _ret_byte_type ret_byte;

   typedef int32_t _ret_int32_type;
  _ret_int32_type ret_int32;

   typedef uint32_t _ret_uint32_type;
  _ret_uint32_type ret_uint32;

   typedef float _ret_float32_type;
  _ret_float32_type ret_float32;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CONFIRM_X)
  #undef CONFIRM_X
#endif
#if defined(_WIN32) && defined(CONFIRM_Y)
  #undef CONFIRM_Y
#endif
#if defined(_WIN32) && defined(CONFIRM_Z)
  #undef CONFIRM_Z
#endif

  enum {
    CONFIRM_X = 1,
    CONFIRM_Y = 2,
    CONFIRM_Z = 3,
  };


  typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ConstantsMultiplexResponse_

typedef ::test_rospy::ConstantsMultiplexResponse_<std::allocator<void> > ConstantsMultiplexResponse;

typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexResponse > ConstantsMultiplexResponsePtr;
typedef boost::shared_ptr< ::test_rospy::ConstantsMultiplexResponse const> ConstantsMultiplexResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator1> & lhs, const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator2> & rhs)
{
  return lhs.select_confirm == rhs.select_confirm &&
    lhs.ret_byte == rhs.ret_byte &&
    lhs.ret_int32 == rhs.ret_int32 &&
    lhs.ret_uint32 == rhs.ret_uint32 &&
    lhs.ret_float32 == rhs.ret_float32;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator1> & lhs, const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rospy

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "012320975f41b58dcffb5b0e7a154691";
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x012320975f41b58dULL;
  static const uint64_t static_value2 = 0xcffb5b0e7a154691ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/ConstantsMultiplexResponse";
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# test response constants as well\n"
"byte CONFIRM_X=1\n"
"byte CONFIRM_Y=2\n"
"byte CONFIRM_Z=3\n"
"byte select_confirm\n"
"byte ret_byte\n"
"int32 ret_int32\n"
"uint32 ret_uint32\n"
"float32 ret_float32\n"
;
  }

  static const char* value(const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.select_confirm);
      stream.next(m.ret_byte);
      stream.next(m.ret_int32);
      stream.next(m.ret_uint32);
      stream.next(m.ret_float32);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConstantsMultiplexResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::ConstantsMultiplexResponse_<ContainerAllocator>& v)
  {
    s << indent << "select_confirm: ";
    Printer<int8_t>::stream(s, indent + "  ", v.select_confirm);
    s << indent << "ret_byte: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ret_byte);
    s << indent << "ret_int32: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ret_int32);
    s << indent << "ret_uint32: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ret_uint32);
    s << indent << "ret_float32: ";
    Printer<float>::stream(s, indent + "  ", v.ret_float32);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_CONSTANTSMULTIPLEXRESPONSE_H
