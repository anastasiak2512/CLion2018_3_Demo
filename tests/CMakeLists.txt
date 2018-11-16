find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIR})

add_executable(boost_tests boost_demo_tests.cpp)

set(LIB_SOURCE_FILES calc_lib.cpp calc_lib.h)
add_library(calc_lib ${LIB_SOURCE_FILES})

add_executable(catch_tests catch_demo_tests.cpp)
target_link_libraries(catch_tests calc_lib)

