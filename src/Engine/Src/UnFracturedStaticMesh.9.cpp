// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* UnMemory.h (memcpy, which the compiler emits as a call to the CRT copy) */
#define appMemcpy memcpy
/* TArray<FMatrix> (e.g. USkeletalMesh::RefBasesInvMatrix) */
struct FMatrixArray : public TArray<FMatrix>
{
    void Copy(const TArray<FMatrix>& Source);
};

// @baa 0x007bec40
/* TArray::Copy for a bitwise-copyable element (Array.h), out of line here */
void FMatrixArray::Copy(const TArray<FMatrix>& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            appMemcpy(GetData(), &Source(0), sizeof(FMatrix) * Source.Num());
            ArrayNum = Source.Num();
        }
        else
        {
            Empty();
        }
    }
}
