// BmGame_15a0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_015a77b0(int);
};

int sub_0053df70(...);
// @baa 0x015a77b0
void C::sub_015a77b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_015a6ed0();
// @baa 0x015af7b0
void sub_015af7b0(void) { sub_015a6ed0(); }
