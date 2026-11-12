// TextureFlipbook.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: the RF_ flags and UObject::HasAnyFlags (ObjectFlags is an FQWord here). */
#define RF_Cooked ((QWORD)0x0000800000000000)
struct UObject_ : public UObject
{
	FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
};

// @baa 0x00721030
void UTexture2D::PostLoad()
{
	// Uncooked textures keep all their mips; the tail starts at the last one.
	if (!((UObject_*)this)->HasAnyFlags(RF_Cooked))
	{
		MipTailBaseIdx = Max(0, Mips.ArrayNum - 1);
	}
	Super::PostLoad();
}
