cmake_minimum_required(VERSION 3.15)
project(lib_level_three CXX)

find_package(lib_level_two_first CONFIG REQUIRED)
find_package(lib_level_two_second CONFIG REQUIRED)



add_library(lib_level_three src/lib_level_three.cpp)
target_include_directories(lib_level_three PUBLIC include)

target_link_libraries(lib_level_three PRIVATE lib_level_two_first::lib_level_two_first)
target_link_libraries(lib_level_three PRIVATE lib_level_two_second::lib_level_two_second)


set_target_properties(lib_level_three PROPERTIES PUBLIC_HEADER "include/lib_level_three.h")
install(TARGETS lib_level_three)
