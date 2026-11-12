// FCollada_1830000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Container for a tracked FCDAnimationCurve buffer (OpenCOLLADA).
struct FUObjectContainer {
    INT* m_Vftable;   // FUObjectContainer<FCDAnimationCurve>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainer* sub_01834010();
};

extern INT g_023e56cc;
// @baa 0x01834010
 // FUObjectContainer<FCDAnimationCurve>::vftable
FUObjectContainer* FUObjectContainer::sub_01834010()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e56cc;
    return this;
}

void UseContainer(FUObjectContainer* P)
{
    P->sub_01834010();
}

// Container for a tracked FCDAnimationClip buffer (OpenCOLLADA).
struct FUObjectContainerClip {
    INT* m_Vftable;   // FUObjectContainer<FCDAnimationClip>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerClip* sub_01837ce0();
};

extern INT g_023e5960;
// @baa 0x01837ce0
 // FUObjectContainer<FCDAnimationClip>::vftable
FUObjectContainerClip* FUObjectContainerClip::sub_01837ce0()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e5960;
    return this;
}

void UseClipContainer(FUObjectContainerClip* P)
{
    P->sub_01837ce0();
}

// Container for a tracked FCDCamera buffer (OpenCOLLADA).
struct FUObjectContainerCamera {
    INT* m_Vftable;   // FUObjectContainer<FCDCamera>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerCamera* sub_01837d70();
};

extern INT g_023e596c;
// @baa 0x01837d70
 // FUObjectContainer<FCDCamera>::vftable
FUObjectContainerCamera* FUObjectContainerCamera::sub_01837d70()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e596c;
    return this;
}

void UseCameraContainer(FUObjectContainerCamera* P)
{
    P->sub_01837d70();
}
