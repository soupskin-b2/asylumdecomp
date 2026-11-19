// LensFlare.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x00bace80
/* Slot 0x2c (UE3's FinishDestroy): frees the fence. FRenderCommandFence has no destructor, so delete is just the
 * free. */
void ULensFlareComponent::FinishDestroy()
{
	if (ReleaseResourcesFence)
	{
		delete ReleaseResourcesFence;
		ReleaseResourcesFence = NULL;
	}
	Super::FinishDestroy();
}
