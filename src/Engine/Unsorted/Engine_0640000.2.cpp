// Engine_0640000.cpp (part 2 of 2): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

INT sub_0064dbe0(void);
INT sub_0053f6c0(void);
// @baa 0x0064e9e0
INT ADecalManager::vf_000()
{
	return sub_0064dbe0 == sub_0053f6c0;
}

struct S_0064b6c0
{
    char Pad[0x58];
    float Field_0058;
    char Pad_005C[0x0C];
    float Field_0068;
    char Pad_006C[0x0C];
    float Field_0078;

    struct S_0064b6f0 { float X, Y, Z; };
    S_0064b6f0 sub_0064b6c0()
    {
        S_0064b6f0 R;
        R.X = Field_0058;
        R.Y = Field_0068;
        R.Z = Field_0078;
        return R;
    }
};

// @baa 0x0064b6c0
void ref_call()
{
    S_0064b6c0 s;
    S_0064b6c0::S_0064b6f0 r = s.sub_0064b6c0();
}

struct C
{
    WORD pad_00;
    WORD field_02;

    INT sub_0064aae0();
};

// @baa 0x0064aae0
INT C::sub_0064aae0()
{
    return field_02 > 0;
}

struct USurface_ : public USurface
{
    void sub_0064bbf0();
};

// @baa 0x0064bbf0
void USurface_::sub_0064bbf0()
{
    if (--*(INT*)((char*)this + 0x14) == 0)
        vf_020();
}

struct C_0064d1e0
{
    char pad_00[0x2c];
    float Value;

    void sub_0064d1e0(float In);
};

// @baa 0x0064d1e0
void C_0064d1e0::sub_0064d1e0(float In)
{
    Value = In;
}

struct S_0064cbd0 {
    S_0064cbd0* sub_0064cbd0();
};

// @baa 0x0064cbd0
S_0064cbd0* S_0064cbd0::sub_0064cbd0()
{
    *(WORD*)(this + 2)  = 0;
    *(WORD*)(this + 8)  = 0;
    *(WORD*)(this + 0x10) = 0;
    *(WORD*)(this + 0x16) = 0;
    *(WORD*)(this + 0x1a) = 0;
    return this;
}
