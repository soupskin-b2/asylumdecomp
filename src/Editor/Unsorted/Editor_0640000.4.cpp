// Editor_0640000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: FBoxSphereBounds' box constructor (UnMath.h) */

// @baa 0x006497a0
/* The bounds of a box: its center and half-extent, and the sphere around it. */
FBoxSphereBounds::FBoxSphereBounds(const FBox& Box)
{
	Box.GetCenterAndExtents(Origin, BoxExtent);
	SphereRadius = BoxExtent.Size();
}
