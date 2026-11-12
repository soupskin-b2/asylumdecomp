// FCDGeometryMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Container for a tracked FCDGeometrySource buffer (OpenCOLLADA).
struct FUObjectContainerGeometrySource {
    INT* m_Vftable;   // FUObjectContainer<FCDGeometrySource>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerGeometrySource* sub_01848230();
};

extern INT g_023e62cc;
// @baa 0x01848230
 // FUObjectContainer<FCDGeometrySource>::vftable
FUObjectContainerGeometrySource* FUObjectContainerGeometrySource::sub_01848230()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e62cc;
    return this;
}

void UseGeometrySourceContainer(FUObjectContainerGeometrySource* P)
{
    P->sub_01848230();
}
