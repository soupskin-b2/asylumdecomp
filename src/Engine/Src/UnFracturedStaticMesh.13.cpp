// UnFracturedStaticMesh.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00947260
UMaterialInterface* UStaticMeshComponent::GetMaterial(INT MaterialIndex)
{
	return GetMaterial(MaterialIndex, 0);
}

/* the out-of-line TArray<BYTE> copy constructor */
template TArray<BYTE>::TArray(const TArray<BYTE>& Other);

// @baa 0x007c5a10
/* FracturedBaseComponent.cpp */
TArray<BYTE> UFracturedBaseComponent::GetVisibleFragments()
{
	return VisibleFragments;
}

// Wraps an index into a fixed-size ring.
struct FRing_
{
	BYTE _pad[8];
	INT Count; /* 0x8 */

	INT Wrap(WORD Index);
};

// @baa 0x007a70e0
INT FRing_::Wrap(WORD Index)
{
	return (WORD)Index % Count;
}
