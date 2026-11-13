// UnWorld.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x009b2d50
/* ShouldBeLoaded(ViewLocation): loaded while the viewer is within MaxDistance of Origin. */
INT ULevelStreamingDistance::vf_10c(INT ViewLocationPtr)
{
	const FVector& ViewLocation = *(FVector*)ViewLocationPtr;
	const FLOAT DX = Origin.X - ViewLocation.X, DY = Origin.Y - ViewLocation.Y, DZ = Origin.Z - ViewLocation.Z;
	return appSqrt(DX * DX + DY * DY + DZ * DZ) <= MaxDistance;
}
