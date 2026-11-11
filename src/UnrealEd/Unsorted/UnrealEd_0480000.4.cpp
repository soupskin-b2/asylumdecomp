// UnrealEd_0480000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct GThing
{
	char sub_0040c5e0(int Param);
};

extern GThing* g_02663d88;
// @baa 0x00488f70
__declspec(noinline) char sub_00488f70(int Param)
{
	if (g_02663d88)
		return g_02663d88->sub_0040c5e0(Param);
	return 0;
}
