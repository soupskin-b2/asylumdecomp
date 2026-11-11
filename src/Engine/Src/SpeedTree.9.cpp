// SpeedTree.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern float g_027bdef4;
// @baa 0x01a5fbc0
void sub_01a5fbc0(float value)
{
    g_027bdef4 = value;
}

struct Sub
{
    void sub_01a60080();
};

// @baa 0x01a91ac0
void __stdcall sub_01a91ac0(Sub* Object)
{
    Object->sub_01a60080();
}

struct Sub_01a97d50
{
    void sub_01a71640();
};

// @baa 0x01a97d50
void __stdcall sub_01a97d50(Sub_01a97d50* Object)
{
    Object->sub_01a71640();
}

struct Sub_01aa0100
{
    void sub_01a9db00();
};

// @baa 0x01aa0100
void __stdcall sub_01aa0100(Sub_01aa0100* Object)
{
    Object->sub_01a9db00();
}

struct Sub_01aa0110
{
    void sub_01a71530();
};

// @baa 0x01aa0110
void __stdcall sub_01aa0110(Sub_01aa0110* Object)
{
    Object->sub_01a71530();
}
