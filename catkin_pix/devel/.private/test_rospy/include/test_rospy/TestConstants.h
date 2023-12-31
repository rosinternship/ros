// Generated by gencpp from file test_rospy/TestConstants.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_TESTCONSTANTS_H
#define TEST_ROSPY_MESSAGE_TESTCONSTANTS_H


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
struct TestConstants_
{
  typedef TestConstants_<ContainerAllocator> Type;

  TestConstants_()
    {
    }
  TestConstants_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(A)
  #undef A
#endif
#if defined(_WIN32) && defined(B)
  #undef B
#endif
#if defined(_WIN32) && defined(C)
  #undef C
#endif
#if defined(_WIN32) && defined(X)
  #undef X
#endif
#if defined(_WIN32) && defined(Y)
  #undef Y
#endif
#if defined(_WIN32) && defined(Z)
  #undef Z
#endif
#if defined(_WIN32) && defined(FOO)
  #undef FOO
#endif
#if defined(_WIN32) && defined(SINGLEQUOTE)
  #undef SINGLEQUOTE
#endif
#if defined(_WIN32) && defined(DOUBLEQUOTE)
  #undef DOUBLEQUOTE
#endif
#if defined(_WIN32) && defined(MULTIQUOTE)
  #undef MULTIQUOTE
#endif
#if defined(_WIN32) && defined(EXAMPLE)
  #undef EXAMPLE
#endif
#if defined(_WIN32) && defined(WHITESPACE)
  #undef WHITESPACE
#endif
#if defined(_WIN32) && defined(EMPTY)
  #undef EMPTY
#endif
#if defined(_WIN32) && defined(TRUE)
  #undef TRUE
#endif
#if defined(_WIN32) && defined(FALSE)
  #undef FALSE
#endif

  enum {
    X = 123,
    Y = -123,
    Z = 124u,
  };

  static const float A;
  static const float B;
  static const double C;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FOO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SINGLEQUOTE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DOUBLEQUOTE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> MULTIQUOTE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EXAMPLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> WHITESPACE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMPTY;
  static const uint8_t TRUE;
  static const uint8_t FALSE;

  typedef boost::shared_ptr< ::test_rospy::TestConstants_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::TestConstants_<ContainerAllocator> const> ConstPtr;

}; // struct TestConstants_

typedef ::test_rospy::TestConstants_<std::allocator<void> > TestConstants;

typedef boost::shared_ptr< ::test_rospy::TestConstants > TestConstantsPtr;
typedef boost::shared_ptr< ::test_rospy::TestConstants const> TestConstantsConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const float
      TestConstants_<ContainerAllocator>::A =
        
          -123.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      TestConstants_<ContainerAllocator>::B =
        
          124.0
        
        ;
   

   
   template<typename ContainerAllocator> const double
      TestConstants_<ContainerAllocator>::C =
        
          125.0
        
        ;
   

   

   

   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::FOO =
        
          "foo"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::SINGLEQUOTE =
        
          "'hi"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::DOUBLEQUOTE =
        
          "\"hello\" there"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::MULTIQUOTE =
        
          "\"hello\" 'goodbye'"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::EXAMPLE =
        
          "\"#comments\" are ignored, and leading and trailing whitespace removed"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::WHITESPACE =
        
          "strip"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
      TestConstants_<ContainerAllocator>::EMPTY =
        
          ""
        
        ;
   

   
   template<typename ContainerAllocator> const uint8_t
      TestConstants_<ContainerAllocator>::TRUE =
        
           1
        
        ;
   

   
   template<typename ContainerAllocator> const uint8_t
      TestConstants_<ContainerAllocator>::FALSE =
        
           0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::TestConstants_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::TestConstants_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace test_rospy

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::test_rospy::TestConstants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::TestConstants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::TestConstants_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::TestConstants_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::TestConstants_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::TestConstants_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::TestConstants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e60959d2ccf9718dc5e42767bebd1644";
  }

  static const char* value(const ::test_rospy::TestConstants_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe60959d2ccf9718dULL;
  static const uint64_t static_value2 = 0xc5e42767bebd1644ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::TestConstants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/TestConstants";
  }

  static const char* value(const ::test_rospy::TestConstants_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::TestConstants_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 A=-123.0\n"
"float32 B=124.0\n"
"float64 C=125.0\n"
"int32 X=123\n"
"int32 Y=-123\n"
"uint32 Z=124\n"
"string FOO=foo\n"
"string SINGLEQUOTE='hi\n"
"string DOUBLEQUOTE=\"hello\" there\n"
"string MULTIQUOTE=\"hello\" 'goodbye'\n"
"string EXAMPLE=\"#comments\" are ignored, and leading and trailing whitespace removed\n"
"string WHITESPACE= strip  \n"
"string EMPTY= \n"
"bool TRUE=1\n"
"bool FALSE=0\n"
;
  }

  static const char* value(const ::test_rospy::TestConstants_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::TestConstants_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestConstants_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::TestConstants_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::test_rospy::TestConstants_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_TESTCONSTANTS_H
