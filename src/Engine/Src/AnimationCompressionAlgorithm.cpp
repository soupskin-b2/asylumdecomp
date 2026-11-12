// AnimationCompressionAlgorithm.cpp: 4 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c00a80
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm.cpp", 13);

// @baa 0x00c00b40

/* AnimationCompression.h's FQuatIntervalFixed32NoW (a quaternion packed 11:11:10 relative to the track's
 * range), not in the kit. */
class FQuatIntervalFixed32NoW
{
public:
	DWORD Packed;

	FQuatIntervalFixed32NoW(const FQuat& Quat, const FLOAT* Mins, const FLOAT* Ranges);

	void FromQuat(const FQuat& Quat, const FLOAT* Mins, const FLOAT* Ranges);	/* 00bf7f40 */
};

// @baa 0x00bfa9e0
/* Inline in the header; this build has it out of line. */
FQuatIntervalFixed32NoW::FQuatIntervalFixed32NoW(const FQuat& Quat, const FLOAT* Mins, const FLOAT* Ranges)
{
	FromQuat(Quat, Mins, Ranges);
}

/* FQuat::Normalize (UnMath.h; out of line here), not in the kit. */

/* AnimationCompression.h's quantisation constants. */
#define Quant10BitDiv		(511.f)
#define Quant10BitOffs		(511)
#define Quant11BitDiv		(1023.f)
#define Quant11BitOffs		(1023)
/* AnimationCompression.h's FQuatIntervalFixed32NoW_00bf7f40 (a quaternion packed 11:11:10 relative to the track's
 * range), not in the kit. */
class FQuatIntervalFixed32NoW_00bf7f40
{
public:
	DWORD Packed;

	void FromQuat(const FQuat& Quat, const FLOAT* Mins, const FLOAT* Ranges);
};

// @baa 0x00bf7f40
void FQuatIntervalFixed32NoW_00bf7f40::FromQuat(const FQuat& Quat, const FLOAT* Mins, const FLOAT* Ranges)
{
	FQuat Temp = Quat;

	// W is dropped, so keep it positive
	if (Temp.W < 0.f)
	{
		Temp.X = -Temp.X;
		Temp.Y = -Temp.Y;
		Temp.Z = -Temp.Z;
		Temp.W = -Temp.W;
	}
	Temp.Normalize();

	Temp.X -= Mins[0];
	Temp.Y -= Mins[1];
	Temp.Z -= Mins[2];

	const DWORD PackedX = (INT)((Temp.X / Ranges[0]) * Quant11BitDiv) + Quant11BitOffs;
	const DWORD PackedY = (INT)((Temp.Y / Ranges[1]) * Quant11BitDiv) + Quant11BitOffs;
	const DWORD PackedZ = (INT)((Temp.Z / Ranges[2]) * Quant10BitDiv) + Quant10BitOffs;

	Packed = (PackedX << 21) | (PackedY << 10) | PackedZ;
}
