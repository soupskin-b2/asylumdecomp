// fmod_systemi.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// @baa 0x0176abc6
// FMOD helper: stores an event into p (0x42200 is an FMOD error/state value) or returns 0x25 when p is null.
int __stdcall sub_0176abc6(int* State)
{
    if (State == 0)
        return 0x25;
    *State = 0x42200;
    return 0;
}

struct Sub
{
    void sub_017ae244();
};

struct C
{
    char pad_00[0x128];
    Sub Marker;

    INT sub_01782f90();
};

// @baa 0x01782f90
INT C::sub_01782f90()
{
    ((Sub*)((char*)this + 0x128))->sub_017ae244();
    return 0;
}

struct C_01789764
{
    char pad_00[0x128];
    float Value;

    INT sub_01789764(INT A, float In);
};

// @baa 0x01789764
INT C_01789764::sub_01789764(INT, float In)
{
    Value = In;
    return 0;
}

extern void sub_017af81b();
struct C_017af983
{
    char pad_00[0x24];
    float Value;

    void sub_017af983(float In);
};

// @baa 0x017af983
void C_017af983::sub_017af983(float In)
{
    Value = In;
    sub_017af81b();
}

struct C_017af996
{
    char pad_00[0x28];
    float Value;

    void sub_017af996(float In);
};

// @baa 0x017af996
void C_017af996::sub_017af996(float In)
{
    Value = In;
    sub_017af81b();
}

// 0178b1c0 : callback wrapper, fmod_systemi.cpp
// this = cb ? (cb - 0x1c) : 0, then this->sub_0178b014(arg2)
struct C_0178b014 {
    void sub_0178b014(int a);
};

// @baa 0x0178b1c0
void __stdcall sub_0178b1c0(int cb, int arg2)
{
    C_0178b014* p = cb ? (C_0178b014*)(cb - 0x1c) : 0;
    p->sub_0178b014(arg2);
}

struct C_017c8e54 {
    float m_Value;
    float sub_017c8e54(void);
};

// @baa 0x017c8e54
float C_017c8e54::sub_017c8e54(void)
{
    return m_Value;
}

struct C_017c8e8e
{
    float Value;
    float sub_017c8e8e(void);
};

// @baa 0x017c8e8e
// @baa 0x017c8e8e
float C_017c8e8e::sub_017c8e8e(void) { return Value; }
