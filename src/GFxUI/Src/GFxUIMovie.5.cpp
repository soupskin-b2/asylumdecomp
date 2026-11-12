// GFxUIMovie.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FGFxHandler { void sub_00e689a0(INT Command, INT Argument); };

extern FGFxHandler* g_026caed4;
// @baa 0x00e68a60
INT UGFxInteraction::vf_120(INT Command, INT Argument)
{
    if (g_026caed4)
        g_026caed4->sub_00e689a0(Command, Argument);
    return 0;
}

struct C
{
    INT Value;

    C* sub_00e42bd0(INT* Source);
};

// @baa 0x00e42bd0
C* C::sub_00e42bd0(INT* Source)
{
    *(INT*)this = *Source;
    return this;
}

struct C_00e42aa0
{
    char pad_00[0x34];
    float Value;

    void sub_00e42aa0(float In);
};

// @baa 0x00e42aa0
void C_00e42aa0::sub_00e42aa0(float In)
{
    Value = In;
}
