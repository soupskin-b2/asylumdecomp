// SpeedTree.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern float g_027bdef4;
// @baa 0x01a5fbc0
void sub_01a5fbc0(float value)
{
    g_027bdef4 = value;
}

struct Sub
{
    void sub_01a60080();
};

// @baa 0x01a91ac0
void __stdcall sub_01a91ac0(Sub* Object)
{
    Object->sub_01a60080();
}

struct Sub_01a97d50
{
    void sub_01a71640();
};

// @baa 0x01a97d50
void __stdcall sub_01a97d50(Sub_01a97d50* Object)
{
    Object->sub_01a71640();
}

struct Sub_01aa0100
{
    void sub_01a9db00();
};

// @baa 0x01aa0100
void __stdcall sub_01aa0100(Sub_01aa0100* Object)
{
    Object->sub_01a9db00();
}

struct Sub_01aa0110
{
    void sub_01a71530();
};

// @baa 0x01aa0110
void __stdcall sub_01aa0110(Sub_01aa0110* Object)
{
    Object->sub_01a71530();
}

extern double g_027be3d0;
extern double g_023dda00;
// @baa 0x01ab2270
double sub_01ab2270()
{
    return g_023dda00 * g_027be3d0;
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01aac8c0();
};

// @baa 0x01aac8c0
C* C::sub_01aac8c0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// 01a75b40: reset a 24-byte block to two (0, 0, 1) triples, and return this.
struct S_01a75b40
{
	float f00;
	float f04;
	float f08;
	float f0C;
	float f10;
	float f14;

	S_01a75b40* sub_01a75b40();
};

// @baa 0x01a75b40
S_01a75b40* S_01a75b40::sub_01a75b40()
{
	f00 = 0.f;
	f04 = 0.f;
	f08 = 1.f;
	f10 = 1.f;
	f0C = 0.f;
	f14 = 0.f;
	return this;
}
