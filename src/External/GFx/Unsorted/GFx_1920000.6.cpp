// GFx_1920000.cpp: 6 functions
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

void __stdcall sub_01920120(INT A, INT B);
// @baa 0x019224d0
void __stdcall sub_019224d0(INT Value)
{
    sub_01920120(Value, Value);
}

extern void __stdcall sub_018d7170(INT Value);
struct C_019232c0
{
    char pad_00[8];
    INT Object;

    void sub_019232c0();
};

// @baa 0x019232c0
void C_019232c0::sub_019232c0()
{
    if (Object)
        sub_018d7170(Object);
}

struct Object
{
    char pad_00[0x14];
    INT Value;
};

// @baa 0x0192ea90
INT __stdcall sub_0192ea90(Object* Target, INT B)
{
    return Target->Value - B;
}
