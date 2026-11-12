// GFx_1930000.cpp: 19 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_01937fb0_Obj
{
    int RefCount;
    float Value;
    int ValueCount;

    sub_01937fb0_Obj* sub_018e4150();
    sub_01937fb0_Obj* sub_01937fb0();
};

// @baa 0x01937fb0
sub_01937fb0_Obj* sub_01937fb0_Obj::sub_01937fb0()
{
    sub_018e4150();
    Value = 1.0f;
    ValueCount = 4;
    return this;
}

class Vec10
{
public:
    virtual int sub_0193a9a0() { return 0; } // 0x04

    int a;   // 0x04
    int b;   // 0x08
    int c;   // 0x0c
    float x; // 0x10
    float y; // 0x14
    float z; // 0x18

    void sub_0193a8b0(float InA, float InB, float InC)
    {
        z = InA;
        x = InB;
        y = InC;
    }
};

// @baa 0x0193a8b0
void sub_0193a900()
{
    Vec10 V;
    V.sub_0193a8b0(0.0f, 1.0f, 2.0f);
}

// 0193ea60 is the destructor of a GRefCountBaseImpl-derived class.
// It releases the object it references (the pointer at offset 0x2c) and then
// destroys the GRefCountBaseImpl subobject, whose destructor lives at
// 018d3de0.  The base destructor restores the vtable, decrements the shared
// reference count and, when it reaches zero, frees the storage through the
// virtual operator-delete slot (sub_018d7170).
// static operator-delete slot body, called on the storage
void __stdcall sub_018d7170(int Object);
struct GRefCountBaseImpl_ {
    int* VirtualTable;    // 0x00
    int Reserved[10];     // 0x04..0x28: GRefCountBaseImpl refcount subobject
    int Object;           // 0x2c: object we hold a reference to
    void sub_018d3de0();  // base destructor, 018d3de0
    void sub_0193ea60();  // this destructor, 0193ea60
};

// @baa 0x0193ea60
void GRefCountBaseImpl_::sub_0193ea60()
{
    if (Object)
        sub_018d7170(Object);
    sub_018d3de0();
}

struct C
{
    INT Value;

    C* sub_01937b80(INT* Source);
};

// @baa 0x01937b80
C* C::sub_01937b80(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_0193b6b0
{
    char pad_00[8];
    INT Offset;

    BYTE sub_0193b6b0(char* Object);
};

// @baa 0x0193b6b0
BYTE C_0193b6b0::sub_0193b6b0(char* Object)
{
    return Object[Offset];
}

struct Inner
{
    char pad_00[8];
    BYTE* Table;
};

struct C_0193d7b0
{
    Inner* Object;

    BYTE sub_0193d7b0(INT Index);
};

// @baa 0x0193d7b0
BYTE C_0193d7b0::sub_0193d7b0(INT Index)
{
    return Object->Table[Index];
}

extern void __stdcall sub_018d7170(INT Value);
struct C_01933100
{
    char pad_00[8];
    INT Object;

    void sub_01933100();
};

// @baa 0x01933100
void C_01933100::sub_01933100()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_01933150
{
    char pad_00[8];
    INT Object;

    void sub_01933150();
};

// @baa 0x01933150
void C_01933150::sub_01933150()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_01933160
{
    char pad_00[8];
    INT Object;

    void sub_01933160();
};

// @baa 0x01933160
void C_01933160::sub_01933160()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_019331f0
{
    char pad_00[8];
    INT Object;

    void sub_019331f0();
};

// @baa 0x019331f0
void C_019331f0::sub_019331f0()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_01933460
{
    char pad_00[8];
    INT Object;

    void sub_01933460();
};

// @baa 0x01933460
void C_01933460::sub_01933460()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_019334b0
{
    char pad_00[8];
    INT Object;

    void sub_019334b0();
};

// @baa 0x019334b0
void C_019334b0::sub_019334b0()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_019334c0
{
    char pad_00[8];
    INT Object;

    void sub_019334c0();
};

// @baa 0x019334c0
void C_019334c0::sub_019334c0()
{
    if (Object)
        sub_018d7170(Object);
}

struct C_0193cb40
{
    char pad_00[8];
    INT Object;

    void sub_0193cb40();
};

// @baa 0x0193cb40
void C_0193cb40::sub_0193cb40()
{
    if (Object)
        sub_018d7170(Object);
}

extern const double g_023f57a8;
struct sub_01931870_ {
    char _00[0xa];
    unsigned char b0a;
    float sub_01931870();
};

// @baa 0x01931870
float sub_01931870_::sub_01931870()
{
    float r = (float)b0a * g_023f57a8;
    return r;
}

// 0x01933280
// A free helper that cross-links a pair of nodes: each node's trailing
// pointer is set to point at the other node.
struct FLinkNode {
    int  Field_0;    // 0x00
    int  Field_4;    // 0x04
    int  Field_8;    // 0x08
    FLinkNode* Front;   // 0x0c
    FLinkNode* Rear;    // 0x10
};

// @baa 0x01933280
void __stdcall sub_01933280(FLinkNode* Pair)
{
    Pair->Front->Rear  = Pair->Rear;
    Pair->Rear->Front  = Pair->Front;
}

// 0x01937f40
// Copy assignment for a three-dword vector, defined out-of-line.
struct FCopyVec
{
    int X;
    int Y;
    int Z;

    FCopyVec& operator=(const FCopyVec& Other);
};

FCopyVec& FCopyVec::operator=(const FCopyVec& Other)
{
    X = Other.X;
    Y = Other.Y;
    Z = Other.Z;
    return *this;
}

// @baa 0x01937f40
void sub_01937f60(FCopyVec* Dst, const FCopyVec& Src)
{
    *Dst = Src;
}

// 0x0193daa0
// Copies three fields (two dwords and a float) from Another into this.
struct FCopyTri
{
    int X;
    int Y;
    float Z;

    FCopyTri& operator=(const FCopyTri& Another);
};

FCopyTri& FCopyTri::operator=(const FCopyTri& Another)
{
    X = Another.X;
    Y = Another.Y;
    Z = Another.Z;
    return *this;
}

// @baa 0x0193daa0
void sub_0193dac0(FCopyTri* Dst, const FCopyTri& Src)
{
    *Dst = Src;
}

struct FGFxHashEntry_
{
    char Data[0x10];
    void sub_01938d80(const void* Key);
};

struct FGfxHashDef
{
    char Data[0x10];
    FGFxHashEntry_ Map;
    void* Key;
    void sub_01939200(void* Value);
};

// @baa 0x01939200
void FGfxHashDef::sub_01939200(void* Value)
{
    if (Value != Key)
    {
        Map.sub_01938d80(&Value);
    }
}

int FGfxHashCall(FGfxHashDef* Def, void* Value)
{
    Def->sub_01939200(Value);
    return 0;
}
