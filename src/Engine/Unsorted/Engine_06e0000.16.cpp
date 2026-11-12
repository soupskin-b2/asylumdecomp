// Engine_06e0000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW		/* new(Array) T kept out of line, per T */
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add */
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x006e7b70
/* Array.h's placement new into a TArray, instantiated out of line for FVectorParameterValue (used by MIC::SetVectorParameterValue). */
FVectorParameterValue* NewFVectorParameterValue(TArray<FVectorParameterValue>& Array)
{
	return new(Array) FVectorParameterValue;
}

// @baa 0x006e7c20
/* Array.h's placement new into a TArray, instantiated out of line for FScalarParameterValue (used by MIC::SetScalarParameterValue). */
FScalarParameterValue* NewFScalarParameterValue(TArray<FScalarParameterValue>& Array)
{
	return new(Array) FScalarParameterValue;
}

// @baa 0x006e7cc0
/* Array.h's placement new into a TArray, instantiated out of line for FTextureParameterValue (used by MIC::SetTextureParameterValue). */
FTextureParameterValue* NewFTextureParameterValue(TArray<FTextureParameterValue>& Array)
{
	return new(Array) FTextureParameterValue;
}

// @baa 0x006e7d60
/* Array.h's placement new into a TArray, instantiated out of line for FFontParameterValue (used by MIC::SetFontParameterValue). */
FFontParameterValue* NewFFontParameterValue(TArray<FFontParameterValue>& Array)
{
	return new(Array) FFontParameterValue;
}

// @baa 0x006e7e10
/* Array.h's placement new into a TArray, instantiated out of line for FScalarParameterValueOverTime (used by MITV::SetScalarParameterValue). */
FScalarParameterValueOverTime* NewFScalarParameterValueOverTime(TArray<FScalarParameterValueOverTime>& Array)
{
	return new(Array) FScalarParameterValueOverTime;
}

// @baa 0x006e7ed0
/* Array.h's placement new into a TArray, instantiated out of line for FVectorParameterValueOverTime (used by MITV::SetVectorParameterValue). */
FVectorParameterValueOverTime* NewFVectorParameterValueOverTime(TArray<FVectorParameterValueOverTime>& Array)
{
	return new(Array) FVectorParameterValueOverTime;
}

// @baa 0x006e7f80
/* Array.h's placement new into a TArray, instantiated out of line for FTextureParameterValueOverTime (used by MITV::SetTextureParameterValue). */
FTextureParameterValueOverTime* NewFTextureParameterValueOverTime(TArray<FTextureParameterValueOverTime>& Array)
{
	return new(Array) FTextureParameterValueOverTime;
}

// @baa 0x006e8030
/* Array.h's placement new into a TArray, instantiated out of line for FFontParameterValueOverTime (used by MITV::SetFontParameterValue). */
FFontParameterValueOverTime* NewFFontParameterValueOverTime(TArray<FFontParameterValueOverTime>& Array)
{
	return new(Array) FFontParameterValueOverTime;
}
