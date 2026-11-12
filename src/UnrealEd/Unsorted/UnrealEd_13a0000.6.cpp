// UnrealEd_13a0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S013a45f0
{
	INT Value0;
	INT Value1;
	BYTE Value2;

	S013a45f0* sub_013a45f0(INT A, INT B, BYTE C);
};

// @baa 0x013a45f0
S013a45f0* S013a45f0::sub_013a45f0(INT A, INT B, BYTE C)
{
	Value0 = A;
	Value1 = B;
	Value2 = C;
	return this;
}

// keep the method alive (external linkage)
void Use013a45f0(S013a45f0& Obj, INT A, INT B, BYTE C)
{
	Obj.sub_013a45f0(A, B, C);
}

struct S013a3cf0_
{
    INT a;
    INT b;
    INT c;

    S013a3cf0_ * sub_013a3cf0(INT A, INT B, INT C);
};

// @baa 0x013a3cf0
S013a3cf0_ * S013a3cf0_::sub_013a3cf0(INT A, INT B, INT C)
{
    a = A;
    b = B;
    c = C;
    return this;
}
