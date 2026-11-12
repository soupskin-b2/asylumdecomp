// SphericalHarmonicLightComponent.cpp: 9 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0073da10
IMPLEMENT_CLASS_AT(USphericalHarmonicLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SphericalHarmonicLightComponent.cpp", 10);

// @baa 0x0073e180

// @baa 0x0074f500
int sub_0074f500(void) { return 0; }

// @baa 0x0074f510
int sub_0074f510(void) { return 0; }

// @baa 0x0074f520
int sub_0074f520(void) { return 0; }

// @baa 0x0074f530
int sub_0074f530(void) { return 0; }

// @baa 0x0074f540
int sub_0074f540(void) { return 0; }

int sub_01a37872(...);
int sub_01e236d0(...);
extern undefined4 g_026b296c;
extern undefined4 g_026b2970;
// @baa 0x0074f550
undefined4 sub_0074f550(void)
{
  if ((g_026b2970 & 1) == 0) {
    g_026b2970 = g_026b2970 | 1;
    g_026b296c = 0;
    sub_01a37872(&sub_01e236d0);
  }
  return g_026b296c;
}

int sub_0053dfa0(...);
struct C_0074f5f0 {
    undefined4 sub_0074f5f0(byte);
};

int sub_0074f580(void);
// @baa 0x0074f5f0
undefined4 C_0074f5f0::sub_0074f5f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0074f580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
