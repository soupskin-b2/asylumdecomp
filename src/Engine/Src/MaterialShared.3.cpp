// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

struct UMaterialInstanceConstant_ : public UMaterialInstanceConstant
{
    // vf_178 in Classes.h (UMaterialInstance's virtual ClearParameterValues)
    void ClearParameterValues();
    // UMaterialInstance: logs "%s : Modifying '%s' during gameplay." (game-specific)
    void sub_006c47c0(const TCHAR* FunctionName);
};

// @baa 0x006edf70
void UMaterialInstanceConstant_::ClearParameterValues()
{
    sub_006c47c0(TEXT("MIC::ClearParameterValues"));

    VectorParameterValues.Empty();
    ScalarParameterValues.Empty();
    TextureParameterValues.Empty();
    FontParameterValues.Empty();

    // vf_180 in Classes.h (UMaterialInstance's virtual InitResources)
    InitResources();
}
