// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>

/* UnFile.h / UnTemplate.h pieces the kit lacks */
#define appMemmove memmove
typedef INT PTRINT;

 /* UnVcWin32.h (32-bit) */
template<typename ReferencedType>
FORCEINLINE ReferencedType* IfAThenAElseB(ReferencedType* A, ReferencedType* B)
{
    const PTRINT IntA = reinterpret_cast<PTRINT>(A);
    const PTRINT IntB = reinterpret_cast<PTRINT>(B);
    // Compute a mask which has all bits set if IntA is zero, and no bits set if it's non-zero.
    const PTRINT MaskB = -(!IntA);
    return reinterpret_cast<ReferencedType*>(IntA | (MaskB & IntB));
}

/* FVector::operator== (UnMath.h) */
FORCEINLINE UBOOL operator==(const FVector& A, const FVector& B) { return A.X == B.X && A.Y == B.Y && A.Z == B.Z; }

/* TArray<T, TInlineAllocator<N> > (Array.h / ContainerAllocationPolicies.h): the kit's TArray has
 * no allocator parameter. Layout: inline elements, the heap pointer, then ArrayNum/ArrayMax. */
template<typename T, INT NumInlineElements>
class TInlineArray
{
public:
    FORCEINLINE T* GetTypedData() const
    {
        return IfAThenAElseB<T>(SecondaryData, (T*)InlineData);
    }

    INT RemoveItem(const T& Item)
    {
#line 1001 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
        check(((&Item) < GetTypedData()) || ((&Item) >= GetTypedData()+ArrayMax));
        INT WriteIndex = 0;
        for (INT ReadIndex = 0; ReadIndex < ArrayNum; ReadIndex++)
        {
            if (GetTypedData()[ReadIndex] == Item)
            {
                (&GetTypedData()[ReadIndex])->~T();
            }
            else
            {
                if (ReadIndex != WriteIndex)
                {
                    appMemmove(&GetTypedData()[WriteIndex], &GetTypedData()[ReadIndex], sizeof(T));
                }
                WriteIndex++;
            }
        }
        const INT OriginalNum = ArrayNum;
        ArrayNum = WriteIndex;
        return OriginalNum - ArrayNum;
    }

private:
    BYTE InlineData[NumInlineElements * sizeof(T)];
    T* SecondaryData;
    INT ArrayNum;
    INT ArrayMax;
};

// @baa 0x00d052e0
/* TArray<FVector, TInlineAllocator<16> >::RemoveItem, out of line */
template class TInlineArray<FVector, 16>;

#line 73 "candidate.cpp"
