// GFx_19b0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct GFx19729b0
{
	void sub_019729b0(int Offset, int Flags);
};

struct GFx19b0860
{
	char pad_019b0860[0x34];
	GFx19729b0 sub_019729b0;
	void* sub_019b0860(void* Ptr);
};

// @baa 0x019b0860
void* GFx19b0860::sub_019b0860(void* Ptr)
{
	((GFx19729b0*)Ptr)->sub_019729b0((int)&sub_019729b0, 0);
	return Ptr;
}

// CSSStringBuilder (vtable 0x023fdeac): builds strings, holding a source
// range [RangeStart, RangeEnd).
struct CSSStringBuilder
{
    INT RangeStart;
    INT RangeEnd;

    virtual void sub_019baf20() = 0;

    CSSStringBuilder(INT Start, INT End);
};

// @baa 0x019badd0
// 0x019badd0
CSSStringBuilder::CSSStringBuilder(INT Start, INT End)
    : RangeStart(Start)
    , RangeEnd(End)
{
}

struct CSSTextFormatLoader
{
	void* Field1;
	void* Field2;

	CSSTextFormatLoader(void* InField1, void* InField2);
	virtual void sub_019b9d40();
};

// 0x019b9d30 : primary constructor
CSSTextFormatLoader::CSSTextFormatLoader(void* InField1, void* InField2)
	: Field1(InField1)
	, Field2(InField2)
{
}

void CSSTextFormatLoader::sub_019b9d40()
{
}

// @baa 0x019b9d30
static void s_driver(void* a, void* b)
{
	CSSTextFormatLoader* p = new CSSTextFormatLoader(a, b);
	delete p;
}
