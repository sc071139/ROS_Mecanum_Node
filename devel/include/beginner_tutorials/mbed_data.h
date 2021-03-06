/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/meng/catkin_ws/src/beginner_tutorials/msg/mbed_data.msg
 *
 */


#ifndef BEGINNER_TUTORIALS_MESSAGE_MBED_DATA_H
#define BEGINNER_TUTORIALS_MESSAGE_MBED_DATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct mbed_data_
{
  typedef mbed_data_<ContainerAllocator> Type;

  mbed_data_()
    : time_stamp()
    , mbed_wheel_odometer()
    , mbed_wheel_rotation()  {
      mbed_wheel_odometer.assign(0.0);

      mbed_wheel_rotation.assign(0.0);
  }
  mbed_data_(const ContainerAllocator& _alloc)
    : time_stamp(_alloc)
    , mbed_wheel_odometer()
    , mbed_wheel_rotation()  {
      mbed_wheel_odometer.assign(0.0);

      mbed_wheel_rotation.assign(0.0);
  }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _time_stamp_type;
  _time_stamp_type time_stamp;

   typedef boost::array<double, 4>  _mbed_wheel_odometer_type;
  _mbed_wheel_odometer_type mbed_wheel_odometer;

   typedef boost::array<double, 4>  _mbed_wheel_rotation_type;
  _mbed_wheel_rotation_type mbed_wheel_rotation;




  typedef boost::shared_ptr< ::beginner_tutorials::mbed_data_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::mbed_data_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct mbed_data_

typedef ::beginner_tutorials::mbed_data_<std::allocator<void> > mbed_data;

typedef boost::shared_ptr< ::beginner_tutorials::mbed_data > mbed_dataPtr;
typedef boost::shared_ptr< ::beginner_tutorials::mbed_data const> mbed_dataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::mbed_data_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::mbed_data_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/meng/catkin_ws/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::mbed_data_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::mbed_data_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::mbed_data_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7418c9c6fe4dfce9d9e0a65e1f6d6404";
  }

  static const char* value(const ::beginner_tutorials::mbed_data_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7418c9c6fe4dfce9ULL;
  static const uint64_t static_value2 = 0xd9e0a65e1f6d6404ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/mbed_data";
  }

  static const char* value(const ::beginner_tutorials::mbed_data_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string time_stamp\n\
float64[4] mbed_wheel_odometer\n\
float64[4] mbed_wheel_rotation\n\
";
  }

  static const char* value(const ::beginner_tutorials::mbed_data_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_stamp);
      stream.next(m.mbed_wheel_odometer);
      stream.next(m.mbed_wheel_rotation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct mbed_data_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::mbed_data_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::mbed_data_<ContainerAllocator>& v)
  {
    s << indent << "time_stamp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.time_stamp);
    s << indent << "mbed_wheel_odometer[]" << std::endl;
    for (size_t i = 0; i < v.mbed_wheel_odometer.size(); ++i)
    {
      s << indent << "  mbed_wheel_odometer[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.mbed_wheel_odometer[i]);
    }
    s << indent << "mbed_wheel_rotation[]" << std::endl;
    for (size_t i = 0; i < v.mbed_wheel_rotation.size(); ++i)
    {
      s << indent << "  mbed_wheel_rotation[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.mbed_wheel_rotation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_MBED_DATA_H
