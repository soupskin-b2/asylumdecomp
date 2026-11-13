// RCapeRenderingComponent.cpp: 4 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016d3560
IMPLEMENT_CLASS_AT(URCapeRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeRenderingComponent.cpp", 11);

// @baa 0x016d35a0

const TCHAR* sub_016cdb40();
const TCHAR* sub_0053f6c0();
// @baa 0x016cdf20
INT URCapeRenderingComponent::vf_000()
{
    return sub_016cdb40 == sub_0053f6c0;
}

/* Undeclared in the kit: URCapeComponent's debug-draw helpers. 016b21c0/016b2200 test the local
 * player's cape debug settings; 016c65e0 resets the debug drawing. */
struct URCapeComponent_ : public URCapeComponent
{
	UBOOL sub_016b21c0(); /* 0x016b21c0 */
	UBOOL sub_016b2200(); /* 0x016b2200 */
	void sub_016c65e0(FLOAT); /* 0x016c65e0 */
	void SetDebugRenderBone(INT ChainNumber, INT LinkNumber); /* 0x016ae900 */
};

// @baa 0x016cdf80
void URCapeRenderingComponent::HandleDebugLineDrawing()
{
	if (((URCapeComponent_*)CapeComponent)->sub_016b21c0() || ((URCapeComponent_*)CapeComponent)->sub_016b2200())
	{
		((URCapeComponent_*)CapeComponent)->sub_016c65e0(0.f);
	}
	((URCapeComponent_*)CapeComponent)->SetDebugRenderBone(DebugRenderBoneChainIndex, DebugRenderBoneLinkIndex);
}
