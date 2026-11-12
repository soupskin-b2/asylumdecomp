// Engine_0910000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: the natives behind execSetDepthBias (0091f940) and execSetDisableColourWrites (0091fa30) aren't declared. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void SetDepthBias(FLOAT InDepthBias, FExtraDepthBiasData InDepthBiasData);
	void SetDisableColourWrites(UBOOL bInDisableColourWrites);
};

// @baa 0x009145b0
/* Pushes the depth bias and colour-write settings to the scene proxy, once they've left their defaults. */
void USkeletalMeshComponent::UpdateSceneProxy()
{
	bNeedsProxyUpdate = bNeedsProxyUpdate || DepthBias != 0.f || bDisableColourWrites;
	if (bNeedsProxyUpdate)
	{
		((USkeletalMeshComponent_*)this)->SetDepthBias(DepthBias, DepthBiasData);
		((USkeletalMeshComponent_*)this)->SetDisableColourWrites(bDisableColourWrites);
	}
}
