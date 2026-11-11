// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Core.h"
#include "ue3/Array.h"

struct FElem {
    INT A;
    INT Num;
    WORD* Data;
    ~FElem();
};

FElem::~FElem() {}

void sub_018c8860(INT);
void sub_018c9e60(WORD* Src, INT Count, FElem** Out, INT* OutCount);
void* sub_01a375f0(void* Dst, const void* Src, INT Size);
struct FWordArray : public TArray<WORD> {
    void sub_005fc440(INT Count);
};

static void sub_00723810(FWordArray* P)
{
    FElem* Out = NULL;
    INT OutCount = 0;
    FWordArray& A = *P;
    sub_018c8860(1);
    sub_018c9e60(&A(0), A.Num(), &Out, &OutCount);
    A.Empty();
    A.sub_005fc440(Out->Num);
    sub_01a375f0(&A(0), Out->Data, A.Num() * 2);
    delete[] Out;
}

struct C {
    BYTE Pad[0x18];
    FWordArray Data;
    void sub_00724120();
};

// @baa 0x00724120
void C::sub_00724120()
{
    sub_00723810(&Data);
}
