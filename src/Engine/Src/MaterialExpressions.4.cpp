// MaterialExpressions.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c30250
FString UMaterialExpressionFontSampleParameter::GetCaption() const
{
	return FString::Printf(TEXT("FontParam '%s'"), *(const FString&)ParameterName.ToString());
}

// @baa 0x00c2f3c0
FString UMaterialExpressionTextureSampleParameter::GetCaption() const
{
	return FString::Printf(TEXT("Parm '%s'"), *(const FString&)ParameterName.ToString());
}

// @baa 0x00c1d130
/* Copies the R/G/B properties into Colour. */
void UMaterialExpressionConstant3Vector::PostLoad()
{
	Colour.R = R;
	Colour.G = G;
	Colour.B = B;
	Super::PostLoad();
}
