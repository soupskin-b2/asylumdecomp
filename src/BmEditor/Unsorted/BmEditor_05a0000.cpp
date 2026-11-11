// BmEditor_05a0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { C* sub_005a1410(int a0); };

// @baa 0x005a1410
C* C::sub_005a1410(int a0) { return this; }

int sub_0053df70(...);
// @baa 0x005a1420
void URFMODSound::sub_005a1420(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if (0 < param_2) {
    param_2 = param_2 + 1;
  }
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005a1460 { C_005a1460* sub_005a1460(void); };

// @baa 0x005a1460
C_005a1460* C_005a1460::sub_005a1460(void) { return this; }

struct C_005a1490 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_005a1490& sub_005a1490(int Arg);
};

// @baa 0x005a1490
C_005a1490& C_005a1490::sub_005a1490(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}
