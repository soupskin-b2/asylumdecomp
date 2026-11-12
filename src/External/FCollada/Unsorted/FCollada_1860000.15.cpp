// FCollada_1860000.cpp (part 15 of 15): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0186ead0(); // 0x04
    void sub_01854290();
};

// @baa 0x0186ead0
void FCDocument::sub_0186ead0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

class FUTestSuiteFUString
{
public:
    FUTestSuiteFUString();

    virtual void vf_0();
};

extern FUTestSuiteFUString* g_027b802c;
// @baa 0x01861d40
FUTestSuiteFUString::FUTestSuiteFUString()
{
    g_027b802c = this;
}

class FUTestSuiteFUEvent
{
public:
    FUTestSuiteFUEvent();

    virtual void vf_0();
};

extern FUTestSuiteFUEvent* g_027b8030;
// @baa 0x01863310
FUTestSuiteFUEvent::FUTestSuiteFUEvent()
{
    g_027b8030 = this;
}

class FUTestSuiteFUFunctor
{
public:
    FUTestSuiteFUFunctor();

    virtual void vf_0();
};

extern FUTestSuiteFUFunctor* g_027b8034;
// @baa 0x01865260
FUTestSuiteFUFunctor::FUTestSuiteFUFunctor()
{
    g_027b8034 = this;
}

class FUTestSuiteFUCrc32
{
public:
    FUTestSuiteFUCrc32();

    virtual void vf_0();
};

extern FUTestSuiteFUCrc32* g_027b8038;
// @baa 0x01866230
FUTestSuiteFUCrc32::FUTestSuiteFUCrc32()
{
    g_027b8038 = this;
}

class FUTestSuiteFUObject
{
public:
    FUTestSuiteFUObject();

    virtual void vf_0();
};

extern FUTestSuiteFUObject* g_027b803c;
// @baa 0x01866930
FUTestSuiteFUObject::FUTestSuiteFUObject()
{
    g_027b803c = this;
}

class FUTestSuiteFMQuaternion
{
public:
    FUTestSuiteFMQuaternion();

    virtual void vf_0();
};

extern FUTestSuiteFMQuaternion* g_027b8078;
// @baa 0x01868cd0
FUTestSuiteFMQuaternion::FUTestSuiteFMQuaternion()
{
    g_027b8078 = this;
}

class FUTestSuiteFMTree
{
public:
    FUTestSuiteFMTree();

    virtual void vf_0();
};

extern FUTestSuiteFMTree* g_027b807c;
// @baa 0x01869ee0
FUTestSuiteFMTree::FUTestSuiteFMTree()
{
    g_027b807c = this;
}

class FUTestSuiteFMArray
{
public:
    FUTestSuiteFMArray();

    virtual void vf_0();
};

extern FUTestSuiteFMArray* g_027b8084;
// @baa 0x0186c7a0
FUTestSuiteFMArray::FUTestSuiteFMArray()
{
    g_027b8084 = this;
}
