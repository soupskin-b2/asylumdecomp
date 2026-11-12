// UE3's math wrappers (UnVcWin32.h / UnMath.h): `appPow(A, B)` and the like, as the engine's code
// calls them. They compile to the same code as the C functions.
#pragma once
#include "Core.h"
#include <math.h>
#include <stdlib.h>

inline DOUBLE appExp( DOUBLE Value )             { return exp(Value); }
inline DOUBLE appLoge( DOUBLE Value )            { return log(Value); }
inline DOUBLE appFmod( DOUBLE Y, DOUBLE X )      { return fmod(Y, X); }
inline DOUBLE appSin( DOUBLE Value )             { return sin(Value); }
inline DOUBLE appAsin( DOUBLE Value )            { return asin(Value); }
inline DOUBLE appCos( DOUBLE Value )             { return cos(Value); }
inline DOUBLE appAcos( DOUBLE Value )            { return acos(Value); }
inline DOUBLE appTan( DOUBLE Value )             { return tan(Value); }
inline DOUBLE appAtan( DOUBLE Value )            { return atan(Value); }
inline DOUBLE appAtan2( DOUBLE Y, DOUBLE X )     { return atan2(Y, X); }
inline DOUBLE appPow( DOUBLE A, DOUBLE B )       { return pow(A, B); }
inline FLOAT  appSqrt( FLOAT Value )             { return sqrtf(Value); }
inline FLOAT  appInvSqrt( FLOAT F )              { return 1.0f / sqrtf(F); }
inline FLOAT  appFloor( FLOAT F )                { return floorf(F); }
inline FLOAT  appCeil( FLOAT F )                 { return ceilf(F); }
inline FLOAT  appAbs( FLOAT F )                  { return fabsf(F); }

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
inline INT    appFloor2Int( FLOAT F )            { return appTrunc(floorf(F)); }

// random numbers (UnVcWin32.h)
inline INT    appRand()                          { return rand(); }
inline FLOAT  appFrand()                         { return rand() / (FLOAT)RAND_MAX; }

// UnMath.h: the seeded generator (GSRandSeed, appSRandInit), not rand()
extern DWORD GSRandSeed;
inline FLOAT appFractional( FLOAT Value )        { return Value - appTrunc(Value); }
inline FLOAT appSRand()
{
	GSRandSeed = (GSRandSeed * 196314165) + 907633515;
	union { FLOAT f; INT i; } Result;
	union { FLOAT f; INT i; } Temp;
	const FLOAT SRandTemp = 1.0f;
	Temp.f = SRandTemp;
	Result.i = (Temp.i & 0xff800000) | (GSRandSeed & 0x007fffff);
	return appFractional(Result.f);
}

// UnTemplate.h
template< class T > inline T Abs( const T A )                          { return (A >= (T)0) ? A : -A; }
template< class T > inline T Max( const T A, const T B )               { return (A >= B) ? A : B; }
template< class T > inline T Min( const T A, const T B )               { return (A <= B) ? A : B; }
template< class T > inline T Square( const T A )                       { return A * A; }
template< class T > inline T Clamp( const T X, const T Min, const T Max ) { return X < Min ? Min : X < Max ? X : Max; }
template< class T, class U > inline T Lerp( const T& A, const T& B, const U& Alpha ) { return (T)(A + Alpha * (B - A)); }
