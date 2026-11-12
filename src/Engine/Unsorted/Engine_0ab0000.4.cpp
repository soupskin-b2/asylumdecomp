// Engine_0ab0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern UOnlineSubsystemSteamworks* g_026b0d94;
struct C_00abb9e0
{
    virtual void sub_00abb9a0();
    void* sub_00abb9b0;

    void sub_00abb9e0();
};

// @baa 0x00abb9e0
void C_00abb9e0::sub_00abb9e0()
{
    if (sub_00abb9b0 != 0)
    {
        g_026b0d94->vf_218((INT)sub_00abb9b0);
    }
}

struct Sub_00ab8430_Holder
{
    QWORD Header;
    UPrimitiveComponent* Component;

    void sub_00ab8430();
};

// @baa 0x00ab8430
void Sub_00ab8430_Holder::sub_00ab8430()
{
    if (Component)
    {
        g_026b0d94->vf_218((UINT)Component);
    }
}

static void Caller_00ab8430(Sub_00ab8430_Holder* H)
{
    H->sub_00ab8430();
}
