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

#include <memory>

#include "gazebo_ros_control/gazebo_ros_control_plugin.hpp"

namespace gazebo_ros_control
{
class GazeboRosControlImpl
{
public:
  GazeboRosControlImpl() = default;
  ~GazeboRosControlImpl() = default;
};

GazeboRosControl::GazeboRosControl()
: impl_(std::make_unique<GazeboRosControlImpl>())
{}

GazeboRosControl::~GazeboRosControl() {}

GZ_REGISTER_MODEL_PLUGIN(GazeboRosControl)
}
