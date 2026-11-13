// MaterialInstance.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gap: FMICReentranceGuard (MaterialInstance.h; its constructor is out of line, 006ae920) isn't declared. */
class FMICReentranceGuard
{
	UMaterialInstance* Material;
public:
	FMICReentranceGuard(UMaterialInstance* InMaterial);
	~FMICReentranceGuard()
	{
		Material->ReentrantFlag = 0;
	}
};

// @baa 0x006aed50
/* This instance's physical material, else its parent's; a material that loops back on itself gets the default
 * material's. */
UPhysicalMaterial* UMaterialInstance::GetPhysicalMaterial()
{
	if (ReentrantFlag)
	{
		return GEngine->DefaultMaterial->GetPhysicalMaterial();
	}

	FMICReentranceGuard Guard(this);
	if (PhysMaterial)
	{
		return PhysMaterial;
	}
	else if (Parent)
	{
		// If no physical material has been set for this instance, use the parent's.
		return Parent->GetPhysicalMaterial();
	}
	else
	{
		return NULL;
	}
}
