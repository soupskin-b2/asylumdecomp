// UnrealEd_1b60000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Default-initialises a record of one float followed by three "no value" sentinels: this build
// writes an all-bits-one DWORD for each, so the fields hold INDEX_NONE.
struct C_01b601d0
{
    FLOAT Value;
    INT Minimum;
    INT Maximum;
    INT ValueIndex;

    void sub_01b601d0();
};

// @baa 0x01b601d0
void C_01b601d0::sub_01b601d0()
{
    Value = 0.f;
    Minimum = INDEX_NONE;
    Maximum = INDEX_NONE;
    ValueIndex = INDEX_NONE;
}

// Forwards the call to sub_01b62540, which takes the object and a flag.
void __stdcall sub_sub_01b62540(void* Object, int bFlag);
struct FForwarder_01b62ed0
{
	void sub_01b62ed0(void* Object);
};

// @baa 0x01b62ed0
void FForwarder_01b62ed0::sub_01b62ed0(void* Object)
{
	sub_sub_01b62540(Object, 0);
}
