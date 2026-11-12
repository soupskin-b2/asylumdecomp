// FCollada_1880000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class FCDEffectParameterAnnotation;
struct FUObjectContainer_FCDEffectParameterAnnotation_Init
{
	FUObjectContainer_FCDEffectParameterAnnotation_Init();

	INT Count;
	INT Reserved;
	FCDEffectParameterAnnotation* Next;
	FCDEffectParameterAnnotation** Head;
};

struct FUObjectContainer_FCDEffectParameterAnnotation : FUObjectContainer_FCDEffectParameterAnnotation_Init
{
	FUObjectContainer_FCDEffectParameterAnnotation();
	virtual ~FUObjectContainer_FCDEffectParameterAnnotation();
};

FUObjectContainer_FCDEffectParameterAnnotation_Init::FUObjectContainer_FCDEffectParameterAnnotation_Init()
{
	Count = 0;
	Reserved = 0;
	Next = NULL;
	Head = &Next;
}

FUObjectContainer_FCDEffectParameterAnnotation::FUObjectContainer_FCDEffectParameterAnnotation()
{
}

// @baa 0x01881180
FUObjectContainer_FCDEffectParameterAnnotation::~FUObjectContainer_FCDEffectParameterAnnotation()
{
}

struct FCDEffectPassShader {};

// Base holds the object-container data fields so they are constructed before the
// derived vtable pointer is stored (the original stores the vptr last).
class FUObjectContainer_Base
{
public:
    INT Count;
    INT Size;
    FUObjectContainer_Base* Next;
    FUObjectContainer_Base** Last;

    FUObjectContainer_Base()
    {
        Count = 0;
        Size = 0;
        Next = 0;
        Last = &Next;
    }
};

// 0x01889160 : constructor of FUObjectContainer<FCDEffectPassShader>
class FUObjectContainer : public FUObjectContainer_Base
{
public:
    virtual ~FUObjectContainer() {}
    FUObjectContainer() {}
};

// @baa 0x01889160
// Reference the constructor so the compiler emits it.
FUObjectContainer* sub_01889160()
{
    FUObjectContainer* c = new FUObjectContainer;
    return c;
}
