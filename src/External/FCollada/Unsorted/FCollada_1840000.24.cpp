// FCollada_1840000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class FCDTransform
{
};

class FUObjectContainer_FCDTransformBase
{
public:
	FUObjectContainer_FCDTransformBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDTransform* Next;   // +0xc  embedded head node
	FCDTransform** Head;  // +0x10 points at the head node
};

FUObjectContainer_FCDTransformBase::FUObjectContainer_FCDTransformBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDTransform : public FUObjectContainer_FCDTransformBase
{
public:
	FUObjectContainer_FCDTransform();
	virtual ~FUObjectContainer_FCDTransform() { }
};

// @baa 0x018400a0
FUObjectContainer_FCDTransform::FUObjectContainer_FCDTransform()
{
}

// Container for a tracked FCDEntityInstance buffer (OpenCOLLADA).
struct FUObjectContainerEntity {
    INT* m_Vftable;   // FUObjectContainer<FCDEntityInstance>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerEntity* sub_018400f0();
};

extern INT g_023e5c94;
// @baa 0x018400f0
 // FUObjectContainer<FCDEntityInstance>::vftable
FUObjectContainerEntity* FUObjectContainerEntity::sub_018400f0()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e5c94;
    return this;
}

void UseEntityContainer(FUObjectContainerEntity* P)
{
    P->sub_018400f0();
}

// Container for a tracked FCDEffectParameter buffer (OpenCOLLADA).
struct FUObjectContainerEffectParameter {
    INT* m_Vftable;   // FUObjectContainer<FCDEffectParameter>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerEffectParameter* sub_01841cc0();
};

extern INT g_023e5d54;
// @baa 0x01841cc0
 // FUObjectContainer<FCDEffectParameter>::vftable
FUObjectContainerEffectParameter* FUObjectContainerEffectParameter::sub_01841cc0()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e5d54;
    return this;
}

void UseEffectParameterContainer(FUObjectContainerEffectParameter* P)
{
    P->sub_01841cc0();
}

// Container for a tracked FCDMaterialInstance buffer (OpenCOLLADA).
struct FUObjectContainerMaterial {
    INT* m_Vftable;   // FUObjectContainer<FCDMaterialInstance>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerMaterial* sub_01844e90();
};

extern INT g_023e5f0c;
// @baa 0x01844e90
 // FUObjectContainer<FCDMaterialInstance>::vftable
FUObjectContainerMaterial* FUObjectContainerMaterial::sub_01844e90()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e5f0c;
    return this;
}

void UseMaterialContainer(FUObjectContainerMaterial* P)
{
    P->sub_01844e90();
}

extern const double g_01e73198;
extern const double g_023db3a8;
// @baa 0x01845550
float sub_01845550(float Value)
{
    Value = Value * g_01e73198 / g_023db3a8;
    return Value;
}

class FCDEffectProfile;
struct FUObjectContainer_FCDEffectProfile_Init
{
	FUObjectContainer_FCDEffectProfile_Init();

	INT Count;
	INT Reserved;
	FCDEffectProfile* Next;
	FCDEffectProfile** Head;
};

struct FUObjectContainer_FCDEffectProfile : FUObjectContainer_FCDEffectProfile_Init
{
	FUObjectContainer_FCDEffectProfile();
	virtual ~FUObjectContainer_FCDEffectProfile();
};

FUObjectContainer_FCDEffectProfile_Init::FUObjectContainer_FCDEffectProfile_Init()
{
	Count = 0;
	Reserved = 0;
	Next = NULL;
	Head = &Next;
}

FUObjectContainer_FCDEffectProfile::FUObjectContainer_FCDEffectProfile()
{
}

// @baa 0x01841c70
FUObjectContainer_FCDEffectProfile::~FUObjectContainer_FCDEffectProfile()
{
}
