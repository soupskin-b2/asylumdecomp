// Engine_07d0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_007dcac0_holder {
    INT a, b, c, d, e, f;
    INT* sub_007dcac0(INT);
};

// @baa 0x007dcac0
INT* sub_007dcac0_holder::sub_007dcac0(INT)
{
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    return (INT*)this;
}

struct sub_007dca40_Host
{
    DWORD Field00;
    DWORD Field04;
    DWORD Field08;
    DWORD Field0C;
    DWORD Field10;
    DWORD Field14;
    DWORD Field18;

    sub_007dca40_Host* sub_007dca40(DWORD Value);
};

// @baa 0x007dca40
sub_007dca40_Host* sub_007dca40_Host::sub_007dca40(DWORD)
{
    Field04 = 0;
    Field08 = 0;
    Field0C = 0;
    Field10 = 0;
    Field14 = 0;
    Field18 = 0;
    return this;
}

struct C
{
    char pad_00[0x30];
    BYTE Flags;
    char pad_31[0xc7];
    C* Pointer;

    void sub_007d7120(INT A, INT B);
};

// @baa 0x007d7120
void C::sub_007d7120(INT, INT)
{
    if (!(Flags & 0x40))
        Pointer = this;
}
