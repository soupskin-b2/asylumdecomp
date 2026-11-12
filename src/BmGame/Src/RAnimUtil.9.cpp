// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include <new.h>

static FORCEINLINE void AppendByte(TArray<BYTE>& Array, const BYTE& Value)
{
    const INT Index = Array.Add(1);
    BYTE* Storage = Array.GetTypedData() + Index;
    new (Storage) BYTE(Value);
}

// @baa 0x015abbb0
void sub_015abbb0(const TArray<BYTE>& A, const TArray<BYTE>& B, TArray<BYTE>& Output)
{
    INT AIndex = 0;
    INT BIndex = 0;
    while (AIndex < A.Num() && BIndex < B.Num())
    {
        if (A(AIndex) < B(BIndex))
        {
            AppendByte(Output, A(AIndex));
            ++AIndex;
        }
        else if (B(BIndex) < A(AIndex))
        {
            ++BIndex;
        }
        else
        {
            ++AIndex;
            ++BIndex;
        }
    }
    while (AIndex < A.Num())
    {
        AppendByte(Output, A(AIndex));
        ++AIndex;
    }
}
