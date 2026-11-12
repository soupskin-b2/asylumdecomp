// Material.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* FName::operator== (UnName.h); the kit's FName has no operators. */
// @baa 0x006bb4a0
/* A font parameter's value is the font (and texture page) on the material's font-sample parameter expression of
 * that name. */
UBOOL UMaterial::GetFontParameterValue(FName ParameterName, UFont*& OutFontValue, INT& OutFontPage)
{
	UBOOL bFound = FALSE;
	for (INT ExpressionIndex = 0; ExpressionIndex < Expressions.Num(); ExpressionIndex++)
	{
		UMaterialExpressionFontSampleParameter* FontSampleParameter =
			Cast<UMaterialExpressionFontSampleParameter>(Expressions(ExpressionIndex));
		if (FontSampleParameter && FontSampleParameter->ParameterName == ParameterName)
		{
			OutFontValue = FontSampleParameter->Font;
			OutFontPage = FontSampleParameter->FontTexturePage;
			bFound = TRUE;
			break;
		}
	}
	return bFound;
}
