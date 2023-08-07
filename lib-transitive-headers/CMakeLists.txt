cmake_minimum_required(VERSION 3.15)
project(lib_transitive_headers CXX)




add_library(lib_transitive_headers src/lib_transitive_headers.cpp)
target_include_directories(lib_transitive_headers PUBLIC include)



set_target_properties(lib_transitive_headers PROPERTIES PUBLIC_HEADER "include/lib_transitive_headers.h;include/lib_transitive_constants.h")
install(TARGETS lib_transitive_headers)
