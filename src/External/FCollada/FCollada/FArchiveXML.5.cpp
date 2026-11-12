// FArchiveXML.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// sub_00402650: the game's low-level allocator (operator new-ish),
// ?sub_00402650@@YAXI@Z : void* __cdecl sub_00402650(unsigned int)
void* sub_00402650(unsigned int Size);
struct C_018959c0 {
    // thiscall ctor-ish at 018959c0, returns this (tail-called)
    C_018959c0* sub_018959c0();
};

// @baa 0x01895a20
// @baa 0x01895a20
C_018959c0* sub_01895a20()
{
    C_018959c0* P = (C_018959c0*)sub_00402650(0x24);
    if (P)
    {
        return P->sub_018959c0();
    }
    return 0;
}

struct C
{
    INT Value_00;
    BYTE Flag_04;

    C* sub_0188f600();
};

// @baa 0x0188f600
C* C::sub_0188f600()
{
    Value_00 = 0;
    Flag_04 = 0;
    return this;
}
