// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00756fc0(void);
int sub_0077ac30(...);
extern undefined4 g_026b3c2c;
// @baa 0x0077ce30
int sub_0077ce30(void)
{
  if (g_026b3c2c == 0) {
    g_026b3c2c = sub_0077ac30(L"Engine");
    sub_00756fc0();
  }
  return g_026b3c2c;
}
