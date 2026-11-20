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
UBOOL URCapeRenderingComponent::HasUniqueStaticConfigName() const
{
    return sub_016cdb40 == sub_0053f6c0;
}

/* URCapeComponent's debug-draw helpers: 016b21c0/016b2200 test the local player's cape debug settings;
 * 016c65e0 resets the debug drawing. */

// @baa 0x016cdf80
void URCapeRenderingComponent::HandleDebugLineDrawing()
{
	if (((URCapeComponent*)CapeComponent)->sub_016b21c0() || ((URCapeComponent*)CapeComponent)->sub_016b2200())
	{
		((URCapeComponent*)CapeComponent)->sub_016c65e0(0.f);
	}
	((URCapeComponent*)CapeComponent)->SetCapeDebugRenderBone(DebugRenderBoneChainIndex, DebugRenderBoneLinkIndex);
}
