cmake_minimum_required(VERSION 3.15)
project(lib_level_one CXX)

find_package(lib_transitive_headers CONFIG REQUIRED)



add_library(lib_level_one src/lib_level_one.cpp)
target_include_directories(lib_level_one PUBLIC include)

target_link_libraries(lib_level_one PRIVATE lib_transitive_headers::lib_transitive_headers)


set_target_properties(lib_level_one PROPERTIES PUBLIC_HEADER "include/lib_level_one.h")
install(TARGETS lib_level_one)
