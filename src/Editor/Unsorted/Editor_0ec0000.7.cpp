// Editor_0ec0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_01826370_ {
	void sub_01826370(void);
	void sub_01827890(int);
	void sub_00ec2c80(int A);
};

// @baa 0x00ec2c80
void sub_01826370_::sub_00ec2c80(int A)
{
	sub_01826370();
	sub_01827890(A);
}

// 00ab1e60 is a thiscall method on a struct of 16 floats (writes offsets
// 0x00..0x1c); its stack argument points at 3 floats.
struct F16Floats
{
    float Data[16];
    void sub_00ab1e60(const float* Src); // declared, binds the original
};

// @baa 0x00ec6730
F16Floats* sub_00ec6730(F16Floats* Dst, const float* Src)
{
    Dst->sub_00ab1e60(Src + 1);
    return Dst;
}

struct C
{
    char pad_0[0x40];
    INT Value_40;
    char pad_44[0xc];
    INT Value_50;
    INT Value_54;

    C* sub_00ecc800();
};

// @baa 0x00ecc800
C* C::sub_00ecc800()
{
    Value_40 = 0;
    Value_50 = 0;
    Value_54 = 0;
    return this;
}

// @baa 0x00ec1670
INT __cdecl sub_00ec1670(INT A, INT B)
{
    return A < B ? A : B;
}

struct C_00ec1940
{
    float X;
    float Y;
    float Z;

    C_00ec1940* sub_00ec1940(const C_00ec1940* Src);
};

// @baa 0x00ec1940
C_00ec1940* C_00ec1940::sub_00ec1940(const C_00ec1940* Src)
{
    X = Src->X;
    Y = Src->Y;
    Z = Src->Z;
    return this;
}

static void ForceSub_00ec1940(C_00ec1940* A, const C_00ec1940* B)
{
    A->sub_00ec1940(B);
}

// A 12-byte slot: three ints copied verbatim from a source triple.
struct FIntTriple
{
    INT A;
    INT B;
    INT C;
};

struct FIntTripleHolder
{
    FIntTriple Value;

    FIntTripleHolder* sub_00ec2c20(const FIntTriple* Src);
};

// @baa 0x00ec2c20
FIntTripleHolder* FIntTripleHolder::sub_00ec2c20(const FIntTriple* Src)
{
    Value.A = Src->A;
    Value.B = Src->B;
    Value.C = Src->C;
    return this;
}
