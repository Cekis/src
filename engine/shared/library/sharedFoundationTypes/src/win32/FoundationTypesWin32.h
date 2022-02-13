// PRIVATE.  Do not export this header file outside the package.

// ======================================================================
//
// FoundationTypesWin32.cpp
// copyright (c) 2001 Sony Online Entertainment
//
// ======================================================================

#ifndef INCLUDED_FoundationTypesWin32_H
#define INCLUDED_FoundationTypesWin32_H

#include <stdint.h>

// ======================================================================
// specify what platform we're running on.

#define PLATFORM_WIN32

// ======================================================================
// basic types that we assume to be around

typedef unsigned char          uint8;
typedef uint16_t               uint16;
typedef uint32_t               uint32;
typedef uint64_t               uint64;
typedef signed char            int8;
typedef int16_t                int16;
typedef int32_t                int32;
typedef int64_t                int64;
typedef int                    FILE_HANDLE;

// ======================================================================

#endif
