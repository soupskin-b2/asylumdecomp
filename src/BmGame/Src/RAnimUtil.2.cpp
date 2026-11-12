// RAnimUtil.cpp (part 2 of 2): 2 functions
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

// @baa 0x015985e0
void sub_015985e0(FVector* Out, FLOAT Yaw)
{
    Out->X = cosf(Yaw);
    Out->Y = sinf(Yaw);
    Out->Z = 0.0f;
}
