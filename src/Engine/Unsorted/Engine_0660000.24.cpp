// Engine_0660000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00663630
INT UMaterialInterface::CheckMaterialUsage(INT Usage)
{
    PURE_VIRTUAL(UMaterialInterface::CheckMaterialUsage, return 0;)
}

// @baa 0x006636b0
INT UMaterialInterface::GetStaticComponentMaskParameterValue(INT MaterialIndex, INT ParamIndex, INT ComponentMask, INT Component1, INT Component2, INT Component3, INT Component4)
PURE_VIRTUAL(UMaterialInterface::GetStaticComponentMaskParameterValue, return 0;);
