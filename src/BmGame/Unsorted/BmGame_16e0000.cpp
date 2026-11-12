// BmGame_16e0000.cpp: 172 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_016e0ed0(int a0); };

// @baa 0x016e0ed0
C* C::sub_016e0ed0(int a0) { return this; }

struct C_016e0ee0 { C_016e0ee0* sub_016e0ee0(int a0); };

// @baa 0x016e0ee0
C_016e0ee0* C_016e0ee0::sub_016e0ee0(int a0) { return this; }

struct C_016e0ef0 { C_016e0ef0* sub_016e0ef0(int a0); };

// @baa 0x016e0ef0
C_016e0ef0* C_016e0ef0::sub_016e0ef0(int a0) { return this; }

struct C_016e0f00 { C_016e0f00* sub_016e0f00(int a0); };

// @baa 0x016e0f00
C_016e0f00* C_016e0f00::sub_016e0f00(int a0) { return this; }

struct C_016e0f10 { C_016e0f10* sub_016e0f10(int a0); };

// @baa 0x016e0f10
C_016e0f10* C_016e0f10::sub_016e0f10(int a0) { return this; }

// @baa 0x016e1c90
IMPLEMENT_CLASS_AT(URGFxMovieUpgrades, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 43);

struct C_016e1f10 {
    undefined4 sub_016e1f10(byte);
    int sub_016dd750();
};

int sub_0053dfa0(...);
// @baa 0x016e1f10
undefined4 C_016e1f10::sub_016e1f10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_016e1f10 *)(((char *)this + 4)))->sub_016dd750();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_016e1d00();
// @baa 0x016e2090
void sub_016e2090(void) { sub_016e1d00(); }

struct C_016e47f0 { C_016e47f0* sub_016e47f0(void); };

// @baa 0x016e47f0
C_016e47f0* C_016e47f0::sub_016e47f0(void) { return this; }

int sub_016d1470(void);
int sub_016e3eb0(...);
extern undefined4 g_026e22f0;
// @baa 0x016e4860
int sub_016e4860(void)
{
  if (g_026e22f0 == 0) {
    g_026e22f0 = sub_016e3eb0(L"BmGame");
    sub_016d1470();
  }
  return g_026e22f0;
}

int sub_005c7a20(void);
extern undefined * g_023a5e78;
// @baa 0x016e4890
undefined4 * UObject::sub_016e4890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a5e78);
  return param_1;
}

// @baa 0x016e48b0
IMPLEMENT_CLASS_AT(URCapeStateBoneConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeStateController.cpp", 18);

// @baa 0x016e5930
IMPLEMENT_CLASS_AT(URSeqAct_PlayGfxMovie, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 567);

// @baa 0x016e5990
// @baa 0x016e59c0
IMPLEMENT_CLASS_AT(URGFxMovieFrontend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 40);

// @baa 0x016e5db0
// @baa 0x016e5ec0
bool URGFxMovieUpgrades::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016e62b0
bool URGFxMovieHUD::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_016e6b00 {
    void sub_016e6b00();
    int sub_016e64f0(int);
};

int sub_0053df70(...);
// @baa 0x016e6b00
void C_016e6b00::sub_016e6b00(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_016e6b00 *)(((char *)this + 0x164)))->sub_016e64f0(0);
  *(undefined4 *)(param_1 + 0x174) = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (*(int *)(param_1 + 0x170) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x170),0,8);
      *(undefined4 *)(param_1 + 0x170) = uVar1;
    }
  }
  return;
}

struct C_016e6d20 { C_016e6d20* sub_016e6d20(void); };

// @baa 0x016e6d20
C_016e6d20* C_016e6d20::sub_016e6d20(void) { return this; }

int sub_016ce5f0(void);
int sub_016e65b0(...);
extern undefined4 g_026e22bc;
// @baa 0x016e6d30
int sub_016e6d30(void)
{
  if (g_026e22bc == 0) {
    g_026e22bc = sub_016e65b0(L"BmGame");
    sub_016ce5f0();
  }
  return g_026e22bc;
}

// @baa 0x016e7e40
void sub_016e7e40(void) {  }

struct C_016e7e50 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_016e7e50& sub_016e7e50(int Arg);
};

// @baa 0x016e7e50
C_016e7e50& C_016e7e50::sub_016e7e50(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x016e7e60
int sub_016e7e60(void) { return 1; }

int sub_0154f150(void);
int sub_01574b00(...);
extern undefined4 g_026e11a4;
// @baa 0x016e7e70
int sub_016e7e70(void)
{
  if (g_026e11a4 == 0) {
    g_026e11a4 = sub_01574b00(L"BmGame");
    sub_0154f150();
  }
  return g_026e11a4;
}

int sub_0154f7d0(void);
int sub_015914c0(...);
extern undefined4 g_026e11b4;
// @baa 0x016e7ea0
int sub_016e7ea0(void)
{
  if (g_026e11b4 == 0) {
    g_026e11b4 = sub_015914c0(L"BmGame");
    sub_0154f7d0();
  }
  return g_026e11b4;
}

int sub_0154f2f0(void);
int sub_0157b790(...);
extern undefined4 g_026e11a8;
// @baa 0x016e7ed0
int sub_016e7ed0(void)
{
  if (g_026e11a8 == 0) {
    g_026e11a8 = sub_0157b790(L"BmGame");
    sub_0154f2f0();
  }
  return g_026e11a8;
}

int sub_0154f490(void);
int sub_01574bc0(...);
extern undefined4 g_026e11ac;
// @baa 0x016e7f00
int sub_016e7f00(void)
{
  if (g_026e11ac == 0) {
    g_026e11ac = sub_01574bc0(L"BmGame");
    sub_0154f490();
  }
  return g_026e11ac;
}

int sub_0154f630(void);
int sub_0157b850(...);
extern undefined4 g_026e11b0;
// @baa 0x016e7f30
int sub_016e7f30(void)
{
  if (g_026e11b0 == 0) {
    g_026e11b0 = sub_0157b850(L"BmGame");
    sub_0154f630();
  }
  return g_026e11b0;
}

int sub_016118f0(void);
int sub_0162cef0(...);
extern undefined4 g_026e19fc;
// @baa 0x016e7f60
int sub_016e7f60(void)
{
  if (g_026e19fc == 0) {
    g_026e19fc = sub_0162cef0(L"BmGame");
    sub_016118f0();
  }
  return g_026e19fc;
}

int sub_01611a90(void);
int sub_0162e710(...);
extern undefined4 g_026e1a00;
// @baa 0x016e7f90
int sub_016e7f90(void)
{
  if (g_026e1a00 == 0) {
    g_026e1a00 = sub_0162e710(L"BmGame");
    sub_01611a90();
  }
  return g_026e1a00;
}

int sub_01611c30(void);
int sub_0162e7d0(...);
extern undefined4 g_026e1a04;
// @baa 0x016e7fc0
int sub_016e7fc0(void)
{
  if (g_026e1a04 == 0) {
    g_026e1a04 = sub_0162e7d0(L"BmGame");
    sub_01611c30();
  }
  return g_026e1a04;
}

int sub_01611dd0(void);
int sub_0162e890(...);
extern undefined4 g_026e1a08;
// @baa 0x016e7ff0
int sub_016e7ff0(void)
{
  if (g_026e1a08 == 0) {
    g_026e1a08 = sub_0162e890(L"BmGame");
    sub_01611dd0();
  }
  return g_026e1a08;
}

int sub_0154f970(void);
int sub_0157b910(...);
extern undefined4 g_026e11b8;
// @baa 0x016e8020
int sub_016e8020(void)
{
  if (g_026e11b8 == 0) {
    g_026e11b8 = sub_0157b910(L"BmGame");
    sub_0154f970();
  }
  return g_026e11b8;
}

int sub_0154fb10(void);
int sub_0157b9d0(...);
extern undefined4 g_026e11bc;
// @baa 0x016e8050
int sub_016e8050(void)
{
  if (g_026e11bc == 0) {
    g_026e11bc = sub_0157b9d0(L"BmGame");
    sub_0154fb10();
  }
  return g_026e11bc;
}

int sub_0166cac0(void);
int sub_016829a0(...);
extern undefined4 g_026e1d70;
// @baa 0x016e8080
int sub_016e8080(void)
{
  if (g_026e1d70 == 0) {
    g_026e1d70 = sub_016829a0(L"BmGame");
    sub_0166cac0();
  }
  return g_026e1d70;
}

int sub_0166cda0(void);
int sub_016835b0(...);
extern undefined4 g_026e1d78;
// @baa 0x016e80b0
int sub_016e80b0(void)
{
  if (g_026e1d78 == 0) {
    g_026e1d78 = sub_016835b0(L"BmGame");
    sub_0166cda0();
  }
  return g_026e1d78;
}

int sub_0166d0a0(void);
int sub_01682aa0(...);
extern undefined4 g_026e1d80;
// @baa 0x016e80e0
int sub_016e80e0(void)
{
  if (g_026e1d80 == 0) {
    g_026e1d80 = sub_01682aa0(L"BmGame");
    sub_0166d0a0();
  }
  return g_026e1d80;
}

int sub_0166b090(void);
int sub_01683030(...);
extern undefined4 g_026e1d44;
// @baa 0x016e8110
int sub_016e8110(void)
{
  if (g_026e1d44 == 0) {
    g_026e1d44 = sub_01683030(L"BmGame");
    sub_0166b090();
  }
  return g_026e1d44;
}

int sub_016ae330(void);
int sub_016cbf70(...);
extern undefined4 g_026e2134;
// @baa 0x016e8140
int sub_016e8140(void)
{
  if (g_026e2134 == 0) {
    g_026e2134 = sub_016cbf70(L"BmGame");
    sub_016ae330();
  }
  return g_026e2134;
}

// @baa 0x016e8170
int sub_016e8170(int a0, int a1) { return a1; }

int sub_016cea50(void);
int sub_016dddc0(...);
extern undefined4 g_026e22c8;
// @baa 0x016e8180
int sub_016e8180(void)
{
  if (g_026e22c8 == 0) {
    g_026e22c8 = sub_016dddc0(L"BmGame");
    sub_016cea50();
  }
  return g_026e22c8;
}

int sub_016ce450(void);
int sub_016e20a0(...);
extern undefined4 g_026e22b8;
// @baa 0x016e81b0
int sub_016e81b0(void)
{
  if (g_026e22b8 == 0) {
    g_026e22b8 = sub_016e20a0(L"BmGame");
    sub_016ce450();
  }
  return g_026e22b8;
}

int sub_016ce750(void);
int sub_016e73d0(...);
extern undefined4 g_026e22c0;
// @baa 0x016e81e0
int sub_016e81e0(void)
{
  if (g_026e22c0 == 0) {
    g_026e22c0 = sub_016e73d0(L"BmGame");
    sub_016ce750();
  }
  return g_026e22c0;
}

int sub_016ae190(void);
int sub_016ccfa0(...);
extern undefined4 g_026e2130;
// @baa 0x016e8210
int sub_016e8210(void)
{
  if (g_026e2130 == 0) {
    g_026e2130 = sub_016ccfa0(L"BmGame");
    sub_016ae190();
  }
  return g_026e2130;
}

int sub_016132b0(void);
int sub_0162b500(...);
extern undefined4 g_026e1a40;
// @baa 0x016e8240
int sub_016e8240(void)
{
  if (g_026e1a40 == 0) {
    g_026e1a40 = sub_0162b500(L"BmGame");
    sub_016132b0();
  }
  return g_026e1a40;
}

int sub_01613410(void);
int sub_0162b5c0(...);
extern undefined4 g_026e1a44;
// @baa 0x016e8270
int sub_016e8270(void)
{
  if (g_026e1a44 == 0) {
    g_026e1a44 = sub_0162b5c0(L"BmGame");
    sub_01613410();
  }
  return g_026e1a44;
}

int sub_016d2590(void);
int sub_016e4730(...);
extern undefined4 g_026e2328;
// @baa 0x016e82a0
int sub_016e82a0(void)
{
  if (g_026e2328 == 0) {
    g_026e2328 = sub_016e4730(L"BmGame");
    sub_016d2590();
  }
  return g_026e2328;
}

int sub_01687140(void);
int sub_0169d5f0(...);
extern undefined4 g_026e1dfc;
// @baa 0x016e82d0
int sub_016e82d0(void)
{
  if (g_026e1dfc == 0) {
    g_026e1dfc = sub_0169d5f0(L"BmGame");
    sub_01687140();
  }
  return g_026e1dfc;
}

int sub_0154dc50(void);
int sub_0157b310(...);
extern undefined4 g_026e1150;
// @baa 0x016e8300
int sub_016e8300(void)
{
  if (g_026e1150 == 0) {
    g_026e1150 = sub_0157b310(L"BmGame");
    sub_0154dc50();
  }
  return g_026e1150;
}

int sub_0154d3f0(void);
int sub_0157ae90(...);
extern undefined4 g_026e1134;
// @baa 0x016e8330
int sub_016e8330(void)
{
  if (g_026e1134 == 0) {
    g_026e1134 = sub_0157ae90(L"BmGame");
    sub_0154d3f0();
  }
  return g_026e1134;
}

int sub_0154cfa0(void);
int sub_0157aa10(...);
extern undefined4 g_026e111c;
// @baa 0x016e8360
int sub_016e8360(void)
{
  if (g_026e111c == 0) {
    g_026e111c = sub_0157aa10(L"BmGame");
    sub_0154cfa0();
  }
  return g_026e111c;
}

int sub_0154ed30(void);
int sub_0155ebe0(...);
extern undefined4 g_026e1198;
// @baa 0x016e8390
int sub_016e8390(void)
{
  if (g_026e1198 == 0) {
    g_026e1198 = sub_0155ebe0(L"BmGame");
    sub_0154ed30();
  }
  return g_026e1198;
}

int sub_0154df10(void);
int sub_0157b490(...);
extern undefined4 g_026e1158;
// @baa 0x016e83c0
int sub_016e83c0(void)
{
  if (g_026e1158 == 0) {
    g_026e1158 = sub_0157b490(L"BmGame");
    sub_0154df10();
  }
  return g_026e1158;
}

int sub_01555630(void);
int sub_0157bb50(...);
extern undefined4 g_026e12cc;
// @baa 0x016e83f0
int sub_016e83f0(void)
{
  if (g_026e12cc == 0) {
    g_026e12cc = sub_0157bb50(L"BmGame");
    sub_01555630();
  }
  return g_026e12cc;
}

int sub_0154d100(void);
int sub_0157aad0(...);
extern undefined4 g_026e1120;
// @baa 0x016e8510
int sub_016e8510(void)
{
  if (g_026e1120 == 0) {
    g_026e1120 = sub_0157aad0(L"BmGame");
    sub_0154d100();
  }
  return g_026e1120;
}

int sub_0157a890(...);
int sub_015843e0(void);
extern undefined4 g_026e1114;
// @baa 0x016e88d0
int sub_016e88d0(void)
{
  if (g_026e1114 == 0) {
    g_026e1114 = sub_0157a890(L"BmGame");
    sub_015843e0();
  }
  return g_026e1114;
}

struct C_016e8900 { C_016e8900* sub_016e8900(int a0); };

// @baa 0x016e8900
C_016e8900* C_016e8900::sub_016e8900(int a0) { return this; }

int sub_0157ac50(...);
int sub_01584530(void);
extern undefined4 g_026e1128;
// @baa 0x016e9540
int sub_016e9540(void)
{
  if (g_026e1128 == 0) {
    g_026e1128 = sub_0157ac50(L"BmGame");
    sub_01584530();
  }
  return g_026e1128;
}

int sub_0163cee0(void);
int sub_0165a640(...);
extern undefined4 g_026e1bfc;
// @baa 0x016e9570
int sub_016e9570(void)
{
  if (g_026e1bfc == 0) {
    g_026e1bfc = sub_0165a640(L"BmGame");
    sub_0163cee0();
  }
  return g_026e1bfc;
}

int sub_01555e70(void);
int sub_0157bf10(...);
extern undefined4 g_026e12e4;
// @baa 0x016e9680
int sub_016e9680(void)
{
  if (g_026e12e4 == 0) {
    g_026e12e4 = sub_0157bf10(L"BmGame");
    sub_01555e70();
  }
  return g_026e12e4;
}

int sub_016d11b0(void);
int sub_016e3d30(...);
extern undefined4 g_026e22e8;
// @baa 0x016e9720
int sub_016e9720(void)
{
  if (g_026e22e8 == 0) {
    g_026e22e8 = sub_016e3d30(L"BmGame");
    sub_016d11b0();
  }
  return g_026e22e8;
}

int sub_016e3f70(...);
int sub_016e56d0(void);
extern undefined4 g_026e22f4;
// @baa 0x016e9800
int sub_016e9800(void)
{
  if (g_026e22f4 == 0) {
    g_026e22f4 = sub_016e3f70(L"BmGame");
    sub_016e56d0();
  }
  return g_026e22f4;
}

int sub_016d1050(void);
int sub_016e3c70(...);
extern undefined4 g_026e22e4;
// @baa 0x016e98a0
int sub_016e98a0(void)
{
  if (g_026e22e4 == 0) {
    g_026e22e4 = sub_016e3c70(L"BmGame");
    sub_016d1050();
  }
  return g_026e22e4;
}

int sub_016d1310(void);
int sub_016e3df0(...);
extern undefined4 g_026e22ec;
// @baa 0x016e98d0
int sub_016e98d0(void)
{
  if (g_026e22ec == 0) {
    g_026e22ec = sub_016e3df0(L"BmGame");
    sub_016d1310();
  }
  return g_026e22ec;
}

int sub_0154d820(void);
int sub_0157b190(...);
extern undefined4 g_026e1144;
// @baa 0x016e99f0
int sub_016e99f0(void)
{
  if (g_026e1144 == 0) {
    g_026e1144 = sub_0157b190(L"BmGame");
    sub_0154d820();
  }
  return g_026e1144;
}

int sub_01611fa0(void);
int sub_0162f550(...);
extern undefined4 g_026e1a0c;
// @baa 0x016e9aa0
int sub_016e9aa0(void)
{
  if (g_026e1a0c == 0) {
    g_026e1a0c = sub_0162f550(L"BmGame");
    sub_01611fa0();
  }
  return g_026e1a0c;
}

int sub_015e10e0(void);
int sub_015f9f60(...);
extern undefined4 g_026e176c;
// @baa 0x016e9b10
int sub_016e9b10(void)
{
  if (g_026e176c == 0) {
    g_026e176c = sub_015f9f60(L"BmGame");
    sub_015e10e0();
  }
  return g_026e176c;
}

int sub_0154eff0(void);
int sub_0157b6d0(...);
extern undefined4 g_026e11a0;
// @baa 0x016e9b40
int sub_016e9b40(void)
{
  if (g_026e11a0 == 0) {
    g_026e11a0 = sub_0157b6d0(L"BmGame");
    sub_0154eff0();
  }
  return g_026e11a0;
}

int sub_0154e490(void);
int sub_0155e8e0(...);
extern undefined4 g_026e1168;
// @baa 0x016e9ea0
int sub_016e9ea0(void)
{
  if (g_026e1168 == 0) {
    g_026e1168 = sub_0155e8e0(L"BmGame");
    sub_0154e490();
  }
  return g_026e1168;
}

int sub_0154ddb0(void);
int sub_0157b3d0(...);
extern undefined4 g_026e1154;
// @baa 0x016e9ed0
int sub_016e9ed0(void)
{
  if (g_026e1154 == 0) {
    g_026e1154 = sub_0157b3d0(L"BmGame");
    sub_0154ddb0();
  }
  return g_026e1154;
}

int sub_01555fd0(void);
int sub_0157bfd0(...);
extern undefined4 g_026e12e8;
// @baa 0x016e9f40
int sub_016e9f40(void)
{
  if (g_026e12e8 == 0) {
    g_026e12e8 = sub_0157bfd0(L"BmGame");
    sub_01555fd0();
  }
  return g_026e12e8;
}

int sub_0154ee90(void);
int sub_0157b610(...);
extern undefined4 g_026e119c;
// @baa 0x016ea260
int sub_016ea260(void)
{
  if (g_026e119c == 0) {
    g_026e119c = sub_0157b610(L"BmGame");
    sub_0154ee90();
  }
  return g_026e119c;
}

int sub_0154d6c0(void);
int sub_0157b0d0(...);
extern undefined4 g_026e1140;
// @baa 0x016ea400
int sub_016ea400(void)
{
  if (g_026e1140 == 0) {
    g_026e1140 = sub_0157b0d0(L"BmGame");
    sub_0154d6c0();
  }
  return g_026e1140;
}

int sub_01555790(void);
int sub_0157bc10(...);
extern undefined4 g_026e12d0;
// @baa 0x016ea430
int sub_016ea430(void)
{
  if (g_026e12d0 == 0) {
    g_026e12d0 = sub_0157bc10(L"BmGame");
    sub_01555790();
  }
  return g_026e12d0;
}

int sub_0157c150(...);
int sub_01584920(void);
extern undefined4 g_026e12f0;
// @baa 0x016ea460
int sub_016ea460(void)
{
  if (g_026e12f0 == 0) {
    g_026e12f0 = sub_0157c150(L"BmGame");
    sub_01584920();
  }
  return g_026e12f0;
}

int sub_0154e070(void);
int sub_0157b550(...);
extern undefined4 g_026e115c;
// @baa 0x016ea490
int sub_016ea490(void)
{
  if (g_026e115c == 0) {
    g_026e115c = sub_0157b550(L"BmGame");
    sub_0154e070();
  }
  return g_026e115c;
}

int sub_015545b0(void);
int sub_0155eca0(...);
extern undefined4 g_026e129c;
// @baa 0x016ea4c0
int sub_016ea4c0(void)
{
  if (g_026e129c == 0) {
    g_026e129c = sub_0155eca0(L"BmGame");
    sub_015545b0();
  }
  return g_026e129c;
}

int sub_01597aa0(void);
int sub_0159d500(...);
extern undefined4 g_026e1444;
// @baa 0x016ea4f0
int sub_016ea4f0(void)
{
  if (g_026e1444 == 0) {
    g_026e1444 = sub_0159d500(L"BmGame");
    sub_01597aa0();
  }
  return g_026e1444;
}

int sub_01597680(void);
int sub_0159d2c0(...);
extern undefined4 g_026e1438;
// @baa 0x016ea520
int sub_016ea520(void)
{
  if (g_026e1438 == 0) {
    g_026e1438 = sub_0159d2c0(L"BmGame");
    sub_01597680();
  }
  return g_026e1438;
}

int sub_015973c0(void);
int sub_0159d140(...);
extern undefined4 g_026e1430;
// @baa 0x016ea550
int sub_016ea550(void)
{
  if (g_026e1430 == 0) {
    g_026e1430 = sub_0159d140(L"BmGame");
    sub_015973c0();
  }
  return g_026e1430;
}

int sub_0159d8a0(...);
int sub_015a4680(void);
extern undefined4 g_026e144c;
// @baa 0x016ea580
int sub_016ea580(void)
{
  if (g_026e144c == 0) {
    g_026e144c = sub_0159d8a0(L"BmGame");
    sub_015a4680();
  }
  return g_026e144c;
}

int sub_016973e0(...);
int sub_0169cf10(void);
extern undefined4 g_026e1e10;
// @baa 0x016ea5b0
int sub_016ea5b0(void)
{
  if (g_026e1e10 == 0) {
    g_026e1e10 = sub_016973e0(L"BmGame");
    sub_0169cf10();
  }
  return g_026e1e10;
}

int sub_0154e5f0(void);
int sub_015728b0(...);
extern undefined4 g_026e116c;
// @baa 0x016eab10
int sub_016eab10(void)
{
  if (g_026e116c == 0) {
    g_026e116c = sub_015728b0(L"BmGame");
    sub_0154e5f0();
  }
  return g_026e116c;
}

int sub_015748c0(...);
int sub_01577e20(void);
extern undefined4 g_026e117c;
// @baa 0x016eab40
int sub_016eab40(void)
{
  if (g_026e117c == 0) {
    g_026e117c = sub_015748c0(L"BmGame");
    sub_01577e20();
  }
  return g_026e117c;
}

int sub_0154fe10(void);
int sub_01586fe0(...);
extern undefined4 g_026e11c4;
// @baa 0x016eab70
int sub_016eab70(void)
{
  if (g_026e11c4 == 0) {
    g_026e11c4 = sub_01586fe0(L"BmGame");
    sub_0154fe10();
  }
  return g_026e11c4;
}

int sub_015500d0(void);
int sub_01587160(...);
extern undefined4 g_026e11cc;
// @baa 0x016eaba0
int sub_016eaba0(void)
{
  if (g_026e11cc == 0) {
    g_026e11cc = sub_01587160(L"BmGame");
    sub_015500d0();
  }
  return g_026e11cc;
}

int sub_01550230(void);
int sub_01587220(...);
extern undefined4 g_026e11d0;
// @baa 0x016eabd0
int sub_016eabd0(void)
{
  if (g_026e11d0 == 0) {
    g_026e11d0 = sub_01587220(L"BmGame");
    sub_01550230();
  }
  return g_026e11d0;
}

int sub_01554c90(void);
int sub_01589620(...);
extern undefined4 g_026e12b0;
// @baa 0x016eac00
int sub_016eac00(void)
{
  if (g_026e12b0 == 0) {
    g_026e12b0 = sub_01589620(L"BmGame");
    sub_01554c90();
  }
  return g_026e12b0;
}

int sub_01554df0(void);
int sub_015896e0(...);
extern undefined4 g_026e12b4;
// @baa 0x016eac30
int sub_016eac30(void)
{
  if (g_026e12b4 == 0) {
    g_026e12b4 = sub_015896e0(L"BmGame");
    sub_01554df0();
  }
  return g_026e12b4;
}

int sub_01554b30(void);
int sub_01589560(...);
extern undefined4 g_026e12ac;
// @baa 0x016eac60
int sub_016eac60(void)
{
  if (g_026e12ac == 0) {
    g_026e12ac = sub_01589560(L"BmGame");
    sub_01554b30();
  }
  return g_026e12ac;
}

int sub_015554d0(void);
int sub_01589aa0(...);
extern undefined4 g_026e12c8;
// @baa 0x016eac90
int sub_016eac90(void)
{
  if (g_026e12c8 == 0) {
    g_026e12c8 = sub_01589aa0(L"BmGame");
    sub_015554d0();
  }
  return g_026e12c8;
}

int sub_01554f50(void);
int sub_015897a0(...);
extern undefined4 g_026e12b8;
// @baa 0x016eacc0
int sub_016eacc0(void)
{
  if (g_026e12b8 == 0) {
    g_026e12b8 = sub_015897a0(L"BmGame");
    sub_01554f50();
  }
  return g_026e12b8;
}

int sub_01550650(void);
int sub_01587460(...);
extern undefined4 g_026e11dc;
// @baa 0x016eacf0
int sub_016eacf0(void)
{
  if (g_026e11dc == 0) {
    g_026e11dc = sub_01587460(L"BmGame");
    sub_01550650();
  }
  return g_026e11dc;
}

int sub_01555370(void);
int sub_015899e0(...);
extern undefined4 g_026e12c4;
// @baa 0x016ead20
int sub_016ead20(void)
{
  if (g_026e12c4 == 0) {
    g_026e12c4 = sub_015899e0(L"BmGame");
    sub_01555370();
  }
  return g_026e12c4;
}

int sub_01550d30(void);
int sub_01587820(...);
extern undefined4 g_026e11f0;
// @baa 0x016ead50
int sub_016ead50(void)
{
  if (g_026e11f0 == 0) {
    g_026e11f0 = sub_01587820(L"BmGame");
    sub_01550d30();
  }
  return g_026e11f0;
}

int sub_01550e90(void);
int sub_015878e0(...);
extern undefined4 g_026e11f4;
// @baa 0x016ead80
int sub_016ead80(void)
{
  if (g_026e11f4 == 0) {
    g_026e11f4 = sub_015878e0(L"BmGame");
    sub_01550e90();
  }
  return g_026e11f4;
}

int sub_0154d980(void);
int sub_01577d60(...);
extern undefined4 g_026e1148;
// @baa 0x016eae30
int sub_016eae30(void)
{
  if (g_026e1148 == 0) {
    g_026e1148 = sub_01577d60(L"BmGame");
    sub_0154d980();
  }
  return g_026e1148;
}

int sub_01550ff0(void);
int sub_015879a0(...);
extern undefined4 g_026e11f8;
// @baa 0x016eae60
int sub_016eae60(void)
{
  if (g_026e11f8 == 0) {
    g_026e11f8 = sub_015879a0(L"BmGame");
    sub_01550ff0();
  }
  return g_026e11f8;
}

int sub_01555210(void);
int sub_01589920(...);
extern undefined4 g_026e12c0;
// @baa 0x016eae90
int sub_016eae90(void)
{
  if (g_026e12c0 == 0) {
    g_026e12c0 = sub_01589920(L"BmGame");
    sub_01555210();
  }
  return g_026e12c0;
}

int sub_015512b0(void);
int sub_01587b20(...);
extern undefined4 g_026e1200;
// @baa 0x016eaec0
int sub_016eaec0(void)
{
  if (g_026e1200 == 0) {
    g_026e1200 = sub_01587b20(L"BmGame");
    sub_015512b0();
  }
  return g_026e1200;
}

int sub_01551570(void);
int sub_01587ca0(...);
extern undefined4 g_026e1208;
// @baa 0x016eaef0
int sub_016eaef0(void)
{
  if (g_026e1208 == 0) {
    g_026e1208 = sub_01587ca0(L"BmGame");
    sub_01551570();
  }
  return g_026e1208;
}

int sub_01551af0(void);
int sub_01587fa0(...);
extern undefined4 g_026e1218;
// @baa 0x016eaf20
int sub_016eaf20(void)
{
  if (g_026e1218 == 0) {
    g_026e1218 = sub_01587fa0(L"BmGame");
    sub_01551af0();
  }
  return g_026e1218;
}

int sub_01551c50(void);
int sub_01588060(...);
extern undefined4 g_026e121c;
// @baa 0x016eaf50
int sub_016eaf50(void)
{
  if (g_026e121c == 0) {
    g_026e121c = sub_01588060(L"BmGame");
    sub_01551c50();
  }
  return g_026e121c;
}

int sub_01552070(void);
int sub_015882a0(...);
extern undefined4 g_026e1228;
// @baa 0x016eaf80
int sub_016eaf80(void)
{
  if (g_026e1228 == 0) {
    g_026e1228 = sub_015882a0(L"BmGame");
    sub_01552070();
  }
  return g_026e1228;
}

int sub_015521d0(void);
int sub_01588360(...);
extern undefined4 g_026e122c;
// @baa 0x016eafb0
int sub_016eafb0(void)
{
  if (g_026e122c == 0) {
    g_026e122c = sub_01588360(L"BmGame");
    sub_015521d0();
  }
  return g_026e122c;
}

int sub_01552330(void);
int sub_01588420(...);
extern undefined4 g_026e1230;
// @baa 0x016eafe0
int sub_016eafe0(void)
{
  if (g_026e1230 == 0) {
    g_026e1230 = sub_01588420(L"BmGame");
    sub_01552330();
  }
  return g_026e1230;
}

int sub_01552490(void);
int sub_015884e0(...);
extern undefined4 g_026e1234;
// @baa 0x016eb010
int sub_016eb010(void)
{
  if (g_026e1234 == 0) {
    g_026e1234 = sub_015884e0(L"BmGame");
    sub_01552490();
  }
  return g_026e1234;
}

int sub_015525f0(void);
int sub_015885a0(...);
extern undefined4 g_026e1238;
// @baa 0x016eb040
int sub_016eb040(void)
{
  if (g_026e1238 == 0) {
    g_026e1238 = sub_015885a0(L"BmGame");
    sub_015525f0();
  }
  return g_026e1238;
}

int sub_01552750(void);
int sub_01588660(...);
extern undefined4 g_026e123c;
// @baa 0x016eb070
int sub_016eb070(void)
{
  if (g_026e123c == 0) {
    g_026e123c = sub_01588660(L"BmGame");
    sub_01552750();
  }
  return g_026e123c;
}

int sub_015542d0(void);
int sub_01589260(...);
extern undefined4 g_026e128c;
// @baa 0x016eb0a0
int sub_016eb0a0(void)
{
  if (g_026e128c == 0) {
    g_026e128c = sub_01589260(L"BmGame");
    sub_015542d0();
  }
  return g_026e128c;
}

int sub_01553eb0(void);
int sub_01589020(...);
extern undefined4 g_026e1280;
// @baa 0x016eb0d0
int sub_016eb0d0(void)
{
  if (g_026e1280 == 0) {
    g_026e1280 = sub_01589020(L"BmGame");
    sub_01553eb0();
  }
  return g_026e1280;
}

int sub_015528b0(void);
int sub_01588720(...);
extern undefined4 g_026e1240;
// @baa 0x016eb100
int sub_016eb100(void)
{
  if (g_026e1240 == 0) {
    g_026e1240 = sub_01588720(L"BmGame");
    sub_015528b0();
  }
  return g_026e1240;
}

int sub_01554010(void);
int sub_015890e0(...);
extern undefined4 g_026e1284;
// @baa 0x016eb130
int sub_016eb130(void)
{
  if (g_026e1284 == 0) {
    g_026e1284 = sub_015890e0(L"BmGame");
    sub_01554010();
  }
  return g_026e1284;
}

int sub_01552a10(void);
int sub_015887e0(...);
extern undefined4 g_026e1244;
// @baa 0x016eb160
int sub_016eb160(void)
{
  if (g_026e1244 == 0) {
    g_026e1244 = sub_015887e0(L"BmGame");
    sub_01552a10();
  }
  return g_026e1244;
}

int sub_01552cd0(void);
int sub_01588960(...);
extern undefined4 g_026e124c;
// @baa 0x016eb190
int sub_016eb190(void)
{
  if (g_026e124c == 0) {
    g_026e124c = sub_01588960(L"BmGame");
    sub_01552cd0();
  }
  return g_026e124c;
}

int sub_01552e30(void);
int sub_01588a20(...);
extern undefined4 g_026e1250;
// @baa 0x016eb1c0
int sub_016eb1c0(void)
{
  if (g_026e1250 == 0) {
    g_026e1250 = sub_01588a20(L"BmGame");
    sub_01552e30();
  }
  return g_026e1250;
}

int sub_01554170(void);
int sub_015891a0(...);
extern undefined4 g_026e1288;
// @baa 0x016eb1f0
int sub_016eb1f0(void)
{
  if (g_026e1288 == 0) {
    g_026e1288 = sub_015891a0(L"BmGame");
    sub_01554170();
  }
  return g_026e1288;
}

int sub_015550b0(void);
int sub_01589860(...);
extern undefined4 g_026e12bc;
// @baa 0x016eb220
int sub_016eb220(void)
{
  if (g_026e12bc == 0) {
    g_026e12bc = sub_01589860(L"BmGame");
    sub_015550b0();
  }
  return g_026e12bc;
}

int sub_01553250(void);
int sub_01588c60(...);
extern undefined4 g_026e125c;
// @baa 0x016eb250
int sub_016eb250(void)
{
  if (g_026e125c == 0) {
    g_026e125c = sub_01588c60(L"BmGame");
    sub_01553250();
  }
  return g_026e125c;
}

int sub_0154fcb0(void);
int sub_01586f20(...);
extern undefined4 g_026e11c0;
// @baa 0x016eb370
int sub_016eb370(void)
{
  if (g_026e11c0 == 0) {
    g_026e11c0 = sub_01586f20(L"BmGame");
    sub_0154fcb0();
  }
  return g_026e11c0;
}

int sub_0154ff70(void);
int sub_015870a0(...);
extern undefined4 g_026e11c8;
// @baa 0x016eb3a0
int sub_016eb3a0(void)
{
  if (g_026e11c8 == 0) {
    g_026e11c8 = sub_015870a0(L"BmGame");
    sub_0154ff70();
  }
  return g_026e11c8;
}

int sub_015504f0(void);
int sub_015873a0(...);
extern undefined4 g_026e11d8;
// @baa 0x016eb3d0
int sub_016eb3d0(void)
{
  if (g_026e11d8 == 0) {
    g_026e11d8 = sub_015873a0(L"BmGame");
    sub_015504f0();
  }
  return g_026e11d8;
}

int sub_015507b0(void);
int sub_01587520(...);
extern undefined4 g_026e11e0;
// @baa 0x016eb400
int sub_016eb400(void)
{
  if (g_026e11e0 == 0) {
    g_026e11e0 = sub_01587520(L"BmGame");
    sub_015507b0();
  }
  return g_026e11e0;
}

int sub_01550910(void);
int sub_015875e0(...);
extern undefined4 g_026e11e4;
// @baa 0x016eb430
int sub_016eb430(void)
{
  if (g_026e11e4 == 0) {
    g_026e11e4 = sub_015875e0(L"BmGame");
    sub_01550910();
  }
  return g_026e11e4;
}

int sub_01550bd0(void);
int sub_01587760(...);
extern undefined4 g_026e11ec;
// @baa 0x016eb5a0
int sub_016eb5a0(void)
{
  if (g_026e11ec == 0) {
    g_026e11ec = sub_01587760(L"BmGame");
    sub_01550bd0();
  }
  return g_026e11ec;
}

int sub_01551150(void);
int sub_01587a60(...);
extern undefined4 g_026e11fc;
// @baa 0x016eb5d0
int sub_016eb5d0(void)
{
  if (g_026e11fc == 0) {
    g_026e11fc = sub_01587a60(L"BmGame");
    sub_01551150();
  }
  return g_026e11fc;
}

int sub_01551410(void);
int sub_01587be0(...);
extern undefined4 g_026e1204;
// @baa 0x016eb600
int sub_016eb600(void)
{
  if (g_026e1204 == 0) {
    g_026e1204 = sub_01587be0(L"BmGame");
    sub_01551410();
  }
  return g_026e1204;
}

int sub_01550a70(void);
int sub_015876a0(...);
extern undefined4 g_026e11e8;
// @baa 0x016eb630
int sub_016eb630(void)
{
  if (g_026e11e8 == 0) {
    g_026e11e8 = sub_015876a0(L"BmGame");
    sub_01550a70();
  }
  return g_026e11e8;
}

int sub_015516d0(void);
int sub_01587d60(...);
extern undefined4 g_026e120c;
// @baa 0x016eb660
int sub_016eb660(void)
{
  if (g_026e120c == 0) {
    g_026e120c = sub_01587d60(L"BmGame");
    sub_015516d0();
  }
  return g_026e120c;
}

int sub_01551830(void);
int sub_01587e20(...);
extern undefined4 g_026e1210;
// @baa 0x016eb690
int sub_016eb690(void)
{
  if (g_026e1210 == 0) {
    g_026e1210 = sub_01587e20(L"BmGame");
    sub_01551830();
  }
  return g_026e1210;
}

int sub_01552b70(void);
int sub_015888a0(...);
extern undefined4 g_026e1248;
// @baa 0x016eb6c0
int sub_016eb6c0(void)
{
  if (g_026e1248 == 0) {
    g_026e1248 = sub_015888a0(L"BmGame");
    sub_01552b70();
  }
  return g_026e1248;
}

int sub_01552f90(void);
int sub_01588ae0(...);
extern undefined4 g_026e1254;
// @baa 0x016eb6f0
int sub_016eb6f0(void)
{
  if (g_026e1254 == 0) {
    g_026e1254 = sub_01588ae0(L"BmGame");
    sub_01552f90();
  }
  return g_026e1254;
}

int sub_01554430(void);
int sub_01589320(...);
extern undefined4 g_026e1290;
// @baa 0x016eb720
int sub_016eb720(void)
{
  if (g_026e1290 == 0) {
    g_026e1290 = sub_01589320(L"BmGame");
    sub_01554430();
  }
  return g_026e1290;
}

int sub_015530f0(void);
int sub_01588ba0(...);
extern undefined4 g_026e1258;
// @baa 0x016eb750
int sub_016eb750(void)
{
  if (g_026e1258 == 0) {
    g_026e1258 = sub_01588ba0(L"BmGame");
    sub_015530f0();
  }
  return g_026e1258;
}

int sub_0155c7b0(void);
int sub_0158fe60(...);
extern undefined4 g_026e1370;
// @baa 0x016eb780
int sub_016eb780(void)
{
  if (g_026e1370 == 0) {
    g_026e1370 = sub_0158fe60(L"BmGame");
    sub_0155c7b0();
  }
  return g_026e1370;
}

int sub_01551f10(void);
int sub_015881e0(...);
extern undefined4 g_026e1224;
// @baa 0x016eb7b0
int sub_016eb7b0(void)
{
  if (g_026e1224 == 0) {
    g_026e1224 = sub_015881e0(L"BmGame");
    sub_01551f10();
  }
  return g_026e1224;
}

int sub_015533b0(void);
int sub_01588d20(...);
extern undefined4 g_026e1260;
// @baa 0x016eb7e0
int sub_016eb7e0(void)
{
  if (g_026e1260 == 0) {
    g_026e1260 = sub_01588d20(L"BmGame");
    sub_015533b0();
  }
  return g_026e1260;
}

int sub_01553510(void);
int sub_01588de0(...);
extern undefined4 g_026e1264;
// @baa 0x016eb810
int sub_016eb810(void)
{
  if (g_026e1264 == 0) {
    g_026e1264 = sub_01588de0(L"BmGame");
    sub_01553510();
  }
  return g_026e1264;
}

int sub_01553670(void);
int sub_01588ea0(...);
extern undefined4 g_026e1268;
// @baa 0x016eb840
int sub_016eb840(void)
{
  if (g_026e1268 == 0) {
    g_026e1268 = sub_01588ea0(L"BmGame");
    sub_01553670();
  }
  return g_026e1268;
}

int sub_015537d0(void);
int sub_01588f60(...);
extern undefined4 g_026e126c;
// @baa 0x016eb870
int sub_016eb870(void)
{
  if (g_026e126c == 0) {
    g_026e126c = sub_01588f60(L"BmGame");
    sub_015537d0();
  }
  return g_026e126c;
}

int sub_01553bf0(void);
int sub_01572bb0(...);
extern undefined4 g_026e1278;
// @baa 0x016eb8a0
int sub_016eb8a0(void)
{
  if (g_026e1278 == 0) {
    g_026e1278 = sub_01572bb0(L"BmGame");
    sub_01553bf0();
  }
  return g_026e1278;
}

int sub_01553930(void);
int sub_01572a30(...);
extern undefined4 g_026e1270;
// @baa 0x016eb8d0
int sub_016eb8d0(void)
{
  if (g_026e1270 == 0) {
    g_026e1270 = sub_01572a30(L"BmGame");
    sub_01553930();
  }
  return g_026e1270;
}

int sub_01553a90(void);
int sub_01572af0(...);
extern undefined4 g_026e1274;
// @baa 0x016eb900
int sub_016eb900(void)
{
  if (g_026e1274 == 0) {
    g_026e1274 = sub_01572af0(L"BmGame");
    sub_01553a90();
  }
  return g_026e1274;
}

int sub_01553d50(void);
int sub_01572c70(...);
extern undefined4 g_026e127c;
// @baa 0x016eb930
int sub_016eb930(void)
{
  if (g_026e127c == 0) {
    g_026e127c = sub_01572c70(L"BmGame");
    sub_01553d50();
  }
  return g_026e127c;
}

int sub_0154ea50(void);
int sub_01574980(...);
extern undefined4 g_026e1188;
// @baa 0x016eb960
int sub_016eb960(void)
{
  if (g_026e1188 == 0) {
    g_026e1188 = sub_01574980(L"BmGame");
    sub_0154ea50();
  }
  return g_026e1188;
}

int sub_0154ebb0(void);
int sub_01572970(...);
extern undefined4 g_026e118c;
// @baa 0x016ebbb0
int sub_016ebbb0(void)
{
  if (g_026e118c == 0) {
    g_026e118c = sub_01572970(L"BmGame");
    sub_0154ebb0();
  }
  return g_026e118c;
}

int sub_0154e330(void);
int sub_0155e820(...);
extern undefined4 g_026e1164;
// @baa 0x016ebbe0
int sub_016ebbe0(void)
{
  if (g_026e1164 == 0) {
    g_026e1164 = sub_0155e820(L"BmGame");
    sub_0154e330();
  }
  return g_026e1164;
}

int sub_0155eb20(...);
int sub_01563cc0(void);
extern undefined4 g_026e1184;
// @baa 0x016ebc10
int sub_016ebc10(void)
{
  if (g_026e1184 == 0) {
    g_026e1184 = sub_0155eb20(L"BmGame");
    sub_01563cc0();
  }
  return g_026e1184;
}

int sub_01597dd0(void);
int sub_0159d960(...);
extern undefined4 g_026e1450;
// @baa 0x016ebc80
int sub_016ebc80(void)
{
  if (g_026e1450 == 0) {
    g_026e1450 = sub_0159d960(L"BmGame");
    sub_01597dd0();
  }
  return g_026e1450;
}

int sub_015c1670(void);
int sub_015c61a0(...);
extern undefined4 g_026e1608;
// @baa 0x016ebcb0
int sub_016ebcb0(void)
{
  if (g_026e1608 == 0) {
    g_026e1608 = sub_015c61a0(L"BmGame");
    sub_015c1670();
  }
  return g_026e1608;
}

int sub_015bfb00(void);
int sub_015c52a0(...);
extern undefined4 g_026e15c0;
// @baa 0x016ebce0
int sub_016ebce0(void)
{
  if (g_026e15c0 == 0) {
    g_026e15c0 = sub_015c52a0(L"BmGame");
    sub_015bfb00();
  }
  return g_026e15c0;
}

int sub_015977e0(void);
int sub_0159d380(...);
extern undefined4 g_026e143c;
// @baa 0x016ebd10
int sub_016ebd10(void)
{
  if (g_026e143c == 0) {
    g_026e143c = sub_0159d380(L"BmGame");
    sub_015977e0();
  }
  return g_026e143c;
}

int sub_01597940(void);
int sub_0159d440(...);
extern undefined4 g_026e1440;
// @baa 0x016ebd40
int sub_016ebd40(void)
{
  if (g_026e1440 == 0) {
    g_026e1440 = sub_0159d440(L"BmGame");
    sub_01597940();
  }
  return g_026e1440;
}

int sub_0155c970(void);
int sub_01574fe0(...);
extern undefined4 g_026e1374;
// @baa 0x016ebde0
int sub_016ebde0(void)
{
  if (g_026e1374 == 0) {
    g_026e1374 = sub_01574fe0(L"BmGame");
    sub_0155c970();
  }
  return g_026e1374;
}

int sub_015c18e0(void);
int sub_015c63a0(...);
extern undefined4 g_026e160c;
// @baa 0x016ec330
int sub_016ec330(void)
{
  if (g_026e160c == 0) {
    g_026e160c = sub_015c63a0(L"BmGame");
    sub_015c18e0();
  }
  return g_026e160c;
}

int sub_01599720(void);
int sub_0159ffb0(...);
extern undefined4 g_026e1460;
// @baa 0x016ec360
int sub_016ec360(void)
{
  if (g_026e1460 == 0) {
    g_026e1460 = sub_0159ffb0(L"BmGame");
    sub_01599720();
  }
  return g_026e1460;
}

int sub_015bf450(void);
int sub_015c44b0(...);
extern undefined4 g_026e15b8;
// @baa 0x016ec390
int sub_016ec390(void)
{
  if (g_026e15b8 == 0) {
    g_026e15b8 = sub_015c44b0(L"BmGame");
    sub_015bf450();
  }
  return g_026e15b8;
}

int sub_015c0d10(void);
int sub_015c5ed0(...);
extern undefined4 g_026e1604;
// @baa 0x016ec3c0
int sub_016ec3c0(void)
{
  if (g_026e1604 == 0) {
    g_026e1604 = sub_015c5ed0(L"BmGame");
    sub_015c0d10();
  }
  return g_026e1604;
}

int sub_01599c30(void);
int sub_015a05c0(...);
extern undefined4 g_026e1464;
// @baa 0x016ec3f0
int sub_016ec3f0(void)
{
  if (g_026e1464 == 0) {
    g_026e1464 = sub_015a05c0(L"BmGame");
    sub_01599c30();
  }
  return g_026e1464;
}

int sub_015c3070(void);
int sub_015c90a0(...);
extern undefined4 g_026e1610;
// @baa 0x016ec420
int sub_016ec420(void)
{
  if (g_026e1610 == 0) {
    g_026e1610 = sub_015c90a0(L"BmGame");
    sub_015c3070();
  }
  return g_026e1610;
}

int sub_015be840(void);
int sub_015c40b0(...);
extern undefined4 g_026e15b0;
// @baa 0x016ec450
int sub_016ec450(void)
{
  if (g_026e15b0 == 0) {
    g_026e15b0 = sub_015c40b0(L"BmGame");
    sub_015be840();
  }
  return g_026e15b0;
}

int sub_01599e70(void);
int sub_015a0d50(...);
extern undefined4 g_026e1468;
// @baa 0x016ec480
int sub_016ec480(void)
{
  if (g_026e1468 == 0) {
    g_026e1468 = sub_015a0d50(L"BmGame");
    sub_01599e70();
  }
  return g_026e1468;
}

int sub_0159a1f0(void);
int sub_015a16a0(...);
extern undefined4 g_026e146c;
// @baa 0x016ec4b0
int sub_016ec4b0(void)
{
  if (g_026e146c == 0) {
    g_026e146c = sub_015a16a0(L"BmGame");
    sub_0159a1f0();
  }
  return g_026e146c;
}

int sub_01599170(void);
int sub_0159f260(...);
extern undefined4 g_026e1458;
// @baa 0x016ec4e0
int sub_016ec4e0(void)
{
  if (g_026e1458 == 0) {
    g_026e1458 = sub_0159f260(L"BmGame");
    sub_01599170();
  }
  return g_026e1458;
}

int sub_015992d0(void);
int sub_0159f3f0(...);
extern undefined4 g_026e145c;
// @baa 0x016ec510
int sub_016ec510(void)
{
  if (g_026e145c == 0) {
    g_026e145c = sub_0159f3f0(L"BmGame");
    sub_015992d0();
  }
  return g_026e145c;
}

int sub_015bea50(void);
int sub_015c43f0(...);
extern undefined4 g_026e15b4;
// @baa 0x016ec540
int sub_016ec540(void)
{
  if (g_026e15b4 == 0) {
    g_026e15b4 = sub_015c43f0(L"BmGame");
    sub_015bea50();
  }
  return g_026e15b4;
}

int sub_015964b0(void);
int sub_015b7220(...);
extern undefined4 g_026e1404;
// @baa 0x016efc60
int sub_016efc60(void)
{
  if (g_026e1404 == 0) {
    g_026e1404 = sub_015b7220(L"BmGame");
    sub_015964b0();
  }
  return g_026e1404;
}

int sub_0155caf0(void);
int sub_015750a0(...);
extern undefined4 g_026e1378;
// @baa 0x016efc90
int sub_016efc90(void)
{
  if (g_026e1378 == 0) {
    g_026e1378 = sub_015750a0(L"BmGame");
    sub_0155caf0();
  }
  return g_026e1378;
}

int sub_0155cc50(void);
int sub_01575160(...);
extern undefined4 g_026e137c;
// @baa 0x016efcc0
int sub_016efcc0(void)
{
  if (g_026e137c == 0) {
    g_026e137c = sub_01575160(L"BmGame");
    sub_0155cc50();
  }
  return g_026e137c;
}

int sub_01597f30(void);
int sub_015b72e0(...);
extern undefined4 g_026e1454;
// @baa 0x016efcf0
int sub_016efcf0(void)
{
  if (g_026e1454 == 0) {
    g_026e1454 = sub_015b72e0(L"BmGame");
    sub_01597f30();
  }
  return g_026e1454;
}
