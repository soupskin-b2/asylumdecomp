// Engine_0700000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UMaterialInstanceConstant_ : public UMaterialInstanceConstant
{
	void sub_006c47c0(const TCHAR*);
	void SetTextureParameterValue(FName ParameterName, UTexture* Value);
};

FTextureParameterValue* sub_006e8af0(UMaterialInstanceConstant*, FName);
FTextureParameterValue* sub_006e7cc0(INT, TArrayNoInit<FTextureParameterValue>&);
void sub_00702330(UMaterialInstanceConstant*, FTextureParameterValue*);
// @baa 0x007027b0
void UMaterialInstanceConstant_::SetTextureParameterValue(FName ParameterName, UTexture* Value)
{
	sub_006c47c0(L"MIC::SetTextureParameterValue");
	FTextureParameterValue* Param = sub_006e8af0(this, ParameterName);
	if (Param == NULL)
	{
		Param = sub_006e7cc0(0x10, TextureParameterValues);
		if (Param != NULL)
			Param->ExpressionGUID.A = 0;
		else
			Param = NULL;
		Param->ParameterName = ParameterName;
		Param->ExpressionGUID.A = 0;
	}
	Param->ParameterValue = Value;
	sub_00702330(this, Param);
}

struct UMaterialInstanceConstant__00702740 : public UMaterialInstanceConstant
{
	void sub_006c47c0(const TCHAR*);
	void SetScalarParameterValue(FName ParameterName, FLOAT Value);
};

FScalarParameterValue* sub_006e8960(UMaterialInstanceConstant*, FName);
FScalarParameterValue* sub_006e7c20(INT, TArrayNoInit<FScalarParameterValue>&);
void sub_00701fc0(UMaterialInstanceConstant*, FScalarParameterValue*);
// @baa 0x00702740
void UMaterialInstanceConstant__00702740::SetScalarParameterValue(FName ParameterName, FLOAT Value)
{
	sub_006c47c0(L"MIC::SetScalarParameterValue");
	FScalarParameterValue* Param = sub_006e8960(this, ParameterName);
	if (Param == NULL)
	{
		Param = sub_006e7c20(0x10, ScalarParameterValues);
		if (Param != NULL)
			Param->ExpressionGUID.A = 0;
		else
			Param = NULL;
		Param->ParameterName = ParameterName;
		Param->ExpressionGUID.A = 0;
	}
	Param->ParameterValue = Value;
	sub_00701fc0(this, Param);
}
