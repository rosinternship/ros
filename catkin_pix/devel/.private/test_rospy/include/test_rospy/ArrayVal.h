// Generated by gencpp from file test_rospy/ArrayVal.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_ARRAYVAL_H
#define TEST_ROSPY_MESSAGE_ARRAYVAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rospy/Val.h>

namespace test_rospy
{
template <class ContainerAllocator>
struct ArrayVal_
{
  typedef ArrayVal_<ContainerAllocator> Type;

  ArrayVal_()
    : vals()  {
    }
  ArrayVal_(const ContainerAllocator& _alloc)
    : vals(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::test_rospy::Val_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::test_rospy::Val_<ContainerAllocator> >> _vals_type;
  _vals_type vals;





  typedef boost::shared_ptr< ::test_rospy::ArrayVal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::ArrayVal_<ContainerAllocator> const> ConstPtr;

}; // struct ArrayVal_

typedef ::test_rospy::ArrayVal_<std::allocator<void> > ArrayVal;

typedef boost::shared_ptr< ::test_rospy::ArrayVal > ArrayValPtr;
typedef boost::shared_ptr< ::test_rospy::ArrayVal const> ArrayValConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::ArrayVal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::ArrayVal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rospy::ArrayVal_<ContainerAllocator1> & lhs, const ::test_rospy::ArrayVal_<ContainerAllocator2> & rhs)
{
  return lhs.vals == rhs.vals;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rospy::ArrayVal_<ContainerAllocator1> & lhs, const ::test_rospy::ArrayVal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rospy

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ArrayVal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ArrayVal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ArrayVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ArrayVal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ArrayVal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ArrayVal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::ArrayVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94e095e6a59bceb3466e4b23c166732e";
  }

  static const char* value(const ::test_rospy::ArrayVal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94e095e6a59bceb3ULL;
  static const uint64_t static_value2 = 0x466e4b23c166732eULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::ArrayVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/ArrayVal";
  }

  static const char* value(const ::test_rospy::ArrayVal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::ArrayVal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Val[] vals\n"
"#Val[10] vals_fixed\n"
"\n"
"================================================================================\n"
"MSG: test_rospy/Val\n"
"string val\n"
;
  }

  static const char* value(const ::test_rospy::ArrayVal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::ArrayVal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vals);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArrayVal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::ArrayVal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::ArrayVal_<ContainerAllocator>& v)
  {
    s << indent << "vals[]" << std::endl;
    for (size_t i = 0; i < v.vals.size(); ++i)
    {
      s << indent << "  vals[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_rospy::Val_<ContainerAllocator> >::stream(s, indent + "    ", v.vals[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_ARRAYVAL_H
