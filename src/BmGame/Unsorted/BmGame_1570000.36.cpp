// BmGame_1570000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_R_8_5600
{
    BYTE Pad[8];
    DWORD V8;
};

struct C_01575600
{
    C_R_8_5600* sub_01575490(INT A1, INT A2);
    DWORD sub_01575600(INT A1, INT A2);
};

// @baa 0x01575600
DWORD C_01575600::sub_01575600(INT A1, INT A2)
{
    C_R_8_5600* P = sub_01575490(A1, A2);
    if (P != NULL)
        return P->V8;
    return 0;
}

struct C_R_8_5620
{
    BYTE Pad[8];
    DWORD V8;
};

struct C_01575620
{
    C_R_8_5620* sub_01575560(INT A1, INT A2);
    DWORD sub_01575620(INT A1, INT A2);
};

// @baa 0x01575620
DWORD C_01575620::sub_01575620(INT A1, INT A2)
{
    C_R_8_5620* P = sub_01575560(A1, A2);
    if (P != NULL)
        return P->V8;
    return 0;
}
