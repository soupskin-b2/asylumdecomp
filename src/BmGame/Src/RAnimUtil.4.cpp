// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

static UBOOL HasYaw(FVector2D Translation)
{
    return Translation.Y * Translation.Y + Translation.X * Translation.X > 0.0f;
}

// @baa 0x0159e100
FLOAT sub_0159e100(FVector2D Translation)
{
#line 946 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
    check(HasYaw(Translation));
    return appAtan2(Translation.Y, Translation.X);
}

#line 21 "candidate.cpp"
