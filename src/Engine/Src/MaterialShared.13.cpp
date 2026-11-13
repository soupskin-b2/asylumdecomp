// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00700550
/* Drops all the parameter overrides, then rebuilds the rendering resources. */
void UMaterialInstanceTimeVarying::ClearParameterValues()
{
	sub_006c47c0(TEXT("MITV::ClearParameterValues"));

	VectorParameterValues.Empty();
	ScalarParameterValues.Empty();
	TextureParameterValues.Empty();
	FontParameterValues.Empty();

	InitResources();
}
