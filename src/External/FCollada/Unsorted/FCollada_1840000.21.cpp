// FCollada_1840000.cpp (part 21 of 21): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0184e250(); // 0x04
    void sub_01854290();
};

// @baa 0x0184e250
void FCDocument::sub_0184e250()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

struct C
{
    INT Value_00;
    INT Value_04;

    C* sub_01841c40(INT* Source);
};

// @baa 0x01841c40
C* C::sub_01841c40(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018430d0
{
    INT pad_00;
    UINT Count;

    INT sub_018430d0();
};

// @baa 0x018430d0
INT C_018430d0::sub_018430d0()
{
    return Count <= 1;
}

struct Inner
{
    char pad_00[0x2c];
    INT Value;
};

struct C_0184a9e0
{
    char pad_00[0x34];
    Inner* Pointer;

    bool sub_0184a9e0();
};

// @baa 0x0184a9e0
bool C_0184a9e0::sub_0184a9e0()
{
    return Pointer->Value != 0;
}

// FUTrackedList<FCDSceneNode> constructor (FUObjectContainer layout)
struct FUObjectContainerBase {
    void* First;
    void* Last;
    int Count;
    int* CountPtr;

    FUObjectContainerBase() : First(NULL), Last(NULL), Count(0), CountPtr(&Count) {}
};

struct FUTrackedList_FCDSceneNode : public FUObjectContainerBase {
    FUTrackedList_FCDSceneNode();
    virtual ~FUTrackedList_FCDSceneNode();
};

FUTrackedList_FCDSceneNode::FUTrackedList_FCDSceneNode()
{
}

// @baa 0x01840080
FUTrackedList_FCDSceneNode::~FUTrackedList_FCDSceneNode()
{
}
