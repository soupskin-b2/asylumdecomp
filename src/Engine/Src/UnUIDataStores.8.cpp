// UnUIDataStores.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_00d92b80
{
    INT Unk00;
    INT Unk04;
    INT Unk08;
    INT Unk0c;
    INT Unk10;
    INT Unk14;
    S_00d92b80* sub_00d92b80(INT In);
};

// @baa 0x00d92b80
S_00d92b80* S_00d92b80::sub_00d92b80(INT In)
{
    S_00d92b80* Self = this;
    Self->Unk00 = 0;
    Self->Unk04 = 0;
    Self->Unk08 = 0;
    Self->Unk0c = 0;
    Self->Unk10 = 0;
    Self->Unk14 = 0;
    return Self;
}

struct C
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C* sub_00d98610();
};

// @baa 0x00d98610
C* C::sub_00d98610()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

struct C_00d9a500
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_00d9a500* sub_00d9a500();
};

// @baa 0x00d9a500
C_00d9a500* C_00d9a500::sub_00d9a500()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
