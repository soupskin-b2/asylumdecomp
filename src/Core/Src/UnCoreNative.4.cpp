// UnCoreNative.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

#define THRESH_QUAT_NORMALIZED 0.02f
/* Kit gaps: FQuat's inline members (UnMath.h) and FQuatRotationTranslationMatrix aren't declared; this build has
 * the matrix constructor out of line. */
struct FQuat_ : public FQuat
{
	FORCEINLINE FLOAT SizeSquared() const { return X * X + Y * Y + Z * Z + W * W; }
	FORCEINLINE UBOOL IsNormalized() const { return appAbs(1.f - SizeSquared()) <= THRESH_QUAT_NORMALIZED; }
};

struct FQuatRotationTranslationMatrix : public FMatrix
{
	FQuatRotationTranslationMatrix(const FQuat& Q, const FVector& Origin);
};

// @baa 0x0059d4a0
/* UnMath.h: a rotation (from a unit quaternion) followed by a translation. */
FQuatRotationTranslationMatrix::FQuatRotationTranslationMatrix(const FQuat& InQ, const FVector& Origin)
{
	const FQuat_& Q = (const FQuat_&)InQ;
#line 3589 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnMath.h"
	check(Q.IsNormalized());

	const FLOAT x2 = Q.X + Q.X;  const FLOAT y2 = Q.Y + Q.Y;  const FLOAT z2 = Q.Z + Q.Z;
	const FLOAT xx = Q.X * x2;   const FLOAT xy = Q.X * y2;   const FLOAT xz = Q.X * z2;
	const FLOAT yy = Q.Y * y2;   const FLOAT yz = Q.Y * z2;   const FLOAT zz = Q.Z * z2;
	const FLOAT wx = Q.W * x2;   const FLOAT wy = Q.W * y2;   const FLOAT wz = Q.W * z2;

	XPlane.X = 1.0f - (yy + zz);	YPlane.X = xy - wz;				ZPlane.X = xz + wy;				WPlane.X = Origin.X;
	XPlane.Y = xy + wz;				YPlane.Y = 1.0f - (xx + zz);	ZPlane.Y = yz - wx;				WPlane.Y = Origin.Y;
	XPlane.Z = xz - wy;				YPlane.Z = yz + wx;				ZPlane.Z = 1.0f - (xx + yy);	WPlane.Z = Origin.Z;
	XPlane.W = 0.0f;				YPlane.W = 0.0f;				ZPlane.W = 0.0f;				WPlane.W = 1.0f;
}

#line 41 "candidate.cpp"
