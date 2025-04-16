cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

set(PICO_TOOLCHAIN_PATH "D:/arm_gnu_toolchain/bin")
set(PICO_SDK_PATH "D:/Rp-pico_project/pico-sdk")

include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake) #Bat buoc phai cho cai nay truoc project !!!

project(LED_blink C CXX ASM)

# Goi SDK
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

#Init SDK (Phai goi truoc)
pico_sdk_init()

add_subdirectory(main)