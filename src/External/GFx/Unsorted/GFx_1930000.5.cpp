// GFx_1930000.cpp: 2 functions
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
