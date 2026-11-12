// BmGame_0580000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>

// @baa 0x0058c460
float sub_0058c460(float x)
{
    return logf(x);
}

// @baa 0x0058c470
float sub_0058c470(float x, float y)
{
    return fmodf(x, y);
}

struct Vector_
{
    float X;
    float Y;
    float Z;

    float sub_0058da10() const;
};

// @baa 0x0058da10
float Vector_::sub_0058da10() const
{
    return sqrt(X * X + Y * Y + Z * Z);
}
