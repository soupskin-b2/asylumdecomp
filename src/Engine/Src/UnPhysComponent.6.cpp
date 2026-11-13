// UnPhysComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x009ff6f0
/* GetNxActor(BoneName): the physics actor of the component's body instance, if any. */
INT UPrimitiveComponent::vf_1f0(INT BoneNameIndex, INT BoneNameNumber)
{
	if (BodyInstance)
	{
		return BodyInstance->BodyData.Dummy;
	}
	return 0;
}
