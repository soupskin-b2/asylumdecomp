// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0060b320(void);
extern undefined * g_0214c4f8;
// @baa 0x00f31560
undefined4 * UExporter::sub_00f31560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214c4f8);
  return param_1;
}
