#pragma once

#include "src/xpc.h"

#ifdef _WIN32

#ifdef X_EXPORT
#define XAPI __declspec(dllexport)
#else 
#define XAPI __declspec(dllimport)
#endif

#else 
#define XAPI __attribute__((visibility("default")))
#endif