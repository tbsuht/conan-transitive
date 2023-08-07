#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define LIB_LEVEL_ONE_EXPORT __declspec(dllexport)
#else
  #define LIB_LEVEL_ONE_EXPORT
#endif

#include "lib_transitive_constants.h"

LIB_LEVEL_ONE_EXPORT void lib_level_one();
LIB_LEVEL_ONE_EXPORT void lib_level_one_print_vector(const std::vector<std::string> &strings);
