/*
 * Copyright (c) 2016 SeNDA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/**
 * FILE BundleStateJson.h
 * AUTHOR Blackcatn13
 * DATE Apr 21, 2016
 * VERSION 1
 *
 */
#ifndef BUNDLEAGENT_NODE_JSONFACADES_BUNDLESTATEJSON_H_
#define BUNDLEAGENT_NODE_JSONFACADES_BUNDLESTATEJSON_H_

#include <vector>
#include <string>
#include "Utils/Json.h"

class BundleStateJson : public Json {
 public:
  BundleStateJson();
  virtual ~BundleStateJson();

  virtual reference operator()(const std::string &key);
};

#endif  // BUNDLEAGENT_NODE_JSONFACADES_BUNDLESTATEJSON_H_
