// Generated by gencpp from file test_rosmaster/Composite.msg
// DO NOT EDIT!


#ifndef TEST_ROSMASTER_MESSAGE_COMPOSITE_H
#define TEST_ROSMASTER_MESSAGE_COMPOSITE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosmaster/CompositeA.h>
#include <test_rosmaster/CompositeB.h>

namespace test_rosmaster
{
template <class ContainerAllocator>
struct Composite_
{
  typedef Composite_<ContainerAllocator> Type;

  Composite_()
    : a()
    , b()  {
    }
  Composite_(const ContainerAllocator& _alloc)
    : a(_alloc)
    , b(_alloc)  {
  (void)_alloc;
    }



   typedef  ::test_rosmaster::CompositeA_<ContainerAllocator>  _a_type;
  _a_type a;

   typedef  ::test_rosmaster::CompositeB_<ContainerAllocator>  _b_type;
  _b_type b;





  typedef boost::shared_ptr< ::test_rosmaster::Composite_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosmaster::Composite_<ContainerAllocator> const> ConstPtr;

}; // struct Composite_

typedef ::test_rosmaster::Composite_<std::allocator<void> > Composite;

typedef boost::shared_ptr< ::test_rosmaster::Composite > CompositePtr;
typedef boost::shared_ptr< ::test_rosmaster::Composite const> CompositeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosmaster::Composite_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosmaster::Composite_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::test_rosmaster::Composite_<ContainerAllocator1> & lhs, const ::test_rosmaster::Composite_<ContainerAllocator2> & rhs)
{
  return lhs.a == rhs.a &&
    lhs.b == rhs.b;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::test_rosmaster::Composite_<ContainerAllocator1> & lhs, const ::test_rosmaster::Composite_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace test_rosmaster

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::Composite_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosmaster::Composite_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::Composite_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosmaster::Composite_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::Composite_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosmaster::Composite_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosmaster::Composite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8fb6eb869ad3956b50e8737d96dc9fa";
  }

  static const char* value(const ::test_rosmaster::Composite_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8fb6eb869ad3956ULL;
  static const uint64_t static_value2 = 0xb50e8737d96dc9faULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosmaster::Composite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosmaster/Composite";
  }

  static const char* value(const ::test_rosmaster::Composite_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosmaster::Composite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# composite message. required for testing import calculation in generators\n"
"CompositeA a\n"
"CompositeB b\n"
"\n"
"================================================================================\n"
"MSG: test_rosmaster/CompositeA\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: test_rosmaster/CompositeB\n"
"# copy of geometry_msgs/Point for testing\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::test_rosmaster::Composite_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosmaster::Composite_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a);
      stream.next(m.b);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Composite_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosmaster::Composite_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosmaster::Composite_<ContainerAllocator>& v)
  {
    s << indent << "a: ";
    s << std::endl;
    Printer< ::test_rosmaster::CompositeA_<ContainerAllocator> >::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    s << std::endl;
    Printer< ::test_rosmaster::CompositeB_<ContainerAllocator> >::stream(s, indent + "  ", v.b);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSMASTER_MESSAGE_COMPOSITE_H
