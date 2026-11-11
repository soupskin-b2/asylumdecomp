// RGadgetSelect.cpp (part 1 of 2): 29 functions
// Placed here by: neighbours 22, class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01638d70
int sub_01638d70(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_02359a60;
// @baa 0x01638d80
undefined4 * UObject::sub_01638d80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02359a60);
  return param_1;
}

// @baa 0x01638da0
IMPLEMENT_CLASS_AT(URGadgetSelect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGadgetSelect.cpp", 11);

// @baa 0x01638e00
int sub_01602e10(...);
int sub_01602ed0(void);
extern undefined4 g_026e1794;
// @baa 0x01638e20
int sub_01638e20(void)
{
  if (g_026e1794 == 0) {
    g_026e1794 = sub_01602e10(L"BmGame");
    sub_01602ed0();
  }
  return g_026e1794;
}

int sub_0166add0(void);
int sub_016843a0(...);
extern undefined4 g_026e1d3c;
// @baa 0x01638e50
int sub_01638e50(void)
{
  if (g_026e1d3c == 0) {
    g_026e1d3c = sub_016843a0(L"BmGame");
    sub_0166add0();
  }
  return g_026e1d3c;
}

struct C { C* sub_01638e80(void); };

// @baa 0x01638e80
C* C::sub_01638e80(void) { return this; }

// @baa 0x01638ec0
int sub_01638ec0(int a0, int a1) { return a1; }

extern char g_026e1c70[];
// @baa 0x01638ed0
int sub_01638ed0(void) { return (int)g_026e1c70; }

// @baa 0x01638ee0
int sub_01638ee0(int a0, int a1) { return a1; }

// @baa 0x01638f20
int sub_01638f20(int a0, int a1) { return a1; }

// @baa 0x01638f30
int sub_01638f30(int a0, int a1) { return a1; }

// @baa 0x01638f40
int sub_01638f40(int a0, int a1) { return a1; }

struct C_01638f50 { C_01638f50* sub_01638f50(int a0); };

// @baa 0x01638f50
C_01638f50* C_01638f50::sub_01638f50(int a0) { return this; }

// @baa 0x01638fc0
int sub_01638fc0(int a0, int a1) { return a1; }

int sub_01716060(void);
int sub_01733d90(...);
extern undefined4 g_026e24d8;
// @baa 0x01638fd0
int sub_01638fd0(void)
{
  if (g_026e24d8 == 0) {
    g_026e24d8 = sub_01733d90(L"BmGame");
    sub_01716060();
  }
  return g_026e24d8;
}

// @baa 0x01639000
int sub_01639000(int a0, int a1) { return a1; }

extern char g_026e1c54[];
// @baa 0x01639010
int sub_01639010(void) { return (int)g_026e1c54; }

// @baa 0x01639020
int sub_01639020(int a0, int a1) { return a1; }

int sub_01559f30(void);
int sub_0157e080(...);
extern undefined4 g_026e1368;
// @baa 0x01639030
int sub_01639030(void)
{
  if (g_026e1368 == 0) {
    g_026e1368 = sub_0157e080(L"BmGame");
    sub_01559f30();
  }
  return g_026e1368;
}

// @baa 0x01639060
int ARBatarang::vf_000(void) { return 1; }

// @baa 0x01639070
int ARBatarangProjectile::vf_000(void) { return 1; }

// @baa 0x01639080
int ARBatarangProjectile_Controllable::vf_000(void) { return 1; }

// @baa 0x01639090
int ARBatDistractProjectile::vf_000(void) { return 1; }

// @baa 0x01639b30
// @baa 0x01639c40
int URGadgetSelect::vf_000(void) { return 1; }

// @baa 0x01639c50
bool URGadgetSelect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01640940
// @baa 0x01641600
