// Engine_0c70000.cpp (part 1 of 2): 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_00c74bd0();
// @baa 0x00c75790
void sub_00c75790(void) { sub_00c74bd0(); }

struct C {
    int sub_00c77510();
};

int sub_00c6acc0(void);
// @baa 0x00c77510
int C::sub_00c77510(void)
{
    int param_1 = (int)this;

  sub_00c6acc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c77530 {
    int sub_00c77530();
};

int sub_00c6ad20(void);
// @baa 0x00c77530
int C_00c77530::sub_00c77530(void)
{
    int param_1 = (int)this;

  sub_00c6ad20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c77550 {
    int sub_00c77550();
};

int sub_00c6ad80(void);
// @baa 0x00c77550
int C_00c77550::sub_00c77550(void)
{
    int param_1 = (int)this;

  sub_00c6ad80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005d88c0(...);
int sub_00c69780(void);
int sub_00c6b9f0(...);
extern undefined4 g_026c2b74;
// @baa 0x00c77570
void sub_00c77570(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c2b74 == 0) {
    g_026c2b74 = sub_00c6b9f0(L"Engine");
    sub_00c69780();
  }
  sub_005d88c0(g_026c2b74,param_1,param_2,param_3);
  return;
}

// @baa 0x00c77670
IMPLEMENT_CLASS_AT(UIniLocPatcher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UIniLocPatcher.cpp", 9);

// @baa 0x00c776e0
int sub_00c6bab0(...);
int sub_00c76a10(void);
extern undefined4 g_026c2b78;
// @baa 0x00c77700
int sub_00c77700(void)
{
  if (g_026c2b78 == 0) {
    g_026c2b78 = sub_00c6bab0(L"Engine");
    sub_00c76a10();
  }
  return g_026c2b78;
}

void sub_00c76b70();
// @baa 0x00c77730
void sub_00c77730(void) { sub_00c76b70(); }

void sub_00c76cd0();
// @baa 0x00c77740
void sub_00c77740(void) { sub_00c76cd0(); }

void sub_00c76da0();
// @baa 0x00c77750
void sub_00c77750(void) { sub_00c76da0(); }

void sub_00c76e70();
// @baa 0x00c77760
void sub_00c77760(void) { sub_00c76e70(); }

struct C_00c78db0 {
    int sub_00c78db0(undefined4, undefined4);
    int sub_00c77390(int, int);
};

// @baa 0x00c78db0
int C_00c78db0::sub_00c78db0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00c78db0 *)(this))->sub_00c77390(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00c78dd0 {
    int sub_00c78dd0(undefined4, undefined4);
    int sub_00c77410(int, int);
};

// @baa 0x00c78dd0
int C_00c78dd0::sub_00c78dd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00c78dd0 *)(this))->sub_00c77410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00c78df0 {
    int sub_00c78df0(undefined4, undefined4);
    int sub_00c77490(int, int);
};

// @baa 0x00c78df0
int C_00c78df0::sub_00c78df0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00c78df0 *)(this))->sub_00c77490(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00c78e10 {
    int sub_00c78e10();
};

// @baa 0x00c78e10
int C_00c78e10::sub_00c78e10(void)
{
    int param_1 = (int)this;

  sub_00c6acc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c78e30 {
    int sub_00c78e30();
};

// @baa 0x00c78e30
int C_00c78e30::sub_00c78e30(void)
{
    int param_1 = (int)this;

  sub_00c6ad20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00c78e50 {
    int sub_00c78e50();
};

// @baa 0x00c78e50
int C_00c78e50::sub_00c78e50(void)
{
    int param_1 = (int)this;

  sub_00c6ad80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_0205be38;
// @baa 0x00c78fc0
undefined4 * UObject::sub_00c78fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205be38);
  return param_1;
}

