#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_TRANSITIVE_HEADERS_EXPORT __declspec(dllexport)
#else
  #define LIB_TRANSITIVE_HEADERS_EXPORT
#endif

LIB_TRANSITIVE_HEADERS_EXPORT void lib_transitive_headers();
LIB_TRANSITIVE_HEADERS_EXPORT void lib_transitive_headers_print_vector(const std::vector<std::string> &strings);
