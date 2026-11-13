// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: RF_Public and UObject::SetFlags (ObjectFlags is an FQWord here). */
#define RF_Public ((QWORD)0x0000000400000000)

// @baa 0x00cf06d0
/* After loading, make the font's page textures public and put them in the UI texture group. */
void UFont::PostLoad()
{
	Super::PostLoad();

	CacheCharacterCountAndMaxCharHeight();

	for (INT TextureIndex = 0; TextureIndex < Textures.Num(); ++TextureIndex)
	{
		UTexture2D* Texture = Textures(TextureIndex);
		if (Texture)
		{
			Texture->SetFlags(RF_Public);
			Texture->LODGroup = TEXTUREGROUP_UI;
		}
	}
}

// @baa 0x00cf7250
/* UE3's UInterpTrackParticleReplay::GetKeyframeTime(INT KeyIndex): the key's time, 0 for an invalid index. */
FLOAT UInterpTrackParticleReplay::GetKeyframeTime(INT KeyIndex)
{
    if (KeyIndex < 0 || KeyIndex >= TrackKeys.Num())
    {
        return 0.f;
    }
    return TrackKeys(KeyIndex).Time;
}
