// Editor_1080000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0108a1b0(void);
extern undefined4 g_026ce488;
// @baa 0x0108a2f0
int UContentTagIndex::sub_0108a2f0(byte param_2)
{
    int param_1 = (int)this;

  if (param_1 == g_026ce488) {
    g_026ce488 = 0;
  }
  sub_0108a1b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
