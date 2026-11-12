// RPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

// @baa 0x01673b20
void ARPawnCombat::sub_01673b20(FVector V)
{
    DestRot = atan2f(V.Y, V.X);
}
