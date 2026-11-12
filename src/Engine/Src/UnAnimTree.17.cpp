// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps, with UE3's definitions (UnMath.h, UnInterpolation): PI and HALF_PI, CubicInterp (out of line here,
 * instantiated for FLOAT) and FInterpEaseInOut (out of line) (EAlphaBlendType is in the kit). */
#define PI 		(3.1415926535897932)
#define HALF_PI		(1.57079632679)
template<class T, class U> T CubicInterp(const T& P0, const T& T0, const T& P1, const T& T1, const U& A);
	/* <FLOAT, FLOAT>: 0059bb10 */
FLOAT FInterpEaseInOut(FLOAT A, FLOAT B, FLOAT Alpha, FLOAT Exp);
						/* 005c7370 */
extern template FLOAT CubicInterp<FLOAT, FLOAT>(const FLOAT&, const FLOAT&, const FLOAT&, const FLOAT&, const FLOAT&);
/* UAnimNodeBlendBase::GetBlendWeight isn't declared in Classes.h. */
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
	FLOAT GetBlendWeight(FLOAT ChildWeight);
};

// @baa 0x00c50080
FLOAT UAnimNodeBlendBase_::GetBlendWeight(FLOAT ChildWeight)
{
	// AlphaToBlendType: the weight through the node's blend curve
	switch (BlendType)
	{
	case ABT_Sinusoidal:		return Clamp<FLOAT>(((FLOAT)appSin(ChildWeight * PI - HALF_PI) + 1.f) / 2.f, 0.f, 1.f);
	case ABT_Cubic:			return Clamp<FLOAT>(CubicInterp<FLOAT>(0.f, 0.f, 1.f, 0.f, ChildWeight), 0.f, 1.f);
	case ABT_EaseInOutExponent2:	return Clamp<FLOAT>(FInterpEaseInOut(0.f, 1.f, ChildWeight, 2), 0.f, 1.f);
	case ABT_EaseInOutExponent3:	return Clamp<FLOAT>(FInterpEaseInOut(0.f, 1.f, ChildWeight, 3), 0.f, 1.f);
	case ABT_EaseInOutExponent4:	return Clamp<FLOAT>(FInterpEaseInOut(0.f, 1.f, ChildWeight, 4), 0.f, 1.f);
	case ABT_EaseInOutExponent5:	return Clamp<FLOAT>(FInterpEaseInOut(0.f, 1.f, ChildWeight, 5), 0.f, 1.f);
	}

	return ChildWeight;
}

/* FVector::Size (UnMath.h), not in the kit. */
static inline FLOAT VSize(const FVector& V) { return appSqrt(V.X * V.X + V.Y * V.Y + V.Z * V.Z); }

/* UActorComponent::GetOwner (UnActorComponent.h), not in the kit. */
struct UActorComponent_ : public UActorComponent
{
	AActor* GetOwner() const { return Owner; }
};

/* UAnimNodeBlendBySpeed::CalcSpeed (its vtable slot is declared only as a vf_). */
struct UAnimNodeBlendBySpeed_ : public UAnimNodeBlendBySpeed
{
	FLOAT CalcSpeed();
};

// @baa 0x00c4b660
FLOAT UAnimNodeBlendBySpeed_::CalcSpeed()
{
	AActor* Owner = SkelComponent ? ((UActorComponent_*)SkelComponent)->GetOwner() : NULL;
	if (Owner)
	{
		if (bUseAcceleration)
		{
			return VSize(Owner->Acceleration);
		}
		else
		{
			return VSize(Owner->Velocity);
		}
	}
	else
	{
		return Speed;
	}
}

#define KINDA_SMALL_NUMBER (1.e-4)
/* UAnimNodeScaleRateBySpeed's GetScaleValue override (UAnimNodeScalePlayRate vtable 0x19c, declared
 * only as vf_19c). */
struct UAnimNodeScaleRateBySpeed_ : public UAnimNodeScaleRateBySpeed
{
	FLOAT GetScaleValue();
};

// @baa 0x00c4bb40
FLOAT UAnimNodeScaleRateBySpeed_::GetScaleValue()
{
	AActor* Owner = SkelComponent ? ((UActorComponent_*)SkelComponent)->GetOwner() : NULL;
	if (Owner && BaseSpeed > KINDA_SMALL_NUMBER)
	{
		// FVector::Size (not in the kit)
		const FVector& V = Owner->Velocity;
		return appSqrt(V.X * V.X + V.Y * V.Y + V.Z * V.Z) / BaseSpeed;
	}
	return ScaleByValue;
}
