cmake_minimum_required(VERSION 3.22)

project(raytracer VERSION 0.2.0)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(raytracer)

target_include_directories(raytracer PUBLIC "${CMAKE_SOURCE_DIR}/include")

add_subdirectory(src)