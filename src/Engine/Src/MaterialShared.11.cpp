// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gaps: FMICReentranceGuard (MaterialInstance.h; constructor out of line, 006ae920), the
 * TMaterialInstanceTimeVaryingParameterMapping statics (scalar FindParameterByName, 006e9010) and TArray's operator=
 * for curve points (out of line, 006f3830) aren't declared. */
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

struct MITVScalarParameterMapping
{
	static FScalarParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
};

struct TArrayCurvePointsFloat_ : public TArray<FInterpCurvePointFloat>
{
	TArrayCurvePointsFloat_& operator=(const TArray<FInterpCurvePointFloat>& Other);
};

// @baa 0x00713c80
/* The named scalar parameter's curve: this instance's if it has one, else a time-varying parent's. */
UBOOL UMaterialInstanceTimeVarying::GetScalarCurveParameterValue(FName ParameterName, FInterpCurveFloat& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FScalarParameterValueOverTime* ParameterValue = MITVScalarParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue && ParameterValue->ParameterValueCurve.Points.Num())
	{
		const FInterpCurveFloat& Curve = ParameterValue->ParameterValueCurve;
		((TArrayCurvePointsFloat_&)OutValue.Points) = Curve.Points;
		OutValue.InterpMethod = Curve.InterpMethod;
		return TRUE;
	}
	else if (Cast<UMaterialInstanceTimeVarying>(Parent))
	{
		FMICReentranceGuard Guard(this);
		return Cast<UMaterialInstanceTimeVarying>(Parent)->GetScalarCurveParameterValue(ParameterName, OutValue);
	}
	else
	{
		return FALSE;
	}
}
