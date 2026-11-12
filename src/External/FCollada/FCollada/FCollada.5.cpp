// FCollada.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

class FCPArchive
{
};

template <class T>
class FUObjectContainer
{
public:
	FUObjectContainer();
	virtual ~FUObjectContainer();

	int HeadCount;     // 0x4
	int HeadNum;       // 0x8
	int Tail;          // 0xc
	int* Head;         // 0x10
};

template <class T>
FUObjectContainer<T>::FUObjectContainer()
	: HeadCount(0), HeadNum(0), Tail(0), Head(&Tail)
{
}

template <class T>
FUObjectContainer<T>::~FUObjectContainer()
{
}

template class FUObjectContainer<FCPArchive>;

// the container is the base of the Collada archive, so its base constructor is
// emitted out of line (the base-subobject ctor stores the vtable last)
struct FColladaArchive : public FUObjectContainer<FCPArchive>
{
	FColladaArchive();
};

static FColladaArchive* AllocateCollada(void)
{
	return new FColladaArchive;
}

// @baa 0x0185df90
FColladaArchive::FColladaArchive()
{
}

// FUObjectContainer<FCPExtraTechnique> vftable constructor, 0x0185df00
// Layout: vftable at 0x00, two header INTs at 0x04/0x08, the last element
// count m_Capacity at 0x0c, and m_Data (head pointer) at 0x10.
struct FUObjectContainer_FCPExtraTechnique {
    INT* m_Vftable;   // 0x00
    INT  m_HeadCount; // 0x04
    INT  m_HeadIndex; // 0x08
    INT  m_Capacity;  // 0x0c
    INT* m_Data;      // 0x10

    FUObjectContainer_FCPExtraTechnique* sub_0185df00();
};

extern INT g_023e8da8;
// @baa 0x0185df00
FUObjectContainer_FCPExtraTechnique* FUObjectContainer_FCPExtraTechnique::sub_0185df00()
{
    m_HeadCount = 0;
    m_HeadIndex = 0;
    m_Capacity  = 0;
    m_Data      = &m_Capacity;
    m_Vftable   = &g_023e8da8;
    return this;
}
