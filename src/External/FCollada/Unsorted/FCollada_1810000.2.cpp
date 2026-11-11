// FCollada_1810000.cpp (part 2 of 8): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01811b00(); // 0x04
    void sub_01854290();
};

// @baa 0x01811b00
void FCDocument::sub_01811b00()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_018157a0();
};

// @baa 0x018157a0
S *S::sub_018157a0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_018157b0 {
    INT Unk00;
    INT Unk04;
    S_018157b0 *sub_018157b0();
};

// @baa 0x018157b0
S_018157b0 *S_018157b0::sub_018157b0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_018157c0 {
    INT Unk00;
    INT Unk04;
    S_018157c0 *sub_018157c0();
};

// @baa 0x018157c0
S_018157c0 *S_018157c0::sub_018157c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

extern const int FUObjectContainer_CDEntityReference_vftable[];
class FCDEntityReference {
public:
    const int *vtable;   // 0x00
    int Unk04;          // 0x04
    int Unk08;          // 0x08
    int Unk0C;          // 0x0C
    int *Unk10;         // 0x10

    FCDEntityReference();
};

// @baa 0x018159d0
FCDEntityReference::FCDEntityReference()
{
    Unk04 = 0;
    Unk08 = 0;
    Unk0C = 0;
    Unk10 = &Unk0C;
    vtable = FUObjectContainer_CDEntityReference_vftable;
}

extern int g_023e4520;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_01817240(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x01817240
FDecalValue* FDecalValue::sub_01817240(int* Src)
{
    Value = (int)&g_023e4520;
    Unk04 = *Src;
    return this;
}
