// Core_05e0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Core.h"

/* FANSIToTCHAR (UnStringConv.h): converts an ANSI string to TCHARs in a 128-character
 * inline buffer, or in an allocated one when it is longer. */
class FANSIToTCHAR
{
	TCHAR Buffer[128];
	TCHAR* ConvertedString;
public:
	explicit FANSIToTCHAR(const ANSICHAR* Source);
	~FANSIToTCHAR()
	{
		if (ConvertedString != Buffer && ConvertedString)
		{
			appFree(ConvertedString);
		}
	}
	operator TCHAR*() const { return ConvertedString; }
};

#define ANSI_TO_TCHAR(str) (TCHAR*)FANSIToTCHAR((const ANSICHAR*)str)
extern "C" __declspec(dllimport) void __stdcall OutputDebugStringW(const TCHAR* lpOutputString);
// @baa 0x005eef90
void sub_005eef90(const ANSICHAR* Message)
{
	OutputDebugStringW(ANSI_TO_TCHAR(Message));
}
