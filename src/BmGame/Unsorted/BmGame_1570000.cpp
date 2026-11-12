// BmGame_1570000.cpp (part 1 of 35): 202 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int g_026e2cc0;
extern "C" int g_026e2cc4;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_01570010();
};

// @baa 0x01570010
void UObjectThunk::sub_01570010()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2cc0, g_026e2cc4, 0), 0, 0);
}

// @baa 0x01570090
int URSeqVar_JokerBedPuller::vf_198(int a0) { return 0; }

// @baa 0x015700a0
FString URSeqVar_JokerBedPuller::vf_194()
{
    return TEXT("JokerBedPuller");
}

// @baa 0x015700d0
IMPLEMENT_CLASS_AT(URSeqVar_JokerBedPuller, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 139);

// @baa 0x01570130
void sub_0156ece0();
// @baa 0x01570160
void sub_01570160(void) { sub_0156ece0(); }

int sub_005c7a20(void);
extern undefined * g_022fd618;
// @baa 0x01570170
undefined4 * UObject::sub_01570170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022fd618);
  return param_1;
}

// @baa 0x01570190
IMPLEMENT_CLASS_AT(URForensicsInvestigator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 76);

// @baa 0x01570270
void sub_0156ed50();
// @baa 0x015702a0
void sub_015702a0(void) { sub_0156ed50(); }

void sub_0156edb0();
// @baa 0x015702b0
void sub_015702b0(void) { sub_0156edb0(); }

void sub_0156ee10();
// @baa 0x015702c0
void sub_015702c0(void) { sub_0156ee10(); }

// @baa 0x015702d0
void sub_015702d0(void) { sub_0156ee10(); }

void sub_0156ef30();
// @baa 0x015702e0
void sub_015702e0(void) { sub_0156ef30(); }

void sub_0156ef90();
// @baa 0x015702f0
void sub_015702f0(void) { sub_0156ef90(); }

void sub_0156eff0();
// @baa 0x01570300
void sub_01570300(void) { sub_0156eff0(); }

void sub_0156f050();
// @baa 0x01570310
void sub_01570310(void) { sub_0156f050(); }

void sub_0156f0b0();
// @baa 0x01570320
void sub_01570320(void) { sub_0156f0b0(); }

void sub_0156f110();
// @baa 0x01570330
void sub_01570330(void) { sub_0156f110(); }

void sub_0156f170();
// @baa 0x01570340
void sub_01570340(void) { sub_0156f170(); }

void sub_0156f1e0();
// @baa 0x01570350
void sub_01570350(void) { sub_0156f1e0(); }

void sub_0156f240();
// @baa 0x01570360
void sub_01570360(void) { sub_0156f240(); }

void sub_0156f2a0();
// @baa 0x01570370
void sub_01570370(void) { sub_0156f2a0(); }

void sub_0156f300();
// @baa 0x01570410
void sub_01570410(void) { sub_0156f300(); }

void sub_0156f360();
// @baa 0x01570420
void sub_01570420(void) { sub_0156f360(); }

struct C { void sub_0156cef0(); void sub_01570430(int); };

// @baa 0x01570430
void C::sub_01570430(int) { sub_0156cef0(); }

struct C_015713b0 { C_015713b0* sub_015713b0(void); };

// @baa 0x015713b0
C_015713b0* C_015713b0::sub_015713b0(void) { return this; }

// @baa 0x01572030
IMPLEMENT_CLASS_AT(URAlternateAnimationAndWeaponConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 90);

struct C_view {
    int sub_01571610(int);
};

int sub_0053df70(...);
// @baa 0x01573430
void URHUDPrompt::vf_114(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x74),0,8);
      *(undefined4 *)(param_1 + 0x74) = uVar1;
    }
  }
  ((C_view *)(((char *)this + 0x5c)))->sub_01571610(0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x34),0,8);
      *(undefined4 *)(param_1 + 0x34) = uVar1;
    }
  }
  return;
}

int sub_006f7810(void);
extern undefined * g_022feb90;
// @baa 0x01573940
undefined4 * UPrimitiveComponent::sub_01573940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_022feb90);
  return param_1;
}

// @baa 0x01573960
IMPLEMENT_CLASS_AT(URLevelTransitionRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 23);

// @baa 0x015739c0
extern undefined * g_022fede0;
// @baa 0x015739f0
undefined4 * UPrimitiveComponent::sub_015739f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_022fede0);
  return param_1;
}

// @baa 0x01573a10
IMPLEMENT_CLASS_AT(URPlayerStartInLevelRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 24);

// @baa 0x01573a70
struct C_01574150 { C_01574150* sub_01574150(void); };

// @baa 0x01574150
C_01574150* C_01574150::sub_01574150(void) { return this; }

struct C_01574390 { void sub_01571a70(int); C_01574390 *sub_01574390(int); };

// @baa 0x01574390
C_01574390 *C_01574390::sub_01574390(int a) { sub_01571a70(a); return this; }

struct C_015743b0 {
    undefined4 sub_015743b0(byte);
};

int sub_0053dfa0(...);
int sub_01571850(void);
// @baa 0x015743b0
undefined4 C_015743b0::sub_015743b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01571850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01571ba0();
// @baa 0x015743f0
void sub_015743f0(void) { sub_01571ba0(); }

struct C_01575640 { void sub_01571a70(int); C_01575640 *sub_01575640(int); };

// @baa 0x01575640
C_01575640 *C_01575640::sub_01575640(int a) { sub_01571a70(a); return this; }

struct C_01575660 { C_01575660* sub_01575660(void); };

// @baa 0x01575660
C_01575660* C_01575660::sub_01575660(void) { return this; }

// @baa 0x01575850
IMPLEMENT_CLASS_AT(ARGrappleSmoothingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 60);

// @baa 0x015758b0
// @baa 0x01575910
IMPLEMENT_CLASS_AT(ARPlayerBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 59);

// @baa 0x01575970
// @baa 0x015759d0
IMPLEMENT_CLASS_AT(ARCameraBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 53);

// @baa 0x01575a30
// @baa 0x01575a90
IMPLEMENT_CLASS_AT(ARAltitudeVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 47);

// @baa 0x01575af0
// @baa 0x01575c50
IMPLEMENT_CLASS_AT(ARXrayInterpActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 62);

// @baa 0x01575cc0
// @baa 0x01575d50
IMPLEMENT_CLASS_AT(ARGatherRootPointBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 164);

// @baa 0x01575de0
// @baa 0x01575e40
IMPLEMENT_CLASS_AT(ARBMCameraEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 48);

// @baa 0x01575ea0
// @baa 0x01575fa0
IMPLEMENT_CLASS_AT(ARGameInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 43);

// @baa 0x01576060
IMPLEMENT_CLASS_AT(ARGIChallenge, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 44);

// @baa 0x01576180
IMPLEMENT_CLASS_AT(ARGameRI, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 45);

// @baa 0x015761b0
IMPLEMENT_CLASS_AT(ARBMWeapon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 49);

// @baa 0x01576280
// @baa 0x015762b0
IMPLEMENT_CLASS_AT(ARBMWeaponMelee, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 51);

// @baa 0x01576340
// @baa 0x015763a0
IMPLEMENT_CLASS_AT(ARBMWeaponRanged, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 50);

// @baa 0x01576400
// @baa 0x01576460
IMPLEMENT_CLASS_AT(ARCreeperVineBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 173);

// @baa 0x015764d0
// @baa 0x01576530
IMPLEMENT_CLASS_AT(ARFadeManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 57);

// @baa 0x01576590
// @baa 0x015766f0
IMPLEMENT_CLASS_AT(ARPickupBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 82);

// @baa 0x01576780
// @baa 0x01576830
IMPLEMENT_CLASS_AT(ARPontoonBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 153);

// @baa 0x01576950
struct C_015769c0 {
    int sub_015769c0();
};

// @baa 0x015769c0
int C_015769c0::sub_015769c0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x1a8;
}

struct A_015769d0 { virtual void sub_01576a60(); char pad[420]; };

struct B_015769d0 { virtual void sub_01576a60(); };

struct C_015769d0 : A_015769d0, B_015769d0 { virtual void sub_01576a60(); C_015769d0(); };

C_015769d0::C_015769d0() {}

// @baa 0x015769d0
void C_015769d0::sub_01576a60() {}

// @baa 0x015769e0
IMPLEMENT_CLASS_AT(ARVaporVolumeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 61);

// @baa 0x01576a60
// @baa 0x01576ac0
IMPLEMENT_CLASS_AT(ARChatterBoxBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 175);

// @baa 0x01576b40
// @baa 0x01576b70
IMPLEMENT_CLASS_AT(ARCinematicActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 54);

// @baa 0x01576c00
// @baa 0x01576c90
IMPLEMENT_CLASS_AT(ARCinematicBatmanBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 55);

// @baa 0x01576d00
extern "C" int g_026e30d4;
extern "C" int g_026e30d8;
struct UObjectThunk_01576d60 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_01576d60();
};

// @baa 0x01576d60
void UObjectThunk_01576d60::sub_01576d60()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e30d4, g_026e30d8, 0), 0, 0);
}

// @baa 0x01576dc0
IMPLEMENT_CLASS_AT(ARPlantPodHomingSmallBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 81);

// @baa 0x01576e40
// @baa 0x01576fa0
IMPLEMENT_CLASS_AT(ARElectrifiedFloorPanel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 56);

// @baa 0x01577030
// @baa 0x015770c0
IMPLEMENT_CLASS_AT(ARGatherRootPointSpawnerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 165);

// @baa 0x01577120
// @baa 0x01577150
IMPLEMENT_CLASS_AT(ARInteractableItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 177);

// @baa 0x01577200
// @baa 0x01577360
IMPLEMENT_CLASS_AT(ARXrayInteractableItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 178);

// @baa 0x015773c0
// @baa 0x01577520
IMPLEMENT_CLASS_AT(ARInvestigateStaticMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 63);

// @baa 0x01577590
int sub_0154e770(void);
int sub_01574800(...);
extern undefined4 g_026e1178;
// @baa 0x015775c0
int sub_015775c0(void)
{
  if (g_026e1178 == 0) {
    g_026e1178 = sub_01574800(L"BmGame");
    sub_0154e770();
  }
  return g_026e1178;
}

// @baa 0x015790a0
IMPLEMENT_CLASS_AT(ARLevelVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 17);

// @baa 0x01579130
// @baa 0x015791a0
IMPLEMENT_CLASS_AT(ARPlayerStartInLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 25);

// @baa 0x01579210
// @baa 0x01579270
UINT ARBunkerDoorVillainBlocker::vf_178() { return 1; }

// @baa 0x01579280
IMPLEMENT_CLASS_AT(ARBunkerDoorVillainBlocker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 29);

// @baa 0x015792e0
// @baa 0x01579310
IMPLEMENT_CLASS_AT(ARLevelTransition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 18);

// @baa 0x01579390
// @baa 0x01579520
IMPLEMENT_CLASS_AT(ARLevelTransitionDoorBunkerNativeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 21);

// @baa 0x01579580
// @baa 0x015795b0
IMPLEMENT_CLASS_AT(ARLevelTransitionP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 19);

// @baa 0x01579630
// @baa 0x015798c0
IMPLEMENT_CLASS_AT(ARLevelTransitionDoorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 20);

// @baa 0x01579980
// @baa 0x015799e0
IMPLEMENT_CLASS_AT(ARLevelTransitionPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameLevelTransitionClasses.cpp", 22);

// @baa 0x01579a40
int sub_01575730(...);
// @baa 0x0157a170
void sub_0157a170(int param_1, int param_2, undefined4 param_3)
{
  sub_01575730(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return;
}

void sub_0157a0a0();
// @baa 0x0157c890
void sub_0157c890(void) { sub_0157a0a0(); }

struct C_0157e400 { C_0157e400* sub_0157e400(void); };

// @baa 0x0157e400
C_0157e400* C_0157e400::sub_0157e400(void) { return this; }

struct C_0157e410 { C_0157e410* sub_0157e410(void); };

// @baa 0x0157e410
C_0157e410* C_0157e410::sub_0157e410(void) { return this; }

int sub_0154ccd0(void);
int sub_0157a7d0(...);
extern undefined4 g_026e1110;
// @baa 0x0157e420
int sub_0157e420(void)
{
  if (g_026e1110 == 0) {
    g_026e1110 = sub_0157a7d0(L"BmGame");
    sub_0154ccd0();
  }
  return g_026e1110;
}

int sub_0154ce40(void);
int sub_0157a950(...);
extern undefined4 g_026e1118;
// @baa 0x0157e450
int sub_0157e450(void)
{
  if (g_026e1118 == 0) {
    g_026e1118 = sub_0157a950(L"BmGame");
    sub_0154ce40();
  }
  return g_026e1118;
}

int sub_0154d260(void);
int sub_0157ab90(...);
extern undefined4 g_026e1124;
// @baa 0x0157e480
int sub_0157e480(void)
{
  if (g_026e1124 == 0) {
    g_026e1124 = sub_0157ab90(L"BmGame");
    sub_0154d260();
  }
  return g_026e1124;
}

int sub_0154d550(void);
int sub_0157af50(...);
extern undefined4 g_026e1138;
// @baa 0x0157e4b0
int sub_0157e4b0(void)
{
  if (g_026e1138 == 0) {
    g_026e1138 = sub_0157af50(L"BmGame");
    sub_0154d550();
  }
  return g_026e1138;
}

int sub_01556130(void);
int sub_0157c090(...);
extern undefined4 g_026e12ec;
// @baa 0x0157e4e0
int sub_0157e4e0(void)
{
  if (g_026e12ec == 0) {
    g_026e12ec = sub_0157c090(L"BmGame");
    sub_01556130();
  }
  return g_026e12ec;
}

extern undefined * g_02308848;
// @baa 0x0157e510
undefined4 * UObject::sub_0157e510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02308848);
  return param_1;
}

extern "C" int g_026e33ec;
extern "C" int g_026e33f0;
struct UObjectThunk_0157e530 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157e530();
};

// @baa 0x0157e530
void UObjectThunk_0157e530::sub_0157e530()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e33ec, g_026e33f0, 0), 0, 0);
}

// @baa 0x0157e5d0
IMPLEMENT_CLASS_AT(URSeqAct_ActivateScarecrow, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 93);

// @baa 0x0157e630
extern undefined * g_023089e8;
// @baa 0x0157e660
undefined4 * UObject::sub_0157e660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023089e8);
  return param_1;
}

// @baa 0x0157e680
IMPLEMENT_CLASS_AT(URSeqAct_CameraShake, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 95);

// @baa 0x0157e6f0
extern undefined * g_02308b88;
// @baa 0x0157e720
undefined4 * UObject::sub_0157e720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02308b88);
  return param_1;
}

extern "C" int g_026e2fb8;
extern "C" int g_026e2fbc;
struct UObjectThunk_0157e740 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157e740();
};

// @baa 0x0157e740
void UObjectThunk_0157e740::sub_0157e740()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2fb8, g_026e2fbc, 0), 0, 0);
}

extern "C" int g_026e27d0;
extern "C" int g_026e27d4;
struct UObjectThunk_0157e770 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157e770();
};

// @baa 0x0157e770
void UObjectThunk_0157e770::sub_0157e770()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e27d0, g_026e27d4, 0), 0, 0);
}

// @baa 0x0157e8b0
IMPLEMENT_CLASS_AT(URSeqAct_ChangeMovieStatus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 96);

// @baa 0x0157e910
extern undefined * g_02308d28;
// @baa 0x0157e940
undefined4 * UObject::sub_0157e940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02308d28);
  return param_1;
}

extern "C" int g_026e352c;
extern "C" int g_026e3530;
struct UObjectThunk_0157e960 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157e960();
};

// @baa 0x0157e960
void UObjectThunk_0157e960::sub_0157e960()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e352c, g_026e3530, 0), 0, 0);
}

// @baa 0x0157ea00
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformChargeAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 156);

// @baa 0x0157ea70
extern undefined * g_02308ec8;
// @baa 0x0157eaa0
undefined4 * UObject::sub_0157eaa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02308ec8);
  return param_1;
}

extern "C" int g_026e2bec;
extern "C" int g_026e2bf0;
struct UObjectThunk_0157eac0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157eac0();
};

// @baa 0x0157eac0
void UObjectThunk_0157eac0::sub_0157eac0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2bec, g_026e2bf0, 0), 0, 0);
}

// @baa 0x0157eb60
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformCloseAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 157);

// @baa 0x0157ebd0
extern undefined * g_02309068;
// @baa 0x0157ec00
undefined4 * UObject::sub_0157ec00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309068);
  return param_1;
}

extern "C" int g_026e31a0;
extern "C" int g_026e31a4;
struct UObjectThunk_0157ec20 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157ec20();
};

// @baa 0x0157ec20
void UObjectThunk_0157ec20::sub_0157ec20()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e31a0, g_026e31a4, 0), 0, 0);
}

// @baa 0x0157ecc0
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformSmashAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 155);

// @baa 0x0157ed30
extern undefined * g_02309208;
// @baa 0x0157ed60
undefined4 * UObject::sub_0157ed60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309208);
  return param_1;
}

extern "C" int g_026e29c4;
extern "C" int g_026e29c8;
struct UObjectThunk_0157ed80 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157ed80();
};

// @baa 0x0157ed80
void UObjectThunk_0157ed80::sub_0157ed80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e29c4, g_026e29c8, 0), 0, 0);
}

// @baa 0x0157ee20
IMPLEMENT_CLASS_AT(URSeqAct_CrocPerformSneakPeek, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 162);

// @baa 0x0157ee80
extern undefined * g_023093a8;
// @baa 0x0157eeb0
undefined4 * UObject::sub_0157eeb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023093a8);
  return param_1;
}

extern "C" int g_026e33c4;
extern "C" int g_026e33c8;
struct UObjectThunk_0157eed0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157eed0();
};

// @baa 0x0157eed0
void UObjectThunk_0157eed0::sub_0157eed0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e33c4, g_026e33c8, 0), 0, 0);
}

// @baa 0x0157ef70
IMPLEMENT_CLASS_AT(URSeqAct_DisableCrocAttacks, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 158);

// @baa 0x0157efd0
extern undefined * g_02309548;
// @baa 0x0157f000
undefined4 * UObject::sub_0157f000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309548);
  return param_1;
}

extern "C" int g_026e286c;
extern "C" int g_026e2870;
struct UObjectThunk_0157f020 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f020();
};

// @baa 0x0157f020
void UObjectThunk_0157f020::sub_0157f020()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e286c, g_026e2870, 0), 0, 0);
}

// @baa 0x0157f0c0
IMPLEMENT_CLASS_AT(URSeqAct_DropPlayerFromForensicsModes, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 99);

// @baa 0x0157f120
extern undefined * g_023096e8;
// @baa 0x0157f150
undefined4 * UObject::sub_0157f150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023096e8);
  return param_1;
}

extern "C" int g_026e34a0;
extern "C" int g_026e34a4;
struct UObjectThunk_0157f170 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f170();
};

// @baa 0x0157f170
void UObjectThunk_0157f170::sub_0157f170()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e34a0, g_026e34a4, 0), 0, 0);
}

// @baa 0x0157f210
IMPLEMENT_CLASS_AT(URSeqAct_ForceCrocToJumpOff, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 161);

// @baa 0x0157f270
extern undefined * g_02309888;
// @baa 0x0157f2a0
undefined4 * UObject::sub_0157f2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309888);
  return param_1;
}

extern "C" int g_026e3844;
extern "C" int g_026e3848;
struct UObjectThunk_0157f2c0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f2c0();
};

// @baa 0x0157f2c0
void UObjectThunk_0157f2c0::sub_0157f2c0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e3844, g_026e3848, 0), 0, 0);
}

// @baa 0x0157f2f0
void URSeqAct_GetThugStatus::vf_178(void) {  }

// @baa 0x0157f3d0
IMPLEMENT_CLASS_AT(URSeqAct_GetThugStatus, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 104);

// @baa 0x0157f430
extern undefined * g_02309a28;
// @baa 0x0157f460
undefined4 * UObject::sub_0157f460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309a28);
  return param_1;
}

extern "C" int g_026e29cc;
extern "C" int g_026e29d0;
struct UObjectThunk_0157f480 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f480();
};

// @baa 0x0157f480
void UObjectThunk_0157f480::sub_0157f480()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e29cc, g_026e29d0, 0), 0, 0);
}

// @baa 0x0157f520
IMPLEMENT_CLASS_AT(URSeqAct_GrappleToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 105);

// @baa 0x0157f580
extern undefined * g_02309bc8;
// @baa 0x0157f5b0
undefined4 * UObject::sub_0157f5b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309bc8);
  return param_1;
}

// @baa 0x0157f5d0
IMPLEMENT_CLASS_AT(URSeqAct_HelpText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 106);

// @baa 0x0157f6a0
extern undefined * g_02309d68;
// @baa 0x0157f6d0
undefined4 * UObject::sub_0157f6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309d68);
  return param_1;
}

struct C_0157f6f0 { C_0157f6f0* sub_0157f6f0(int a0); };

// @baa 0x0157f6f0
C_0157f6f0* C_0157f6f0::sub_0157f6f0(int a0) { return this; }

// @baa 0x0157f790
IMPLEMENT_CLASS_AT(URSeqAct_IsOnPontoon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 160);

// @baa 0x0157f7f0
extern undefined * g_02309f08;
// @baa 0x0157f820
undefined4 * UObject::sub_0157f820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02309f08);
  return param_1;
}

struct UObjectThunk_0157f840 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f840();
};

// @baa 0x0157f840
void UObjectThunk_0157f840::sub_0157f840()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e30d4, g_026e30d8, 0), 0, 0);
}

// @baa 0x0157f8e0
IMPLEMENT_CLASS_AT(URSeqAct_KillScarecrow, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 108);

// @baa 0x0157f940
extern undefined * g_0230a0a8;
// @baa 0x0157f970
undefined4 * UObject::sub_0157f970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230a0a8);
  return param_1;
}

extern "C" int g_026e29a4;
extern "C" int g_026e29a8;
struct UObjectThunk_0157f990 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f990();
};

// @baa 0x0157f990
void UObjectThunk_0157f990::sub_0157f990()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e29a4, g_026e29a8, 0), 0, 0);
}

extern "C" int g_026e3520;
extern "C" int g_026e3524;
struct UObjectThunk_0157f9c0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157f9c0();
};

// @baa 0x0157f9c0
void UObjectThunk_0157f9c0::sub_0157f9c0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e3520, g_026e3524, 0), 0, 0);
}

// @baa 0x0157fab0
IMPLEMENT_CLASS_AT(URSeqAct_MakeBatmanLookAtItems, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 110);

// @baa 0x0157fb20
extern undefined * g_0230a248;
// @baa 0x0157fb50
undefined4 * UObject::sub_0157fb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230a248);
  return param_1;
}

extern "C" int g_026e39d8;
extern "C" int g_026e39dc;
struct UObjectThunk_0157fb70 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157fb70();
};

// @baa 0x0157fb70
void UObjectThunk_0157fb70::sub_0157fb70()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e39d8, g_026e39dc, 0), 0, 0);
}

// @baa 0x0157fc10
IMPLEMENT_CLASS_AT(URSeqAct_NewSilentPredWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 114);

// @baa 0x0157fc70
extern undefined * g_0230a3e8;
// @baa 0x0157fca0
undefined4 * UObject::sub_0157fca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230a3e8);
  return param_1;
}

extern "C" int g_026e2744;
extern "C" int g_026e2748;
struct UObjectThunk_0157fcc0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157fcc0();
};

// @baa 0x0157fcc0
void UObjectThunk_0157fcc0::sub_0157fcc0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2744, g_026e2748, 0), 0, 0);
}

// @baa 0x0157fd60
IMPLEMENT_CLASS_AT(URSeqAct_PlayCameraEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 115);

// @baa 0x0157fdc0
extern undefined * g_0230a588;
// @baa 0x0157fdf0
undefined4 * UObject::sub_0157fdf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230a588);
  return param_1;
}

struct UObjectThunk_0157fe10 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157fe10();
};

// @baa 0x0157fe10
void UObjectThunk_0157fe10::sub_0157fe10()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e29a4, g_026e29a8, 0), 0, 0);
}

struct UObjectThunk_0157fe40 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157fe40();
};

// @baa 0x0157fe40
void UObjectThunk_0157fe40::sub_0157fe40()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e3520, g_026e3524, 0), 0, 0);
}

// @baa 0x0157ff30
IMPLEMENT_CLASS_AT(URSeqAct_ScarecrowEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameClasses.cpp", 118);

// @baa 0x0157ff90
extern undefined * g_0230a728;
// @baa 0x0157ffc0
undefined4 * UObject::sub_0157ffc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0230a728);
  return param_1;
}

extern "C" int g_026e2860;
extern "C" int g_026e2864;
struct UObjectThunk_0157ffe0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_0157ffe0();
};

// @baa 0x0157ffe0
void UObjectThunk_0157ffe0::sub_0157ffe0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e2860, g_026e2864, 0), 0, 0);
}
