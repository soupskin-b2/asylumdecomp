// UnrealEd_0940000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0094aac0(INT Index) const;
};

// @baa 0x0094aac0
const E* S::sub_0094aac0(INT Index) const
{
    return &Items(Index);
}

struct C {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0094ab10(INT Index);
};

// @baa 0x0094ab10
UBOOL C::sub_0094ab10(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct S_0094ac90 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0094ac90(INT Index) const;
};

// @baa 0x0094ac90
const QWORD* S_0094ac90::sub_0094ac90(INT Index) const
{
    return &Items(Index);
}
