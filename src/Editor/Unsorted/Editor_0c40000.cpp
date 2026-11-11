// Editor_0c40000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x00c40870
undefined4 UObject::sub_00c40870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c38140(void);
// @baa 0x00c45220
int USpeechRecognition::sub_00c45220(void)
{
    int param_1 = (int)this;

  sub_00c38140();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C { void sub_00c449f0(int); C *sub_00c45240(int); };

// @baa 0x00c45240
C *C::sub_00c45240(int a) { sub_00c449f0(a); return this; }

void sub_00c43e60();
// @baa 0x00c45260
void sub_00c45260(void) { sub_00c43e60(); }

void sub_00c45150();
// @baa 0x00c45270
void sub_00c45270(void) { sub_00c45150(); }
