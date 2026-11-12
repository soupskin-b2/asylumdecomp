// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0077a1b0(...);
int sub_0077d4f0(void);
extern undefined4 g_026b3be8;
// @baa 0x0077e780
int sub_0077e780(void)
{
  if (g_026b3be8 == 0) {
    g_026b3be8 = sub_0077a1b0(L"Engine");
    sub_0077d4f0();
  }
  return g_026b3be8;
}
