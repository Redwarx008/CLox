
# Add source to this project's executable.
add_executable (CLox "main.c"  "chunk.c" "memory.c" "debug.c" "value.c" "vm.c" "compiler.c" "scanner.c" "object.c")

target_include_directories(CLox PUBLIC ../include)
