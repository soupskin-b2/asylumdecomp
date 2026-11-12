// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include <string.h>

/* UnFile.h */
#define appMemcpy memcpy
/* TArray<T>::Copy for a 4-byte bitwise-copyable T (Array.h), out of line in the exe */
struct FDwordArray : public TArray<DWORD> {
    void sub_0087d630(const FDwordArray& Source); // Copy
};

// @baa 0x0087d630
void FDwordArray::sub_0087d630(const FDwordArray& Source)
{
    if (this != &Source)
    {
        if (Source.ArrayNum > 0)
        {
            Empty(Source.ArrayNum);
            appMemcpy(GetData(), &Source(0), sizeof(DWORD) * Source.Num());
            ArrayNum = Source.ArrayNum;
        }
        else
        {
            Empty(0);
        }
    }
}
