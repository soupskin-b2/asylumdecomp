// FCollada_1860000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FUObjectContainerBase {
    void* First;
    void* Last;
    int Count;
    int* CountPtr;
    FUObjectContainerBase() {
        First = NULL;
        Last = NULL;
        Count = 0;
        CountPtr = &Count;
    }
};

class FCDEffectCode : public FUObjectContainerBase {
public:
    FCDEffectCode();
    virtual ~FCDEffectCode();
};

FCDEffectCode::FCDEffectCode() {}

// @baa 0x0186e320
FCDEffectCode::~FCDEffectCode() {}

class FCDEffectTechnique
{
};

class FUObjectContainer_FCDEffectTechniqueBase
{
public:
	FUObjectContainer_FCDEffectTechniqueBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDEffectTechnique* Next;   // +0xc  embedded head node
	FCDEffectTechnique** Head;  // +0x10 points at the head node
};

FUObjectContainer_FCDEffectTechniqueBase::FUObjectContainer_FCDEffectTechniqueBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDEffectTechnique : public FUObjectContainer_FCDEffectTechniqueBase
{
public:
	FUObjectContainer_FCDEffectTechnique();
	virtual ~FUObjectContainer_FCDEffectTechnique() { }
};

// @baa 0x0186e370
FUObjectContainer_FCDEffectTechnique::FUObjectContainer_FCDEffectTechnique()
{
}
