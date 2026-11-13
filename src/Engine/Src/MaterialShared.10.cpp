// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW		/* new(Array) T kept out of line, per T (006e7e10) */
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Native.h"

/* Kit gaps: the default constructor of the parameter struct (it zeroes ExpressionGUID: FGuid's default constructor,
 * presumably), the TMaterialInstanceTimeVaryingParameterMapping statics (scalar FindParameterByName 006e9010,
 * GameThread_UpdateParameter 00708a80), UWorld::GetTimeSeconds (009c8f80), FInterpCurve<FLOAT>'s native constructor
 * and destructor (out of line, 006c4cf0), TArray's operator= for curve points (out of line, 006f3830) aren't declared. */
struct FScalarParameterValueOverTime_ : public FScalarParameterValueOverTime
{
	FScalarParameterValueOverTime_()
	{
		ExpressionGUID.A = 0;
	}
};

struct FInterpCurveFloat_ : public FInterpCurveFloat
{
	FInterpCurveFloat_()
	{
		appMemzero(&Points, sizeof(Points));
		InterpMethod = 0;
	}
	~FInterpCurveFloat_();
};

struct TArrayCurvePointsFloat_ : public TArray<FInterpCurvePointFloat>
{
	TArrayCurvePointsFloat_& operator=(const TArray<FInterpCurvePointFloat>& Other);
};

struct MITVScalarParameterMapping
{
	static FScalarParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
	static void GameThread_UpdateParameter(UMaterialInstanceTimeVarying* Instance, const FScalarParameterValueOverTime& Parameter);
};

// @baa 0x007136d0
/* Starts the named scalar parameter's curve Value seconds from now. If the parameter isn't overridden yet it's added,
 * taking its value from the parent (and its curve, if the parent is time-varying too). */
void UMaterialInstanceTimeVarying::SetScalarStartTime(FName ParameterName, FLOAT Value)
{
	sub_006c47c0(TEXT("MITV::SetScalarStartTime"));

	FScalarParameterValueOverTime* ParameterValue = MITVScalarParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue == NULL)
	{
		// If there's no element for the named parameter in the array yet, add one.
		ParameterValue = new(ScalarParameterValues) FScalarParameterValueOverTime_;

		appMemzero(&ParameterValue->ParameterValueCurve.Points, sizeof(ParameterValue->ParameterValueCurve.Points));
		ParameterValue->bLoop = FALSE;
		ParameterValue->bAutoActivate = FALSE;
		ParameterValue->CycleTime = 1.f;
		ParameterValue->bNormalizeTime = FALSE;
		ParameterValue->bOffsetFromEnd = FALSE;
		ParameterValue->ParameterName = ParameterName;
		ParameterValue->OffsetTime = 0.f;

		// Get the parent's value.
		if (Parent)
		{
			FLOAT TempValue = 0.f;
			Parent->GetScalarParameterValue(ParameterName, TempValue);
			ParameterValue->ParameterValue = TempValue;
		}

		// Only copy over the curve if the parent is time-varying too.
		UMaterialInstanceTimeVarying* MITVParent = Cast<UMaterialInstanceTimeVarying>(Parent);
		if (MITVParent)
		{
			FInterpCurveFloat_ TempCurve;
			MITVParent->GetScalarCurveParameterValue(ParameterName, TempCurve);
			FInterpCurveFloat& Curve = ParameterValue->ParameterValueCurve;
			((TArrayCurvePointsFloat_&)Curve.Points) = TempCurve.Points;
			Curve.InterpMethod = TempCurve.InterpMethod;
		}

		ParameterValue->ExpressionGUID.Invalidate();
	}

	ParameterValue->StartTime = GWorld->GetTimeSeconds() + Value;

	// Update the material instance data in the rendering thread.
	MITVScalarParameterMapping::GameThread_UpdateParameter(this, *ParameterValue);
}
