// Engine_0980000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00981c20
/* Slot 0x200 (unnamed in the kit): FALSE only when the owner is a non-static, movable actor. */
INT UStaticMeshComponent::vf_200()
{
	UBOOL bDynamicOwner = FALSE;
	if (Owner)
	{
		bDynamicOwner = !Owner->bStatic && Owner->bMovable;
	}
	return !bDynamicOwner;
}
