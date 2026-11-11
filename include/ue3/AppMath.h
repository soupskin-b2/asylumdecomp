// UE3's math wrappers (UnVcWin32.h / UnMath.h): `appPow(A, B)` and the like, as the engine's code
// calls them. They compile to the same code as the C functions.
#pragma once
#include "Core.h"
#include <math.h>

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
