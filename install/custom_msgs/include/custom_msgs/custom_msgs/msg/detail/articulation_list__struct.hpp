// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ArticulationList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'articulations'
#include "custom_msgs/msg/detail/articulations__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ArticulationList __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ArticulationList __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArticulationList_
{
  using Type = ArticulationList_<ContainerAllocator>;

  explicit ArticulationList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ArticulationList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _articulations_type =
    std::vector<custom_msgs::msg::Articulations_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::msg::Articulations_<ContainerAllocator>>>;
  _articulations_type articulations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__articulations(
    const std::vector<custom_msgs::msg::Articulations_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_msgs::msg::Articulations_<ContainerAllocator>>> & _arg)
  {
    this->articulations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ArticulationList_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ArticulationList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ArticulationList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ArticulationList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ArticulationList
    std::shared_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ArticulationList
    std::shared_ptr<custom_msgs::msg::ArticulationList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArticulationList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->articulations != other.articulations) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArticulationList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArticulationList_

// alias to use template instance with default allocator
using ArticulationList =
  custom_msgs::msg::ArticulationList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__STRUCT_HPP_
