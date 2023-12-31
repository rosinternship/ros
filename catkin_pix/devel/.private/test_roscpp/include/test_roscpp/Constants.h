// Generated by gencpp from file test_roscpp/Constants.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_CONSTANTS_H
#define TEST_ROSCPP_MESSAGE_CONSTANTS_H


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
struct Constants_
{
  typedef Constants_<ContainerAllocator> Type;

  Constants_()
    {
    }
  Constants_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(a)
  #undef a
#endif
#if defined(_WIN32) && defined(b)
  #undef b
#endif
#if defined(_WIN32) && defined(c)
  #undef c
#endif
#if defined(_WIN32) && defined(d)
  #undef d
#endif
#if defined(_WIN32) && defined(e)
  #undef e
#endif
#if defined(_WIN32) && defined(f)
  #undef f
#endif
#if defined(_WIN32) && defined(g)
  #undef g
#endif
#if defined(_WIN32) && defined(h)
  #undef h
#endif
#if defined(_WIN32) && defined(fa)
  #undef fa
#endif
#if defined(_WIN32) && defined(fb)
  #undef fb
#endif
#if defined(_WIN32) && defined(str)
  #undef str
#endif
#if defined(_WIN32) && defined(str2)
  #undef str2
#endif

  enum {
    a = 1u,
    b = 2,
    c = 3u,
    d = 4,
    e = 5u,
    f = 6,
    g = 7u,
    h = 8,
  };

  static const float fa;
  static const double fb;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> str;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> str2;

  typedef boost::shared_ptr< ::test_roscpp::Constants_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::Constants_<ContainerAllocator> const> ConstPtr;

}; // struct Constants_

typedef ::test_roscpp::Constants_<std::allocator<void> > Constants;

typedef boost::shared_ptr< ::test_roscpp::Constants > ConstantsPtr;
typedef boost::shared_ptr< ::test_roscpp::Constants const> ConstantsConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   
   template<typename ContainerAllocator> const float
      Constants_<ContainerAllocator>::fa =
        
          1.5
        
        ;
   

   
   template<typename ContainerAllocator> const double
      Constants_<ContainerAllocator>::fb =
        
          40.9
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Constants_<ContainerAllocator>::str =
        
          "hello there"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      Constants_<ContainerAllocator>::str2 =
        
          "this string has \"quotes\" and \\slashes\\ in it"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::Constants_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::Constants_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace test_roscpp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Constants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::Constants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Constants_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::Constants_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0032309c8dd2c569e0e0d0e75974e750";
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0032309c8dd2c569ULL;
  static const uint64_t static_value2 = 0xe0e0d0e75974e750ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/Constants";
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::Constants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 a = 1\n"
"int8 b = 2\n"
"uint16 c = 3\n"
"int16 d = 4\n"
"uint32 e = 5\n"
"int32 f = 6\n"
"uint64 g = 7\n"
"int64 h = 8\n"
"float32 fa = 1.5\n"
"float64 fb = 40.9\n"
"string str = hello there\n"
"string str2 = this string has \"quotes\" and \\slashes\\ in it\n"
;
  }

  static const char* value(const ::test_roscpp::Constants_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::Constants_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Constants_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::Constants_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::test_roscpp::Constants_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_CONSTANTS_H
