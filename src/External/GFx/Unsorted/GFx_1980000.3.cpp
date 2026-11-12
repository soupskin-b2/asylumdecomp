// GFx_1980000.cpp: 4 functions
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

// sub_0198cac0: thiscall init of three words into this.
struct F0198cac0
{
	INT A;
	INT B;
	INT C;

	F0198cac0(INT InA, INT InB, INT InC)
	{
		A = InA;
		B = InB;
		C = InC;
	}
};

extern INT g_01990000;
// @baa 0x0198cac0
static F0198cac0 g_0198cac0_dummy = F0198cac0(g_01990000, 0, 0);

struct C_0198cb10 {
    char pad[0x50];
    unsigned char m_050;
    int sub_0198cb10(int BitIndex);
};

// @baa 0x0198cb10
int C_0198cb10::sub_0198cb10(int BitIndex)
{
    return (m_050 & (1 << BitIndex)) != 0;
}
