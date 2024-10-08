// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs:msg/ArticulationList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__FUNCTIONS_H_
#define CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs/msg/detail/articulation_list__struct.h"

/// Initialize msg/ArticulationList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs__msg__ArticulationList
 * )) before or use
 * custom_msgs__msg__ArticulationList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__init(custom_msgs__msg__ArticulationList * msg);

/// Finalize msg/ArticulationList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ArticulationList__fini(custom_msgs__msg__ArticulationList * msg);

/// Create msg/ArticulationList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs__msg__ArticulationList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ArticulationList *
custom_msgs__msg__ArticulationList__create();

/// Destroy msg/ArticulationList message.
/**
 * It calls
 * custom_msgs__msg__ArticulationList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ArticulationList__destroy(custom_msgs__msg__ArticulationList * msg);

/// Check for msg/ArticulationList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__are_equal(const custom_msgs__msg__ArticulationList * lhs, const custom_msgs__msg__ArticulationList * rhs);

/// Copy a msg/ArticulationList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__copy(
  const custom_msgs__msg__ArticulationList * input,
  custom_msgs__msg__ArticulationList * output);

/// Initialize array of msg/ArticulationList messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs__msg__ArticulationList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__Sequence__init(custom_msgs__msg__ArticulationList__Sequence * array, size_t size);

/// Finalize array of msg/ArticulationList messages.
/**
 * It calls
 * custom_msgs__msg__ArticulationList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ArticulationList__Sequence__fini(custom_msgs__msg__ArticulationList__Sequence * array);

/// Create array of msg/ArticulationList messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs__msg__ArticulationList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ArticulationList__Sequence *
custom_msgs__msg__ArticulationList__Sequence__create(size_t size);

/// Destroy array of msg/ArticulationList messages.
/**
 * It calls
 * custom_msgs__msg__ArticulationList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ArticulationList__Sequence__destroy(custom_msgs__msg__ArticulationList__Sequence * array);

/// Check for msg/ArticulationList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__Sequence__are_equal(const custom_msgs__msg__ArticulationList__Sequence * lhs, const custom_msgs__msg__ArticulationList__Sequence * rhs);

/// Copy an array of msg/ArticulationList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ArticulationList__Sequence__copy(
  const custom_msgs__msg__ArticulationList__Sequence * input,
  custom_msgs__msg__ArticulationList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ARTICULATION_LIST__FUNCTIONS_H_
