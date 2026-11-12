// FCollada_1850000.cpp: 2 functions
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
