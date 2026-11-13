// Launch_0400000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <float.h>

// @baa 0x00401c80
/* Whether two floats are equal within FLT_EPSILON. */
int sub_00401c80(float a, float b)
{
	const float d = a - b;
	return d < FLT_EPSILON && d > -FLT_EPSILON;
}
