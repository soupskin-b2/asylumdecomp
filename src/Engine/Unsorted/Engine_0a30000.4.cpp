// Engine_0a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct FQuat
{
	/* 0x0 */ INT Count;
	/* 0x4 */ FLOAT X;
	/* 0x8 */ FLOAT Y;
	/* 0xc */ FLOAT Z;
	/* 0x10 */ INT W;
	void sub_00a355a0(FLOAT Value);
};

// @baa 0x00a355a0
void FQuat::sub_00a355a0(FLOAT Value)
{
	FLOAT L = Value;
	Count++;
	W = *(INT*)&L;
}
