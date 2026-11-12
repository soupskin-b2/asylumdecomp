// FMOD_17c0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

int __stdcall sub_017d3700(int A, int B, int C);
// @baa 0x017cd770
int __stdcall sub_017cd770(int A, int B, int C)
{
	if (A == 0)
		return 0x25;
	return sub_017d3700(A, B, C);
}

int __stdcall sub_017d3b40(int A, int B, int C);
// @baa 0x017cdae0
int __stdcall sub_017cdae0(int A, int B, int C)
{
	if (A == 0)
		return 0x25;
	return sub_017d3b40(A, B, C);
}

INT __stdcall sub_017d3ba0(void* A, void* B);
// @baa 0x017cdb20
INT __stdcall sub_017cdb20(void* A, void* B)
{
	if (!A)
		return 0x25;

	return sub_017d3ba0(A, B);
}

INT __stdcall sub_017d6d50(void* A, void* B, void* C);
// @baa 0x017cdba0
// Null-check thunk: forwards to sub_017d6d50, or returns 0x25 when the first
// argument is null (12 bytes of arguments popped by the caller, ret 0xc).
INT __stdcall sub_017cdba0(void* A, void* B, void* C)
{
	if (!A)
		return 0x25;
	return sub_017d6d50(A, B, C);
}

// Tail dispatch: 017d3c00 is the callee this falls through to (ret 8).
INT __stdcall sub_017d3c00(INT Param1, INT Param2);
// @baa 0x017cdb60
INT __stdcall sub_017cdb60(INT Param1, INT Param2)
{
	if (!Param1)
		return 0x25;
	return sub_017d3c00(Param1, Param2);
}

INT __stdcall sub_017d6f30(void* A);
// @baa 0x017cdd10
INT __stdcall sub_017cdd10(void* A)
{
    if (!A)
        return 0x25;
    return sub_017d6f30(A);
}
