// Engine_0a30000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

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

// The out-of-line TArray<INT>::AddItem the engine calls (sub_00a3e4c0).
struct FIntArray_00a3f040 : public TArray<INT>
{
	INT AddItem(const INT& Item);
};

// Appends a value to the integer list at +0x4.
struct FLoader_00a3f040
{
	BYTE Header[0x4];
	TArray<INT> List; /* 0x4 */

	INT Add(INT Value);
};

// @baa 0x00a3f040
INT FLoader_00a3f040::Add(INT Value)
{
	return ((FIntArray_00a3f040*)&List)->AddItem(Value);
}
