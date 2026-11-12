// BmGame_0580000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

struct C_0058da50
{
    FLOAT X, Y;
    FLOAT sub_0058da50();
};

// @baa 0x0058da50
FLOAT C_0058da50::sub_0058da50()
{
    return appSqrt(X * X + Y * Y);
}
