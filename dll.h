#pragma once

#include <string>

#if !defined(BUILD_DLL) && defined(_MSC_VER)
#define DLL_EXPORT __declspec(dllimport)
#else
#define DLL_EXPORT
#endif

DLL_EXPORT extern std::string message;
