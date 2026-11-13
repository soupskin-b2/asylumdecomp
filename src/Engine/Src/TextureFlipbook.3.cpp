// TextureFlipbook.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00721030
void UTexture2D::PostLoad()
{
	// Uncooked textures keep all their mips; the tail starts at the last one.
	if (!this->HasAnyFlags(RF_Cooked))
	{
		MipTailBaseIdx = Max(0, Mips.ArrayNum - 1);
	}
	Super::PostLoad();
}

// @baa 0x0076eaa0
/* Slot 0x12c (unnamed in the kit): the larger of the flipbook's image counts. */
FLOAT UTextureFlipBook::vf_12c()
{
	return Max(HorizontalImages, VerticalImages);
}
