// BmGame_1590000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>
#include "ue3/Core.h"

struct C_015945d0
{
    char Data[0x144];
    C_015945d0 * sub_015945d0(int Param);
};

// @baa 0x015945d0
C_015945d0 * C_015945d0::sub_015945d0(int Param)
{
    memset(this, 0, 0x144);
    return this;
}
