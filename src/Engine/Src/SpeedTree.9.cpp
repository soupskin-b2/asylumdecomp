// SpeedTree.cpp: 21 functions
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

struct C_01a5fec0
{
    char pad_00[0x28];
    void* Pointer;
    char pad_2c[0x10];
    UINT Count;

    void* sub_01a5fec0();
};

// @baa 0x01a5fec0
void* C_01a5fec0::sub_01a5fec0()
{
    if (Count >= 0x10)
        return Pointer;
    return (void*)((char*)this + 0x28);
}

struct C_01a698c0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a698c0* sub_01a698c0();
};

// @baa 0x01a698c0
C_01a698c0* C_01a698c0::sub_01a698c0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a698d0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a698d0* sub_01a698d0();
};

// @baa 0x01a698d0
C_01a698d0* C_01a698d0::sub_01a698d0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a69990
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a69990* sub_01a69990();
};

// @baa 0x01a69990
C_01a69990* C_01a69990::sub_01a69990()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a69fe0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a69fe0* sub_01a69fe0();
};

// @baa 0x01a69fe0
C_01a69fe0* C_01a69fe0::sub_01a69fe0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a91b00
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a91b00* sub_01a91b00();
};

// @baa 0x01a91b00
C_01a91b00* C_01a91b00::sub_01a91b00()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a97250
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a97250* sub_01a97250();
};

// @baa 0x01a97250
C_01a97250* C_01a97250::sub_01a97250()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a97580
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a97580* sub_01a97580();
};

// @baa 0x01a97580
C_01a97580* C_01a97580::sub_01a97580()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01a5fcf0
void sub_01a5fcf0(FLOAT* A, FLOAT* B)
{
    *A = *B;
    A[1] = B[1];
    A[2] = B[2];
}

extern float g_027bce6c;
extern float g_027bce70;
// @baa 0x01a60420
void sub_01a60420(float* OutA, float* OutB)
{
	*OutA = g_027bce6c;
	*OutB = g_027bce70;
}

// 0x01a610d0, SpeedTree.cpp
extern float g_02604d48;
extern float g_02604d4c;
// @baa 0x01a610d0
void sub_01a610d0(float* OutA, float* OutB)
{
    *OutA = g_02604d48;
    *OutB = g_02604d4c;
}

// Forwards the call to sub_01a73670, which takes the object and a flag.
void __stdcall sub_sub_01a73670(void* Object, int bFlag);
struct FForwarder_01a738f0
{
	void sub_01a738f0(void* Object);
};

// @baa 0x01a738f0
void FForwarder_01a738f0::sub_01a738f0(void* Object)
{
	sub_sub_01a73670(Object, 0);
}

// Forwards the call to sub_01aa1f30, which takes the object and a flag.
void __stdcall sub_sub_01aa1f30(void* Object, int bFlag);
struct FForwarder_01aa2f80
{
	void sub_01aa2f80(void* Object);
};

// @baa 0x01aa2f80
void FForwarder_01aa2f80::sub_01aa2f80(void* Object)
{
	sub_sub_01aa1f30(Object, 0);
}
