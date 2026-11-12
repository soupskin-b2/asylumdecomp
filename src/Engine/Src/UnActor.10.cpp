// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00c97670(void);
int sub_00cb2d80(...);
extern undefined4 g_026c3cb8;
// @baa 0x00754650
int sub_00754650(void)
{
  if (g_026c3cb8 == 0) {
    g_026c3cb8 = sub_00cb2d80(L"Engine");
    sub_00c97670();
  }
  return g_026c3cb8;
}
