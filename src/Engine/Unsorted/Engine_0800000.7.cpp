// Engine_0800000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// 0x18/0x1c subobject updated from an int and a float, callee pops 8 bytes (ret 8).
struct F008026b0
{
    int pad[6];  // 0x00 - 0x17
    int Value;   // 0x18
    float F;     // 0x1c

    void sub_008026b0(int InValue, float InF);
};

// @baa 0x008026b0
void F008026b0::sub_008026b0(int InValue, float InF)
{
    Value = InValue * 2;
    F = InF;
}

// sub_008088e0 is a method on the subobject at offset 0x0c of the outer struct:
// this is adjusted by `add ecx, 0xc` before the thiscall.
struct F0080b0b0Sub
{
    int pad[4]; // 0x00 - 0x0f
    int Value;  // 0x10 (this + 0x1c)

    void sub_008088e0(int InValue);
};

struct F0080b0b0
{
    int pad[3]; // 0x00 - 0x0b
    F0080b0b0Sub S; // 0x0c

    void sub_0080b0b0(int Offset, int Scale);
};

// @baa 0x0080b0b0
void F0080b0b0::sub_0080b0b0(int Offset, int Scale)
{
    S.sub_008088e0(S.Value * Scale + Offset);
}
