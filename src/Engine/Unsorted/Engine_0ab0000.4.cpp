// Engine_0ab0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/RHI.h"

struct C_00abb9e0
{
    virtual void sub_00abb9a0();
    FOcclusionQueryRHIParamRef sub_00abb9b0;

    void sub_00abb9e0();
};

// @baa 0x00abb9e0
void C_00abb9e0::sub_00abb9e0()
{
    if (sub_00abb9b0 != 0)
    {
        GDynamicRHI->RemoveResourceRef(sub_00abb9b0);
    }
}

struct Sub_00ab8430_Holder
{
    QWORD Header;
    FOcclusionQueryRHIParamRef Component;

    void sub_00ab8430();
};

// @baa 0x00ab8430
void Sub_00ab8430_Holder::sub_00ab8430()
{
    if (Component)
    {
        GDynamicRHI->RemoveResourceRef(Component);
    }
}

static void Caller_00ab8430(Sub_00ab8430_Holder* H)
{
    H->sub_00ab8430();
}

// FHolder_00ab2d00: the block at +0x230 inside the object this interface returns.
struct FHolder_00ab2d00
{
	virtual void* GetBase();

	char* GetBlock();
};

// @baa 0x00ab2d00
char* FHolder_00ab2d00::GetBlock()
{
	return (char*)GetBase() + 0x230;
}
