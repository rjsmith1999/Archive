/*
 * PackageLicenseDeclared: Apache-2.0
 * Copyright (c) 2015 ARM Limited
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
 */

#ifndef MINAR_PLATFORM_TYPES_H
#define MINAR_PLATFORM_TYPES_H

#include <stdint.h>
#include "objects.h" //TODO: Replace by the proper target config file

// provide default values for the config
#ifndef YOTTA_CFG_MINAR_PLATFORM_TIME_MASK
#   define YOTTA_CFG_MINAR_PLATFORM_TIME_MASK     0xFFFFFFFFu
#endif
#ifndef YOTTA_CFG_MINAR_PLATFORM_TIME_BASE
#   define YOTTA_CFG_MINAR_PLATFORM_TIME_BASE     1000
#endif
#ifndef YOTTA_CFG_MINAR_PLATFORM_MINIMUM_SLEEP
#   define YOTTA_CFG_MINAR_PLATFORM_MINIMUM_SLEEP 1
#endif

#define MINAR_PLATFORM_TIME_MASK        YOTTA_CFG_MINAR_PLATFORM_TIME_MASK
// backwards compatible guard for definition in `mbed-hal-<chip>/target_config.h`
#ifndef MINAR_PLATFORM_TIME_BASE
#   define MINAR_PLATFORM_TIME_BASE     YOTTA_CFG_MINAR_PLATFORM_TIME_BASE
#endif
#ifndef MINAR_PLATFORM_MINIMUM_SLEEP
#   define MINAR_PLATFORM_MINIMUM_SLEEP YOTTA_CFG_MINAR_PLATFORM_MINIMUM_SLEEP
#endif


namespace minar {
namespace platform {

enum Constants{
    // ticks per second (maximum resolution). This is what the OS works with.
    Time_Base = MINAR_PLATFORM_TIME_BASE,

#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
    // use only lower bits of timer for testing timer overflow
    Time_Mask = YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
#else
    // 32 bits of time for mbed platforms
    Time_Mask = MINAR_PLATFORM_TIME_MASK
#endif
};

typedef uint32_t irqstate_t;

// Internal time type
typedef uint32_t tick_t;

namespace test {
#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
    uint32_t *get_sleep_until_buf(void);
    uint32_t get_sleep_until_buf_tail(void);
#endif
}; // namespace test

}; // namespace platform
}; // namespace minar

#endif // ndef MINAR_PLATFORM_TYPES_H
