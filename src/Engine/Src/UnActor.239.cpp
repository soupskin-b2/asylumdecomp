// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0077a0f0(...);
int sub_0077d3a0(void);
extern undefined4 g_026b3be4;
// @baa 0x0077e7b0
int sub_0077e7b0(void)
{
  if (g_026b3be4 == 0) {
    g_026b3be4 = sub_0077a0f0(L"Engine");
    sub_0077d3a0();
  }
  return g_026b3be4;
}
