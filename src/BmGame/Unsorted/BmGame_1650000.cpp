// BmGame_1650000.cpp (part 1 of 36): 155 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01650000(); };

// @baa 0x01650000
void C::sub_01650000() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01650060 { void* Data; int Num; int Max; void sub_01650060(); };

// @baa 0x01650060
void C_01650060::sub_01650060() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016500c0 { void* Data; int Num; int Max; void sub_016500c0(); };

// @baa 0x016500c0
void C_016500c0::sub_016500c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01650120 {
    undefined4 sub_01650120();
};

// @baa 0x01650120
undefined4 C_01650120::sub_01650120(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01650130 { void* Data; int Num; int Max; void sub_01650130(); };

// @baa 0x01650130
void C_01650130::sub_01650130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053dfa0(...);
int sub_0054eec0(void);
// @baa 0x01650190
undefined4 UTexture2D::sub_01650190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0164a920(void);
// @baa 0x016501b0
undefined4 UObject::sub_016501b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0164a920();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0164ef10(void);
// @baa 0x016501d0
undefined4 UObject::sub_016501d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0164ef10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0164fe50();
// @baa 0x01650320
void sub_01650320(void) { sub_0164fe50(); }

int sub_005c7a20(void);
extern undefined * g_02359d50;
// @baa 0x01650330
undefined4 * UObject::sub_01650330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02359d50);
  return param_1;
}

int sub_0053df70(...);
// @baa 0x01651fa0
void ARCombatMove::vf_354(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0xa0),0,8);
      *(undefined4 *)(param_1 + 0xa0) = uVar1;
    }
  }
  return;
}

struct C_016520d0 {
    undefined4 sub_016520d0(byte);
};

int sub_0164a840(void);
// @baa 0x016520d0
undefined4 C_016520d0::sub_016520d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0164a840();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_016520f0 {
    undefined4 sub_016520f0(byte);
};

int sub_0164f2c0(void);
// @baa 0x016520f0
undefined4 C_016520f0::sub_016520f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0164f2c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01652640 {
    void sub_01652640(undefined4 *, undefined4 *);
};

// @baa 0x01652640
void C_01652640::sub_01652640(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  *param_3 = *(undefined4 *)(param_1 + 0x40);
  return;
}

// @baa 0x01652700
int sub_01652700(void) { return 1690; }

struct C_01652710 { int sub_01652710(void); };

// @baa 0x01652710
int C_01652710::sub_01652710(void) { return *(int*)((char*)this + 4); }

struct C_01652720 {
    int sub_01652720();
};

// @baa 0x01652720
int C_01652720::sub_01652720(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_01652b60 {
    int sub_01652b60();
};

// @baa 0x01652b60
int C_01652b60::sub_01652b60(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xf0;
}

struct M_01654300 { void sub_00665d40(); };

struct C_01654300 { char pad[40]; M_01654300 m; void sub_01654300(); };

// @baa 0x01654300
void C_01654300::sub_01654300() { m.sub_00665d40(); }

int sub_006f7810(void);
extern undefined * g_02359ed8;
// @baa 0x01654b50
undefined4 * UPrimitiveComponent::sub_01654b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_02359ed8);
  return param_1;
}

extern undefined * g_0235a148;
// @baa 0x01654b70
undefined4 * UPrimitiveComponent::sub_01654b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0235a148);
  return param_1;
}

struct C_01655130 { void sub_016501f0(int); C_01655130 *sub_01655130(int); };

// @baa 0x01655130
C_01655130 *C_01655130::sub_01655130(int a) { sub_016501f0(a); return this; }

void sub_01654f90();
// @baa 0x01655220
void sub_01655220(void) { sub_01654f90(); }

// @baa 0x01655230
void sub_01655230(void) { sub_01654f90(); }

void sub_01655060();
// @baa 0x01655240
void sub_01655240(void) { sub_01655060(); }

struct C_016556d0 { C_016556d0* sub_016556d0(void); };

// @baa 0x016556d0
C_016556d0* C_016556d0::sub_016556d0(void) { return this; }

struct C_016556e0 { C_016556e0* sub_016556e0(void); };

// @baa 0x016556e0
C_016556e0* C_016556e0::sub_016556e0(void) { return this; }

struct C_016556f0 { C_016556f0* sub_016556f0(void); };

// @baa 0x016556f0
C_016556f0* C_016556f0::sub_016556f0(void) { return this; }

// @baa 0x01655830
IMPLEMENT_CLASS_AT(ARBMCombatPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 15);

// @baa 0x01655890
// @baa 0x016558c0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HarpoonBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 18);

// @baa 0x01655970
// @baa 0x01655ac0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_LineLauncher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 19);

// @baa 0x01655b30
// @baa 0x01655b90
IMPLEMENT_CLASS_AT(ARBatclawBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 25);

// @baa 0x01655bf0
// @baa 0x01655c50
IMPLEMENT_CLASS_AT(ARGrappleBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 24);

// @baa 0x01655cb0
// @baa 0x01655d10
IMPLEMENT_CLASS_AT(ARLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 20);

// @baa 0x01655d70
struct C_01655e90 { C_01655e90* sub_01655e90(void); };

// @baa 0x01655e90
C_01655e90* C_01655e90::sub_01655e90(void) { return this; }

int sub_005c7a70(...);
int sub_01655f20(void);
// @baa 0x01655fc0
undefined4 ARBatarang::sub_01655fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01655f20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x3a8);
  }
  return param_1;
}

// @baa 0x01656020
IMPLEMENT_CLASS_AT(ARGooSpray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 25);

// @baa 0x01656080
// @baa 0x016560e0
IMPLEMENT_CLASS_AT(ARGrappleGun, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 20);

// @baa 0x01656180
// @baa 0x016561e0
IMPLEMENT_CLASS_AT(ARHarpoonGun, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 17);

// @baa 0x016562e0
// @baa 0x01656340
IMPLEMENT_CLASS_AT(ARLineLauncher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 18);

// @baa 0x016563a0
// @baa 0x01656400
IMPLEMENT_CLASS_AT(ARResonatorTuner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 27);

// @baa 0x01656470
int sub_01656540(void);
// @baa 0x016565e0
undefined4 ARInventoryManager::sub_016565e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01656540();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x29c);
  }
  return param_1;
}

// @baa 0x01656610
IMPLEMENT_CLASS_AT(ARProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 24);

// @baa 0x016566a0
// @baa 0x016566d0
IMPLEMENT_CLASS_AT(ARBatarangProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 17);

// @baa 0x01656740
// @baa 0x016567d0
IMPLEMENT_CLASS_AT(ARBatarangProjectile_Controllable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 18);

// @baa 0x01656830
struct C_016568a0 { C_016568a0* sub_016568a0(int a0); };

// @baa 0x016568a0
C_016568a0* C_016568a0::sub_016568a0(int a0) { return this; }

struct C_016568b0 { C_016568b0* sub_016568b0(int a0); };

// @baa 0x016568b0
C_016568b0* C_016568b0::sub_016568b0(int a0) { return this; }

struct C_016568c0 { C_016568c0* sub_016568c0(int a0); };

// @baa 0x016568c0
C_016568c0* C_016568c0::sub_016568c0(int a0) { return this; }

struct C_016568d0 { C_016568d0* sub_016568d0(int a0); };

// @baa 0x016568d0
C_016568d0* C_016568d0::sub_016568d0(int a0) { return this; }

struct C_01656a30 {
    int sub_01656a30();
};

// @baa 0x01656a30
int C_01656a30::sub_01656a30(void)
{
    int param_1 = (int)this;

  return param_1 + -0x2c8;
}

struct A_01656a40 { virtual void sub_01656ad0(); char pad[708]; };

struct B_01656a40 { virtual void sub_01656ad0(); };

struct C_01656a40 : A_01656a40, B_01656a40 { virtual void sub_01656ad0(); C_01656a40(); };

C_01656a40::C_01656a40() {}

// @baa 0x01656a40
void C_01656a40::sub_01656ad0() {}

// @baa 0x01656a50
IMPLEMENT_CLASS_AT(ARBatDistractProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 19);

// @baa 0x01656ad0
// @baa 0x01656b30
IMPLEMENT_CLASS_AT(ARExplosiveGooMine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 26);

// @baa 0x01656b90
// @baa 0x01656bf0
IMPLEMENT_CLASS_AT(ARGrapplePointCatchmentArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 23);

// @baa 0x01656c60
// @baa 0x01656cd0
IMPLEMENT_CLASS_AT(ARPhotoScanner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPhotoScanner.cpp", 10);

// @baa 0x01656d70
// @baa 0x01656da0
IMPLEMENT_CLASS_AT(ARProjectileWithRope, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 21);

// @baa 0x01656e00
// @baa 0x01656e90
IMPLEMENT_CLASS_AT(ARHarpoonProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 22);

// @baa 0x01656ef0
// @baa 0x01656f50
IMPLEMENT_CLASS_AT(ARTapePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RTapePlayer.cpp", 9);

// @baa 0x01657040
// @baa 0x016570a0
IMPLEMENT_CLASS_AT(ARHidePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 9);

// @baa 0x016571a0
// @baa 0x01657200
IMPLEMENT_CLASS_AT(ARGargoyleBombBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 10);

// @baa 0x01657270
int sub_0163f230(void);
int sub_01655590(...);
extern undefined4 g_026e1c28;
// @baa 0x016572a0
int sub_016572a0(void)
{
  if (g_026e1c28 == 0) {
    g_026e1c28 = sub_01655590(L"BmGame");
    sub_0163f230();
  }
  return g_026e1c28;
}

// @baa 0x01657440
IMPLEMENT_CLASS_AT(ARSnapToPositionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 260);

// @baa 0x016574a0
// @baa 0x01657500
IMPLEMENT_CLASS_AT(ARGrapplePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 21);

// @baa 0x01657570
// @baa 0x01657600
IMPLEMENT_CLASS_AT(ARRescuePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 22);

// @baa 0x01657660
// @baa 0x016576c0
IMPLEMENT_CLASS_AT(ARBMCombatDangerZone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 11);

// @baa 0x01657740
// @baa 0x016577a0
IMPLEMENT_CLASS_AT(ARBMCombatCollisionProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 12);

// @baa 0x01657800
// @baa 0x01657860
IMPLEMENT_CLASS_AT(ARBMCombatDamageProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 13);

// @baa 0x016578d0
// @baa 0x01657930
IMPLEMENT_CLASS_AT(ARCombatArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 14);

// @baa 0x016579b0
// @baa 0x016579e0
IMPLEMENT_CLASS_AT(ARCombatMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 9);

// @baa 0x01657a70
// @baa 0x01657aa0
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 10);

// @baa 0x01657b30
// @baa 0x01657b90
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanStrike, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 12);

// @baa 0x01657c00
// @baa 0x01657c30
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanWeaponAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 11);

// @baa 0x01657cc0
// @baa 0x01657d20
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanCounter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 13);

// @baa 0x01657d90
// @baa 0x01657fb0
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 9);

// @baa 0x01658070
// @baa 0x016580d0
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage_GrabOnFloor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 10);

// @baa 0x01658130
// @baa 0x01658160
IMPLEMENT_CLASS_AT(ARStealthTakeDownStageFearBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 11);

// @baa 0x016581f0
// @baa 0x01658250
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage_RailingAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 12);

// @baa 0x016582c0
struct C_01658440 {
    undefined4 sub_01658440(byte);
};

int sub_01655650(void);
// @baa 0x01658440
undefined4 C_01658440::sub_01658440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01655650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_016553b0(...);
int sub_016582f0(void);
extern undefined4 g_026e1c20;
// @baa 0x01658990
int sub_01658990(void)
{
  if (g_026e1c20 == 0) {
    g_026e1c20 = sub_016553b0(L"BmGame");
    sub_016582f0();
  }
  return g_026e1c20;
}

int sub_0163a610(void);
int sub_016591d0(...);
extern undefined4 g_026e1b98;
// @baa 0x0165adc0
int sub_0165adc0(void)
{
  if (g_026e1b98 == 0) {
    g_026e1b98 = sub_016591d0(L"BmGame");
    sub_0163a610();
  }
  return g_026e1b98;
}

int sub_0163bb70(void);
int sub_01659b90(...);
extern undefined4 g_026e1bcc;
// @baa 0x0165adf0
int sub_0165adf0(void)
{
  if (g_026e1bcc == 0) {
    g_026e1bcc = sub_01659b90(L"BmGame");
    sub_0163bb70();
  }
  return g_026e1bcc;
}

int sub_0163ac30(void);
int sub_01659650(...);
extern undefined4 g_026e1bb0;
// @baa 0x0165ae20
int sub_0165ae20(void)
{
  if (g_026e1bb0 == 0) {
    g_026e1bb0 = sub_01659650(L"BmGame");
    sub_0163ac30();
  }
  return g_026e1bb0;
}

int sub_0163ad90(void);
int sub_01659710(...);
extern undefined4 g_026e1bb4;
// @baa 0x0165ae50
int sub_0165ae50(void)
{
  if (g_026e1bb4 == 0) {
    g_026e1bb4 = sub_01659710(L"BmGame");
    sub_0163ad90();
  }
  return g_026e1bb4;
}

int sub_0163a780(void);
int sub_01659350(...);
extern undefined4 g_026e1ba0;
// @baa 0x0165ae80
int sub_0165ae80(void)
{
  if (g_026e1ba0 == 0) {
    g_026e1ba0 = sub_01659350(L"BmGame");
    sub_0163a780();
  }
  return g_026e1ba0;
}

int sub_01639d00(void);
int sub_01658e10(...);
extern undefined4 g_026e1b84;
// @baa 0x0165aee0
int sub_0165aee0(void)
{
  if (g_026e1b84 == 0) {
    g_026e1b84 = sub_01658e10(L"BmGame");
    sub_01639d00();
  }
  return g_026e1b84;
}

// @baa 0x0165af10
IMPLEMENT_CLASS_AT(ARBatarang, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarang.cpp", 16);

// @baa 0x0165b020
bool ARBatarang::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165b060
// @baa 0x0165b170
bool ARBatarangProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165b540
// @baa 0x0165b650
bool ARGrappleGun::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165b690
// @baa 0x0165b7a0
bool ARRescuePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165bfc0
// @baa 0x0165c0d0
bool ARHarpoonGun::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165c260
// @baa 0x0165c370
bool ARHarpoonProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165c500
// @baa 0x0165c610
bool ARGooSpray::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165c650
// @baa 0x0165c760
bool ARResonatorTuner::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165c7a0
// @baa 0x0165c8b0
bool ARLineLauncher::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0163cac0(void);
int sub_0165a400(...);
extern undefined4 g_026e1bf0;
// @baa 0x0165c8f0
int sub_0165c8f0(void)
{
  if (g_026e1bf0 == 0) {
    g_026e1bf0 = sub_0165a400(L"BmGame");
    sub_0163cac0();
  }
  return g_026e1bf0;
}

int sub_0163cc20(void);
int sub_0165a4c0(...);
extern undefined4 g_026e1bf4;
// @baa 0x0165c920
int sub_0165c920(void)
{
  if (g_026e1bf4 == 0) {
    g_026e1bf4 = sub_0165a4c0(L"BmGame");
    sub_0163cc20();
  }
  return g_026e1bf4;
}

int sub_0163c460(void);
int sub_01659f80(...);
extern undefined4 g_026e1bd8;
// @baa 0x0165c950
int sub_0165c950(void)
{
  if (g_026e1bd8 == 0) {
    g_026e1bd8 = sub_01659f80(L"BmGame");
    sub_0163c460();
  }
  return g_026e1bd8;
}

extern undefined * g_02363a10;
// @baa 0x0165c980
undefined4 * UObject::sub_0165c980(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02363a10);
  return param_1;
}

// @baa 0x0165c9a0
IMPLEMENT_CLASS_AT(URSeqAct_CombatProgress, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 16);

// @baa 0x0165ca10
// @baa 0x0165ca40
// @baa 0x0165cb50
bool ARCombatMove_BatmanAttack::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0163d370(void);
int sub_0165a7c0(...);
extern undefined4 g_026e1c04;
// @baa 0x0165cc90
int sub_0165cc90(void)
{
  if (g_026e1c04 == 0) {
    g_026e1c04 = sub_0165a7c0(L"BmGame");
    sub_0163d370();
  }
  return g_026e1c04;
}

// @baa 0x0165ccc0
// @baa 0x0165cdd0
bool ARStealthTakeDownStage_GrabOnFloor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0165ce10
// @baa 0x0165cf20
bool ARStealthTakeDownStageFearBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
