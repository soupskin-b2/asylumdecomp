// MaterialExpressions.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FString::operator* and FString::Printf (0x005495f0, the copy this unit links against) aren't declared. */
struct FString_ : public FString
{
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
	static FString Printf(const TCHAR* Fmt, ...);
};

// @baa 0x00c30250
/* Slot 0x128 (unnamed in the kit; UE3's GetCaption). */
FString UMaterialExpressionFontSampleParameter::vf_128()
{
	return FString_::Printf(TEXT("FontParam '%s'"), *(const FString_&)ParameterName.ToString());
}

// @baa 0x00c2f3c0
/* Slot 0x128 (unnamed in the kit; UE3's GetCaption). */
FString UMaterialExpressionTextureSampleParameter::vf_128()
{
	return FString_::Printf(TEXT("Parm '%s'"), *(const FString_&)ParameterName.ToString());
}
