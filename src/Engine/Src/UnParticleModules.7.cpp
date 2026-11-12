// UnParticleModules.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: AppMath.h's appSRand is the old rand()-based one; this build has UE3's seeded version (UnMath.h), which
 * steps GSRandSeed and builds a float in [1,2) from its low 23 bits, returning the fractional part. The body is UE3's,
 * type punning included; appTrunc is the asm one, whose memory barrier makes the seed store/reload each call.
 * Named appSRand_ because AppMath.h's appSRand is in the way. */
extern INT GSRandSeed;
FORCEINLINE FLOAT appFractional(FLOAT Value)
{
	return Value - appTrunc(Value);
}

FORCEINLINE FLOAT appSRand_()
{
	GSRandSeed = (GSRandSeed * 196314165) + 907633515;
	static const FLOAT SRandTemp = 1.0f;
	FLOAT Result;
	*(INT*)&Result = (*(INT*)&SRandTemp & 0xff800000) | (GSRandSeed & 0x007fffff);
	return appFractional(Result);
}

// @baa 0x00b72f60
void UParticleModuleLocationPrimitiveBase::DetermineUnitDirection(FParticleEmitterInstance* Owner, FVector& vUnitDir)
{
	FVector vRand;

	// Grab 3 random numbers for the axes
	vRand.X = appSRand_();
	vRand.Y = appSRand_();
	vRand.Z = appSRand_();

	// Set the unit dir
	if (Positive_X && Negative_X)
	{
		vUnitDir.X = vRand.X * 2 - 1;
	}
	else if (Positive_X)
	{
		vUnitDir.X = vRand.X;
	}
	else if (Negative_X)
	{
		vUnitDir.X = -vRand.X;
	}
	else
	{
		vUnitDir.X = 0.0f;
	}

	if (Positive_Y && Negative_Y)
	{
		vUnitDir.Y = vRand.Y * 2 - 1;
	}
	else if (Positive_Y)
	{
		vUnitDir.Y = vRand.Y;
	}
	else if (Negative_Y)
	{
		vUnitDir.Y = -vRand.Y;
	}
	else
	{
		vUnitDir.Y = 0.0f;
	}

	if (Positive_Z && Negative_Z)
	{
		vUnitDir.Z = vRand.Z * 2 - 1;
	}
	else if (Positive_Z)
	{
		vUnitDir.Z = vRand.Z;
	}
	else if (Negative_Z)
	{
		vUnitDir.Z = -vRand.Z;
	}
	else
	{
		vUnitDir.Z = 0.0f;
	}
}

/* Kit gap: UParticleModuleUberRainDrops::DetermineUnitDirection (UnParticleModules.cpp) isn't declared. */
struct UParticleModuleUberRainDrops_ : public UParticleModuleUberRainDrops
{
	void DetermineUnitDirection(FParticleEmitterInstance* Owner, FVector& vUnitDir);
};

// @baa 0x00b76650
void UParticleModuleUberRainDrops_::DetermineUnitDirection(FParticleEmitterInstance* Owner, FVector& vUnitDir)
{
	FVector vRand;

	// Grab 3 random numbers for the axes
	vRand.X = appSRand_();
	vRand.Y = appSRand_();
	vRand.Z = appSRand_();

	// Set the unit dir
	if (bPositive_X && bNegative_X)
	{
		vUnitDir.X = vRand.X * 2 - 1;
	}
	else if (bPositive_X)
	{
		vUnitDir.X = vRand.X;
	}
	else if (bNegative_X)
	{
		vUnitDir.X = -vRand.X;
	}
	else
	{
		vUnitDir.X = 0.0f;
	}

	if (bPositive_Y && bNegative_Y)
	{
		vUnitDir.Y = vRand.Y * 2 - 1;
	}
	else if (bPositive_Y)
	{
		vUnitDir.Y = vRand.Y;
	}
	else if (bNegative_Y)
	{
		vUnitDir.Y = -vRand.Y;
	}
	else
	{
		vUnitDir.Y = 0.0f;
	}

	if (bPositive_Z && bNegative_Z)
	{
		vUnitDir.Z = vRand.Z * 2 - 1;
	}
	else if (bPositive_Z)
	{
		vUnitDir.Z = vRand.Z;
	}
	else if (bNegative_Z)
	{
		vUnitDir.Z = -vRand.Z;
	}
	else
	{
		vUnitDir.Z = 0.0f;
	}
}

/* Kit gap: UParticleModuleUberRainImpacts::DetermineUnitDirection (UnParticleModules.cpp) isn't declared. */
struct UParticleModuleUberRainImpacts_ : public UParticleModuleUberRainImpacts
{
	void DetermineUnitDirection(FParticleEmitterInstance* Owner, FVector& vUnitDir);
};

// @baa 0x00b76960
void UParticleModuleUberRainImpacts_::DetermineUnitDirection(FParticleEmitterInstance* Owner, FVector& vUnitDir)
{
	FVector vRand;

	// Grab 3 random numbers for the axes
	vRand.X = appSRand_();
	vRand.Y = appSRand_();
	vRand.Z = appSRand_();

	// Set the unit dir
	if (bPositive_X && bNegative_X)
	{
		vUnitDir.X = vRand.X * 2 - 1;
	}
	else if (bPositive_X)
	{
		vUnitDir.X = vRand.X;
	}
	else if (bNegative_X)
	{
		vUnitDir.X = -vRand.X;
	}
	else
	{
		vUnitDir.X = 0.0f;
	}

	if (bPositive_Y && bNegative_Y)
	{
		vUnitDir.Y = vRand.Y * 2 - 1;
	}
	else if (bPositive_Y)
	{
		vUnitDir.Y = vRand.Y;
	}
	else if (bNegative_Y)
	{
		vUnitDir.Y = -vRand.Y;
	}
	else
	{
		vUnitDir.Y = 0.0f;
	}

	if (bPositive_Z && bNegative_Z)
	{
		vUnitDir.Z = vRand.Z * 2 - 1;
	}
	else if (bPositive_Z)
	{
		vUnitDir.Z = vRand.Z;
	}
	else if (bNegative_Z)
	{
		vUnitDir.Z = -vRand.Z;
	}
	else
	{
		vUnitDir.Z = 0.0f;
	}
}
