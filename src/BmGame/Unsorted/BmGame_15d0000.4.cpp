// BmGame_15d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <xmmintrin.h>

/* UE3's SSE appInvSqrt (UnVcWin32.h): one Newton-Raphson step on rsqrtss. The kit's AppMath.h has
 * 1.0f / sqrtf(F) instead. */
FORCEINLINE FLOAT appInvSqrtSSE(FLOAT F)
{
	static const __m128 fThree = _mm_set_ss(3.0f);
	static const __m128 fOneHalf = _mm_set_ss(0.5f);
	__m128 Y0, X0, Temp;
	FLOAT temp;
	Y0 = _mm_set_ss(F);
	X0 = _mm_rsqrt_ss(Y0);
	Temp = _mm_mul_ss(_mm_mul_ss(Y0, X0), X0);
	Temp = _mm_sub_ss(fThree, Temp);
	Temp = _mm_mul_ss(X0, Temp);
	Temp = _mm_mul_ss(fOneHalf, Temp);
	_mm_store_ss(&temp, Temp);
	return temp;
}

#define SMALL_NUMBER (1.e-8f)
/* Kit gap: FVector::SafeNormal2D (UnMath.h). */
struct FVector_ : public FVector
{
	FORCEINLINE FVector SafeNormal2D(FLOAT Tolerance = SMALL_NUMBER) const
	{
		const FLOAT SquareSum = X*X + Y*Y;
		if (SquareSum == 1.f)
		{
			if (Z == 0.f)
			{
				return *this;
			}
			else
			{
				return FVector(X, Y, 0.f);
			}
		}
		else if (SquareSum < Tolerance)
		{
			return FVector(0.f, 0.f, 0.f);
		}
		const FLOAT Scale = appInvSqrtSSE(SquareSum);
		return FVector(X*Scale, Y*Scale, 0.f);
	}
};

// @baa 0x015dd3a0
/* The flat direction an attack step animation travels in, mirrored for mirrored combat. */
FVector URBMBehaviour_Combat::GetStepDirection(UAnimSequence* Anim)
{
	FVector_ Direction = (FVector_&)Anim->LinearSpan;
	if (HostPawn->bCombatMirrored)
	{
		Direction.X *= -1.f;
	}
	return Direction.SafeNormal2D();
}
