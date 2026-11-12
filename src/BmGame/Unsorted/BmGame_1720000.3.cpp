// BmGame_1720000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00665d40(void);
// @baa 0x01729a40
undefined4 UPrimitiveComponent::sub_01729a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00665d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006837e0(void);
// @baa 0x0172c240
undefined4 ULensFlare::sub_0172c240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01720e40
{
    INT A, B, C, D, E, F;
    C_01720e40* sub_01720e40();
};

// @baa 0x01720e40
C_01720e40* C_01720e40::sub_01720e40()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    return this;
}

struct C_Elem12_12a0
{
    BYTE Pad[12];
    void sub_00547da0(INT A);
};

extern C_Elem12_12a0 g_026e2e20[];
// @baa 0x017212a0
void __stdcall sub_017212a0(INT A1, INT A2)
{
    if (A1 < 4)
        g_026e2e20[A1].sub_00547da0(A2);
}
