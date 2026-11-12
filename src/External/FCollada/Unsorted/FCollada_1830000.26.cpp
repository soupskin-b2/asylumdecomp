// FCollada_1830000.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UE3's object-list header, kept at the head of FCDEmitter: first and last object
 * indices, a count and a pointer to that count (so native code can see changes). */
struct FUObjectContainer {
    INT First;
    INT Last;
    INT Count;
    INT* CountPtr;
    FUObjectContainer() { First = 0; Last = 0; Count = 0; CountPtr = &Count; }
};

/* FCDEmitter's own ctor: the base ctor fills the object list first, then the
 * derived ctor runs empty and leaves the vtable store last. */
class FCDEmitter : public FUObjectContainer {
public:
    FCDEmitter();
    virtual ~FCDEmitter();
};

FCDEmitter::FCDEmitter() {}

// @baa 0x01837f20
FCDEmitter::~FCDEmitter() {}

/* FCDForceField's own ctor: the base ctor fills the object list first, then the
 * derived ctor runs empty and leaves the vtable store last. */
class FCDForceField : public FUObjectContainer {
public:
    FCDForceField();
    virtual ~FCDForceField();
};

FCDForceField::FCDForceField() {}

// @baa 0x01837fb0
FCDForceField::~FCDForceField() {}

class FCDController
{
};

class FUObjectContainer_FCDControllerBase
{
public:
	FUObjectContainer_FCDControllerBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDController* Next;  // +0xc  embedded head node
	FCDController** Head; // +0x10 points at the head node
};

FUObjectContainer_FCDControllerBase::FUObjectContainer_FCDControllerBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDController : public FUObjectContainer_FCDControllerBase
{
public:
	FUObjectContainer_FCDController();
	virtual ~FUObjectContainer_FCDController() { }
};

// @baa 0x01837e00
FUObjectContainer_FCDController::FUObjectContainer_FCDController()
{
}

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

class FCDGeometry : public FUObjectContainerBase {
public:
    FCDGeometry();
    virtual ~FCDGeometry();
};

FCDGeometry::FCDGeometry() {}

// @baa 0x01838040
FCDGeometry::~FCDGeometry() {}

class FCDPhysicsModel
{
};

class FUObjectContainer_FCDPhysicsModelBase
{
public:
	FUObjectContainer_FCDPhysicsModelBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDPhysicsModel* Next;  // +0xc  embedded head node
	FCDPhysicsModel** Head; // +0x10 points at the head node
};

FUObjectContainer_FCDPhysicsModelBase::FUObjectContainer_FCDPhysicsModelBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDPhysicsModel : public FUObjectContainer_FCDPhysicsModelBase
{
public:
	FUObjectContainer_FCDPhysicsModel();
	virtual ~FUObjectContainer_FCDPhysicsModel() { }
};

// @baa 0x01838310
FUObjectContainer_FCDPhysicsModel::FUObjectContainer_FCDPhysicsModel()
{
}

// Container for a tracked FCDSceneNode buffer (OpenCOLLADA).
struct FUObjectContainerNode {
    INT* m_Vftable;   // FUObjectContainer<FCDSceneNode>::vftable
    INT m_Offset;
    INT m_Size;
    INT m_Capacity;
    INT* m_Data;
    FUObjectContainerNode* sub_01838280();
};

extern INT g_023e59d8;
// @baa 0x01838280
 // FUObjectContainer<FCDSceneNode>::vftable
FUObjectContainerNode* FUObjectContainerNode::sub_01838280()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e59d8;
    return this;
}

void UseNodeContainer(FUObjectContainerNode* P)
{
    P->sub_01838280();
}

class FCDPhysicsMaterial : public FUObjectContainerBase {
public:
    FCDPhysicsMaterial();
    virtual ~FCDPhysicsMaterial();
};

FCDPhysicsMaterial::FCDPhysicsMaterial() {}

// @baa 0x018383a0
FCDPhysicsMaterial::~FCDPhysicsMaterial() {}

class FCDPhysicsScene
{
};

class FUObjectContainer_FCDPhysicsSceneBase
{
public:
	FUObjectContainer_FCDPhysicsSceneBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FCDPhysicsScene* Next;  // +0xc  embedded head node
	FCDPhysicsScene** Head; // +0x10 points at the head node
};

FUObjectContainer_FCDPhysicsSceneBase::FUObjectContainer_FCDPhysicsSceneBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FCDPhysicsScene : public FUObjectContainer_FCDPhysicsSceneBase
{
public:
	FUObjectContainer_FCDPhysicsScene();
	virtual ~FUObjectContainer_FCDPhysicsScene() { }
};

// @baa 0x01838430
FUObjectContainer_FCDPhysicsScene::FUObjectContainer_FCDPhysicsScene()
{
}

class X { void* a;void*b;void*c;void*d;void*e;void*f; DWORD Flags; public: void sub_0183ea50(BYTE Value); };

// @baa 0x0183ea50
void X::sub_0183ea50(BYTE Value)
{
    DWORD Shifted = (DWORD)Value * 256;
    Flags = (Flags & 0xfffffeff) | Shifted;
}

// Base of the FUObjectContainer classes: the entry fields, set up by a
// non-trivial base constructor.
struct FUObjectContainerBase_01838160 {
    FUObjectContainerBase_01838160();
    int EntryCount;      // +0x4
    int EntryFlags;      // +0x8
    int FirstIndex;      // +0xc
    int* FirstIndexPtr;  // +0x10
};

FUObjectContainerBase_01838160::FUObjectContainerBase_01838160()
{
    EntryCount = 0;
    EntryFlags = 0;
    FirstIndex = 0;
    FirstIndexPtr = &FirstIndex;
}

// Container holding one owned entry. The base sub-object is built first, so
// its fields land before this class's own vtable.
class FUObjectContainer_FCDLight_ : public FUObjectContainerBase_01838160 {
public:
    FUObjectContainer_FCDLight_();
    virtual ~FUObjectContainer_FCDLight_() {}
};

// @baa 0x01838160
FUObjectContainer_FCDLight_::FUObjectContainer_FCDLight_()
{
}
