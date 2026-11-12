// RExplodableWallBase.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0171a180
void ARExplodableWallBase::execGetWallSide(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, TestLocation);
	P_FINISH;
	*(BYTE*)Result = sub_01716aa0(TestLocation);
}

// @baa 0x00c83230
void ARExplodableWallBase::execGetFOVCheckLocation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetFOVCheckLocation();
}
