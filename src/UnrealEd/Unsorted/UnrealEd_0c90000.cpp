// UnrealEd_0c90000.cpp: 120 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00937270(...);
int sub_00937330(void);
extern undefined4 g_026b5d90;
// @baa 0x00c92590
int sub_00c92590(void)
{
  if (g_026b5d90 == 0) {
    g_026b5d90 = sub_00937270(L"Engine");
    sub_00937330();
  }
  return g_026b5d90;
}

int sub_00937960(...);
int sub_00938f20(void);
extern undefined4 g_026b5da0;
// @baa 0x00c925c0
int sub_00c925c0(void)
{
  if (g_026b5da0 == 0) {
    g_026b5da0 = sub_00937960(L"Engine");
    sub_00938f20();
  }
  return g_026b5da0;
}

int sub_00937480(...);
int sub_00937540(void);
extern undefined4 g_026b5d94;
// @baa 0x00c925f0
int sub_00c925f0(void)
{
  if (g_026b5d94 == 0) {
    g_026b5d94 = sub_00937480(L"Engine");
    sub_00937540();
  }
  return g_026b5d94;
}

int sub_00937a20(...);
int sub_00937ae0(void);
extern undefined4 g_026b5da4;
// @baa 0x00c92620
int sub_00c92620(void)
{
  if (g_026b5da4 == 0) {
    g_026b5da4 = sub_00937a20(L"Engine");
    sub_00937ae0();
  }
  return g_026b5da4;
}

int sub_00834550(void);
int sub_00839fd0(...);
extern undefined4 g_026b55c8;
// @baa 0x00c92780
int sub_00c92780(void)
{
  if (g_026b55c8 == 0) {
    g_026b55c8 = sub_00839fd0(L"Engine");
    sub_00834550();
  }
  return g_026b55c8;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02085e0c;
// @baa 0x00c927b0
undefined4 * UUnrealEdEngine::sub_00c927b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02085e0c);
  return param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026c55fc;
extern undefined4 g_026c5600;
extern undefined4 g_026c5604;
// @baa 0x00c927d0
undefined * sub_00c927d0(void)
{
  if ((g_026c5604 & 1) == 0) {
    g_026c5604 = g_026c5604 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c55fc = (undefined4)(&g_026af518);
    g_026c5600 = (undefined4)(L"HLinkedObjProxy");
  }
  return (undefined *)(&g_026c55fc);
}

void sub_00c38ac0();
// @baa 0x00c92850
void sub_00c92850(void) { sub_00c38ac0(); }

extern undefined4 g_02085e3c;
// @baa 0x00c92860
undefined4 * UUnrealEdEngine::sub_00c92860(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02085e3c);
  param_1[5] = param_3;
  return param_1;
}

extern undefined4 g_026c5608;
extern undefined4 g_026c560c;
extern undefined4 g_026c5610;
// @baa 0x00c92890
undefined * sub_00c92890(void)
{
  if ((g_026c5610 & 1) == 0) {
    g_026c5610 = g_026c5610 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c5608 = (undefined4)(&g_026af518);
    g_026c560c = (undefined4)(L"HLinkedObjProxySpecial");
  }
  return (undefined *)(&g_026c5608);
}

int sub_008f4f00(...);
int sub_00901850(void);
extern undefined4 g_026b5cb8;
// @baa 0x00c99110
int sub_00c99110(void)
{
  if (g_026b5cb8 == 0) {
    g_026b5cb8 = sub_008f4f00(L"Engine");
    sub_00901850();
  }
  return g_026b5cb8;
}

int sub_008f3280(...);
int sub_00900200(void);
extern undefined4 g_026b5c20;
// @baa 0x00c99140
int sub_00c99140(void)
{
  if (g_026b5c20 == 0) {
    g_026b5c20 = sub_008f3280(L"Engine");
    sub_00900200();
  }
  return g_026b5c20;
}

int sub_008f5200(...);
int sub_00901d90(void);
extern undefined4 g_026b5cc8;
// @baa 0x00c99170
int sub_00c99170(void)
{
  if (g_026b5cc8 == 0) {
    g_026b5cc8 = sub_008f5200(L"Engine");
    sub_00901d90();
  }
  return g_026b5cc8;
}

int sub_008f4e40(...);
int sub_00901700(void);
extern undefined4 g_026b5cb4;
// @baa 0x00c991a0
int sub_00c991a0(void)
{
  if (g_026b5cb4 == 0) {
    g_026b5cb4 = sub_008f4e40(L"Engine");
    sub_00901700();
  }
  return g_026b5cb4;
}

int sub_008f3d00(...);
int sub_00900890(void);
extern undefined4 g_026b5c58;
// @baa 0x00c991d0
int sub_00c991d0(void)
{
  if (g_026b5c58 == 0) {
    g_026b5c58 = sub_008f3d00(L"Engine");
    sub_00900890();
  }
  return g_026b5c58;
}

int sub_008f3f40(...);
int sub_00900c80(void);
extern undefined4 g_026b5c64;
// @baa 0x00c99200
int sub_00c99200(void)
{
  if (g_026b5c64 == 0) {
    g_026b5c64 = sub_008f3f40(L"Engine");
    sub_00900c80();
  }
  return g_026b5c64;
}

int sub_008f4000(...);
int sub_00900dd0(void);
extern undefined4 g_026b5c68;
// @baa 0x00c99230
int sub_00c99230(void)
{
  if (g_026b5c68 == 0) {
    g_026b5c68 = sub_008f4000(L"Engine");
    sub_00900dd0();
  }
  return g_026b5c68;
}

int sub_008f4480(...);
int sub_00900f20(void);
extern undefined4 g_026b5c80;
// @baa 0x00c99260
int sub_00c99260(void)
{
  if (g_026b5c80 == 0) {
    g_026b5c80 = sub_008f4480(L"Engine");
    sub_00900f20();
  }
  return g_026b5c80;
}

int sub_008f46c0(...);
int sub_00901070(void);
extern undefined4 g_026b5c8c;
// @baa 0x00c99290
int sub_00c99290(void)
{
  if (g_026b5c8c == 0) {
    g_026b5c8c = sub_008f46c0(L"Engine");
    sub_00901070();
  }
  return g_026b5c8c;
}

int sub_008f5140(...);
int sub_00901c40(void);
extern undefined4 g_026b5cc4;
// @baa 0x00c992c0
int sub_00c992c0(void)
{
  if (g_026b5cc4 == 0) {
    g_026b5cc4 = sub_008f5140(L"Engine");
    sub_00901c40();
  }
  return g_026b5cc4;
}

int sub_008f4d80(...);
int sub_009015b0(void);
extern undefined4 g_026b5cb0;
// @baa 0x00c992f0
int sub_00c992f0(void)
{
  if (g_026b5cb0 == 0) {
    g_026b5cb0 = sub_008f4d80(L"Engine");
    sub_009015b0();
  }
  return g_026b5cb0;
}

int sub_008f3940(...);
int sub_00900740(void);
extern undefined4 g_026b5c44;
// @baa 0x00c99320
int sub_00c99320(void)
{
  if (g_026b5c44 == 0) {
    g_026b5c44 = sub_008f3940(L"Engine");
    sub_00900740();
  }
  return g_026b5c44;
}

int sub_008f4900(...);
int sub_008fd380(void);
extern undefined4 g_026b5c98;
// @baa 0x00c99350
int sub_00c99350(void)
{
  if (g_026b5c98 == 0) {
    g_026b5c98 = sub_008f4900(L"Engine");
    sub_008fd380();
  }
  return g_026b5c98;
}

int sub_008f49c0(...);
int sub_008fd4d0(void);
extern undefined4 g_026b5c9c;
// @baa 0x00c99380
int sub_00c99380(void)
{
  if (g_026b5c9c == 0) {
    g_026b5c9c = sub_008f49c0(L"Engine");
    sub_008fd4d0();
  }
  return g_026b5c9c;
}

int sub_008f4a80(...);
int sub_008fd620(void);
extern undefined4 g_026b5ca0;
// @baa 0x00c993b0
int sub_00c993b0(void)
{
  if (g_026b5ca0 == 0) {
    g_026b5ca0 = sub_008f4a80(L"Engine");
    sub_008fd620();
  }
  return g_026b5ca0;
}

int sub_008f4b40(...);
int sub_008fd770(void);
extern undefined4 g_026b5ca4;
// @baa 0x00c993e0
int sub_00c993e0(void)
{
  if (g_026b5ca4 == 0) {
    g_026b5ca4 = sub_008f4b40(L"Engine");
    sub_008fd770();
  }
  return g_026b5ca4;
}

int sub_008f04c0(...);
int sub_008f8220(void);
extern undefined4 g_026b5b2c;
// @baa 0x00c99410
int sub_00c99410(void)
{
  if (g_026b5b2c == 0) {
    g_026b5b2c = sub_008f04c0(L"Engine");
    sub_008f8220();
  }
  return g_026b5b2c;
}

int sub_008f0580(...);
int sub_008f8370(void);
extern undefined4 g_026b5b30;
// @baa 0x00c99440
int sub_00c99440(void)
{
  if (g_026b5b30 == 0) {
    g_026b5b30 = sub_008f0580(L"Engine");
    sub_008f8370();
  }
  return g_026b5b30;
}

int sub_008f0640(...);
int sub_008f84c0(void);
extern undefined4 g_026b5b34;
// @baa 0x00c99470
int sub_00c99470(void)
{
  if (g_026b5b34 == 0) {
    g_026b5b34 = sub_008f0640(L"Engine");
    sub_008f84c0();
  }
  return g_026b5b34;
}

int sub_008f0700(...);
int sub_008f8610(void);
extern undefined4 g_026b5b38;
// @baa 0x00c994a0
int sub_00c994a0(void)
{
  if (g_026b5b38 == 0) {
    g_026b5b38 = sub_008f0700(L"Engine");
    sub_008f8610();
  }
  return g_026b5b38;
}

int sub_008f07c0(...);
int sub_008f8760(void);
extern undefined4 g_026b5b3c;
// @baa 0x00c994d0
int sub_00c994d0(void)
{
  if (g_026b5b3c == 0) {
    g_026b5b3c = sub_008f07c0(L"Engine");
    sub_008f8760();
  }
  return g_026b5b3c;
}

int sub_008f0880(...);
int sub_008f88b0(void);
extern undefined4 g_026b5b40;
// @baa 0x00c99500
int sub_00c99500(void)
{
  if (g_026b5b40 == 0) {
    g_026b5b40 = sub_008f0880(L"Engine");
    sub_008f88b0();
  }
  return g_026b5b40;
}

int sub_008f0940(...);
int sub_008f8a00(void);
extern undefined4 g_026b5b44;
// @baa 0x00c99530
int sub_00c99530(void)
{
  if (g_026b5b44 == 0) {
    g_026b5b44 = sub_008f0940(L"Engine");
    sub_008f8a00();
  }
  return g_026b5b44;
}

int sub_008f0b80(...);
int sub_008f8ca0(void);
extern undefined4 g_026b5b50;
// @baa 0x00c99560
int sub_00c99560(void)
{
  if (g_026b5b50 == 0) {
    g_026b5b50 = sub_008f0b80(L"Engine");
    sub_008f8ca0();
  }
  return g_026b5b50;
}

int sub_008f0c40(...);
int sub_008f8df0(void);
extern undefined4 g_026b5b54;
// @baa 0x00c99590
int sub_00c99590(void)
{
  if (g_026b5b54 == 0) {
    g_026b5b54 = sub_008f0c40(L"Engine");
    sub_008f8df0();
  }
  return g_026b5b54;
}

int sub_008f0a00(...);
int sub_008f8b50(void);
extern undefined4 g_026b5b48;
// @baa 0x00c995c0
int sub_00c995c0(void)
{
  if (g_026b5b48 == 0) {
    g_026b5b48 = sub_008f0a00(L"Engine");
    sub_008f8b50();
  }
  return g_026b5b48;
}

int sub_008f0ac0(...);
int sub_008ff0f0(void);
extern undefined4 g_026b5b4c;
// @baa 0x00c995f0
int sub_00c995f0(void)
{
  if (g_026b5b4c == 0) {
    g_026b5b4c = sub_008f0ac0(L"Engine");
    sub_008ff0f0();
  }
  return g_026b5b4c;
}

int sub_008f0dc0(...);
int sub_008ff240(void);
extern undefined4 g_026b5b5c;
// @baa 0x00c99620
int sub_00c99620(void)
{
  if (g_026b5b5c == 0) {
    g_026b5b5c = sub_008f0dc0(L"Engine");
    sub_008ff240();
  }
  return g_026b5b5c;
}

int sub_008f0e80(...);
int sub_008ff390(void);
extern undefined4 g_026b5b60;
// @baa 0x00c99650
int sub_00c99650(void)
{
  if (g_026b5b60 == 0) {
    g_026b5b60 = sub_008f0e80(L"Engine");
    sub_008ff390();
  }
  return g_026b5b60;
}

int sub_008f0f40(...);
int sub_008f9090(void);
extern undefined4 g_026b5b64;
// @baa 0x00c99680
int sub_00c99680(void)
{
  if (g_026b5b64 == 0) {
    g_026b5b64 = sub_008f0f40(L"Engine");
    sub_008f9090();
  }
  return g_026b5b64;
}

int sub_008f1240(...);
int sub_008f95d0(void);
extern undefined4 g_026b5b74;
// @baa 0x00c996e0
int sub_00c996e0(void)
{
  if (g_026b5b74 == 0) {
    g_026b5b74 = sub_008f1240(L"Engine");
    sub_008f95d0();
  }
  return g_026b5b74;
}

int sub_008f1540(...);
int sub_008f9b10(void);
extern undefined4 g_026b5b84;
// @baa 0x00c99710
int sub_00c99710(void)
{
  if (g_026b5b84 == 0) {
    g_026b5b84 = sub_008f1540(L"Engine");
    sub_008f9b10();
  }
  return g_026b5b84;
}

int sub_008f16c0(...);
int sub_008f9db0(void);
extern undefined4 g_026b5b8c;
// @baa 0x00c99740
int sub_00c99740(void)
{
  if (g_026b5b8c == 0) {
    g_026b5b8c = sub_008f16c0(L"Engine");
    sub_008f9db0();
  }
  return g_026b5b8c;
}

int sub_008f1900(...);
int sub_008fa1a0(void);
extern undefined4 g_026b5b98;
// @baa 0x00c99770
int sub_00c99770(void)
{
  if (g_026b5b98 == 0) {
    g_026b5b98 = sub_008f1900(L"Engine");
    sub_008fa1a0();
  }
  return g_026b5b98;
}

int sub_008f1a80(...);
int sub_008fa440(void);
extern undefined4 g_026b5ba0;
// @baa 0x00c997a0
int sub_00c997a0(void)
{
  if (g_026b5ba0 == 0) {
    g_026b5ba0 = sub_008f1a80(L"Engine");
    sub_008fa440();
  }
  return g_026b5ba0;
}

int sub_008f1c00(...);
int sub_008fa6e0(void);
extern undefined4 g_026b5ba8;
// @baa 0x00c997d0
int sub_00c997d0(void)
{
  if (g_026b5ba8 == 0) {
    g_026b5ba8 = sub_008f1c00(L"Engine");
    sub_008fa6e0();
  }
  return g_026b5ba8;
}

int sub_008c92d0(...);
int sub_008d61b0(void);
extern undefined4 g_026b5b14;
// @baa 0x00c99800
int sub_00c99800(void)
{
  if (g_026b5b14 == 0) {
    g_026b5b14 = sub_008c92d0(L"Engine");
    sub_008d61b0();
  }
  return g_026b5b14;
}

int sub_008d0270(...);
int sub_008d5c70(void);
extern undefined4 g_026b5af0;
// @baa 0x00c99830
int sub_00c99830(void)
{
  if (g_026b5af0 == 0) {
    g_026b5af0 = sub_008d0270(L"Engine");
    sub_008d5c70();
  }
  return g_026b5af0;
}

int sub_008d04b0(...);
int sub_008d5f10(void);
extern undefined4 g_026b5b0c;
// @baa 0x00c99860
int sub_00c99860(void)
{
  if (g_026b5b0c == 0) {
    g_026b5b0c = sub_008d04b0(L"Engine");
    sub_008d5f10();
  }
  return g_026b5b0c;
}

int sub_008d0570(...);
int sub_008d6060(void);
extern undefined4 g_026b5b10;
// @baa 0x00c99890
int sub_00c99890(void)
{
  if (g_026b5b10 == 0) {
    g_026b5b10 = sub_008d0570(L"Engine");
    sub_008d6060();
  }
  return g_026b5b10;
}

// @baa 0x00c998c0
IMPLEMENT_CLASS_AT(ACrowdAgent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 9);

// @baa 0x00c999d0
int ACrowdAgent::vf_000(void) { return 1; }

// @baa 0x00c999e0
bool ACrowdAgent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c99a20
IMPLEMENT_CLASS_AT(ACrowdAttractor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 10);

// @baa 0x00c99b30
int ACrowdAttractor::vf_000(void) { return 1; }

// @baa 0x00c99b40
bool ACrowdAttractor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c99b80
IMPLEMENT_CLASS_AT(USeqAct_CrowdSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 11);

// @baa 0x00c99c90
int USeqAct_CrowdSpawner::vf_000(void) { return 1; }

// @baa 0x00c99ce0
IMPLEMENT_CLASS_AT(ACrowdReplicationActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 12);

// @baa 0x00c99df0
int ACrowdReplicationActor::vf_000(void) { return 1; }

// @baa 0x00c99e00
bool ACrowdReplicationActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c99e90
void sub_00c99e90(int param_1, undefined4 param_2, undefined4 param_3)
{
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  *(undefined4 *)(param_1 + 0x1c4) = param_3;
  return;
}

struct C {
    void sub_00c9a260(char);
};

// @baa 0x00c9a260
void C::sub_00c9a260(char param_2)
{
    int param_1 = (int)this;

  *(char *)(param_1 + 0x1ac) = param_2;
  if ((param_2 == '\0') && (*(int *)(param_1 + 500) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 500) + 0xf8) = 0;
    *(undefined1 *)(*(int *)(param_1 + 500) + 0xf9) = 0;
    *(undefined1 *)(*(int *)(param_1 + 500) + 0xfa) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x1e8) + 0x4d4) = 2;
  }
  return;
}

// @baa 0x00c9a590
IMPLEMENT_CLASS_AT(UCurveEdPresetCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCurveEdPresetCurve.cpp", 11);

// @baa 0x00c9a6a0
int UCurveEdPresetCurve::vf_000(void) { return 1; }

// @baa 0x00c9a6b0
bool UCurveEdPresetCurve::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00c342c0(...);
int sub_00c3b430(void);
extern undefined4 g_026c09ec;
// @baa 0x00c9a6f0
int sub_00c9a6f0(void)
{
  if (g_026c09ec == 0) {
    g_026c09ec = sub_00c342c0(L"Engine");
    sub_00c3b430();
  }
  return g_026c09ec;
}

int sub_00c35040(...);
int sub_00c419b0(void);
extern undefined4 g_026c0a34;
// @baa 0x00c9b200
int sub_00c9b200(void)
{
  if (g_026c0a34 == 0) {
    g_026c0a34 = sub_00c35040(L"Engine");
    sub_00c419b0();
  }
  return g_026c0a34;
}

int sub_00c34bc0(...);
int sub_00c41710(void);
extern undefined4 g_026c0a1c;
// @baa 0x00c9b230
int sub_00c9b230(void)
{
  if (g_026c0a1c == 0) {
    g_026c0a1c = sub_00c34bc0(L"Engine");
    sub_00c41710();
  }
  return g_026c0a1c;
}

int sub_00c34b00(...);
int sub_00c415c0(void);
extern undefined4 g_026c0a18;
// @baa 0x00c9b260
int sub_00c9b260(void)
{
  if (g_026c0a18 == 0) {
    g_026c0a18 = sub_00c34b00(L"Engine");
    sub_00c415c0();
  }
  return g_026c0a18;
}

int sub_00c34f80(...);
int sub_00c446e0(void);
extern undefined4 g_026c0a30;
// @baa 0x00c9b290
int sub_00c9b290(void)
{
  if (g_026c0a30 == 0) {
    g_026c0a30 = sub_00c34f80(L"Engine");
    sub_00c446e0();
  }
  return g_026c0a30;
}

int sub_00c34e00(...);
int sub_00c43af0(void);
extern undefined4 g_026c0a28;
// @baa 0x00c9b2c0
int sub_00c9b2c0(void)
{
  if (g_026c0a28 == 0) {
    g_026c0a28 = sub_00c34e00(L"Engine");
    sub_00c43af0();
  }
  return g_026c0a28;
}

int sub_00c34ec0(...);
int sub_00c43c40(void);
extern undefined4 g_026c0a2c;
// @baa 0x00c9b2f0
int sub_00c9b2f0(void)
{
  if (g_026c0a2c == 0) {
    g_026c0a2c = sub_00c34ec0(L"Engine");
    sub_00c43c40();
  }
  return g_026c0a2c;
}

int sub_00c33900(...);
int sub_00c3a320(void);
extern undefined4 g_026c09b8;
// @baa 0x00c9b320
int sub_00c9b320(void)
{
  if (g_026c09b8 == 0) {
    g_026c09b8 = sub_00c33900(L"Engine");
    sub_00c3a320();
  }
  return g_026c09b8;
}

int sub_00c35d00(...);
int sub_00c3d260(void);
extern undefined4 g_026c0a78;
// @baa 0x00c9b350
int sub_00c9b350(void)
{
  if (g_026c0a78 == 0) {
    g_026c0a78 = sub_00c35d00(L"Engine");
    sub_00c3d260();
  }
  return g_026c0a78;
}

int sub_00c35dc0(...);
int sub_00c3d3b0(void);
extern undefined4 g_026c0a7c;
// @baa 0x00c9b380
int sub_00c9b380(void)
{
  if (g_026c0a7c == 0) {
    g_026c0a7c = sub_00c35dc0(L"Engine");
    sub_00c3d3b0();
  }
  return g_026c0a7c;
}

int sub_00c34a40(...);
int sub_00c3bc10(void);
extern undefined4 g_026c0a14;
// @baa 0x00c9b3b0
int sub_00c9b3b0(void)
{
  if (g_026c0a14 == 0) {
    g_026c0a14 = sub_00c34a40(L"Engine");
    sub_00c3bc10();
  }
  return g_026c0a14;
}

int sub_00c36180(...);
int sub_00c3db00(void);
extern undefined4 g_026c0a94;
// @baa 0x00c9b3e0
int sub_00c9b3e0(void)
{
  if (g_026c0a94 == 0) {
    g_026c0a94 = sub_00c36180(L"Engine");
    sub_00c3db00();
  }
  return g_026c0a94;
}

int sub_00d87760(...);
int sub_00d88e00(void);
extern undefined4 g_026c5984;
// @baa 0x00c9be80
int sub_00c9be80(void)
{
  if (g_026c5984 == 0) {
    g_026c5984 = sub_00d87760(L"Engine");
    sub_00d88e00();
  }
  return g_026c5984;
}

int sub_00d87820(...);
int sub_00d8b050(void);
extern undefined4 g_026c5988;
// @baa 0x00c9beb0
int sub_00c9beb0(void)
{
  if (g_026c5988 == 0) {
    g_026c5988 = sub_00d87820(L"Engine");
    sub_00d8b050();
  }
  return g_026c5988;
}

int sub_00a343a0(void);
int sub_00a505e0(...);
extern undefined4 g_026b6854;
// @baa 0x00c9bee0
int sub_00c9bee0(void)
{
  if (g_026b6854 == 0) {
    g_026b6854 = sub_00a505e0(L"Engine");
    sub_00a343a0();
  }
  return g_026b6854;
}

int sub_00a345d0(void);
int sub_00a506a0(...);
extern undefined4 g_026b6858;
// @baa 0x00c9bf10
int sub_00c9bf10(void)
{
  if (g_026b6858 == 0) {
    g_026b6858 = sub_00a506a0(L"Engine");
    sub_00a345d0();
  }
  return g_026b6858;
}

int sub_00a347f0(void);
int sub_00a50760(...);
extern undefined4 g_026b685c;
// @baa 0x00c9bf40
int sub_00c9bf40(void)
{
  if (g_026b685c == 0) {
    g_026b685c = sub_00a50760(L"Engine");
    sub_00a347f0();
  }
  return g_026b685c;
}

int sub_00d878e0(...);
int sub_00d88f50(void);
extern undefined4 g_026c598c;
// @baa 0x00c9bf70
int sub_00c9bf70(void)
{
  if (g_026c598c == 0) {
    g_026c598c = sub_00d878e0(L"Engine");
    sub_00d88f50();
  }
  return g_026c598c;
}

int sub_00d879a0(...);
int sub_00d8b1a0(void);
extern undefined4 g_026c5990;
// @baa 0x00c9bfa0
int sub_00c9bfa0(void)
{
  if (g_026c5990 == 0) {
    g_026c5990 = sub_00d879a0(L"Engine");
    sub_00d8b1a0();
  }
  return g_026c5990;
}

int sub_00d87a60(...);
int sub_00d8b2f0(void);
extern undefined4 g_026c5994;
// @baa 0x00c9bfd0
int sub_00c9bfd0(void)
{
  if (g_026c5994 == 0) {
    g_026c5994 = sub_00d87a60(L"Engine");
    sub_00d8b2f0();
  }
  return g_026c5994;
}

int sub_00a34bd0(void);
int sub_00a50820(...);
extern undefined4 g_026b6860;
// @baa 0x00c9c000
int sub_00c9c000(void)
{
  if (g_026b6860 == 0) {
    g_026b6860 = sub_00a50820(L"Engine");
    sub_00a34bd0();
  }
  return g_026b6860;
}

int sub_00a50b20(...);
int sub_00a51d60(void);
extern undefined4 g_026b6870;
// @baa 0x00c9c030
int sub_00c9c030(void)
{
  if (g_026b6870 == 0) {
    g_026b6870 = sub_00a50b20(L"Engine");
    sub_00a51d60();
  }
  return g_026b6870;
}

int sub_00a509a0(...);
int sub_00a51c10(void);
extern undefined4 g_026b6868;
// @baa 0x00c9c060
int sub_00c9c060(void)
{
  if (g_026b6868 == 0) {
    g_026b6868 = sub_00a509a0(L"Engine");
    sub_00a51c10();
  }
  return g_026b6868;
}

int sub_009d9180(void);
int sub_009f3840(...);
extern undefined4 g_026b6434;
// @baa 0x00c9c090
int sub_00c9c090(void)
{
  if (g_026b6434 == 0) {
    g_026b6434 = sub_009f3840(L"Engine");
    sub_009d9180();
  }
  return g_026b6434;
}

int sub_009d9020(void);
int sub_009f3780(...);
extern undefined4 g_026b6430;
// @baa 0x00c9c0c0
int sub_00c9c0c0(void)
{
  if (g_026b6430 == 0) {
    g_026b6430 = sub_009f3780(L"Engine");
    sub_009d9020();
  }
  return g_026b6430;
}

int sub_00a3bc50(...);
int sub_00a41de0(void);
extern undefined4 g_026b6848;
// @baa 0x00c9c0f0
int sub_00c9c0f0(void)
{
  if (g_026b6848 == 0) {
    g_026b6848 = sub_00a3bc50(L"Engine");
    sub_00a41de0();
  }
  return g_026b6848;
}

int sub_00a3bdd0(...);
int sub_00a41f30(void);
extern undefined4 g_026b684c;
// @baa 0x00c9c120
int sub_00c9c120(void)
{
  if (g_026b684c == 0) {
    g_026b684c = sub_00a3bdd0(L"Engine");
    sub_00a41f30();
  }
  return g_026b684c;
}

int sub_00a3bff0(...);
int sub_00a42080(void);
extern undefined4 g_026b6850;
// @baa 0x00c9c150
int sub_00c9c150(void)
{
  if (g_026b6850 == 0) {
    g_026b6850 = sub_00a3bff0(L"Engine");
    sub_00a42080();
  }
  return g_026b6850;
}

int sub_00ceb540(void);
int sub_00cfaa40(...);
extern undefined4 g_026c5740;
// @baa 0x00c9c180
int sub_00c9c180(void)
{
  if (g_026c5740 == 0) {
    g_026c5740 = sub_00cfaa40(L"Engine");
    sub_00ceb540();
  }
  return g_026c5740;
}

int sub_00d032e0(...);
int sub_00d033a0(void);
extern undefined4 g_026c5744;
// @baa 0x00c9c1b0
int sub_00c9c1b0(void)
{
  if (g_026c5744 == 0) {
    g_026c5744 = sub_00d032e0(L"Engine");
    sub_00d033a0();
  }
  return g_026c5744;
}

int sub_00d034f0(void);
int sub_00d08a90(...);
extern undefined4 g_026c5748;
// @baa 0x00c9c1e0
int sub_00c9c1e0(void)
{
  if (g_026c5748 == 0) {
    g_026c5748 = sub_00d08a90(L"Engine");
    sub_00d034f0();
  }
  return g_026c5748;
}

int sub_00d07760(...);
int sub_00d0aaf0(void);
extern undefined4 g_026c566c;
// @baa 0x00c9c210
int sub_00c9c210(void)
{
  if (g_026c566c == 0) {
    g_026c566c = sub_00d07760(L"Engine");
    sub_00d0aaf0();
  }
  return g_026c566c;
}

int sub_00d028e0(void);
int sub_00d07d60(...);
extern undefined4 g_026c56b0;
// @baa 0x00c9c2a0
int sub_00c9c2a0(void)
{
  if (g_026c56b0 == 0) {
    g_026c56b0 = sub_00d07d60(L"Engine");
    sub_00d028e0();
  }
  return g_026c56b0;
}

int sub_00d087e0(...);
int sub_00d0c200(void);
extern undefined4 g_026c5728;
// @baa 0x00c9c570
int sub_00c9c570(void)
{
  if (g_026c5728 == 0) {
    g_026c5728 = sub_00d087e0(L"Engine");
    sub_00d0c200();
  }
  return g_026c5728;
}

int sub_00d07ca0(...);
int sub_00d0b0f0(void);
extern undefined4 g_026c56a8;
// @baa 0x00c9c5a0
int sub_00c9c5a0(void)
{
  if (g_026c56a8 == 0) {
    g_026c56a8 = sub_00d07ca0(L"Engine");
    sub_00d0b0f0();
  }
  return g_026c56a8;
}

int sub_00d08420(...);
int sub_00d0bb70(void);
extern undefined4 g_026c56f8;
// @baa 0x00c9c5d0
int sub_00c9c5d0(void)
{
  if (g_026c56f8 == 0) {
    g_026c56f8 = sub_00d08420(L"Engine");
    sub_00d0bb70();
  }
  return g_026c56f8;
}

int sub_00d08120(...);
int sub_00d0b630(void);
extern undefined4 g_026c56d8;
// @baa 0x00c9c600
int sub_00c9c600(void)
{
  if (g_026c56d8 == 0) {
    g_026c56d8 = sub_00d08120(L"Engine");
    sub_00d0b630();
  }
  return g_026c56d8;
}

int sub_00d08360(...);
int sub_00d0ba20(void);
extern undefined4 g_026c56f0;
// @baa 0x00c9c630
int sub_00c9c630(void)
{
  if (g_026c56f0 == 0) {
    g_026c56f0 = sub_00d08360(L"Engine");
    sub_00d0ba20();
  }
  return g_026c56f0;
}

int sub_00d07be0(...);
int sub_00d0afa0(void);
extern undefined4 g_026c56a0;
// @baa 0x00c9c660
int sub_00c9c660(void)
{
  if (g_026c56a0 == 0) {
    g_026c56a0 = sub_00d07be0(L"Engine");
    sub_00d0afa0();
  }
  return g_026c56a0;
}

int sub_00d02cd0(void);
int sub_00d088a0(...);
extern undefined4 g_026c5730;
// @baa 0x00c9c690
int sub_00c9c690(void)
{
  if (g_026c5730 == 0) {
    g_026c5730 = sub_00d088a0(L"Engine");
    sub_00d02cd0();
  }
  return g_026c5730;
}

int sub_00ceaf90(void);
int sub_00ced950(...);
extern undefined4 g_026c5678;
// @baa 0x00c9c6c0
int sub_00c9c6c0(void)
{
  if (g_026c5678 == 0) {
    g_026c5678 = sub_00ced950(L"Engine");
    sub_00ceaf90();
  }
  return g_026c5678;
}

int sub_00cee190(...);
int sub_00cf1c00(void);
extern undefined4 g_026c56d4;
// @baa 0x00c9c6f0
int sub_00c9c6f0(void)
{
  if (g_026c56d4 == 0) {
    g_026c56d4 = sub_00cee190(L"Engine");
    sub_00cf1c00();
  }
  return g_026c56d4;
}

int sub_00cee9d0(...);
int sub_00cf2a70(void);
extern undefined4 g_026c572c;
// @baa 0x00c9c720
int sub_00c9c720(void)
{
  if (g_026c572c == 0) {
    g_026c572c = sub_00cee9d0(L"Engine");
    sub_00cf2a70();
  }
  return g_026c572c;
}

int sub_00cee550(...);
int sub_00cf2290(void);
extern undefined4 g_026c56fc;
// @baa 0x00c9c750
int sub_00c9c750(void)
{
  if (g_026c56fc == 0) {
    g_026c56fc = sub_00cee550(L"Engine");
    sub_00cf2290();
  }
  return g_026c56fc;
}

int sub_00cede90(...);
int sub_00cf16c0(void);
extern undefined4 g_026c56b4;
// @baa 0x00c9c7b0
int sub_00c9c7b0(void)
{
  if (g_026c56b4 == 0) {
    g_026c56b4 = sub_00cede90(L"Engine");
    sub_00cf16c0();
  }
  return g_026c56b4;
}

int sub_00cee6d0(...);
int sub_00cf2530(void);
extern undefined4 g_026c570c;
// @baa 0x00c9c7e0
int sub_00c9c7e0(void)
{
  if (g_026c570c == 0) {
    g_026c570c = sub_00cee6d0(L"Engine");
    sub_00cf2530();
  }
  return g_026c570c;
}

int sub_00cee010(...);
int sub_00cf1960(void);
extern undefined4 g_026c56c4;
// @baa 0x00c9c810
int sub_00c9c810(void)
{
  if (g_026c56c4 == 0) {
    g_026c56c4 = sub_00cee010(L"Engine");
    sub_00cf1960();
  }
  return g_026c56c4;
}

int sub_00cee3d0(...);
int sub_00cf1ff0(void);
extern undefined4 g_026c56ec;
// @baa 0x00c9c840
int sub_00c9c840(void)
{
  if (g_026c56ec == 0) {
    g_026c56ec = sub_00cee3d0(L"Engine");
    sub_00cf1ff0();
  }
  return g_026c56ec;
}

int sub_00cee310(...);
int sub_00cf1ea0(void);
extern undefined4 g_026c56e4;
// @baa 0x00c9c870
int sub_00c9c870(void)
{
  if (g_026c56e4 == 0) {
    g_026c56e4 = sub_00cee310(L"Engine");
    sub_00cf1ea0();
  }
  return g_026c56e4;
}

int sub_00cee790(...);
int sub_00cf2680(void);
extern undefined4 g_026c5714;
// @baa 0x00c9c8a0
int sub_00c9c8a0(void)
{
  if (g_026c5714 == 0) {
    g_026c5714 = sub_00cee790(L"Engine");
    sub_00cf2680();
  }
  return g_026c5714;
}

int sub_00ceeb50(...);
int sub_00cf2d10(void);
extern undefined4 g_026c573c;
// @baa 0x00c9c8d0
int sub_00c9c8d0(void)
{
  if (g_026c573c == 0) {
    g_026c573c = sub_00ceeb50(L"Engine");
    sub_00cf2d10();
  }
  return g_026c573c;
}

int sub_00ceda10(...);
int sub_00cf12d0(void);
extern undefined4 g_026c567c;
// @baa 0x00c9c900
int sub_00c9c900(void)
{
  if (g_026c567c == 0) {
    g_026c567c = sub_00ceda10(L"Engine");
    sub_00cf12d0();
  }
  return g_026c567c;
}

int sub_00ceddd0(...);
int sub_00cfa720(void);
extern undefined4 g_026c56ac;
// @baa 0x00c9c930
int sub_00c9c930(void)
{
  if (g_026c56ac == 0) {
    g_026c56ac = sub_00ceddd0(L"Engine");
    sub_00cfa720();
  }
  return g_026c56ac;
}

int sub_00cedc50(...);
int sub_00cfa480(void);
extern undefined4 g_026c569c;
// @baa 0x00c9c960
int sub_00c9c960(void)
{
  if (g_026c569c == 0) {
    g_026c569c = sub_00cedc50(L"Engine");
    sub_00cfa480();
  }
  return g_026c569c;
}
