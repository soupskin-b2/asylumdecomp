// Editor_0ec0000.cpp: 3 functions
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
