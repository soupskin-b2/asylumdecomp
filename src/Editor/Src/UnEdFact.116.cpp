// UnEdFact.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_009441d0(void);
int sub_00946350(void);
int sub_0097fae0(...);
int sub_0097fe70(...);
extern undefined4 g_026b5ef0;
extern undefined4 g_026b5f14;
// @baa 0x00f1f410
int UColladaFactory::vf_10c(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 100) != 0) {
    if (g_026b5ef0 == 0) {
      g_026b5ef0 = sub_0097fe70(L"Engine");
      sub_009441d0();
    }
    return g_026b5ef0;
  }
  if (g_026b5f14 == 0) {
    g_026b5f14 = sub_0097fae0(L"Engine");
    sub_00946350();
  }
  return g_026b5f14;
}
