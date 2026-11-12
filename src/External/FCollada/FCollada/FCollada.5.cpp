// FCollada.cpp: 2 functions
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
