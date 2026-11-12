// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

static UBOOL HasPitch(FVector Translation)
{
    return Translation.X * Translation.X + Translation.Y * Translation.Y > 0.0f;
}

// @baa 0x0159e150
FLOAT sub_0159e150(FVector Translation)
{
#line 969 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
    check(HasPitch(Translation));
    FLOAT XSquared = Translation.X * Translation.X;
    FLOAT YSquared = Translation.Y * Translation.Y;
    return appAtan2(Translation.Z, sqrt((DOUBLE)XSquared + YSquared));
}

#line 24 "candidate.cpp"
