// Copyright 2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GAZEBO_ROS_CONTROL__LOGGING_HPP_
#define GAZEBO_ROS_CONTROL__LOGGING_HPP_

#include <sstream>
#include <string>

#include "rcutils/logging_macros.h"

#define ROSBAG2_COMPRESSION_PACKAGE_NAME "gazebo_ros_control"

#define GAZEBO_ROS_CONTROL_LOG_INFO(...) \
  RCUTILS_LOG_INFO_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, __VA_ARGS__)

#define GAZEBO_ROS_CONTROL_LOG_INFO_STREAM(args) do { \
    std::stringstream __ss; \
    __ss << args; \
    RCUTILS_LOG_INFO_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, "%s", __ss.str().c_str()); \
} while (0)

#define GAZEBO_ROS_CONTROL_LOG_ERROR(...) \
  RCUTILS_LOG_ERROR_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, __VA_ARGS__)

#define GAZEBO_ROS_CONTROL_LOG_ERROR_STREAM(args) do { \
    std::stringstream __ss; \
    __ss << args; \
    RCUTILS_LOG_ERROR_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, "%s", __ss.str().c_str()); \
} while (0)

#define GAZEBO_ROS_CONTROL_LOG_WARN(...) \
  RCUTILS_LOG_WARN_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, __VA_ARGS__)

#define GAZEBO_ROS_CONTROL_LOG_WARN_STREAM(args) do { \
    std::stringstream __ss; \
    __ss << args; \
    RCUTILS_LOG_WARN_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, "%s", __ss.str().c_str()); \
} while (0)

#define GAZEBO_ROS_CONTROL_LOG_DEBUG(...) \
  RCUTILS_LOG_DEBUG_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, __VA_ARGS__)

#define GAZEBO_ROS_CONTROL_LOG_DEBUG_STREAM(args) do { \
    std::stringstream __ss; \
    __ss << args; \
    RCUTILS_LOG_DEBUG_NAMED(GAZEBO_ROS_CONTROL_PACKAGE_NAME, "%s", __ss.str().c_str()); \
} while (0)

#endif  // GAZEBO_ROS_CONTROL__LOGGING_HPP_
