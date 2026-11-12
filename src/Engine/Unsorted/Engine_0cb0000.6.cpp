// Engine_0cb0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct Sub
{
    void sub_009c6b40(INT Value);
};

extern Sub* g_026b62b8;
// @baa 0x00cb02b0
void sub_00cb02b0()
{
    g_026b62b8->sub_009c6b40(0);
}

struct C
{
    char pad_0[0x40];
    INT Value_40;
    char pad_44[0xc];
    INT Value_50;
    INT Value_54;

    C* sub_00cb5990();
};

// @baa 0x00cb5990
C* C::sub_00cb5990()
{
    Value_40 = 0;
    Value_50 = 0;
    Value_54 = 0;
    return this;
}

struct C_00cbf7f0
{
    char pad_0[0x40];
    INT Value_40;
    INT Value_44;
    INT Value_48;

    C_00cbf7f0* sub_00cbf7f0();
};

// @baa 0x00cbf7f0
C_00cbf7f0* C_00cbf7f0::sub_00cbf7f0()
{
    Value_40 = 0;
    Value_44 = 0;
    Value_48 = 0;
    return this;
}
