// LensFlare.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x00bace80
/* Slot 0x2c (unnamed in the kit; UE3's FinishDestroy): frees the fence. ReleaseResourcesFence is an
 * FRenderCommandFence* (FPointer in the kit), and FRenderCommandFence has no destructor, so delete is just the free. */
void ULensFlareComponent::vf_02c()
{
	if (ReleaseResourcesFence.Dummy)
	{
		appFree((void*)ReleaseResourcesFence.Dummy);
		ReleaseResourcesFence.Dummy = 0;
	}
	Super::vf_02c();
}
