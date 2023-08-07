#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_LEVEL_TWO_FIRST_EXPORT __declspec(dllexport)
#else
  #define LIB_LEVEL_TWO_FIRST_EXPORT
#endif


LIB_LEVEL_TWO_FIRST_EXPORT void lib_level_two_first();
LIB_LEVEL_TWO_FIRST_EXPORT void lib_level_two_first_print_vector(const std::vector<std::string> &strings);
