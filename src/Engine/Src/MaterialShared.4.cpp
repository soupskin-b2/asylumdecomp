// MaterialShared.cpp: 1 function
// Placed here by: contributions.
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x006635f0
class UPhysicalMaterial* UMaterialInterface::GetPhysicalMaterial()
{
	PURE_VIRTUAL(UMaterialInterface::GetPhysicalMaterial, return NULL;);
}
