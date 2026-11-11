// UnrealEd_0480000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct GlobalC600Object
{
    unsigned char sub_0040c600(unsigned char Value);
};

extern GlobalC600Object* g_02663d88;
// @baa 0x00488fb0
unsigned char sub_00488fb0(unsigned char Value)
{
    if (g_02663d88 != 0)
        return g_02663d88->sub_0040c600(Value);
    return 0;
}
