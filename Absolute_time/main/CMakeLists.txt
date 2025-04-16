add_executable(abs_time "absolute_time.c")

set(pico_lib pico_stdlib pico_stdio_usb)

target_link_libraries(abs_time ${pico_lib})

pico_add_extra_outputs(abs_time) 