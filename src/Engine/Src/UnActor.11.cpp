// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00cb2e40(...);
int sub_00cbbec0(void);
extern undefined4 g_026c3cbc;
// @baa 0x00754680
int sub_00754680(void)
{
  if (g_026c3cbc == 0) {
    g_026c3cbc = sub_00cb2e40(L"Engine");
    sub_00cbbec0();
  }
  return g_026c3cbc;
}
