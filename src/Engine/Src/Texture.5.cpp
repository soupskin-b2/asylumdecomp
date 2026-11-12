// Texture.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gap: UObject::GetOuter/HasAnyFlags/IsTemplate and the RF_ flags (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_ClassDefaultObject ((QWORD)0x0000000000000200)
#define RF_ArchetypeObject ((QWORD)0x0000000000000400)

/* GSystemSettings.TextureLODSettings (FSystemSettings/FTextureLODSettings aren't in the kit). */
class FTextureLODSettings
{
public:
	INT CalculateLODBias(UTexture* Texture) const; /* 0x0071ce80 */
};

extern FTextureLODSettings g_026c0ba8;
#define GSystemSettings_TextureLODSettings g_026c0ba8
// @baa 0x00720ef0
/* Texture.cpp */
void UTexture::PostLoad()
{
	Super::PostLoad();

	RGBE = (CompressionSettings == TC_HighDynamicRange);

	if (!this->IsTemplate())
	{
		// Update cached LOD bias.
		CachedCombinedLODBias = GSystemSettings_TextureLODSettings.CalculateLODBias(this);

		// The texture will be cached by the cubemap it is contained within on consoles.
		if (Cast<UTextureCube>(this->GetOuter()) == NULL)
		{
			// Recreate the texture's resource.
			UpdateResource();
		}
	}
}
