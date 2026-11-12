// UnrealEd_0450000.cpp: 3 functions
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
