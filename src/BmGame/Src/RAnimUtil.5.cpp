// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"
#include <math.h>

FLOAT sub_01598490(FLOAT Angle);
static __forceinline FLOAT AngleDifference(FLOAT FromAngle, FLOAT ToAngle)
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

static inline FLOAT Sign(FLOAT Value)
{
    return Value > 0.0f ? 1 : Value < 0.0f ? -1 : 0;
}

// @baa 0x0159dfb0
FLOAT sub_0159dfb0(FLOAT Value, FLOAT Target, FLOAT Avoid)
{
    FLOAT Error = AngleDifference(Value, Target);
    FLOAT AvoidanceError = AngleDifference(Value, Avoid);
    if (Sign(Error) == Sign(AvoidanceError) && fabs((DOUBLE)Error) >= fabs((DOUBLE)AvoidanceError))
        return sub_01598490(6.28318548f - Error);
    return Error;
}
