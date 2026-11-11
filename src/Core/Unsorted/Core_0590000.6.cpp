// Core_0590000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <math.h>
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005940c0
void UObject::execPow(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_FINISH;
    *(FLOAT*)Result = pow(A, B); // appPow(A,B) in UE3; the headers have no appPow
}

// @baa 0x00593f30
void UObject::execLoge(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_FINISH;
	*(FLOAT*)Result = logf(A);
}

// @baa 0x005962a0
void UObject::execVSize2D(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_FINISH;
	*(FLOAT*)Result = sqrtf(A.Y * A.Y + A.X * A.X);
}
