// RAnimUtil.cpp: 1 function
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
