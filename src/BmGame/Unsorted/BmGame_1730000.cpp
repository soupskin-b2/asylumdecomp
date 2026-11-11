// BmGame_1730000.cpp (part 1 of 22): 80 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01730c10
IMPLEMENT_CLASS_AT(ARHarpoonDragBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 22);

// @baa 0x01730ca0
// @baa 0x01730d00
IMPLEMENT_CLASS_AT(ARHarpoonDragFloatingPlatformBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonDragFloatingPlatformBase.cpp", 9);

// @baa 0x01730d60
// @baa 0x01730dc0
IMPLEMENT_CLASS_AT(ARHarpoonDragTrack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonDragTrack.cpp", 8);

// @baa 0x01730e20
// @baa 0x01730e80
IMPLEMENT_CLASS_AT(ARWaterLevelMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonDragFloatingPlatformBase.cpp", 10);

// @baa 0x01730ee0
// @baa 0x01731040
IMPLEMENT_CLASS_AT(ARHarpoonDragPhysicsBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 24);

// @baa 0x017310c0
// @baa 0x01731470
IMPLEMENT_CLASS_AT(ARPatrolPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 16);

// @baa 0x017314e0
int sub_017156a0(void);
int sub_0172ee90(...);
extern undefined4 g_026e24bc;
// @baa 0x01731510
int sub_01731510(void)
{
  if (g_026e24bc == 0) {
    g_026e24bc = sub_0172ee90(L"BmGame");
    sub_017156a0();
  }
  return g_026e24bc;
}

int sub_01715960(void);
int sub_0172ef50(...);
extern undefined4 g_026e24c4;
// @baa 0x01731540
int sub_01731540(void)
{
  if (g_026e24c4 == 0) {
    g_026e24c4 = sub_0172ef50(L"BmGame");
    sub_01715960();
  }
  return g_026e24c4;
}

// @baa 0x01731570
IMPLEMENT_CLASS_AT(ARSpecialMoveEnvironmentObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 19);

// @baa 0x017316e0
// @baa 0x01731770
IMPLEMENT_CLASS_AT(ARLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLadder.cpp", 13);

// @baa 0x017317d0
struct C { C* sub_01731840(int a0); };

// @baa 0x01731840
C* C::sub_01731840(int a0) { return this; }

struct C_01731850 { C_01731850* sub_01731850(int a0); };

// @baa 0x01731850
C_01731850* C_01731850::sub_01731850(int a0) { return this; }

struct C_01731860 { C_01731860* sub_01731860(int a0); };

// @baa 0x01731860
C_01731860* C_01731860::sub_01731860(int a0) { return this; }

struct C_01731870 { C_01731870* sub_01731870(int a0); };

// @baa 0x01731870
C_01731870* C_01731870::sub_01731870(int a0) { return this; }

struct C_017319d0 {
    int sub_017319d0();
};

// @baa 0x017319d0
int C_017319d0::sub_017319d0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x1cc;
}

struct A_017319e0 { virtual void sub_01731a70(); char pad[456]; };

struct B_017319e0 { virtual void sub_01731a70(); };

struct C_017319e0 : A_017319e0, B_017319e0 { virtual void sub_01731a70(); C_017319e0(); };

C_017319e0::C_017319e0() {}

// @baa 0x017319e0
void C_017319e0::sub_01731a70() {}

// @baa 0x01731ad0
IMPLEMENT_CLASS_AT(ARTunnelGrateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 20);

// @baa 0x01731b30
// @baa 0x01731b90
IMPLEMENT_CLASS_AT(ARTunnelFunnel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RTunnelFunnel.cpp", 13);

// @baa 0x01731bf0
// @baa 0x01731c50
IMPLEMENT_CLASS_AT(ARRandomDelay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRandomDelay.cpp", 8);

// @baa 0x01731cb0
void sub_01730b40();
// @baa 0x01731ce0
void sub_01731ce0(void) { sub_01730b40(); }

// @baa 0x01731d20
IMPLEMENT_CLASS_AT(ARChatteringTeethGadgetBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RChatteringTeethGadgetBase.cpp", 8);

// @baa 0x01731d80
// @baa 0x01731de0
IMPLEMENT_CLASS_AT(ARJokerGlassesGadgetBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RJokerGlassesGadgetBase.cpp", 5);

// @baa 0x01731e40
int sub_005c7a70(...);
int sub_01731ef0(void);
// @baa 0x01731f80
undefined4 ARJokerGunGadgetBase::sub_01731f80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01731ef0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x3b8);
  }
  return param_1;
}

// @baa 0x01731fe0
IMPLEMENT_CLASS_AT(ARPhysicsGrabber, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPhysicsGrabber.cpp", 14);

// @baa 0x01732040
// @baa 0x01732160
uint ARDisruptableObjectBase::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1b4) + 0x194) >> 9 & 1;
}

// @baa 0x01732280
IMPLEMENT_CLASS_AT(ARDisruptableObjectBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RDisruptable.cpp", 10);

// @baa 0x017322f0
// @baa 0x01732350
uint ARDisruptableObjectDoor::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1b0) + 0x194) >> 9 & 1;
}

struct S {
    void sub_007839c0();
    void sub_01732370();
    void sub_01732670();
};

// @baa 0x01732670
void S::sub_01732670() {
    sub_007839c0();
    sub_01732370();
}

// @baa 0x01732680
IMPLEMENT_CLASS_AT(ARDisruptableObjectDoor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RDisruptable.cpp", 11);

// @baa 0x017326e0
// @baa 0x01732740
IMPLEMENT_CLASS_AT(ARLevelSelectMenu, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGamePlatformSaveSupport.cpp", 16);

// @baa 0x01732800
int sub_01718b20(void);
int sub_0172f850(...);
extern undefined4 g_026e2510;
// @baa 0x01732830
int sub_01732830(void)
{
  if (g_026e2510 == 0) {
    g_026e2510 = sub_0172f850(L"BmGame");
    sub_01718b20();
  }
  return g_026e2510;
}

int sub_01718c80(void);
int sub_0172f910(...);
extern undefined4 g_026e2514;
// @baa 0x01732860
int sub_01732860(void)
{
  if (g_026e2514 == 0) {
    g_026e2514 = sub_0172f910(L"BmGame");
    sub_01718c80();
  }
  return g_026e2514;
}

struct C_01733120 { C_01733120* sub_01733120(void); };

// @baa 0x01733120
C_01733120* C_01733120::sub_01733120(void) { return this; }

// @baa 0x01733400
IMPLEMENT_CLASS_AT(URForceFieldConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RForceField.cpp", 11);

// @baa 0x01733490
int sub_01715c30(void);
int sub_01733c10(...);
extern undefined4 g_026e24d0;
// @baa 0x01734690
int sub_01734690(void)
{
  if (g_026e24d0 == 0) {
    g_026e24d0 = sub_01733c10(L"BmGame");
    sub_01715c30();
  }
  return g_026e24d0;
}

int sub_01717540(void);
int sub_01734210(...);
extern undefined4 g_026e24f0;
// @baa 0x017346c0
int sub_017346c0(void)
{
  if (g_026e24f0 == 0) {
    g_026e24f0 = sub_01734210(L"BmGame");
    sub_01717540();
  }
  return g_026e24f0;
}

int sub_01716c50(void);
int sub_01734150(...);
extern undefined4 g_026e24ec;
// @baa 0x017346f0
int sub_017346f0(void)
{
  if (g_026e24ec == 0) {
    g_026e24ec = sub_01734150(L"BmGame");
    sub_01716c50();
  }
  return g_026e24ec;
}

int sub_01715d90(void);
int sub_01733cd0(...);
extern undefined4 g_026e24d4;
// @baa 0x01734720
int sub_01734720(void)
{
  if (g_026e24d4 == 0) {
    g_026e24d4 = sub_01733cd0(L"BmGame");
    sub_01715d90();
  }
  return g_026e24d4;
}

int sub_01715800(void);
int sub_017339d0(...);
extern undefined4 g_026e24c0;
// @baa 0x01734750
int sub_01734750(void)
{
  if (g_026e24c0 == 0) {
    g_026e24c0 = sub_017339d0(L"BmGame");
    sub_01715800();
  }
  return g_026e24c0;
}

int sub_01715ac0(void);
int sub_01733a90(...);
extern undefined4 g_026e24c8;
// @baa 0x01734780
int sub_01734780(void)
{
  if (g_026e24c8 == 0) {
    g_026e24c8 = sub_01733a90(L"BmGame");
    sub_01715ac0();
  }
  return g_026e24c8;
}

int sub_017196f0(void);
int sub_017345d0(...);
extern undefined4 g_026e2548;
// @baa 0x017347b0
int sub_017347b0(void)
{
  if (g_026e2548 == 0) {
    g_026e2548 = sub_017345d0(L"BmGame");
    sub_017196f0();
  }
  return g_026e2548;
}

int sub_01714bf0(void);
int sub_01733610(...);
extern undefined4 g_026e24a8;
// @baa 0x01734800
int sub_01734800(void)
{
  if (g_026e24a8 == 0) {
    g_026e24a8 = sub_01733610(L"BmGame");
    sub_01714bf0();
  }
  return g_026e24a8;
}

int sub_01715270(void);
int sub_01733790(...);
extern undefined4 g_026e24b0;
// @baa 0x01734830
int sub_01734830(void)
{
  if (g_026e24b0 == 0) {
    g_026e24b0 = sub_01733790(L"BmGame");
    sub_01715270();
  }
  return g_026e24b0;
}

int sub_017153d0(void);
int sub_01733850(...);
extern undefined4 g_026e24b4;
// @baa 0x01734860
int sub_01734860(void)
{
  if (g_026e24b4 == 0) {
    g_026e24b4 = sub_01733850(L"BmGame");
    sub_017153d0();
  }
  return g_026e24b4;
}

int sub_01715530(void);
int sub_01733910(...);
extern undefined4 g_026e24b8;
// @baa 0x01734890
int sub_01734890(void)
{
  if (g_026e24b8 == 0) {
    g_026e24b8 = sub_01733910(L"BmGame");
    sub_01715530();
  }
  return g_026e24b8;
}

int sub_01714d50(void);
int sub_017336d0(...);
extern undefined4 g_026e24ac;
// @baa 0x017348c0
int sub_017348c0(void)
{
  if (g_026e24ac == 0) {
    g_026e24ac = sub_017336d0(L"BmGame");
    sub_01714d50();
  }
  return g_026e24ac;
}

int sub_017165c0(void);
int sub_01733e50(...);
extern undefined4 g_026e24dc;
// @baa 0x017348f0
int sub_017348f0(void)
{
  if (g_026e24dc == 0) {
    g_026e24dc = sub_01733e50(L"BmGame");
    sub_017165c0();
  }
  return g_026e24dc;
}

int sub_01718790(void);
int sub_01734510(...);
extern undefined4 g_026e2504;
// @baa 0x01734920
int sub_01734920(void)
{
  if (g_026e2504 == 0) {
    g_026e2504 = sub_01734510(L"BmGame");
    sub_01718790();
  }
  return g_026e2504;
}

// @baa 0x01734950
// @baa 0x01734a60
bool ARTunnelGrateBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01734aa0
// @baa 0x01734bb0
bool ARHarpoonDragFloatingPlatformBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01734bf0
// @baa 0x01734d00
bool ARLadder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01734090(...);
int sub_01734aa0(void);
extern undefined4 g_026e24e8;
// @baa 0x01734fb0
int sub_01734fb0(void)
{
  if (g_026e24e8 == 0) {
    g_026e24e8 = sub_01734090(L"BmGame");
    sub_01734aa0();
  }
  return g_026e24e8;
}

int sub_017342d0(...);
int sub_01734bf0(void);
extern undefined4 g_026e24f4;
// @baa 0x01734fe0
int sub_01734fe0(void)
{
  if (g_026e24f4 == 0) {
    g_026e24f4 = sub_017342d0(L"BmGame");
    sub_01734bf0();
  }
  return g_026e24f4;
}

int sub_01734390(...);
int sub_01734d40(void);
extern undefined4 g_026e24f8;
// @baa 0x01735010
int sub_01735010(void)
{
  if (g_026e24f8 == 0) {
    g_026e24f8 = sub_01734390(L"BmGame");
    sub_01734d40();
  }
  return g_026e24f8;
}

int sub_01719260(void);
int sub_01734e90(...);
extern undefined4 g_026e2540;
// @baa 0x01735040
int sub_01735040(void)
{
  if (g_026e2540 == 0) {
    g_026e2540 = sub_01734e90(L"BmGame");
    sub_01719260();
  }
  return g_026e2540;
}

// @baa 0x01735290
int sub_01735290(void) { return 1690; }

// @baa 0x017352a0
int ULensFlare::sub_017352a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x017352b0
int ULensFlare::sub_017352b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}

void sub_006837e0();
// @baa 0x017352c0
void sub_017352c0(void) { sub_006837e0(); }
