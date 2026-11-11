// UnrealEd_11e0000.cpp (part 1 of 5): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_011e4ec0(byte);
    int sub_0076d2d0();
};

int sub_0053dfa0(...);
// @baa 0x011e4ec0
undefined4 C::sub_011e4ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 4)))->sub_0076d2d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_011e6bc0();
// @baa 0x011e8a80
void sub_011e8a80(void) { sub_011e6bc0(); }

void sub_011e6c90();
// @baa 0x011e8a90
void sub_011e8a90(void) { sub_011e6c90(); }

void sub_011e6d60();
// @baa 0x011e8aa0
void sub_011e8aa0(void) { sub_011e6d60(); }

void sub_011e6e30();
// @baa 0x011e8ab0
void sub_011e8ab0(void) { sub_011e6e30(); }

struct C_011e8ac0 { C_011e8ac0* sub_011e8ac0(void); };

// @baa 0x011e8ac0
C_011e8ac0* C_011e8ac0::sub_011e8ac0(void) { return this; }

struct C_011e8ad0 { C_011e8ad0* sub_011e8ad0(void); };

// @baa 0x011e8ad0
C_011e8ad0* C_011e8ad0::sub_011e8ad0(void) { return this; }

struct C_011e8ae0 { C_011e8ae0* sub_011e8ae0(void); };

// @baa 0x011e8ae0
C_011e8ae0* C_011e8ae0::sub_011e8ae0(void) { return this; }

struct C_011e8af0 { C_011e8af0* sub_011e8af0(void); };

// @baa 0x011e8af0
C_011e8af0* C_011e8af0::sub_011e8af0(void) { return this; }

void sub_011e6f60();
// @baa 0x011e8bb0
void sub_011e8bb0(void) { sub_011e6f60(); }

struct C_011e8d00 {
    int sub_011e8d00();
};

int sub_011d6b30(void);
// @baa 0x011e8d00
int C_011e8d00::sub_011e8d00(void)
{
    int param_1 = (int)this;

  sub_011d6b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_021ebf10;
// @baa 0x011e94b0
undefined4 * UObject::sub_011e94b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021ebf10);
  return param_1;
}

// @baa 0x011e94d0
IMPLEMENT_CLASS_AT(UCustomPropertyItemBindings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Properties.cpp", 3645);

// @baa 0x011e9580
// @baa 0x011e9610
void sub_011e9610(void) { sub_011e6f60(); }

struct C_011e96a0 {
    undefined4 sub_011e96a0(undefined4, undefined4);
    int sub_011e8c80(int, int);
};

// @baa 0x011e96a0
undefined4 C_011e96a0::sub_011e96a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_011e96a0 *)(this))->sub_011e8c80(param_2, param_3);
  return param_1;
}

struct C_011e96c0 {
    int sub_011e96c0();
};

// @baa 0x011e96c0
int C_011e96c0::sub_011e96c0(void)
{
    int param_1 = (int)this;

  sub_011d6b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_011edaf0 {
    int sub_011edaf0();
};

// @baa 0x011edaf0
int C_011edaf0::sub_011edaf0(void)
{
    int param_1 = (int)this;

  sub_011d6b30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_011edb10(int, int, int, int, int);
};

// @baa 0x011edc60
void UMaterial::sub_011edc60(void)
{
    int param_1 = (int)this;
  if (0 < *(int *)(param_1 + 0x168)) {
    ((C_view *)((*(char **)((char *)this + 0x184))))->sub_011edb10(param_1 + 0x164, 1, 0, 1, 0);
  }
  return;
}

void sub_011e95a0();
// @baa 0x011edd60
void sub_011edd60(void) { sub_011e95a0(); }

struct A_011ee2c0 { virtual void sub_011ef8b0(); char pad[320]; };

struct B_011ee2c0 { virtual void sub_011ef8b0(); };

struct C_011ee2c0 : A_011ee2c0, B_011ee2c0 { virtual void sub_011ef8b0(); C_011ee2c0(); };

C_011ee2c0::C_011ee2c0() {}

// @baa 0x011ee2c0
void C_011ee2c0::sub_011ef8b0() {}

int sub_011ee210(void);
// @baa 0x011ef8b0
undefined4 UCustomPropertyItemBindings::sub_011ef8b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ee210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_011ef940 {
    undefined4 * sub_011ef940();
};

int sub_011ef810(void);
extern undefined4 g_021ec314;
extern undefined * g_021ec318;
// @baa 0x011ef940
undefined4 * C_011ef940::sub_011ef940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_021ec318);
  param_1[0x51] = (undefined4)(&g_021ec314);
  return param_1;
}

struct A_011ef960 { virtual void sub_011ef980(); char pad[320]; };

struct B_011ef960 { virtual void sub_011ef980(); };

struct C_011ef960 : A_011ef960, B_011ef960 { virtual void sub_011ef980(); C_011ef960(); };

C_011ef960::C_011ef960() {}

// @baa 0x011ef960
void C_011ef960::sub_011ef980() {}

struct C_011ef9a0 {
    undefined4 * sub_011ef9a0();
};

extern undefined4 g_021ec610;
extern undefined * g_021ec618;
// @baa 0x011ef9a0
undefined4 * C_011ef9a0::sub_011ef9a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_021ec618);
  param_1[0x51] = (undefined4)(&g_021ec610);
  return param_1;
}

struct A_011ef9c0 { virtual void sub_011ef9e0(); char pad[320]; };

struct B_011ef9c0 { virtual void sub_011ef9e0(); };

struct C_011ef9c0 : A_011ef9c0, B_011ef9c0 { virtual void sub_011ef9e0(); C_011ef9c0(); };

C_011ef9c0::C_011ef9c0() {}

// @baa 0x011ef9c0
void C_011ef9c0::sub_011ef9e0() {}
