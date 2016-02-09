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
 * FILE RoutingSelectionBundleProcessor.h
 * AUTHOR clacambra
 * DATE 03/02/2016
 * VERSION 1
 * This file contains the specification of Routing Selection Bundle Processor.
 * class
 */

#ifndef BUNDLEAGENT_NODE_BUNDLEPROCESSOR_ROUTINGSELECTIONBUNDLEPROCESSOR_H_
#define BUNDLEAGENT_NODE_BUNDLEPROCESSOR_ROUTINGSELECTIONBUNDLEPROCESSOR_H_

#include "BasicBundleProcessor.h"
#include <vector>
#include <string>

class RoutingSelectionBundleProcessor : public BasicBundleProcessor {
 public:
  /**
   * @brief Constructor
   *
   * Generates a RoutingSelectionBundleProcessor with the given parameters.
   *
   * @param config The object holding all the configuration.
   * @param bundleQueue The queue that will hold all the bundles.
   * @param listeningAppsTable
   * @param neighbourTable The neighbour table to check the neighbours.
   */
  RoutingSelectionBundleProcessor(
      Config config, std::shared_ptr<BundleQueue> bundleQueue,
      std::shared_ptr<ListeningAppsTable> listeningAppsTable,
      std::shared_ptr<NeighbourTable> neighbourTable);
  virtual ~RoutingSelectionBundleProcessor();

 private:
  /**
   * Function that checks the possible forwards.
   *
   * @return A list with the possible forwards.
   */
  virtual std::vector<std::string> checkForward(
      BundleContainer &bundleContainer);
};

#endif  // BUNDLEAGENT_NODE_BUNDLEPROCESSOR_ROUTINGSELECTIONBUNDLEPROCESSOR_H_
