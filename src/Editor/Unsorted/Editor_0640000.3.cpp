// Editor_0640000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

// The length of a two-component vector.
struct FVector2_
{
	FLOAT X;
	FLOAT Y;

	FLOAT Size();
};

// @baa 0x006491a0
FLOAT FVector2_::Size()
{
	return appSqrt(X * X + Y * Y);
}
