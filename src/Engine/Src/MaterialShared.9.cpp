// MaterialShared.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Native.h"

/* Kit gaps: FMICReentranceGuard (MaterialInstance.h; constructor out of line, 006ae920), the
 * TMaterialInstanceTimeVaryingParameterMapping statics (vector FindParameterByName, 006e90e0), UWorld::GetTimeSeconds
 * (009c8f80) and FInterpCurve<FLOAT>::Eval (out of line, 006eb030) aren't declared. */
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

struct MITVVectorParameterMapping
{
	static FVectorParameterValueOverTime* FindParameterByName(UMaterialInstanceTimeVarying* Instance, FName Name);
};

// @baa 0x006ee400
/* The named vector parameter: evaluated from its curve at the current time (relative to its start time, wrapped and
 * normalized by its cycle time) once it's active, its constant value if it has no curve, else the parent's value. */
UBOOL UMaterialInstanceTimeVarying::GetVectorParameterValue(FName ParameterName, FLinearColor& OutValue)
{
	if (ReentrantFlag)
	{
		return FALSE;
	}

	FVectorParameterValueOverTime* ParameterValue = MITVVectorParameterMapping::FindParameterByName(this, ParameterName);
	if (ParameterValue && ParameterValue->ParameterValueCurve.Points.Num() > 0)
	{
		if (ParameterValue->bAutoActivate || bAutoActivateAll || ParameterValue->StartTime >= 0.f)
		{
			FLOAT EvalTime = GWorld->GetTimeSeconds() - ParameterValue->StartTime;
			const FLOAT CycleTime = ParameterValue->CycleTime;

			if (CycleTime > 0.f)
			{
				if (ParameterValue->bLoop)
				{
					EvalTime = appFmod(EvalTime, CycleTime);
					// Negative times wrap to the end of the cycle.
					if (EvalTime < 0.f)
					{
						EvalTime += CycleTime;
					}
				}

				if (ParameterValue->bNormalizeTime)
				{
					EvalTime /= CycleTime;
				}
			}

			const FVector Value = ParameterValue->ParameterValueCurve.Eval(EvalTime, FVector(0.f, 0.f, 0.f));
			OutValue.R = Value.X;
			OutValue.G = Value.Y;
			OutValue.B = Value.Z;
			OutValue.A = 0.f;
			return TRUE;
		}
	}
	else if (ParameterValue)
	{
		OutValue = ParameterValue->ParameterValue;
		return TRUE;
	}

	if (Parent)
	{
		FMICReentranceGuard Guard(this);
		return Parent->GetVectorParameterValue(ParameterName, OutValue);
	}
	return FALSE;
}
