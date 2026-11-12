// BmGame_1710000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

// @baa 0x01716880
/* The charge felt at InLoc: 6 at the door, falling linearly to 0.5 at 700 units and beyond. Dist gets the distance. */
FLOAT ARDisruptableObjectDoor::CalcCharge(FVector InLoc, FLOAT& Dist)
{
    const FLOAT DX = InLoc.X - Location.X;
    const FLOAT DY = InLoc.Y - Location.Y;
    const FLOAT DZ = InLoc.Z - Location.Z;
    FLOAT Distance = sqrtf(DX * DX + DY * DY + DZ * DZ);
    Dist = Distance;
    if (Distance > 700.f)
    {
        Distance = 700.f;
    }
    return 5.5f - Distance * (5.5f / 700.f) + 0.5f;
}
