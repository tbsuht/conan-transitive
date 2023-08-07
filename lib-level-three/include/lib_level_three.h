#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_LEVEL_THREE_EXPORT __declspec(dllexport)
#else
  #define LIB_LEVEL_THREE_EXPORT
#endif

LIB_LEVEL_THREE_EXPORT void lib_level_three();
LIB_LEVEL_THREE_EXPORT void lib_level_three_print_vector(const std::vector<std::string> &strings);
