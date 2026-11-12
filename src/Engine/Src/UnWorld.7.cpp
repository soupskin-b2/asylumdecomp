// UnWorld.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_009b45b0_struct {
    INT field_0x00;
    INT field_0x04;
    INT field_0x08;
    INT field_0x0c;
    INT field_0x10;
    INT field_0x14;
    sub_009b45b0_struct* sub_009b45b0(INT InValue);
};

// @baa 0x009b45b0
// Zeroes six dwords of this, returns this.
sub_009b45b0_struct* sub_009b45b0_struct::sub_009b45b0(INT InValue)
{
    field_0x14 = field_0x10 = field_0x0c = field_0x08 = field_0x04 = field_0x00 = 0;
    return this;
}

// A three-word value whose copy-assignment is rebuilt here (009b1a50).
struct FTriWord
{
	INT X;
	INT Y;
	INT Z;

	FTriWord& sub_009b1a50(const FTriWord& Other);
};

// @baa 0x009b1a50
FTriWord& FTriWord::sub_009b1a50(const FTriWord& Other)
{
	X = Other.X;
	Y = Other.Y;
	Z = Other.Z;
	return *this;
}

// Extern reference so the compiler emits sub_009b1a50 (no direct callers exist).
FTriWord& fwords_assign_helper(FTriWord& A, const FTriWord& B)
{
	return A.sub_009b1a50(B);
}
