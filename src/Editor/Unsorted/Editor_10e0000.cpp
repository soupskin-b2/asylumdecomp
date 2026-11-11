// Editor_10e0000.cpp (part 1 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_010cbc60(void);
// @baa 0x010e4290
int UListSoundNodeWavesCommandlet::sub_010e4290(void)
{
    int param_1 = (int)this;

  sub_010cbc60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_010d33d0();
// @baa 0x010e42b0
void sub_010e42b0(void) { sub_010d33d0(); }

int sub_0053dfa0(...);
int sub_010e4870(void);
// @baa 0x010e48e0
undefined4 UListSoundNodeWavesCommandlet::sub_010e48e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010e4870();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x010ecf40
int UListSoundNodeWavesCommandlet::sub_010ecf40(void)
{
    int param_1 = (int)this;

  sub_010cbc60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
