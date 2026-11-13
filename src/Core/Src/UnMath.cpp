// UnMath.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

/* Kit gap: FQuat::Exp (UnMath.cpp) */

// @baa 0x005c4800
/* Exp: the quaternion exponential (assumes W == 0). */
FQuat FQuat::Exp() const
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
