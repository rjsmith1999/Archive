# Copyright (c) 2015 ARM Limited
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

if(TARGET_NORDIC_NRF51822_GCC_TOOLCHAIN_INCLUDED)
    return()
endif()
set(TARGET_NORDIC_NRF51822_GCC_TOOLCHAIN_INCLUDED 1)

# If the memory size has not been defined then default to 16K and print a warning
# otherwise ensure that the string is uppercase to build the macro definitions correctly
if(NOT YOTTA_CFG_NRF51822_RAM_SIZE)
    message(WARNING "No definition of YOTTA_CFG_NRF51822_RAM_SIZE found, building image for default 16K target.")
    set(YOTTA_CFG_NRF51822_RAM_SIZE "16K")
else()
    # Ensure that the string is uppercase to build the macro definitions correctly
    string(TOUPPER "${YOTTA_CFG_NRF51822_RAM_SIZE}" YOTTA_CFG_NRF51822_RAM_SIZE)
    if(YOTTA_CFG_NRF51822_RAM_SIZE STREQUAL "16K")
        # This has been added for compatibility reasons with mbed-hal-nrf51822-mcu and
        # should be removed in the future
        set(YOTTA_CFG_CHIP_NRF51822_16K TRUE)
    elseif(YOTTA_CFG_NRF51822_RAM_SIZE STREQUAL "32K")
        # This has been added for compatibility reasons with mbed-hal-nrf51822-mcu
        # and should be removed in the future
        set(YOTTA_CFG_CHIP_NRF51822_32K TRUE)
    else()
        # Fail if the RAM size is not supported
        message(FATAL_ERROR "Cannot build image for target with RAM size '${YOTTA_CFG_NRF51822_RAM_SIZE}'. Please modify your yotta config to set YOTTA_CFG_NRF51822_RAM_SIZE a supported option.\nSupported RAM sizes: '16K' (default), '32K'.")
    endif()
endif()

# Define all device types if not defined
if(NOT YOTTA_CFG_UICR_DEVICE_TYPE)
    set(YOTTA_CFG_UICR_DEVICE_TYPE 65535)
endif()

# Define all device versions if not defined
if(NOT YOTTA_CFG_UICR_DEVICE_VERSION)
    set(YOTTA_CFG_UICR_DEVICE_VERSION 65535)
endif()

# Define all device versions if not defined
if(NOT YOTTA_CFG_UICR_SERIAL)
    set(YOTTA_CFG_UICR_SERIAL 65535)
endif()

# Set S130 as the default SoftDevice if not defined through yotta config
if(NOT YOTTA_CFG_NORDIC_SOFTDEVICE)
    set(YOTTA_CFG_NORDIC_SOFTDEVICE "S130")
endif()

# Set the image to NOT include bootloader if not defined through yotta config
if(NOT YOTTA_CFG_IMAGE_FOTA)
    set(YOTTA_CFG_IMAGE_FOTA FALSE)
endif()

# Set the heap warning threshold if not defined through yotta config
if(NOT YOTTA_CFG_IMAGE_HEAP_WARNING_THRESHOLD)
    set(YOTTA_CFG_IMAGE_HEAP_WARNING_THRESHOLD 1024)
endif()

# legacy definitions for building mbed 2.0 modules with a retrofitted build
# system:
set(MBED_LEGACY_TARGET_DEFINITIONS "NORDIC" "NRF51822_MKIT" "MCU_NRF51822" "MCU_NORDIC_${YOTTA_CFG_NRF51822_RAM_SIZE}")
# provide compatibility definitions for compiling with this target: these are
# definitions that legacy code assumes will be defined.
add_definitions("-DNRF51 -DTARGET_NORDIC -DTARGET_M0 -D__MBED__=1 -DMCU_NORDIC_${YOTTA_CFG_NRF51822_RAM_SIZE} -DTARGET_NRF51822 -DTARGET_MCU_NORDIC_${YOTTA_CFG_NRF51822_RAM_SIZE}")

if(YOTTA_CFG_NORDIC_SOFTDEVICE STREQUAL "S110")
    set(SOFTDEVICE_VERSION 100)
    add_definitions("-DTARGET_MCU_NRF51_${YOTTA_CFG_NRF51822_RAM_SIZE} -DTARGET_MCU_NRF51_${YOTTA_CFG_NRF51822_RAM_SIZE}_S110")
    set(MBED_LEGACY_TARGET_DEFINITIONS   ${MBED_LEGACY_TARGET_DEFINITIONS} "MCU_NRF51" "MCU_NRF51_${YOTTA_CFG_NRF51822_RAM_SIZE}" "MCU_NORDIC_${YOTTA_CFG_NRF51822_RAM_SIZE}_S110")
    set(NRF51822_LINKER_FLAGS_FILE_PATH  "${CMAKE_CURRENT_LIST_DIR}/../ld/NRF51822_${YOTTA_CFG_NRF51822_RAM_SIZE}_S110.ld")
    set(NRF51822_SOFTDEVICE_FILE_PATH    "${CMAKE_CURRENT_LIST_DIR}/../softdevice/s110_nrf51822_8.0.0_softdevice.hex")
elseif(YOTTA_CFG_NORDIC_SOFTDEVICE STREQUAL "S130")
    set(SOFTDEVICE_VERSION 103)
    set(NRF51822_LINKER_FLAGS_FILE_PATH  "${CMAKE_CURRENT_LIST_DIR}/../ld/NRF51822_${YOTTA_CFG_NRF51822_RAM_SIZE}_S130.ld")
    set(NRF51822_SOFTDEVICE_FILE_PATH    "${CMAKE_CURRENT_LIST_DIR}/../softdevice/s130_nrf51_1.0.0_softdevice.hex")
else()
    message(FATAL_ERROR "SoftDevice version '${YOTTA_CFG_NORDIC_SOFTDEVICE}' is not recognized. Please check your yotta config file.")
endif()

# append non-generic flags, and set NRF51822-specific link script
set(_CPU_COMPILATION_OPTIONS "-mcpu=cortex-m0 -mthumb -D__thumb2__")

set(CMAKE_C_FLAGS_INIT             "${CMAKE_C_FLAGS_INIT} ${_CPU_COMPILATION_OPTIONS}")
set(CMAKE_ASM_FLAGS_INIT           "${CMAKE_ASM_FLAGS_INIT} ${_CPU_COMPILATION_OPTIONS}")
set(CMAKE_CXX_FLAGS_INIT           "${CMAKE_CXX_FLAGS_INIT} ${_CPU_COMPILATION_OPTIONS}")
set(CMAKE_MODULE_LINKER_FLAGS_INIT "${CMAKE_MODULE_LINKER_FLAGS_INIT} -mcpu=cortex-m0 -mthumb -Wl,-Map=main.map")
set(CMAKE_EXE_LINKER_FLAGS_INIT    "${CMAKE_EXE_LINKER_FLAGS_INIT} -mcpu=cortex-m0 -mthumb -T\"${NRF51822_LINKER_FLAGS_FILE_PATH}\"")

# used by the apply_target_rules function below:
set(NRF51822_SOFTDEVICE_HEX_FILE "${NRF51822_SOFTDEVICE_FILE_PATH}")
set(NRF51822_BOOTLOADER_HEX_FILE "${CMAKE_CURRENT_LIST_DIR}/../bootloader/s130_nrf51_1.0.0_bootloader.hex")
set(NRF51822_MERGE_HEX_SCRIPT    "${CMAKE_CURRENT_LIST_DIR}/../scripts/merge_hex.py")
set(NRF51822_MEMORY_INFO_SCRIPT  "${CMAKE_CURRENT_LIST_DIR}/../scripts/memory_info.py")
set(NRF51822_GEN_DAT_SCRIPT      "${CMAKE_CURRENT_LIST_DIR}/../scripts/generate_dat.py")

set(UICR_DEVICE_TYPE_ADDRESS_START 0x10001080)
set(UICR_DEVICE_TYPE_ADDRESS_END 0x10001082)

set(UICR_DEVICE_VERSION_ADDRESS_START 0x10001082)
set(UICR_DEVICE_VERSION_ADDRESS_END 0x10001084)

set(YOTTA_CFG_UICR_SERIAL_START 0x10001084)
set(YOTTA_CFG_UICR_SERIAL_END 0x10001086)

set(SREC_FLAGS "")

# uicr device type
set(SREC_FLAGS ${SREC_FLAGS} -generate ${UICR_DEVICE_TYPE_ADDRESS_START} ${UICR_DEVICE_TYPE_ADDRESS_END} -CONSTant_Little_Endian ${YOTTA_CFG_UICR_DEVICE_TYPE} 4)

# uice device version
set(SREC_FLAGS ${SREC_FLAGS} -generate ${UICR_DEVICE_VERSION_ADDRESS_START} ${UICR_DEVICE_VERSION_ADDRESS_END} -CONSTant_Little_Endian ${YOTTA_CFG_UICR_DEVICE_VERSION} 4)

# uicr serial number
set(SREC_FLAGS ${SREC_FLAGS} -generate ${YOTTA_CFG_UICR_SERIAL_START} ${YOTTA_CFG_UICR_SERIAL_END} -CONSTant_Little_Endian ${YOTTA_CFG_UICR_SERIAL} 4)

# define a function for yotta to apply target-specific rules to build products,
# in our case we need to convert the built elf file to .hex, and add the
# pre-built softdevice:
function(yotta_apply_target_rules target_type target_name)
    if(${target_type} STREQUAL "EXECUTABLE")
        if(YOTTA_CFG_IMAGE_FOTA)
            add_custom_command(TARGET ${target_name}
                POST_BUILD
                # objcopy to hex
                COMMAND arm-none-eabi-objcopy -O ihex ${target_name} ${target_name}.hex
                # objcopy to bin
                COMMAND arm-none-eabi-objcopy -O binary ${target_name} ${target_name}.bin
                # generate dfu .dat from bin
                COMMAND python ${NRF51822_GEN_DAT_SCRIPT} ${target_name}.bin --sd-req ${SOFTDEVICE_VERSION} --dev-type ${YOTTA_CFG_UICR_DEVICE_TYPE} --dev-revision ${YOTTA_CFG_UICR_DEVICE_VERSION}
                COMMENT "generating .dat and .zip"
                # and append the softdevice hex file and set UICR data
                COMMAND srec_cat ${NRF51822_SOFTDEVICE_HEX_FILE} -intel ${target_name}.hex -intel ${SREC_FLAGS} -o ${target_name}-combined.hex -intel
                # append the softdevice and bootloader hex file
                COMMAND srec_cat ${target_name}-combined.hex -intel ${NRF51822_BOOTLOADER_HEX_FILE} -intel -o ${target_name}-combined-fota.hex -intel
                COMMENT "hexifying and adding softdevice and bootloader to ${target_name}"
                VERBATIM
            )
        else()
            add_custom_command(TARGET ${target_name}
                POST_BUILD
                # objcopy to hex
                COMMAND arm-none-eabi-objcopy -O ihex ${target_name} ${target_name}.hex
                # and append the softdevice hex file
                COMMAND python ${NRF51822_MERGE_HEX_SCRIPT} ${NRF51822_SOFTDEVICE_HEX_FILE} ${target_name}.hex ${target_name}-combined.hex
                COMMENT "hexifying and adding softdevice to ${target_name}"
                VERBATIM
            )
        endif()
        add_custom_command(TARGET ${target_name}
            POST_BUILD
            # printing memory usage information
            COMMAND python ${NRF51822_MEMORY_INFO_SCRIPT} ${target_name} ${YOTTA_CFG_IMAGE_HEAP_WARNING_THRESHOLD}
            COMMENT "printing memory usage information"
            VERBATIM
        )
    endif()
endfunction()
