// FCollada_1870000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

class FCDMaterialInstanceBindVertexInput
{
};

class FUObjectContainer_FCDMaterialInstanceBindVertexInputBase
{
public:
	FUObjectContainer_FCDMaterialInstanceBindVertexInputBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDMaterialInstanceBindVertexInput* Next;   // +0xc  embedded head node
	FCDMaterialInstanceBindVertexInput** Head;  // +0x10 points at the head node
};

FUObjectContainer_FCDMaterialInstanceBindVertexInputBase::FUObjectContainer_FCDMaterialInstanceBindVertexInputBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDMaterialInstanceBindVertexInput : public FUObjectContainer_FCDMaterialInstanceBindVertexInputBase
{
public:
	FUObjectContainer_FCDMaterialInstanceBindVertexInput();
	virtual ~FUObjectContainer_FCDMaterialInstanceBindVertexInput() { }
};

// @baa 0x01871850
FUObjectContainer_FCDMaterialInstanceBindVertexInput::FUObjectContainer_FCDMaterialInstanceBindVertexInput()
{
}

class FCDMorphTarget
{
};

class FUObjectContainer_FCDMorphTargetBase
{
public:
	FUObjectContainer_FCDMorphTargetBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDMorphTarget* Next; // +0xc  embedded head node
	FCDMorphTarget** Head; // +0x10 points at the head node
};

FUObjectContainer_FCDMorphTargetBase::FUObjectContainer_FCDMorphTargetBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDMorphTarget : public FUObjectContainer_FCDMorphTargetBase
{
public:
	FUObjectContainer_FCDMorphTarget();
	virtual ~FUObjectContainer_FCDMorphTarget() { }
};

// @baa 0x01875920
FUObjectContainer_FCDMorphTarget::FUObjectContainer_FCDMorphTarget()
{
}
