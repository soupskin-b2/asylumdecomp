// R3rdPersonCamera.cpp: 2 functions
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

struct C_01686b30
{
    BYTE _pad0[4];
    INT I1;      // +4
    INT I2;      // +8
    FLOAT F1;    // +0xC
    FLOAT F2;    // +0x10
    FLOAT F3;    // +0x14
    FLOAT F4;    // +0x18
    void sub_01686b30(); /* 0x01686b30 */
};

// @baa 0x01686b30
void C_01686b30::sub_01686b30()
{
    F1 = 10000.0f;
    F2 = 10000.0f;
    F3 = 10000.0f;
    F4 = 10000.0f;
    I1 = 0;
    I2 = 0;
}
