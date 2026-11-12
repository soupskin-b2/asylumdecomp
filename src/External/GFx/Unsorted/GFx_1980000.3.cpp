// GFx_1980000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct GFxStage_ {
    virtual void sub_0198f7f0();
    virtual void sub_0198f800();
    virtual int GetState();
    void* sub_0198f810();
};

// @baa 0x0198f810
void* GFxStage_::sub_0198f810()
{
    if (GetState() == 2)
        return (void*)((char*)this - 0x6c);
    return 0;
}

struct Object
{
    char pad_00[0x18];
    BYTE Flag;
};

struct C
{
    char pad_00[0x1c];
    Object* Target;

    void sub_01983e00(INT A, INT B, INT C, INT D);
};

// @baa 0x01983e00
void C::sub_01983e00(INT, INT, INT, INT)
{
    if (Target)
        Target->Flag = 1;
}
