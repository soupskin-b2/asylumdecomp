// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00947260
UMaterialInterface* UStaticMeshComponent::GetMaterial(INT MaterialIndex)
{
	return GetMaterial(MaterialIndex, 0);
}
