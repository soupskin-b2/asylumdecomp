// RAnimUtil.cpp: 2 functions
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

// @baa 0x015abe10
void sub_015abe10(const TArray<BYTE>& A, const TArray<BYTE>& B, TArray<BYTE>& Output)
{
    INT AIndex = 0;
    INT BIndex = 0;
    while (AIndex != A.Num())
    {
        if (BIndex == B.Num())
        {
            while (AIndex < A.Num())
            {
                AppendByte(Output, A(AIndex));
                ++AIndex;
            }
            return;
        }
        if (A(AIndex) < B(BIndex))
        {
            AppendByte(Output, A(AIndex));
            ++AIndex;
        }
        else if (B(BIndex) < A(AIndex))
        {
            AppendByte(Output, B(BIndex));
            ++BIndex;
        }
        else
        {
            AppendByte(Output, A(AIndex));
            ++AIndex;
            ++BIndex;
        }
    }
    while (BIndex < B.Num())
    {
        AppendByte(Output, B(BIndex));
        ++BIndex;
    }
}
