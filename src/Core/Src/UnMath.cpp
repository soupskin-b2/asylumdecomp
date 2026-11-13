// UnMath.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* UnMath.h: SMALL_NUMBER is a double in this build (the compare loads a qword 1e-8) */
#define SMALL_NUMBER (1.e-8)
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

/* Kit gap: FQuat::Exp (UnMath.cpp) */
struct FQuat_ : public FQuat
{
	FQuat Exp() const; /* 0x005c4800 */
};

// @baa 0x005c4800
/* Exp: the quaternion exponential (assumes W == 0). */
FQuat FQuat_::Exp() const
{
	const FLOAT Angle = appSqrt(X * X + Y * Y + Z * Z);
	const FLOAT SinAngle = appSin(Angle);

	FQuat Result;
	Result.W = appCos(Angle);

	if (fabs(SinAngle) >= SMALL_NUMBER)
	{
		const FLOAT Scale = SinAngle / Angle;
		Result.X = Scale * X;
		Result.Y = Scale * Y;
		Result.Z = Scale * Z;
	}
	else
	{
		Result.X = X;
		Result.Y = Y;
		Result.Z = Z;
	}
	return Result;
}
