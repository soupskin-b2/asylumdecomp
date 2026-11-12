// GFx_19f0000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern void __stdcall sub_018d7150(int Count);
// @baa 0x019ff490
void sub_019ff490(int Param)
{
	sub_018d7150(Param * 28);
}

struct Object
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
};

// @baa 0x019fe5f0
void __stdcall sub_019fe5f0(Object* Target, INT Value)
{
    Target->Value_04 = Value;
}

// @baa 0x019fe6c0
void __stdcall sub_019fe6c0(Object* Target, INT Value)
{
    Target->Value_04 = Value;
}

// @baa 0x019fe6e0
void __stdcall sub_019fe6e0(Object* Target, INT Value)
{
    Target->Value_08 = Value;
}

extern void __stdcall sub_018d7170(INT Value);
struct C
{
    char pad_00[8];
    INT Object;

    void sub_019fe790();
};

// @baa 0x019fe790
void C::sub_019fe790()
{
    if (Object)
        sub_018d7170(Object);
}

void __stdcall sub_018d7150(INT Value);
// @baa 0x019ff3d0
void sub_019ff3d0(INT Value)
{
    sub_018d7150(Value << 4);
}

// @baa 0x019ff400
void sub_019ff400(INT Value)
{
    sub_018d7150(Value << 4);
}
