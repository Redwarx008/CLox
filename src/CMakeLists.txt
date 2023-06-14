
# Add source to this project's executable.
add_executable (CLox "main.cpp"  "chunk.cpp")

target_include_directories(CLox PUBLIC ../include)
