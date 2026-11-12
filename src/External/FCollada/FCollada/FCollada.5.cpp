// FCollada.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Container for a tracked FCDocument buffer (OpenCOLLADA).
struct FUObjectContainerDoc {
    INT* m_Vftable;   // FUTrackedList<FCDocument>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerDoc* sub_0183e5b0();
};

extern INT g_023e5c20;
// @baa 0x0183e5b0
 // FUTrackedList<FCDocument>::vftable
FUObjectContainerDoc* FUObjectContainerDoc::sub_0183e5b0()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e5c20;
    return this;
}

void UseDocContainer(FUObjectContainerDoc* P)
{
    P->sub_0183e5b0();
}
