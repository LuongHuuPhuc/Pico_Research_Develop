cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(PICO_SDK_PATH "D:/Rp-pico_project/pico-sdk")
set(PICO_TOOLCHAIN_PATH "D:/arm_gnu_toolchain/bin")

include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)
project(Absolute_time C ASM CXX)

include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

pico_sdk_init()

add_subdirectory(main)