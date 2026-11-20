// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include <wchar.h>
#include <string.h>

// @baa 0x00d67910
/* The value of a hex digit; 0 for anything else. */
INT ParseHexDigit(TCHAR c)
{
	INT Result = 0;
	if (c >= TEXT('0') && c <= TEXT('9'))
	{
		Result = c - TEXT('0');
	}
	else if (c >= TEXT('a') && c <= TEXT('f'))
	{
		Result = c + 10 - TEXT('a');
	}
	else if (c >= TEXT('A') && c <= TEXT('F'))
	{
		Result = c + 10 - TEXT('A');
	}
	else
	{
		Result = 0;
	}
	return Result;
}
