// Core_05c0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: FRotationMatrix (constructor out of line, 004029a0), FMatrix::GetAxis, FMatrix::Rotator and FVector's
 * dot product (operator|) aren't declared (UnMath.h). */
/* UnMath.h */
#define INV_PI (0.31830988618379067154)

struct FVector_ : public FVector
{
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) : FVector(InX, InY, InZ) {}
};

struct FMatrix_ : public FMatrix
{
	FORCEINLINE FVector_ GetAxis(INT i) const
	{
		const FLOAT (*M)[4] = (const FLOAT (*)[4])&XPlane;	/* UnMath.h's FLOAT M[4][4] */
		return FVector_(M[i][0], M[i][1], M[i][2]);
	}
	FRotator Rotator() const; /* 0x005c3fc0 */
};

// @baa 0x005c3fc0
/* UnMath.cpp: the rotator for this matrix's rotation. The game's appAtan2 returns FLOAT (the kit's returns DOUBLE),
 * hence the casts: the products are rounded to float before the double INV_PI multiply. */
FRotator FMatrix_::Rotator() const
{
	const FVector_ XAxis = GetAxis(0);
	const FVector_ YAxis = GetAxis(1);
	const FVector_ ZAxis = GetAxis(2);

	FRotator Rotator = FRotator(
		appRound((FLOAT)appAtan2(XAxis.Z, appSqrt(Square(XAxis.X) + Square(XAxis.Y))) * 32768.f * INV_PI),
		appRound((FLOAT)appAtan2(XAxis.Y, XAxis.X) * 32768.f * INV_PI),
		0);

	const FVector_ SYAxis = ((const FMatrix_&)FRotationMatrix(Rotator)).GetAxis(1);
	Rotator.Roll = appRound((FLOAT)appAtan2(ZAxis | SYAxis, YAxis | SYAxis) * 32768.f * INV_PI);
	return Rotator;
}

/* Kit gap: FVector::Rotation (UnMath.cpp) isn't declared. */
#define MAXWORD		0xffffU
#define INV_TWO_PI	(0.15915494309189533577)	/* 1 / (2 * PI) */

// @baa 0x005c3540
/* UnMath.cpp: the rotator pointing along this vector (no roll). The game's appAtan2 returns FLOAT (the kit's
 * returns DOUBLE), hence the casts. */
FRotator FVector::Rotation() const
{
	FRotator R;

	// Find yaw.
	R.Yaw = appRound((FLOAT)appAtan2(Y, X) * (FLOAT)MAXWORD * INV_TWO_PI);

	// Find pitch.
	R.Pitch = appRound((FLOAT)appAtan2(Z, appSqrt(X * X + Y * Y)) * (FLOAT)MAXWORD * INV_TWO_PI);

	// Find roll.
	R.Roll = 0;

	return R;
}

// @baa 0x005c8e30
/* FDist(V1, V2): the distance between two points. */
FLOAT sub_005c8e30(const FVector& V1, const FVector& V2)
{
	return appSqrt(Square(V2.X - V1.X) + Square(V2.Y - V1.Y) + Square(V2.Z - V1.Z));
}

// @baa 0x005c5f20
/* The distance from Point to the segment, and the closest point on it. */
FLOAT PointDistToSegment(const FVector& Point, const FVector& StartPoint, const FVector& EndPoint, FVector& OutClosestPoint)
{
	const FVector Segment = EndPoint - StartPoint;
	const FVector VectToPoint = Point - StartPoint;

	// See if closest point is before StartPoint
	const FLOAT Dot1 = VectToPoint | Segment;
	if (Dot1 <= 0)
	{
		OutClosestPoint = StartPoint;
		return VectToPoint.Size();
	}

	// See if closest point is beyond EndPoint
	const FLOAT Dot2 = Segment | Segment;
	if (Dot2 <= Dot1)
	{
		OutClosestPoint = EndPoint;
		return (Point - EndPoint).Size();
	}

	// Closest Point is within segment
	OutClosestPoint = StartPoint + Segment * (Dot1 / Dot2);
	return (Point - OutClosestPoint).Size();
}

// @baa 0x005c2940
/* Max<DOUBLE> (UnTemplate.h), out of line. */
template DOUBLE Max<DOUBLE>(const DOUBLE, const DOUBLE);
