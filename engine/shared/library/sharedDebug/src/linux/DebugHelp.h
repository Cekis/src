// ======================================================================
//
// DebugHelp.h
// copyright 2000 Verant Interactive
//
// ======================================================================

#ifndef DEBUG_HELP_H
#define DEBUG_HELP_H

#include "sharedDebug/FirstSharedDebug.h"

// ======================================================================

typedef uint32_t uint32;

// ======================================================================

class DebugHelp
{
public:

	static void install();
	static void remove();

	static void getCallStack(uint32 *callStack, int sizeOfCallStack);
	static bool lookupAddress(uintptr_t address, char *libName, char *fileName, int fileNameLength, int &line);
};

// ======================================================================

#endif

