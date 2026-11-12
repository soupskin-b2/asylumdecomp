// IpDrv_0e40000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00e40890();
};

int sub_00e39aa0(void);
// @baa 0x00e40890
int C::sub_00e40890(void)
{
    int param_1 = (int)this;

  sub_00e39aa0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e3e100();
// @baa 0x00e408b0
void sub_00e408b0(void) { sub_00e3e100(); }

// @baa 0x00e40bf0
int sub_00e40bf0(void) { return 0; }

// @baa 0x00e40c00
int sub_00e40c00(void) { return 0; }

// @baa 0x00e40c10
int sub_00e40c10(void) { return 1; }

struct A_00e40d40 { virtual void sub_00e40dc0(); char pad[80]; };

struct B_00e40d40 { virtual void sub_00e40dc0(); };

struct C_00e40d40 : A_00e40d40, B_00e40d40 { virtual void sub_00e40dc0(); C_00e40d40(); };

C_00e40d40::C_00e40d40() {}

// @baa 0x00e40d40
void C_00e40d40::sub_00e40dc0() {}

// @baa 0x00e40d50
IMPLEMENT_CLASS_AT(UTcpipConnection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\TcpNetDriver.cpp", 143);

// @baa 0x00e40dc0
void sub_00e40c20();
// @baa 0x00e40f00
void sub_00e40f00(void) { sub_00e40c20(); }

struct C_00e40f10 {
    undefined4 * sub_00e40f10();
};

int sub_00e40b70(void);
extern undefined * g_020f5838;
// @baa 0x00e40f10
undefined4 * C_00e40f10::sub_00e40f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e40b70();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (undefined4)(&g_020f5838);
  return param_1;
}

int sub_00e3a1d0(...);
int sub_00e40df0(void);
extern undefined4 g_026cacf4;
// @baa 0x00e40f40
int sub_00e40f40(void)
{
  if (g_026cacf4 == 0) {
    g_026cacf4 = sub_00e3a1d0(L"IpDrv");
    sub_00e40df0();
  }
  return g_026cacf4;
}
