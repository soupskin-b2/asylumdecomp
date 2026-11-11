// Engine_0660000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00663610
void UMaterialInterface::GetTextures(INT, INT)
{
    PURE_VIRTUAL(UMaterial::GetTextures, );
}

// @baa 0x006635d0
UINT UMaterialInterface::GetRenderProxy(INT)
{
    PURE_VIRTUAL(UMaterialInterface::GetRenderProxy, return 0;);
}

// @baa 0x00663690
INT UMaterialInterface::GetStaticSwitchParameterValue(INT, INT, INT, INT)
{
    PURE_VIRTUAL(UMaterialInterface::GetStaticSwitchParameterValue, return 0;);
}
