// RAnimUtil.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

// @baa 0x015984e0
FLOAT sub_015984e0(FLOAT FromAngle, FLOAT ToAngle)
{
    const FLOAT Pi = 3.14159265358979323846f;
    const DOUBLE TwoPi = 2.0 * Pi;
    ToAngle -= FromAngle;
    if (ToAngle > 0.0f)
        ToAngle = (FLOAT)appFmod((DOUBLE)ToAngle + Pi, TwoPi) - Pi;
    else if (ToAngle < 0.0f)
        ToAngle = -((FLOAT)appFmod((DOUBLE)Pi - ToAngle, TwoPi) - Pi);
    else
        ToAngle = 0.0f;
    return ToAngle;
}

// @baa 0x01598490
FLOAT sub_01598490(FLOAT Angle)
{
    const FLOAT Pi = 3.14159265358979323846f;
    const DOUBLE TwoPi = 2.0 * Pi;
    if (Angle > 0.0f)
        return (FLOAT)appFmod((DOUBLE)Angle + Pi, TwoPi) - Pi;
    if (Angle < 0.0f)
        return -((FLOAT)appFmod((DOUBLE)Pi - Angle, TwoPi) - Pi);
    return 0.0f;
}

// @baa 0x01598950
DOUBLE sub_01598950(FLOAT DeltaTime, FLOAT Speed)
{
#line 1658 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
    check(Speed >= 0.f);
    return 1.0 - appExp(-(DOUBLE)DeltaTime * Speed);
}

#line 42 "candidate.cpp"
