// Engine_0700000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW  /* new(Array) calls an out-of-line function here */
#include "ue3/Classes.h"
#include "ue3/Script.h"

// the instance's parameter of that name, or NULL
FTextureParameterValue* sub_006e8af0(UMaterialInstanceConstant* Instance, FName ParameterName);
FScalarParameterValue* sub_006e8960(UMaterialInstanceConstant* Instance, FName ParameterName);
FFontParameterValue* sub_006e8bb0(UMaterialInstanceConstant* Instance, FName ParameterName);
// pass the new value on to the rendering thread
void sub_00702330(UMaterialInstanceConstant* Instance, FTextureParameterValue* ParameterValue);
void sub_00701fc0(UMaterialInstanceConstant* Instance, FScalarParameterValue* ParameterValue);
void sub_007024d0(UMaterialInstanceConstant* Instance, FFontParameterValue* ParameterValue);

// @baa 0x007027b0
void UMaterialInstanceConstant::SetTextureParameterValue(FName ParameterName, UTexture* Value)
{
	sub_006c47c0(TEXT("MIC::SetTextureParameterValue"));
	FTextureParameterValue* ParameterValue = sub_006e8af0(this, ParameterName);
	if (ParameterValue == NULL)
	{
		ParameterValue = new(TextureParameterValues) FTextureParameterValue;
		ParameterValue->ParameterName = ParameterName;
		ParameterValue->ExpressionGUID.Invalidate();
	}
	ParameterValue->ParameterValue = Value;
	sub_00702330(this, ParameterValue);
}

// @baa 0x00702740
void UMaterialInstanceConstant::SetScalarParameterValue(FName ParameterName, FLOAT Value)
{
	sub_006c47c0(TEXT("MIC::SetScalarParameterValue"));
	FScalarParameterValue* ParameterValue = sub_006e8960(this, ParameterName);
	if (ParameterValue == NULL)
	{
		ParameterValue = new(ScalarParameterValues) FScalarParameterValue;
		ParameterValue->ParameterName = ParameterName;
		ParameterValue->ExpressionGUID.Invalidate();
	}
	ParameterValue->ParameterValue = Value;
	sub_00701fc0(this, ParameterValue);
}

// @baa 0x00702820
void UMaterialInstanceConstant::SetFontParameterValue(FName ParameterName, UFont* FontValue, INT FontPage)
{
	sub_006c47c0(TEXT("MIC::SetFontParameterValue"));
	FFontParameterValue* ParameterValue = sub_006e8bb0(this, ParameterName);
	if (ParameterValue == NULL)
	{
		ParameterValue = new(FontParameterValues) FFontParameterValue;
		ParameterValue->ParameterName = ParameterName;
		ParameterValue->ExpressionGUID.Invalidate();
	}
	ParameterValue->FontValue = FontValue;
	ParameterValue->FontPage = FontPage;
	sub_007024d0(this, ParameterValue);
}
