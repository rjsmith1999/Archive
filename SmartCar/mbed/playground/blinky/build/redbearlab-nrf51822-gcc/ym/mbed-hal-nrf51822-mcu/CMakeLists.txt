# NOTE: This file is generated by yotta: changes will be overwritten!


project(mbed-hal-nrf51822-mcu)


# include root directories of all components we depend on (directly and
# indirectly, including ourself)
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nrf51822-mcu")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/cmsis-core")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-mkit")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nordic")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/ualloc")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/minar")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/core-util")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/compiler-polyfill")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/greentea-client")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/cmsis-core-nordic")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/cmsis-core-nrf51822")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/dlmalloc")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/minar-platform")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/minar-platform-mbed")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nrf51822-mcu")


# recurse into dependencies that aren't built elsewhere
add_subdirectory(
   "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/ym/nrf51-sdk"
   "${CMAKE_BINARY_DIR}/ym/nrf51-sdk"
)
add_subdirectory(
   "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/ym/mbed-hal-mkit"
   "${CMAKE_BINARY_DIR}/ym/mbed-hal-mkit"
)



# And others (typically CMSIS implementations) need to export non-system header
# files. Please don't use this facility. Please. It's much, much better to fix
# implementations that import these headers to import them using the full path.
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nrf51822-mcu/mbed-hal-nrf51822-mcu")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal/mbed-hal")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/cmsis-core/cmsis-core")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/ble_radio_notification")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/ble_services/ble_dfu")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/common")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/device_manager")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/device_manager/config")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/ble/peer_manager")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/device")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/drivers_nrf/ble_flash")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/drivers_nrf/delay")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/drivers_nrf/hal")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/drivers_nrf/pstorage")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/drivers_nrf/pstorage/config")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/bootloader_dfu")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/bootloader_dfu/hci_transport")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/crc16")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/hci")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/scheduler")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/timer")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/util")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/fds")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/fstorage")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/libraries/experimental_section_vars")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/softdevice/common/softdevice_handler")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/softdevice/s130/headers")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/nrf51-sdk/source/nordic_sdk/components/toolchain")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-mkit/mbed-hal-mkit")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-drivers/mbed")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/cmsis-core-nrf51822/cmsis-core-nrf51822")
include_directories("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nrf51822-mcu/mbed-hal-nrf51822-mcu")


# modules with custom CMake build systems may append to the
# YOTTA_GLOBAL_INCLUDE_DIRS property to add compile-time-determined include
# directories:
get_property(GLOBAL_INCLUDE_DIRS GLOBAL PROPERTY YOTTA_GLOBAL_INCLUDE_DIRS)
include_directories(${GLOBAL_INCLUDE_DIRS})

# Provide versions of all the components we depend on, the corresponding
# preprocessor definitions are generated in yotta_config.h
set(YOTTA_NRF51_SDK_VERSION_STRING "2.4.0")
set(YOTTA_NRF51_SDK_VERSION_MAJOR 2)
set(YOTTA_NRF51_SDK_VERSION_MINOR 4)
set(YOTTA_NRF51_SDK_VERSION_PATCH 0)
set(YOTTA_MBED_HAL_MKIT_VERSION_STRING "1.1.0")
set(YOTTA_MBED_HAL_MKIT_VERSION_MAJOR 1)
set(YOTTA_MBED_HAL_MKIT_VERSION_MINOR 1)
set(YOTTA_MBED_HAL_MKIT_VERSION_PATCH 0)
set(YOTTA_MBED_HAL_NRF51822_MCU_VERSION_STRING "2.2.0")
set(YOTTA_MBED_HAL_NRF51822_MCU_VERSION_MAJOR 2)
set(YOTTA_MBED_HAL_NRF51822_MCU_VERSION_MINOR 2)
set(YOTTA_MBED_HAL_NRF51822_MCU_VERSION_PATCH 0)

# provide the name of the current module so that it's available to custom CMake
# even if custom CMake does weird things with project()
set(YOTTA_MODULE_NAME mbed-hal-nrf51822-mcu)

# delegate to an existing CMakeLists.txt:
add_subdirectory(
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_modules/mbed-hal-nrf51822-mcu"
    "/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/build/redbearlab-nrf51822-gcc/ym/mbed-hal-nrf51822-mcu/existing"
)

# make YOTTA_MODULE_NAME available as a preprocessor symbol when
# compiling this module:
target_compile_definitions(mbed-hal-nrf51822-mcu PRIVATE "-DYOTTA_MODULE_NAME=mbed-hal-nrf51822-mcu")

# include .cmake files provided by the target:
include("/Users/jax/Documents/Developer/SmartCar/mbed/playground/blinky/yotta_targets/mbed-gcc/coverage/coverage.cmake")
