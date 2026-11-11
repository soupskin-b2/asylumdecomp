// fmod_systemi.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>

// @baa 0x0058c3c0
float sub_0058c3c0(float x)
{
    return logf(x);
}

// @baa 0x0058c3b0
float sub_0058c3b0(float x, float y)
{
    return fmodf(x, y);
}
