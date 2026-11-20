// UE3's math wrappers (UnVcWin32.h / UnMath.h): `appPow(A, B)` and the like, as the engine's code
// calls them. They compile to the same code as the C functions.
#pragma once
#include "Core.h"
#include <math.h>
#include <xmmintrin.h>
/* <stdlib.h>'s rand, declared as it does (not the whole header: some sources declare its functions themselves) */
extern "C" _CRTIMP int __cdecl rand(void);
#ifndef RAND_MAX
#define RAND_MAX 0x7fff
#endif

// UnMath.h's constants (the doubles are doubles in this build: comparisons with them go through x87)
#ifndef PI
#define PI                  (3.1415926535897932)
#endif
#ifndef SMALL_NUMBER
#define SMALL_NUMBER        (1.e-8)
#endif
#ifndef KINDA_SMALL_NUMBER
#define KINDA_SMALL_NUMBER  (1.e-4)
#endif
#ifndef BIG_NUMBER
#define BIG_NUMBER          (3.4e+38f)
#endif
#ifndef INV_PI
#define INV_PI              (0.31830988618f)
#endif
#ifndef INV_TWO_PI
#define INV_TWO_PI          (0.15915494309189533577)
#endif
#ifndef HALF_PI
#define HALF_PI             (1.57079632679)
#endif
#ifndef DELTA
#define DELTA               (0.00001f)
#endif
#ifndef THRESH_POINTS_ARE_SAME
#define THRESH_POINTS_ARE_SAME   (0.002f)
#define THRESH_NORMALS_ARE_SAME  (0.00002f)
#define THRESH_QUAT_NORMALIZED   (0.02f)
#endif

inline DOUBLE appExp( DOUBLE Value )             { return exp(Value); }
inline DOUBLE appLoge( DOUBLE Value )            { return log(Value); }
inline DOUBLE appFmod( DOUBLE Y, DOUBLE X )      { return fmod(Y, X); }
inline DOUBLE appSin( DOUBLE Value )             { return sin(Value); }
inline DOUBLE appAsin( DOUBLE Value )            { return asin(Value); }
inline DOUBLE appCos( DOUBLE Value )             { return cos(Value); }
inline FLOAT  appAcos( FLOAT Value )             { return acosf((Value < -1.f) ? -1.f : ((Value < 1.f) ? Value : 1.f)); }
inline DOUBLE appTan( DOUBLE Value )             { return tan(Value); }
inline DOUBLE appAtan( DOUBLE Value )            { return atan(Value); }
inline FLOAT  appAtan2( FLOAT Y, FLOAT X )       { return atan2f(Y, X); }
inline DOUBLE appPow( DOUBLE A, DOUBLE B )       { return pow(A, B); }
inline FLOAT  appSqrt( FLOAT Value )             { return sqrtf(Value); }
/* UnVcWin32.h: Comparand >= 0 ? ValueGEZero : ValueLTZero (EnforceShortestArc, 00bf8460) */
inline FLOAT  appFloatSelect( FLOAT Comparand, FLOAT ValueGEZero, FLOAT ValueLTZero ) { return Comparand >= 0.f ? ValueGEZero : ValueLTZero; }
/* UnVcWin32.h's SSE appInvSqrt: rsqrtss and one Newton-Raphson step (matched in UnPawn.14.cpp and
 * BmGame_15d0000.4.cpp); the constants are function-local statics, as the engine's are */
FORCEINLINE FLOAT appInvSqrt( FLOAT F )
{
	static const __m128 fThree = _mm_set_ss( 3.0f );
	static const __m128 fOneHalf = _mm_set_ss( 0.5f );
	__m128 Y0, X0, Temp;
	FLOAT temp;
	Y0 = _mm_set_ss( F );
	X0 = _mm_rsqrt_ss( Y0 );	// 1/sqrt estimate (12 bits)
	Temp = _mm_mul_ss( _mm_mul_ss( Y0, X0 ), X0 );	// (Y*X0)*X0
	Temp = _mm_sub_ss( fThree, Temp );	// 3-(Y*X0)*X0
	Temp = _mm_mul_ss( X0, Temp );	// X0*(3-(Y*X0)*X0)
	Temp = _mm_mul_ss( fOneHalf, Temp );	// 0.5*X0*(3-(Y*X0)*X0)
	_mm_store_ss( &temp, Temp );
	return temp;
}
inline FLOAT  appFloor( FLOAT F )                { return floorf(F); }
inline FLOAT  appCeil( FLOAT F )                 { return ceilf(F); }
inline FLOAT  appAbs( FLOAT F )                  { return fabsf(F); }
inline FLOAT  appFabs( FLOAT F )                 { return fabsf(F); }

// UnVcWin32.h: on x86 appTrunc and appRound are inline assembly, so the float goes through memory
// (`movss [esp+N], xmm0; cvttss2si eax, [esp+N]`), unlike a plain (INT) cast or an SSE intrinsic.
#pragma warning(push)
#pragma warning(disable: 4035)  /* no return value: it's in eax */
inline INT appTrunc( FLOAT F )
{
	__asm cvttss2si eax, [F]
}
inline INT appRound( FLOAT F )  /* round to nearest */
{
	__asm cvtss2si eax, [F]
}
#pragma warning(pop)
// UnVcWin32.h: the bit scan reads the value from memory (`bsr eax, [Value]`)
inline DWORD appCountLeadingZeros( DWORD Value )
{
	if (Value == 0)
		return 32;
	DWORD Result;
	__asm
	{
		bsr eax, Value
		mov Result, eax
	}
	return 31 - Result;
}
/* UnMath.h: log2 of the smallest power of two >= Arg (0 for 0 and 1), and that power, with the bit scans inline. */
FORCEINLINE DWORD appCeilLogTwo(DWORD Arg)
{
	INT Bitmask = ((INT)(appCountLeadingZeros(Arg) << 26)) >> 31;
	return (32 - appCountLeadingZeros(Arg - 1)) & (~Bitmask);
}
FORCEINLINE DWORD appRoundUpToPowerOfTwo(DWORD Arg)
{
	return 1 << appCeilLogTwo(Arg);
}
inline INT    appFloor2Int( FLOAT F )            { return appTrunc(floorf(F)); }

// random numbers (UnVcWin32.h)
inline INT    appRand()                          { return rand(); }
inline FLOAT  appFrand()                         { return rand() / (FLOAT)RAND_MAX; }

// UnMath.h: the seeded generator. It steps GSRandSeed and builds a float in [1,2) from its low 23 bits,
// returning the fractional part; appTrunc's asm makes the seed store/reload each call.
extern INT GSRandSeed;
FORCEINLINE FLOAT appFractional( FLOAT Value )   { return Value - appTrunc(Value); }
FORCEINLINE FLOAT appSRand()
{
	GSRandSeed = (GSRandSeed * 196314165) + 907633515;
	static const FLOAT SRandTemp = 1.0f;
	FLOAT Result;
	*(INT*)&Result = (*(INT*)&SRandTemp & 0xff800000) | (GSRandSeed & 0x007fffff);
	return appFractional(Result);
}

// UnTemplate.h
template< class T > inline T Abs( const T A )                          { return (A >= (T)0) ? A : -A; }
template< class T > inline T Max( const T A, const T B )               { return (A >= B) ? A : B; }
template< class T > inline T Min( const T A, const T B )               { return (A <= B) ? A : B; }
template< class T > inline T Max3( const T A, const T B, const T C ) { return Max( Max( A, B ), C ); }
template< class T > inline T Min3( const T A, const T B, const T C ) { return Min( Min( A, B ), C ); }
template< class T > inline T Square( const T A )                       { return A * A; }
template< class T > inline T Clamp( const T X, const T Min, const T Max ) { return X < Min ? Min : X < Max ? X : Max; }
template< class T, class U > inline T Lerp( const T& A, const T& B, const U& Alpha ) { return (T)(A + Alpha * (B - A)); }

// UnMath.h interpolation helpers; out of line in this build, so declared only
/* the cubic Hermite spline through P0 and P1 with tangents T0 and T1 (<FLOAT, FLOAT>: 0x0059bb10) */
template< class T, class U > T CubicInterp( const T& P0, const T& T0, const T& P1, const T& T1, const U& A );
/* FInterpEaseInOut is in Classes.h, with the other UnMath.h helpers */
