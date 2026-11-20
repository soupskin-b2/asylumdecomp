// FMod_0540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <wchar.h>

// @baa 0x00544cf0
UBOOL FString::operator==(const TCHAR* Other) const
{
	return _wcsicmp(**this, Other) == 0;
}
