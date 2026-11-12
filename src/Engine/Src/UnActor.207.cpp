// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0076f600(...);
int sub_007716d0(void);
extern undefined4 g_026b3ba0;
// @baa 0x00773c20
int sub_00773c20(void)
{
  if (g_026b3ba0 == 0) {
    g_026b3ba0 = sub_0076f600(L"Engine");
    sub_007716d0();
  }
  return g_026b3ba0;
}
