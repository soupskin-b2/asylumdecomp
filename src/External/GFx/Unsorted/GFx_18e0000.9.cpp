// GFx_18e0000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern double g_023dbbe0;
struct S_018e8480 {
    char Unknown_00[0xb];
    signed char B_0x0b;

    float sub_018e8480();
};

// @baa 0x018e8480
float S_018e8480::sub_018e8480() {
    return (float)((float)B_0x0b * g_023dbbe0);
}

struct Sub_018e98e0_T {
    int A;
    int B;
    int C;

    Sub_018e98e0_T* operator=(const Sub_018e98e0_T& Other);
};

// @baa 0x018e98e0
Sub_018e98e0_T* Sub_018e98e0_T::operator=(const Sub_018e98e0_T& Other)
{
    A = Other.A;
    B = Other.B;
    C = Other.C;
    return this;
}

struct GFxHashTable_
{
	void __thiscall sub_018ebdb0(void* InData);
	void __thiscall sub_018eace0(void* InData, DWORD InIndex);	// 0x018eace0
};

// @baa 0x018ebdb0
void __thiscall GFxHashTable_::sub_018ebdb0(void* InData)
{
	sub_018eace0(InData, (*(DWORD*)InData >> 6) ^ *(DWORD*)InData);
}

// 018e8910: a three-argument thiscall method that forwards its own `this`
// (ecx is never touched) to the four-argument thiscall sibling
// sub_019314a0, zeroing the fourth argument. thiscall reserves ecx for the
// object, so only eax/edx are free for the argument values: arg3 is loaded
// into eax early and arg1 is re-read from [esp+0xc] after two pushes.
//
// The class holding these methods is unknown, so it is named S_018e8910.
// sub_019314a0 is left undefined (the real body is 758 bytes at 0x019314a0)
// so the call stays out-of-line; the driver call below keeps sub_018e8910
// from being dropped as unused.
struct S_018e8910
{
	void sub_019314a0(int A, int B, int C, int D);
	void sub_018e8910(int A, int B, int C);
};

// @baa 0x018e8910
void S_018e8910::sub_018e8910(int A, int B, int C)
{
	sub_019314a0(A, B, C, 0);
}

static void s_driver(S_018e8910* Obj)
{
	Obj->sub_018e8910(1, 2, 3);
}
