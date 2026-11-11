// RAnimUtil.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

// @baa 0x01598630
FVector sub_01598630(const FVector2D& In)
{
    FLOAT A = In.X;
    FLOAT B = In.Y;
    FVector Out;
    FLOAT CB = cosf(B);
    Out.X = cosf(A) * CB;
    Out.Y = sinf(A) * CB;
    Out.Z = sinf(B);
    return Out;
}
