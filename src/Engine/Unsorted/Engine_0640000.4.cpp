// Engine_0640000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: the 48-bit compressed rotation (AnimationEncodingFormat.h) */
#define Quant16BitDiv (32767.f)
#define Quant16BitOffs (32767)
struct FQuatFixed48NoW
{
	WORD Data[3];
	void ToQuat(FQuat& Out) const; /* 0x0064c090 */
};

// @baa 0x0064c090
/* Decodes the three 16-bit components; W is rebuilt from the unit length. */
void FQuatFixed48NoW::ToQuat(FQuat& Out) const
{
	const FLOAT FX = ((INT)Data[0] - Quant16BitOffs) / Quant16BitDiv;
	const FLOAT FY = ((INT)Data[1] - Quant16BitOffs) / Quant16BitDiv;
	const FLOAT FZ = ((INT)Data[2] - Quant16BitOffs) / Quant16BitDiv;
	const FLOAT WSquared = 1.f - FX * FX - FY * FY - FZ * FZ;

	Out.X = FX;
	Out.Y = FY;
	Out.Z = FZ;
	Out.W = WSquared > 0.f ? appSqrt(WSquared) : 0.f;
}

/* Kit gap: the 32-bit compressed rotation (AnimationEncodingFormat.h): 11/11/10 bits */
#define Quant10BitDiv (511.f)
#define Quant10BitOffs (511)
#define Quant11BitDiv (1023.f)
#define Quant11BitOffs (1023)
struct FQuatFixed32NoW
{
	DWORD Packed;
	void ToQuat(FQuat& Out) const; /* 0x0064c340 */
};

// @baa 0x0064c340
/* Decodes the packed components; W is rebuilt from the unit length. */
void FQuatFixed32NoW::ToQuat(FQuat& Out) const
{
	const DWORD XShift = 21;
	const DWORD YShift = 10;
	const DWORD ZMask = 0x000003ff;
	const DWORD YMask = 0x000007ff;
	const DWORD XMask = 0x000007ff;

	const DWORD UnpackedX = Packed >> XShift;
	const DWORD UnpackedY = (Packed >> YShift) & YMask;
	const DWORD UnpackedZ = Packed & ZMask;

	const FLOAT X = ((INT)UnpackedX - Quant11BitOffs) / Quant11BitDiv;
	const FLOAT Y = ((INT)UnpackedY - Quant11BitOffs) / Quant11BitDiv;
	const FLOAT Z = ((INT)UnpackedZ - Quant10BitOffs) / Quant10BitDiv;
	const FLOAT WSquared = 1.f - X * X - Y * Y - Z * Z;

	Out.X = X;
	Out.Y = Y;
	Out.Z = Z;
	Out.W = WSquared > 0.f ? appSqrt(WSquared) : 0.f;
}

struct FQuatIntervalFixed32NoW
{
	DWORD Packed;
	void ToQuat(FQuat& Out, const FLOAT* Mins, const FLOAT* Ranges) const; /* 0x0064c470 */
};

// @baa 0x0064c470
/* Decodes the packed components into the [Mins, Mins + Ranges] box; W is rebuilt from the unit length. */
void FQuatIntervalFixed32NoW::ToQuat(FQuat& Out, const FLOAT* Mins, const FLOAT* Ranges) const
{
	const DWORD XShift = 21;
	const DWORD YShift = 10;
	const DWORD ZMask = 0x000003ff;
	const DWORD YMask = 0x000007ff;
	const DWORD XMask = 0x000007ff;

	const DWORD UnpackedX = Packed >> XShift;
	const DWORD UnpackedY = (Packed >> YShift) & YMask;
	const DWORD UnpackedZ = Packed & ZMask;

	const FLOAT X = (((INT)UnpackedX - Quant11BitOffs) / Quant11BitDiv) * Ranges[0] + Mins[0];
	const FLOAT Y = (((INT)UnpackedY - Quant11BitOffs) / Quant11BitDiv) * Ranges[1] + Mins[1];
	const FLOAT Z = (((INT)UnpackedZ - Quant10BitOffs) / Quant10BitDiv) * Ranges[2] + Mins[2];
	const FLOAT WSquared = 1.f - X * X - Y * Y - Z * Z;

	Out.X = X;
	Out.Y = Y;
	Out.Z = Z;
	Out.W = WSquared > 0.f ? appSqrt(WSquared) : 0.f;
}
