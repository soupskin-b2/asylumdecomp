// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00764df0(void);
int sub_00771fd0(...);
extern undefined4 g_026b3cd8;
// @baa 0x00776920
int sub_00776920(void)
{
  if (g_026b3cd8 == 0) {
    g_026b3cd8 = sub_00771fd0(L"Engine");
    sub_00764df0();
  }
  return g_026b3cd8;
}
