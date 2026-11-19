// UnrealEd_1330000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>

extern char g_025d67c0[];

// @baa 0x013377b0
FMatrix UAnimNodeEditInfo::GetWidgetTM()
{
	return *(const FMatrix*)g_025d67c0;   /* FMatrix::Identity */
}
