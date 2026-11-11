// Core_1690000.cpp (part 1 of 2): 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_0169cc60(void); };

// @baa 0x0169cc60
C* C::sub_0169cc60(void) { return this; }

struct C_0169cc70 { C_0169cc70* sub_0169cc70(void); };

// @baa 0x0169cc70
C_0169cc70* C_0169cc70::sub_0169cc70(void) { return this; }

struct C_0169cc80 { C_0169cc80* sub_0169cc80(void); };

// @baa 0x0169cc80
C_0169cc80* C_0169cc80::sub_0169cc80(void) { return this; }

struct C_0169cc90 { C_0169cc90* sub_0169cc90(void); };

// @baa 0x0169cc90
C_0169cc90* C_0169cc90::sub_0169cc90(void) { return this; }

struct C_0169cca0 { C_0169cca0* sub_0169cca0(void); };

// @baa 0x0169cca0
C_0169cca0* C_0169cca0::sub_0169cca0(void) { return this; }

struct C_0169ccb0 { C_0169ccb0* sub_0169ccb0(void); };

// @baa 0x0169ccb0
C_0169ccb0* C_0169ccb0::sub_0169ccb0(void) { return this; }

// @baa 0x0169cd40
IMPLEMENT_CLASS_AT(URBatmanDamageStateFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 51);

// @baa 0x0169cda0
int sub_01697620(...);
int sub_0169b9a0(void);
extern undefined4 g_026e1e1c;
// @baa 0x0169cdc0
int sub_0169cdc0(void)
{
  if (g_026e1e1c == 0) {
    g_026e1e1c = sub_01697620(L"BmGame");
    sub_0169b9a0();
  }
  return g_026e1e1c;
}

int sub_016974a0(...);
int sub_0169b850(void);
extern undefined4 g_026e1e14;
// @baa 0x0169cdf0
int sub_0169cdf0(void)
{
  if (g_026e1e14 == 0) {
    g_026e1e14 = sub_016974a0(L"BmGame");
    sub_0169b850();
  }
  return g_026e1e14;
}

int sub_01697320(...);
int sub_0169b700(void);
extern undefined4 g_026e1e0c;
// @baa 0x0169ce20
int sub_0169ce20(void)
{
  if (g_026e1e0c == 0) {
    g_026e1e0c = sub_01697320(L"BmGame");
    sub_0169b700();
  }
  return g_026e1e0c;
}

int sub_005c7a20(void);
extern undefined * g_0237dac0;
// @baa 0x0169ce50
undefined4 * UObject::sub_0169ce50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0237dac0);
  return param_1;
}

// @baa 0x0169ce70
IMPLEMENT_CLASS_AT(URDOFManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 22);

// @baa 0x0169cee0
// @baa 0x0169cf10
IMPLEMENT_CLASS_AT(URDmgType_Throw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 58);

// @baa 0x0169d020
bool URDmgType_Throw::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169d060
IMPLEMENT_CLASS_AT(URDmgType_Counter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 60);
