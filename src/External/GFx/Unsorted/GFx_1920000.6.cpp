// GFx_1920000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S {
    INT a;
    INT b;
    INT c;
    INT d;
    S* sub_01921b00();
};

// @baa 0x01921b00
S* S::sub_01921b00()
{
    a = 0x7fffffff;
    b = 0x80000000;
    c = 0;
    d = 0;
    return this;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C
{
    char pad_00[0x18];
    long Counter;

    void sub_019237a0();
};

// @baa 0x019237a0
void C::sub_019237a0()
{
    InterlockedExchangeAdd(&Counter, 1);
}

struct C_019202d0
{
    BYTE* Table;
    INT pad_04;
    INT Position;

    BYTE sub_019202d0();
};

// @baa 0x019202d0
BYTE C_019202d0::sub_019202d0()
{
    BYTE Value = Table[Position];
    Position++;
    return Value;
}
