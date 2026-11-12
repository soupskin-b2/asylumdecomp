// Unknown_1b90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern float g_02413840;
extern int g_0260fdb0;
// @baa 0x01b9e150
int sub_01b9e150(float *OutValue)
{
    *OutValue = g_02413840;
    g_0260fdb0 = 0;
    return 0;
}
