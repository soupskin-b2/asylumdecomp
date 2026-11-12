// Engine_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>

struct sub_00837ad0_S
{
    float X;
    float Y;
    float Z;
    float sub_00837ad0();
};

// @baa 0x00837ad0
float sub_00837ad0_S::sub_00837ad0()
{
    return sqrt(X*X + Y*Y + Z*Z);
}
