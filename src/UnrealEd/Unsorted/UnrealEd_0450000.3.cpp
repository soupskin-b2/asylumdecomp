// UnrealEd_0450000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern FLOAT flt_01e52cd8;
struct FLinearColor_ : public FLinearColor
{
    BYTE GetRedByte() const;
};

// @baa 0x0045deb0
BYTE FLinearColor_::GetRedByte() const
{
    return (BYTE)(R * flt_01e52cd8);
}

struct FLinearColor__0045ded0 : public FLinearColor
{
    BYTE GetGreenByte() const;
};

// @baa 0x0045ded0
BYTE FLinearColor__0045ded0::GetGreenByte() const
{
    return (BYTE)(G * flt_01e52cd8);
}

struct FLinearColor__0045def0 : public FLinearColor
{
    BYTE GetBlueByte() const;
};

// @baa 0x0045def0
BYTE FLinearColor__0045def0::GetBlueByte() const
{
    return (BYTE)(B * flt_01e52cd8);
}

// 0045cd90: store arg byte at +0x2e; if (+0x18) subobject, tail-call its ApplyState(arg).
struct SubWindow_004382c0 {
    void ApplyState(BYTE State); // 004382c0
};

struct C0045cd90 {
    char _000[0x18];             // 0x00 - 0x18
    SubWindow_004382c0* SubWindow;      // 0x18
    char _01c[0x12];             // 0x1c - 0x2e
    BYTE StateFlag;              // 0x2e
    void sub_0045cd90(BYTE State);
};

// @baa 0x0045cd90
void C0045cd90::sub_0045cd90(BYTE State)
{
    StateFlag = State;
    if (SubWindow)
        SubWindow->ApplyState(State);
}

void caller_0045cd90(C0045cd90* p, BYTE s) { p->sub_0045cd90(s); }
