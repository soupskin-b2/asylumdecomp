// Editor_10b0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S010bf560
{
	INT A;
	INT B;
	INT C;

	S010bf560& sub_010bf560(const S010bf560& Other);
	static void KeepAlive();
};

void S010bf560::KeepAlive()
{
	S010bf560 S;
	S.sub_010bf560(S);
}

// @baa 0x010bf560
S010bf560& S010bf560::sub_010bf560(const S010bf560& Other)
{
	A = Other.A;
	B = Other.B;
	C = Other.C;
	return *this;
}

// 12-byte struct copied by value; the assignment keeps the base in eax and the
// source argument in ecx when returned by reference.
struct FThreeInt
{
    INT X;
    INT Y;
    INT Z;

    FThreeInt& sub_010bf580(const FThreeInt& Src)
    {
        X = Src.X;
        Y = Src.Y;
        Z = Src.Z;
        return *this;
    }
};

// @baa 0x010bf580
// External linkage keeps the whole chain (and the member it calls) in the object.
void Sub010bf580Entry(FThreeInt& A, const FThreeInt& B)
{
    A.sub_010bf580(B);
}
