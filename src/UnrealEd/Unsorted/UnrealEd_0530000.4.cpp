// UnrealEd_0530000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>

// @baa 0x0053e220
float sub_0053e220(float y, float x)
{
    return atan2f(y, x);
}

// @baa 0x0053e230
float sub_0053e230(float x, float y)
{
    return powf(x, y);
}
