cmake_minimum_required(VERSION 3.10)
project(CLion2018_3_Demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLion2018_3_Demo main.cpp)

add_subdirectory(remote_mode)
add_subdirectory(profiler)
add_subdirectory(cpp17)
add_subdirectory(tests)