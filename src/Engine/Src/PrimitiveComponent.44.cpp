// PrimitiveComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006fef60
IMPLEMENT_CLASS_AT(UStaticMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 16);

// @baa 0x006dcdd0
void UCylinderComponent::SetCylinderSize(FLOAT NewRadius, FLOAT NewHeight)
{
	CollisionHeight = NewHeight;
	CollisionRadius = NewRadius;
	BeginDeferredReattach();
}

/* out of line in the exe (006dfb00) */

// @baa 0x006ea640
/* UMeshComponent::SetMaterial: overrides the element's material (growing the override list as needed) and
 * reattaches the component when it changed. */
void UMeshComponent::SetMaterial(INT ElementIndex, UMaterialInterface* Material)
{
	if (Materials.Num() <= ElementIndex || Materials(ElementIndex) != Material)
	{
		if (Materials.Num() <= ElementIndex)
		{
			Materials.AddZeroed(ElementIndex + 1 - Materials.Num());
		}
		Materials(ElementIndex) = Material;
		BeginDeferredReattach();
	}
}
