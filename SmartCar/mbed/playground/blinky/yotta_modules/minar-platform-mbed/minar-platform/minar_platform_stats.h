/*
 * Copyright (c) 2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MINAR_PLATFORM_STATS_H
#define MINAR_PLATFORM_STATS_H

#include <stdint.h>

namespace minar {
namespace stats {

/**
 * @brief Get uptime in seconds.
 * @details Uptime is seconds since last reboot.
 * @return uint64_t uptime in seconds.
 */
uint64_t getUptime();

/**
 * @brief Get seconds spent in active (non-sleep) mode.
 * @details The active time includes time used by interrupt handlers.
 * @return uint64_t active time in seconds.
 */
uint64_t getActive();

};
};

#endif // MINAR_PLATFORM_STATS_H
