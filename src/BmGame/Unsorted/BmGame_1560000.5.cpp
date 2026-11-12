// BmGame_1560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include <math.h>

// @baa 0x01560300
INT sub_01560300(FLOAT A, FLOAT B, FLOAT C)
{
    if ((FLOAT)fabs(A - B) < C)
        return 1;
    return 0;
}
