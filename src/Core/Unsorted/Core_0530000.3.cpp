// Core_0530000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>

// @baa 0x0053d220
float sub_0053d220(float Value, int* Exponent)
{
	double Result = frexp(Value, Exponent);
	return (float)Result;
}
