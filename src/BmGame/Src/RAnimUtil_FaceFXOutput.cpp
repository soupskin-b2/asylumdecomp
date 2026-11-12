// RAnimUtil_FaceFXOutput.cpp: 6 functions
// Placed here by: callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159be90
IMPLEMENT_CLASS_AT(URAnimUtil_FaceFXOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_FaceFXOutput.cpp", 19);

// @baa 0x015a0d50
struct D { void sub_0040fcc0(); };

extern D g_026e157c;
// @baa 0x01e27710
void sub_01e27710() { g_026e157c.sub_0040fcc0(); }

extern D g_026e158c;
// @baa 0x01e27720
void sub_01e27720() { g_026e158c.sub_0040fcc0(); }

extern D g_026e1598;
// @baa 0x01e27730
void sub_01e27730() { g_026e1598.sub_0040fcc0(); }

struct C_FX30
{
    BYTE Pad[0x30];
    DWORD St;
};

struct C_0090e670
{
    BYTE Pad[0x4e4];
    C_FX30* FX;
    INT sub_0090e670();
};

// @baa 0x0090e670
INT C_0090e670::sub_0090e670()
{
    C_FX30* P = FX;
    if (P == NULL)
        return 0;
    return P->St != 2;
}
