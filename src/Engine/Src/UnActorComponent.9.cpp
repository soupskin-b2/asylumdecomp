// UnActorComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include <string.h>

/* UnFile.h */
#define appMemcpy memcpy
/* TInlineAllocator<NumInlineElements>::ForElementType<T> (ContainerAllocationPolicies.h); the kit has
 * only the heap allocator. This instance: 32 inline elements of 4 bytes, heap fallback after them. */
template<DWORD NumInlineElements, typename ElementType>
class TInlineAllocation {
public:
    BYTE InlineData[NumInlineElements * sizeof(ElementType)];
    FHeapAllocation SecondaryData;

    void ResizeAllocation(INT PreviousNumElements, INT NumElements, INT NumBytesPerElement)
    {
        const INT PreviousNumBytes = PreviousNumElements * NumBytesPerElement;

        // the new allocation fits in the inline elements
        if (NumElements <= NumInlineElements)
        {
            // if the old allocation was on the heap, move the elements back inline and free it
            if (SecondaryData.GetAllocation())
            {
                appMemcpy(InlineData, SecondaryData.GetAllocation(), PreviousNumBytes);
                SecondaryData.ResizeAllocation(0, 0, NumBytesPerElement);
            }
        }
        else
        {
            if (!SecondaryData.GetAllocation())
            {
                // moving from inline to the heap
                SecondaryData.ResizeAllocation(0, NumElements, NumBytesPerElement);
                appMemcpy(SecondaryData.GetAllocation(), InlineData, PreviousNumBytes);
            }
            else
            {
                SecondaryData.ResizeAllocation(PreviousNumElements, NumElements, NumBytesPerElement);
            }
        }
    }
};

// @baa 0x0075af80
template void TInlineAllocation<32, DWORD>::ResizeAllocation(INT, INT, INT);
