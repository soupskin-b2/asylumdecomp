// R3rdPersonCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: the DOF manager's post-process update (0x01686a40) isn't declared. */
struct URDOFManager_ : public URDOFManager
{
	void sub_01686a40(FPostProcessSettings& PPSettings);
};

// @baa 0x01689860
/* Slot 0x360 (unnamed in the kit): the camera's post-process overrides (DOF, motion blur, bloom). */
void AR3rdPersonCamera::vf_360(FPostProcessSettings& PPSettings)
{
	if (bCamOverrideDof)
	{
		((URDOFManager_*)DOFManager)->sub_01686a40(PPSettings);
	}
	if (MotionBlurEffect)
	{
		MotionBlurEffect->bShowInGame = (MotionBlurAmount > 0.f || MinCameraMotionBlur > 0.f);
	}
	const FLOAT BloomValue = OverrideBloomValue;
	if (BloomValue >= -999.f)
	{
		PPSettings.bEnableDOF = FALSE;
		PPSettings.Bloom_Scale = BloomValue;
	}
}
