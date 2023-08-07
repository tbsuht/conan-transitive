#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_LEVEL_TWO_SECOND_EXPORT __declspec(dllexport)
#else
  #define LIB_LEVEL_TWO_SECOND_EXPORT
#endif

#include "lib_level_one.h"

LIB_LEVEL_TWO_SECOND_EXPORT void lib_level_two_second();
LIB_LEVEL_TWO_SECOND_EXPORT void lib_level_two_second_print_vector(const std::vector<std::string> &strings);
