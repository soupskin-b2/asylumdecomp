// FMQuaternionTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

// FMVector4: the vector's length, sqrt(x*x + y*y + z*z + w*w).
struct FMVector4
{
	FLOAT x, y, z, w;
	FLOAT Length();
};

// @baa 0x01868d70
FLOAT FMVector4::Length()
{
	return appSqrt(x * x + y * y + z * z + w * w);
}
