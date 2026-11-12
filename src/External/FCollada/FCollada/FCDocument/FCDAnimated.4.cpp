// FCDAnimated.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// FUTrackedList<FCDAnimationCurve> from OpenCOLLADA's FCDocument.
struct FUTrackedList {
    INT* m_Vftable;      // FUTrackedList<FCDAnimationCurve>::vftable
    INT m_DataOffset;
    INT m_DataSize;
    INT m_Capacity;
    INT* m_DataPtr;
    FUTrackedList* sub_018334e0();
};

extern INT g_023e5660;
// @baa 0x018334e0
 // FUTrackedList<FCDAnimationCurve>::vftable
FUTrackedList* FUTrackedList::sub_018334e0()
{
    m_DataOffset = 0;
    m_DataSize = 0;
    m_Capacity = 0;
    m_DataPtr = &m_Capacity;
    m_Vftable = &g_023e5660;
    return this;
}

void UseTrackedList(FUTrackedList* P)
{
    P->sub_018334e0();
}
