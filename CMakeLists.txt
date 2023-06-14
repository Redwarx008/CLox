# CMakeList.txt : CMake project for CLox, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CLox")

add_subdirectory(src)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  #set_property(TARGET CLox PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
