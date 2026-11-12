// FCollada_1850000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// Container for a tracked FCDPhysicsForceFieldInstance buffer (OpenCOLLADA).
struct FUObjectContainerPhysicsForceFieldInstance {
    INT* m_Vftable;   // FUObjectContainer<FCDPhysicsForceFieldInstance>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerPhysicsForceFieldInstance* sub_018538f0();
};

extern INT g_023e87f0;
// @baa 0x018538f0
 // FUObjectContainer<FCDPhysicsForceFieldInstance>::vftable
FUObjectContainerPhysicsForceFieldInstance* FUObjectContainerPhysicsForceFieldInstance::sub_018538f0()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e87f0;
    return this;
}

void UsePhysicsForceFieldInstanceContainer(FUObjectContainerPhysicsForceFieldInstance* P)
{
    P->sub_018538f0();
}

class FCDPhysicsModelInstance;
struct FUObjectContainer_FCDPhysicsModelInstance_Init
{
	FUObjectContainer_FCDPhysicsModelInstance_Init();

	INT Count;
	INT Reserved;
	FCDPhysicsModelInstance* Next;
	FCDPhysicsModelInstance** Head;
};

struct FUObjectContainer_FCDPhysicsModelInstance : FUObjectContainer_FCDPhysicsModelInstance_Init
{
	FUObjectContainer_FCDPhysicsModelInstance();
	virtual ~FUObjectContainer_FCDPhysicsModelInstance();
};

FUObjectContainer_FCDPhysicsModelInstance_Init::FUObjectContainer_FCDPhysicsModelInstance_Init()
{
	Count = 0;
	Reserved = 0;
	Next = NULL;
	Head = &Next;
}

FUObjectContainer_FCDPhysicsModelInstance::FUObjectContainer_FCDPhysicsModelInstance()
{
}

// @baa 0x018538a0
FUObjectContainer_FCDPhysicsModelInstance::~FUObjectContainer_FCDPhysicsModelInstance()
{
}

class sub_0185bcf0_Base
{
    INT Count;
    INT Size;
    sub_0185bcf0_Base* Next;
    sub_0185bcf0_Base** Last;
public:
    sub_0185bcf0_Base()
    {
        Count = 0;
        Size = 0;
        Next = NULL;
        Last = &Next;
    }
};

class FUObjectContainer : public sub_0185bcf0_Base
{
public:
    FUObjectContainer();
    virtual ~FUObjectContainer() {}
};

// @baa 0x0185bcf0
FUObjectContainer::FUObjectContainer()
{
}
