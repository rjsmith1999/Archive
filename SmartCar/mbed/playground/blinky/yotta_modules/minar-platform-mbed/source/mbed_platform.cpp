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
#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
#define __STDC_LIMIT_MACROS
#include <stdint.h>
#include <stdio.h>
#endif

#include "minar-platform/minar_platform.h"

#include "mbed-hal/lp_ticker_api.h"
#include "mbed-hal/sleep_api.h"
#include "cmsis-core/core_generic.h"

/// @name Local Constants
const static minar::platform::tick_t Minimum_Sleep = MINAR_PLATFORM_MINIMUM_SLEEP; // in Platform_Time_Base units

/// @name Local function declarations
static bool timeIsInPeriod(minar::platform::tick_t start, minar::platform::tick_t time, minar::platform::tick_t end);

///////////////////////////////////////////////////////////////////////////////

// functions and variables for keeping track of uptime and duty-cycle
#if YOTTA_CFG_MINAR_STATS
static uint64_t total_sleep = 0;
static uint64_t total_active = 0;
static minar::platform::tick_t last_wakeup = 0;
static minar::platform::tick_t last_gotosleep = 0;

namespace minar {
namespace stats {

/* Return uptime in seconds. */
uint64_t getUptime() {
    return (total_active + total_sleep) / MINAR_PLATFORM_TIME_BASE;
}

/* Return seconds spent in non-sleep mode. */
uint64_t getActive() {
    return total_active / MINAR_PLATFORM_TIME_BASE;
}

};
};
#endif

///////////////////////////////////////////////////////////////////////////////

namespace minar {
namespace platform {

namespace test {
#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
    #define BUFFER_SIZE 128
    #define ERROR_BUFFER_FULL UINT32_MAX

    static uint32_t sleep_until_buf[BUFFER_SIZE];
    static uint32_t sleep_until_buf_tail = 0;

    uint32_t *get_sleep_until_buf(void) {
        return (uint32_t *) &sleep_until_buf;
    }

    uint32_t get_sleep_until_buf_tail(void) {
        return sleep_until_buf_tail;
    }

    uint32_t inc_sleep_until_buf_tail(void) {
        if (sleep_until_buf_tail < BUFFER_SIZE-1) {
            return ++sleep_until_buf_tail;
        } else {
            return ERROR_BUFFER_FULL;
        }
    }
#endif
}; // namespace test

irqstate_t pushDisableIRQState(){
    uint32_t ret = __get_PRIMASK();
    __disable_irq();
    return (irqstate_t)ret;
}

void popDisableIRQState(irqstate_t restore){
    __set_PRIMASK((uint32_t)restore);
}

void init(){
    lp_ticker_init();
}

void sleep(){
    sleep_t sleep_obj;
    mbed_enter_sleep(&sleep_obj);
    mbed_exit_sleep(&sleep_obj);
}

tick_t getTime() {
#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
    #warning "testing clock overflow"
    return lp_ticker_read() & Time_Mask;
#else
    return lp_ticker_read();
#endif
}

uint32_t getTimeOverflows(){
    return lp_ticker_get_overflows_counter();
}

void sleepFromUntil(tick_t now, tick_t until){

#if YOTTA_CFG_MINAR_TEST_CLOCK_OVERFLOW
    /* only lower bits of the timer is passed to this function
     * in order to set the correct sleeping time in the underlying timer,
     * the full time (with the top bits) have to be reconstructed here.*/
    tick_t timer_top_bits = lp_ticker_read() & ~Time_Mask;
    now += timer_top_bits;
    until += timer_top_bits;

    if (until < now) {
        until += Time_Mask;
    }

    const tick_t real_now = timer_top_bits + getTime();

    uint32_t *buf = test::get_sleep_until_buf();
    uint32_t tail = test::get_sleep_until_buf_tail();
    buf[tail] = until;
    test::inc_sleep_until_buf_tail();
#else
    // use real-now for front-most end of do-not-sleep range check
    const tick_t real_now = getTime();
#endif

    if(timeIsInPeriod(now, until, real_now + Minimum_Sleep)){
        // in this case too soon to go to sleep, just return
        return;
    } else {
        const uint32_t next_int = lp_ticker_get_compare_match();

#if YOTTA_CFG_MINAR_STATS
        // update stats
        tick_t now = lp_ticker_read();
        total_active += now - last_wakeup;
        total_sleep += last_wakeup - last_gotosleep;
        last_gotosleep = now;
#endif

        if(timeIsInPeriod(now, until, next_int)){
            lp_ticker_sleep_until(now, until);
        } else {
            // existing compare match is sooner, go to sleep
            sleep();
        }

#if YOTTA_CFG_MINAR_STATS
        // update stats
        last_wakeup = lp_ticker_read();
#endif
    }
}

}; // namespace platform
}; // namespace minar

// return true if `time' is in the range [`start', `end'), where
// all the range may wrap around to zero (`end' may be less than
// `start')
static bool timeIsInPeriod(minar::platform::tick_t start, minar::platform::tick_t time, minar::platform::tick_t end){
    // Taking care to handle wrapping: (M = now + Minumum_Sleep)
    //   Case (A.1)
    //                       S    T   E
    //      0 ---------------|----|---|-- 0xf
    //
    //   Case (A.2): this case also allows S==T==E
    //         E                 S    T
    //      0 -|-----------------|----|-- 0xf
    //
    //   Case (B)
    //         T   E                 S
    //      0 -|---|-----------------|--- 0xf
    //
    if((time >= start && ( time < end ||    // (A.1)
                          start >= end)) || // (A.2)
        (time < start && end < start && end > time)){  // (B)
        return true;
    }
    return false;
}
