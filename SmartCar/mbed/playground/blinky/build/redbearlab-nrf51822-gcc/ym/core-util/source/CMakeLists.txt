# NOTE: This file is generated by yotta: changes will be overwritten!

cmake_minimum_required(VERSION 2.8.11)

include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source")


set(YOTTA_AUTO_CORE-UTIL_CPP_FILES
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical_nordic.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical_posix.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/atomic_ops.cpp"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/PoolAllocator.cpp"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/sbrk.cpp"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/assert_mbed.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/assert_posix.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/ExtendablePoolAllocator.cpp"
)
# force dependency on the config header for cpp files, which CMake otherwise wouldn't track:
set_property(SOURCE ${YOTTA_AUTO_CORE-UTIL_CPP_FILES} PROPERTY OBJECT_DEPENDS "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/yotta_config.h")
set(YOTTA_AUTO_CORE-UTIL_HEADER_FILES
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/Array.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/FunctionPointerBind.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/PoolAllocator.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/CriticalSectionLock.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/Event.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/core-util.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/FunctionPointer.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/atomic_ops.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/ExtendablePoolAllocator.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/uninitialized.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/sbrk.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/assert.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/SharedPointer.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/critical.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/BinaryHeap.h"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/core-util/FunctionPointerBase.h"
)
# force dependency on the config header for header files, which CMake otherwise wouldn't track:
set_property(SOURCE ${YOTTA_AUTO_CORE-UTIL_HEADER_FILES} PROPERTY OBJECT_DEPENDS "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/yotta_config.h")
set(YOTTA_AUTO_CORE-UTIL_C_FILES
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical_nordic.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical_posix.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/critical.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/assert_mbed.c"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util/source/assert_posix.c"
)
# force dependency on the config header for c files, which CMake otherwise wouldn't track:
set_property(SOURCE ${YOTTA_AUTO_CORE-UTIL_C_FILES} PROPERTY OBJECT_DEPENDS "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/yotta_config.h")


add_library(core-util
    ${YOTTA_AUTO_CORE-UTIL_CPP_FILES}
    ${YOTTA_AUTO_CORE-UTIL_HEADER_FILES}
    ${YOTTA_AUTO_CORE-UTIL_C_FILES}
)

yotta_postprocess_target(LIBRARY core-util)



target_link_libraries(core-util
    ualloc
    cmsis-core
    mbed-drivers
    greentea-client
)

