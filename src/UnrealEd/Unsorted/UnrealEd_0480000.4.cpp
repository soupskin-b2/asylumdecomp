// UnrealEd_0480000.cpp: 2 functions
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

struct sub_0042c7d0_
{
    int sub_0042c7d0(int Param1);
};

// @baa 0x00488a00
__declspec(noinline) char sub_00488a00(int Param1)
{
    if (g_02663d88)
        return (char)((sub_0042c7d0_*)g_02663d88)->sub_0042c7d0(Param1);
    return 0;
}
