// RRopePhysics.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

INT sub_0165cf60();
struct C_60_260
{
    BYTE Pad[0x260];
    FLOAT F;
};

// @baa 0x0165d030
FLOAT sub_0165d030()
{
    C_60_260* P = (C_60_260*)sub_0165cf60();
    return P->F * 0.02f;
}

struct C_60_268
{
    BYTE Pad[0x268];
    FLOAT F;
};

// @baa 0x0165d060
FLOAT sub_0165d060()
{
    C_60_268* P = (C_60_268*)sub_0165cf60();
    return P->F * 0.02f;
}

struct C_60_26c
{
    BYTE Pad[0x26c];
    FLOAT F;
};

// @baa 0x0165d080
FLOAT sub_0165d080()
{
    C_60_26c* P = (C_60_26c*)sub_0165cf60();
    return P->F * 0.02f;
}

struct C_60_288
{
    BYTE Pad[0x288];
    FLOAT F;
};

// @baa 0x0165d0f0
FLOAT sub_0165d0f0()
{
    C_60_288* P = (C_60_288*)sub_0165cf60();
    return P->F * 0.02f;
}

struct C_01674280
{
    virtual void d0() = 0;
    virtual bool vf04();
    void sub_01670500();
    BYTE Pad[8];
    DWORD F0c;
    void sub_01674280(UINT P);
};

// @baa 0x01674280
void C_01674280::sub_01674280(UINT P)
{
    if (vf04() && F0c == 0)
        sub_01670500();
}
