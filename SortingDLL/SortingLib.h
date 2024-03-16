#pragma once

#ifdef SORTINGLIB_EXPORTS
#define SORTINGLIB_API __declspec(dllexport)
#else
#define SORTINGLIB_API __declspec(dllimport)
#endif

#include <string>

extern "C" SORTINGLIB_API void move_file(const std::string & From, const std::string & To);

extern "C" SORTINGLIB_API void create_dir(const std::string & Path);
