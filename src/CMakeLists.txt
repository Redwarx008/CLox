
# Add source to this project's executable.
add_executable (CLox "main.c"  "chunk.c" "memory.c" "debug.c" "value.c")

target_include_directories(CLox PUBLIC ../include)
