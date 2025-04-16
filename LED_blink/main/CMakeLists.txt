add_executable(blink "blink.c")

# Link thu vien pico_stdlib vao blink
target_link_libraries(blink pico_stdlib)

# Tao file .uf2
pico_add_extra_outputs(blink)