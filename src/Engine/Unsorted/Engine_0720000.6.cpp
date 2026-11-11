// Engine_0720000.cpp (part 6 of 7): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00656790(void);
// @baa 0x00724d00
undefined4 ULensFlare::sub_00724d00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee708;
// An object initialized by sub_007229d0: a leading pointer (set to a global),
// three integers, a flags word whose low bit is cleared, and a trailing integer.
struct S_007229d0 {
    void * Object;      // +0x0
    int    Field4;      // +0x4
    int    Field8;      // +0x8
    int    FieldC;      // +0xc
    int    Flags;       // +0x10
    int    Field14;     // +0x14
    S_007229d0 * sub_007229d0();
};

// @baa 0x007229d0
S_007229d0 * S_007229d0::sub_007229d0()
{
    Field8  = 0;
    FieldC  = 0;
    *(volatile int *)&Flags &= 0xfffffffe;   // clear the low flag bit
    Object  = &g_01eee708;
    Field14 = 0;
    return this;
}
