// RCapeComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

const TCHAR* sub_016ad8c0();
const TCHAR* sub_0053f6c0();
// @baa 0x016ade70
INT URCapeComponent::vf_000()
{
    return sub_016ad8c0 == sub_0053f6c0;
}

struct URCapeComponent_ : public URCapeComponent
{
    void sub_016aee80();
    void sub_016b1f80(FLOAT F);
};

// @baa 0x016b1f80
void URCapeComponent_::sub_016b1f80(FLOAT F)
{
    MaterialSpeedVariableOverride = F;
    sub_016aee80();
}

struct C_Z_1562420
{
    DWORD sub_01562420();
};

struct C_Y_60
{
    BYTE Pad[0x60];
    C_Z_1562420* Z;
};

struct C_X_08
{
    BYTE Pad[8];
    C_Y_60* Y;
};

struct C_016b2120
{
    BYTE Pad[0xb8];
    C_X_08* X;
    DWORD sub_016b2120();
};

// @baa 0x016b2120
DWORD C_016b2120::sub_016b2120()
{
    C_X_08* XX = X;
    return XX->Y->Z->sub_01562420();
}

struct C_Phys_15f0
{
    void sub_016c15f0(INT* P1, INT P10);
};

struct C_016c6430
{
    BYTE Pad[0xb8];
    C_Phys_15f0* Cape;
    void sub_016c6430(INT A1, INT A2, INT A3, INT A4, INT A5, INT A6, INT A7, INT A8, INT A9, INT A10);
};

// @baa 0x016c6430
void C_016c6430::sub_016c6430(INT A1, INT A2, INT A3, INT A4, INT A5, INT A6, INT A7, INT A8, INT A9, INT A10)
{
    C_Phys_15f0* P = Cape;
    if (P != NULL)
        P->sub_016c15f0(&A1, A10);
}
