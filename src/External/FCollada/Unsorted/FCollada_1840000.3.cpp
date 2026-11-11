// FCollada_1840000.cpp (part 3 of 21): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01841600(); // 0x04
    void sub_01854290();
};

// @baa 0x01841600
void FCDocument::sub_01841600()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

extern int g_023e61ac;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_01847160(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x01847160
FDecalValue* FDecalValue::sub_01847160(int* Src)
{
    Value = (int)&g_023e61ac;
    Unk04 = *Src;
    return this;
}
