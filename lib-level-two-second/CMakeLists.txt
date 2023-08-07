cmake_minimum_required(VERSION 3.15)
project(lib_level_two_second CXX)

find_package(lib_level_one CONFIG REQUIRED)



add_library(lib_level_two_second src/lib_level_two_second.cpp)
target_include_directories(lib_level_two_second PUBLIC include)

target_link_libraries(lib_level_two_second PRIVATE lib_level_one::lib_level_one)


set_target_properties(lib_level_two_second PROPERTIES PUBLIC_HEADER "include/lib_level_two_second.h")
install(TARGETS lib_level_two_second)
