// Engine_06e0000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FMICReentranceGuard (MaterialInstance.h; its constructor is out of line, 006ae920) and the
 * TMaterialInstanceTimeVaryingParameterMapping statics (FindParameterByName for textures, 006e91b0) aren't
 * declared. */
class FMICReentranceGuard
{
	UMaterialInstance* Material;
public:
	FMICReentranceGuard(UMaterialInstance* InMaterial);
	~FMICReentranceGuard()
	{
		Material->ReentrantFlag = 0;
	}
};

struct MITVTextureParameterMapping
{
	static FTextureParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
};

// @baa 0x006e9410
/* The named texture parameter: this instance's override if it has one, else the parent's value. */
UBOOL UMaterialInstanceTimeVarying::GetTextureParameterValue(FName ParameterName, UTexture*& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FTextureParameterValueOverTime* ParameterValue = MITVTextureParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue && ParameterValue->ParameterValue)
	{
		OutValue = ParameterValue->ParameterValue;
		return TRUE;
	}
	else if (Parent)
	{
		FMICReentranceGuard Guard(this);
		return Parent->GetTextureParameterValue(ParameterName, OutValue);
	}
	else
	{
		return FALSE;
	}
}

struct MICVectorParameterMapping
{
	static FVectorParameterValue* FindParameterByName(UMaterialInstanceConstant* Instance, FName Name);
};

// @baa 0x006e8c60
/* The named vector parameter: this instance's override if it has one, else the parent's value. */
UBOOL UMaterialInstanceConstant::GetVectorParameterValue(FName ParameterName, FLinearColor& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FVectorParameterValue* ParameterValue = MICVectorParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue)
	{
		OutValue = ParameterValue->ParameterValue;
		return TRUE;
	}
	else if (Parent)
	{
		FMICReentranceGuard Guard(this);
		return Parent->GetVectorParameterValue(ParameterName, OutValue);
	}
	else
	{
		return FALSE;
	}
}

struct MICScalarParameterMapping
{
	static FScalarParameterValue* FindParameterByName(UMaterialInstanceConstant* Instance, FName Name);
};

// @baa 0x006e8d40
/* The named scalar parameter: this instance's override if it has one, else the parent's value. */
UBOOL UMaterialInstanceConstant::GetScalarParameterValue(FName ParameterName, FLOAT& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FScalarParameterValue* ParameterValue = MICScalarParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue)
	{
		OutValue = ParameterValue->ParameterValue;
		return TRUE;
	}
	else if (Parent)
	{
		FMICReentranceGuard Guard(this);
		return Parent->GetScalarParameterValue(ParameterName, OutValue);
	}
	else
	{
		return FALSE;
	}
}

struct MICTextureParameterMapping
{
	static FTextureParameterValue* FindParameterByName(UMaterialInstanceConstant* Instance, FName Name);
};

// @baa 0x006e8e10
/* The named texture parameter: this instance's override if it has one, else the parent's value. */
UBOOL UMaterialInstanceConstant::GetTextureParameterValue(FName ParameterName, UTexture*& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FTextureParameterValue* ParameterValue = MICTextureParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue && ParameterValue->ParameterValue)
	{
		OutValue = ParameterValue->ParameterValue;
		return TRUE;
	}
	else if (Parent)
	{
		FMICReentranceGuard Guard(this);
		return Parent->GetTextureParameterValue(ParameterName, OutValue);
	}
	else
	{
		return FALSE;
	}
}
