// GFx_19c0000.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// The 12-byte record stored at offset 0x38 of the owner; handed to the handler by address.
struct FHandlerBuffer
{
	INT	A;
	INT	B;
	INT	C;
};

// Object whose method at 019729b0 consumes a buffer and a flag.
struct FHandler
{
	INT sub_019729b0(FHandlerBuffer* Buffer, INT Flags);
};

struct FOwner
{
	INT	A;
	INT	B;
	INT	C;
	INT	D;
	INT	E;
	INT	F;
	INT	G;
	INT	H;
	INT	I;
	INT	J;
	INT	K;
	INT	L;
	INT	M;
	INT	N;
	FHandlerBuffer	Buffer;	// 0x38

	FHandler& sub_019c6c70(FHandler& Handler);
};

// @baa 0x019c6c70
FHandler& FOwner::sub_019c6c70(FHandler& Handler)
{
	Handler.sub_019729b0(&Buffer, 0);
	return Handler;
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_019c40e0();
};

// @baa 0x019c40e0
C* C::sub_019c40e0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_019c41c0
{
    char pad_0[0x14];
    INT Value_14;
    INT Value_18;
    INT Value_1c;

    C_019c41c0* sub_019c41c0();
};

// @baa 0x019c41c0
C_019c41c0* C_019c41c0::sub_019c41c0()
{
    Value_14 = 0;
    Value_18 = 0;
    Value_1c = 0;
    return this;
}

struct C_019c42f0
{
    char pad_0[0x1c];
    INT Value_1c;
    INT Value_20;
    INT Value_24;

    C_019c42f0* sub_019c42f0();
};

// @baa 0x019c42f0
C_019c42f0* C_019c42f0::sub_019c42f0()
{
    Value_1c = 0;
    Value_20 = 0;
    Value_24 = 0;
    return this;
}

extern void __stdcall sub_018d7170(INT Value);
struct C_019cb560
{
    char pad_00[8];
    INT Object;

    void sub_019cb560();
};

// @baa 0x019cb560
void C_019cb560::sub_019cb560()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_019cb670
{
    char pad_00[8];
    INT Object;

    void sub_019cb670();
};

// @baa 0x019cb670
void C_019cb670::sub_019cb670()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_019cb700
{
    char pad_00[8];
    INT Object;

    void sub_019cb700();
};

// @baa 0x019cb700
void C_019cb700::sub_019cb700()
{
    if (Object)
        sub_018d7170(Object);
}

// sub_019c9fc0 — 25-byte thiscall bit test
// Returns 1 if the bit indexed by Flag is set in a 32-bit flag word at offset 0x28, else 0.
struct CBitFlags {
    unsigned char Reserved[0x28]; // layout unknown before the flag word
    unsigned int Flags;           // 0x28

    int sub_019c9fc0(int Flag);
};

// @baa 0x019c9fc0
int CBitFlags::sub_019c9fc0(int Flag)
{
    return ((1 << Flag) & Flags) != 0;
}

struct S_019ca790 {
	int Data[4];
	int Arg;
	S_019ca790* sub_019ca790(int Arg1);
};

// @baa 0x019ca790
__declspec(noinline)
S_019ca790* S_019ca790::sub_019ca790(int Arg1)
{
	Data[0] = 0;
	Data[1] = 0;
	Data[2] = 0;
	Data[3] = 0;
	Arg = Arg1;
	return this;
}

int s019c(int* P, int Arg1)
{
	S_019ca790 S;
	S.sub_019ca790(Arg1);
	return *P;
}

struct F019CA800 {
    INT a;
    INT b;
    INT c;
    INT d;
    INT e;
    F019CA800* sub_019ca800(INT arg)
    {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = arg;
        return this;
    }
};

// @baa 0x019ca800
void sub_019ca810(F019CA800& T, INT arg)
{
    T.sub_019ca800(arg);
}
