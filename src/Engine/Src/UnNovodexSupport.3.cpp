// UnNovodexSupport.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00a051c0
/* Slot 0x110 (unnamed in the kit): how strongly an impact at Speed should play its effect, 0..1 between
 * MinImpactEffectSpeed and MaxImpactEffectSpeed (always 1 if no minimum is set). */
FLOAT UPhysicalMaterial::vf_110(FLOAT Speed)
{
	const FLOAT MinSpeed = MinImpactEffectSpeed;
	FLOAT Result = 0.f;
	if (MinSpeed > 0.f)
	{
		if (Speed >= MinSpeed)
		{
			const FLOAT MaxSpeed = Max(MinSpeed, MaxImpactEffectSpeed);
			if (MaxSpeed > MinSpeed)
			{
				Result = Clamp((Speed - MinSpeed) / (MaxSpeed - MinSpeed), 0.f, 1.f);
			}
			else
			{
				Result = 1.f;
			}
		}
	}
	else
	{
		Result = 1.f;
	}
	return Result;
}

// @baa 0x00a05240
/* Slot 0x114 (unnamed in the kit): how strongly a slide at Speed should play its effect, 0..1 between
 * MinSlideEffectSpeed and MaxSlideEffectSpeed (always 1 if no minimum is set). */
FLOAT UPhysicalMaterial::vf_114(FLOAT Speed)
{
	const FLOAT MinSpeed = MinSlideEffectSpeed;
	FLOAT Result = 0.f;
	if (MinSpeed > 0.f)
	{
		if (Speed >= MinSpeed)
		{
			const FLOAT MaxSpeed = Max(MinSpeed, MaxSlideEffectSpeed);
			if (MaxSpeed > MinSpeed)
			{
				Result = Clamp((Speed - MinSpeed) / (MaxSpeed - MinSpeed), 0.f, 1.f);
			}
			else
			{
				Result = 1.f;
			}
		}
	}
	else
	{
		Result = 1.f;
	}
	return Result;
}
