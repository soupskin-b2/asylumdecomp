// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <xmmintrin.h>

#define SMALL_NUMBER (1.e-8f)
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

/* Kit gap: FVector's SizeSquared, SafeNormal and operator*= (UnMath.h). */
struct FVector_ : public FVector
{
    FORCEINLINE FVector SafeNormal(FLOAT Tolerance = SMALL_NUMBER) const
    {
        const FLOAT SquareSum = X*X + Y*Y + Z*Z;
        if (SquareSum == 1.f)
        {
            return *this;
        }
        else if (SquareSum < Tolerance)
        {
            return FVector(0.f);
        }
        const FLOAT Scale = appInvSqrtSSE(SquareSum);
        return FVector(X*Scale, Y*Scale, Z*Scale);
    }
};

// @baa 0x0086c1e0
/* Slot 0x1e8 (unnamed in the kit): caps the velocity at MaxSpeed, dropping the acceleration unless the
 * rotation follows the velocity. */
void AProjectile::vf_1e8()
{
    if (((FVector_&)Velocity).SizeSquared() > MaxSpeed * MaxSpeed)
    {
        Velocity = ((FVector_&)Velocity).SafeNormal();
        (FVector_&)Velocity *= MaxSpeed;
        if (!bRotationFollowsVelocity)
        {
            Acceleration.X = 0.f;
            Acceleration.Y = 0.f;
            Acceleration.Z = 0.f;
        }
    }
}
