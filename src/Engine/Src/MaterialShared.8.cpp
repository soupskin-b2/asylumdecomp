// MaterialShared.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW		/* new(Array) T kept out of line, per T (006e7f80) */
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gaps: the default constructor of the parameter structs (it zeroes ExpressionGUID: FGuid's default
 * constructor, presumably) and the TMaterialInstanceTimeVaryingParameterMapping statics (MaterialInstanceTimeVarying
 * .cpp: FindParameterByName 006e91b0, GameThread_UpdateParameter 00702990) aren't declared. */
struct FTextureParameterValueOverTime_ : public FTextureParameterValueOverTime
{
	FTextureParameterValueOverTime_()
	{
		ExpressionGUID.A = 0;
	}
};

struct MITVTextureParameterMapping
{
	static FTextureParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
	static void GameThread_UpdateParameter(UMaterialInstanceTimeVarying* Instance, const FTextureParameterValueOverTime& Parameter);
};

// @baa 0x00702d20
/* Sets the named texture parameter, adding it (with default timing) if it isn't overridden yet, and passes it to
 * the rendering thread. */
void UMaterialInstanceTimeVarying::SetTextureParameterValue(FName ParameterName, UTexture* Value)
{
	sub_006c47c0(TEXT("MITV::SetTextureParameterValue"));

	FTextureParameterValueOverTime* ParameterValue = MITVTextureParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue == NULL)
	{
		// If there's no element for the named parameter in the array yet, add one.
		ParameterValue = new(TextureParameterValues) FTextureParameterValueOverTime_;

		ParameterValue->StartTime = -1.f;
		ParameterValue->bLoop = FALSE;
		ParameterValue->bAutoActivate = FALSE;
		ParameterValue->CycleTime = 1.f;
		ParameterValue->bNormalizeTime = FALSE;
		ParameterValue->bOffsetFromEnd = FALSE;

		ParameterValue->ParameterName = ParameterName;
		ParameterValue->OffsetTime = 0.f;
		ParameterValue->ExpressionGUID.Invalidate();
	}

	ParameterValue->ParameterValue = Value;

	// Update the material instance data in the rendering thread.
	MITVTextureParameterMapping::GameThread_UpdateParameter(this, *ParameterValue);
}

/* Kit gaps: the default constructor of the parameter structs (it zeroes ExpressionGUID: FGuid's default
 * constructor, presumably) and the TMaterialInstanceTimeVaryingParameterMapping statics (MaterialInstanceTimeVarying
 * .cpp: FindParameterByName 006e9270, GameThread_UpdateParameter 00702b30) aren't declared. */
struct FFontParameterValueOverTime_ : public FFontParameterValueOverTime
{
	FFontParameterValueOverTime_()
	{
		ExpressionGUID.A = 0;
	}
};

/* UMaterialInstanceTimeVarying::SetFontParameterValue isn't declared (MIC's is, non-virtual). */
struct UMaterialInstanceTimeVarying_ : public UMaterialInstanceTimeVarying
{
	void SetFontParameterValue(FName ParameterName, UFont* FontValue, INT FontPage);
};

struct MITVFontParameterMapping
{
	static FFontParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
	static void GameThread_UpdateParameter(UMaterialInstanceTimeVarying* Instance, const FFontParameterValueOverTime& Parameter);
};

// @baa 0x00702dc0
/* Sets the named font parameter, adding it (with default timing) if it isn't overridden yet, and passes it to
 * the rendering thread. */
void UMaterialInstanceTimeVarying_::SetFontParameterValue(FName ParameterName, UFont* FontValue, INT FontPage)
{
	sub_006c47c0(TEXT("MITV::SetFontParameterValue"));

	FFontParameterValueOverTime* ParameterValue = MITVFontParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue == NULL)
	{
		// If there's no element for the named parameter in the array yet, add one.
		ParameterValue = new(FontParameterValues) FFontParameterValueOverTime_;

		ParameterValue->bLoop = FALSE;
		ParameterValue->bAutoActivate = FALSE;
		ParameterValue->CycleTime = 1.f;
		ParameterValue->bNormalizeTime = FALSE;
		ParameterValue->bOffsetFromEnd = FALSE;

		ParameterValue->ParameterName = ParameterName;
		ParameterValue->OffsetTime = 0.f;
		ParameterValue->ExpressionGUID.Invalidate();
	}

	ParameterValue->FontValue = FontValue;
	ParameterValue->FontPage = FontPage;

	// Update the material instance data in the rendering thread.
	MITVFontParameterMapping::GameThread_UpdateParameter(this, *ParameterValue);
}

/* Kit gaps: the default constructor of the parameter structs (it zeroes ExpressionGUID: FGuid's default
 * constructor, presumably) and the TMaterialInstanceTimeVaryingParameterMapping statics (MaterialInstanceTimeVarying
 * .cpp: FindParameterByName 006e9010, GameThread_UpdateParameter 00708a80) aren't declared. */
struct FScalarParameterValueOverTime_ : public FScalarParameterValueOverTime
{
	FScalarParameterValueOverTime_()
	{
		ExpressionGUID.A = 0;
	}
};

struct MITVScalarParameterMapping
{
	static FScalarParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
	static void GameThread_UpdateParameter(UMaterialInstanceTimeVarying* Instance, const FScalarParameterValueOverTime& Parameter);
};

// @baa 0x00708ef0
/* Sets the named scalar parameter, adding it (with default timing) if it isn't overridden yet, and passes it to
 * the rendering thread. */
void UMaterialInstanceTimeVarying::SetScalarParameterValue(FName ParameterName, FLOAT Value)
{
	sub_006c47c0(TEXT("MITV::SetScalarParameterValue"));

	FScalarParameterValueOverTime* ParameterValue = MITVScalarParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue == NULL)
	{
		// If there's no element for the named parameter in the array yet, add one.
		ParameterValue = new(ScalarParameterValues) FScalarParameterValueOverTime_;

		appMemzero(&ParameterValue->ParameterValueCurve.Points, sizeof(ParameterValue->ParameterValueCurve.Points));
		ParameterValue->StartTime = -1.f;
		ParameterValue->bLoop = FALSE;
		ParameterValue->bAutoActivate = FALSE;
		ParameterValue->CycleTime = 1.f;
		ParameterValue->bNormalizeTime = FALSE;
		ParameterValue->bOffsetFromEnd = FALSE;

		ParameterValue->ParameterName = ParameterName;
		ParameterValue->OffsetTime = 0.f;
		ParameterValue->ExpressionGUID.Invalidate();
	}

	ParameterValue->ParameterValue = Value;

	// Update the material instance data in the rendering thread.
	MITVScalarParameterMapping::GameThread_UpdateParameter(this, *ParameterValue);
}
