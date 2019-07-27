// Generated by gencpp from file can_to_eth/can_data.msg
// DO NOT EDIT!


#ifndef CAN_TO_ETH_MESSAGE_CAN_DATA_H
#define CAN_TO_ETH_MESSAGE_CAN_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace can_to_eth
{
template <class ContainerAllocator>
struct can_data_
{
  typedef can_data_<ContainerAllocator> Type;

  can_data_()
    : can_data()  {
      can_data.assign(0);
  }
  can_data_(const ContainerAllocator& _alloc)
    : can_data()  {
  (void)_alloc;
      can_data.assign(0);
  }



   typedef boost::array<uint8_t, 13>  _can_data_type;
  _can_data_type can_data;




  typedef boost::shared_ptr< ::can_to_eth::can_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::can_to_eth::can_data_<ContainerAllocator> const> ConstPtr;

}; // struct can_data_

typedef ::can_to_eth::can_data_<std::allocator<void> > can_data;

typedef boost::shared_ptr< ::can_to_eth::can_data > can_dataPtr;
typedef boost::shared_ptr< ::can_to_eth::can_data const> can_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::can_to_eth::can_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::can_to_eth::can_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace can_to_eth

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'can_to_eth': ['/home/boole/new_world/catkin_ws/src/can_to_eth/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::can_to_eth::can_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::can_to_eth::can_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_to_eth::can_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::can_to_eth::can_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_to_eth::can_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::can_to_eth::can_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::can_to_eth::can_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f050dda45ed091f75585847b3b4558a5";
  }

  static const char* value(const ::can_to_eth::can_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf050dda45ed091f7ULL;
  static const uint64_t static_value2 = 0x5585847b3b4558a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::can_to_eth::can_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "can_to_eth/can_data";
  }

  static const char* value(const ::can_to_eth::can_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::can_to_eth::can_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[13] can_data\n\
";
  }

  static const char* value(const ::can_to_eth::can_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::can_to_eth::can_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.can_data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct can_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::can_to_eth::can_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::can_to_eth::can_data_<ContainerAllocator>& v)
  {
    s << indent << "can_data[]" << std::endl;
    for (size_t i = 0; i < v.can_data.size(); ++i)
    {
      s << indent << "  can_data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.can_data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAN_TO_ETH_MESSAGE_CAN_DATA_H