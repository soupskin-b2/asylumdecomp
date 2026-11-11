// Launch_1530000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0150df90(void);
int sub_0153a130(...);
extern undefined4 g_026e0b40;
// @baa 0x0153a3c0
int sub_0153a3c0(void)
{
  if (g_026e0b40 == 0) {
    g_026e0b40 = sub_0153a130(L"CommonGame");
    sub_0150df90();
  }
  return g_026e0b40;
}

// @baa 0x0153ab70
void sub_0153ab70(void) {  }

// @baa 0x0153ab80
float10 sub_0153ab80(double param_1)
{
  return (float10)param_1;
}

// @baa 0x0153ab90
int sub_0153ab90(int a0, int a1) { return a1; }

// @baa 0x0153aba0
int sub_0153aba0(int a0, int a1) { return a1; }

// @baa 0x0153abb0
int sub_0153abb0(int a0, int a1) { return a1; }

// @baa 0x0153abc0
int sub_0153abc0(int a0, int a1) { return a1; }

// @baa 0x0153abf0
IMPLEMENT_CLASS_AT(URDistributionVectorParticleArrayParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 4);
