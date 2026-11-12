// BmGame_1630000.cpp (part 1 of 3): 267 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01630390
IMPLEMENT_CLASS_AT(ARDebugCameraController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPlayerController.cpp", 3880);

int sub_0077ccd0(void);
extern undefined * g_0234b308;
// @baa 0x016303f0
undefined4 * APlayerController::sub_016303f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  *param_1 = (undefined4)(&g_0234b308);
  return param_1;
}

// @baa 0x01630410
int sub_016115f0(void);
int sub_0162e650(...);
extern undefined4 g_026e19e4;
// @baa 0x01630440
int sub_01630440(void)
{
  if (g_026e19e4 == 0) {
    g_026e19e4 = sub_0162e650(L"BmGame");
    sub_016115f0();
  }
  return g_026e19e4;
}

int sub_0160f0d0(void);
int sub_0162dc90(...);
extern undefined4 g_026e19a8;
// @baa 0x01630470
int sub_01630470(void)
{
  if (g_026e19a8 == 0) {
    g_026e19a8 = sub_0162dc90(L"BmGame");
    sub_0160f0d0();
  }
  return g_026e19a8;
}

int sub_01610e70(void);
int sub_0162ded0(...);
extern undefined4 g_026e19b8;
// @baa 0x016304a0
int sub_016304a0(void)
{
  if (g_026e19b8 == 0) {
    g_026e19b8 = sub_0162ded0(L"BmGame");
    sub_01610e70();
  }
  return g_026e19b8;
}

// @baa 0x016304d0
IMPLEMENT_CLASS_AT(ARBMRouter_NoPawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 133);

// @baa 0x016305e0
bool ARBMRouter_NoPawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630620
IMPLEMENT_CLASS_AT(ARBMRouter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 140);

// @baa 0x01630730
bool ARBMRouter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630770
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindSinglePath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1678);

// @baa 0x01630880
bool ARBMRouteRequest_FindSinglePath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016308c0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindShortestPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1844);

// @baa 0x016309d0
bool ARBMRouteRequest_FindShortestPath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630a10
IMPLEMENT_CLASS_AT(ARBMRouteRequest_BuildComparisonList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2103);

// @baa 0x01630b20
bool ARBMRouteRequest_BuildComparisonList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630b60
IMPLEMENT_CLASS_AT(ARBMRouteRequest_HideOnCorner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2361);

// @baa 0x01630c70
bool ARBMRouteRequest_HideOnCorner::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630cb0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_NervousSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2474);

// @baa 0x01630dc0
bool ARBMRouteRequest_NervousSearch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630e00
IMPLEMENT_CLASS_AT(ARBMRouteRequest_TerrifiedSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2752);

// @baa 0x01630f10
bool ARBMRouteRequest_TerrifiedSearch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01630f50
IMPLEMENT_CLASS_AT(ARBMRouteRequest_RunAway, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2995);

// @baa 0x01631060
bool ARBMRouteRequest_RunAway::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016310a0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_PerimeterBuilderWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 3126);

// @baa 0x016311b0
bool ARBMRouteRequest_PerimeterBuilderWrapper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01631370
IMPLEMENT_CLASS_AT(URSeqAct_SpeechEventManagerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSeqAct_SpeechEventManagerBase.cpp", 12);

// @baa 0x016313f0
int sub_005c7a20(void);
extern undefined * g_0234b778;
// @baa 0x01631420
undefined4 * UObject::sub_01631420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0234b778);
  return param_1;
}

extern undefined * g_0234b928;
// @baa 0x01631440
undefined4 * UObject::sub_01631440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0234b928);
  return param_1;
}

// @baa 0x01631460
IMPLEMENT_CLASS_AT(URSeqAct_SpeechEventManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSeqAct_SpeechEventManager.cpp", 4);

// @baa 0x016314f0
extern undefined * g_0234bad8;
// @baa 0x01631520
undefined4 * APlayerController::sub_01631520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  *param_1 = (undefined4)(&g_0234bad8);
  return param_1;
}

// @baa 0x01631540
IMPLEMENT_CLASS_AT(ARBMDebugCameraController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPlayerController.cpp", 3881);

// @baa 0x016315a0
void sub_016301f0();
// @baa 0x016315d0
void sub_016315d0(void) { sub_016301f0(); }

void sub_016302c0();
// @baa 0x016315e0
void sub_016315e0(void) { sub_016302c0(); }

int sub_01613110(void);
int sub_0162fe30(...);
extern undefined4 g_026e1a2c;
// @baa 0x016315f0
int sub_016315f0(void)
{
  if (g_026e1a2c == 0) {
    g_026e1a2c = sub_0162fe30(L"BmGame");
    sub_01613110();
  }
  return g_026e1a2c;
}

// @baa 0x01631620
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_ResonateObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 17);

// @baa 0x01631730
bool ARSpecialMoveInstance_ResonateObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01631770
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_SwingToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 18);

// @baa 0x01631880
bool ARSpecialMoveInstance_SwingToVantagePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_01631a10(void); };

// @baa 0x01631a10
C* C::sub_01631a10(void) { return this; }

struct C_01631a20 { C_01631a20* sub_01631a20(void); };

// @baa 0x01631a20
C_01631a20* C_01631a20::sub_01631a20(void) { return this; }

int sub_0162de10(...);
int sub_01630620(void);
extern undefined4 g_026e19b0;
// @baa 0x01631ab0
int sub_01631ab0(void)
{
  if (g_026e19b0 == 0) {
    g_026e19b0 = sub_0162de10(L"BmGame");
    sub_01630620();
  }
  return g_026e19b0;
}

int sub_0162dd50(...);
int sub_016304d0(void);
extern undefined4 g_026e19ac;
// @baa 0x01631ae0
int sub_01631ae0(void)
{
  if (g_026e19ac == 0) {
    g_026e19ac = sub_0162dd50(L"BmGame");
    sub_016304d0();
  }
  return g_026e19ac;
}

int sub_0162e050(...);
int sub_016308c0(void);
extern undefined4 g_026e19c0;
// @baa 0x01631b10
int sub_01631b10(void)
{
  if (g_026e19c0 == 0) {
    g_026e19c0 = sub_0162e050(L"BmGame");
    sub_016308c0();
  }
  return g_026e19c0;
}

// @baa 0x01631b40
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindShortestPathAvoidingLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2068);

// @baa 0x01631c50
bool ARBMRouteRequest_FindShortestPathAvoidingLadder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_016323c0 {
    undefined4 * sub_016323c0();
};

extern undefined * g_0234c640;
// @baa 0x016323c0
undefined4 * C_016323c0::sub_016323c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  *(undefined1 *)(param_1 + 0x222) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  param_1[0x22b] = 0;
  *(undefined1 *)(param_1 + 0x22d) = 0;
  *(undefined1 *)(param_1 + 0x235) = 0;
  param_1[0x236] = 0;
  *param_1 = (undefined4)(&g_0234c640);
  return param_1;
}

// @baa 0x01632410
ARPlayerControllerCombat::ARPlayerControllerCombat()
{
}

int sub_005c7a70(...);
int sub_01632410(void);
// @baa 0x016324a0
undefined4 ARPlayerControllerCombat::sub_016324a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01632410();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xe08);
  }
  return param_1;
}

int sub_01630070(...);
int sub_016318c0(void);
extern undefined4 g_026e1a38;
// @baa 0x016324d0
int sub_016324d0(void)
{
  if (g_026e1a38 == 0) {
    g_026e1a38 = sub_01630070(L"BmGame");
    sub_016318c0();
  }
  return g_026e1a38;
}

// @baa 0x016325c0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_CatchLedge, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 20);

// @baa 0x016326d0
bool ARSpecialMoveInstance_CatchLedge::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01634330
IMPLEMENT_CLASS_AT(URPlayerInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPlayerController.cpp", 33);

// @baa 0x01634b70
// @baa 0x01634c80
IMPLEMENT_CLASS_AT(ARPlayerControllerCombat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPlayerController.cpp", 35);

// @baa 0x01634d90
bool ARPlayerControllerCombat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01634ab0(...);
int sub_01634b70(void);
extern undefined4 g_026e1a48;
// @baa 0x01634dd0
int sub_01634dd0(void)
{
  if (g_026e1a48 == 0) {
    g_026e1a48 = sub_01634ab0(L"BmGame");
    sub_01634b70();
  }
  return g_026e1a48;
}

// @baa 0x016382a0
void sub_016382a0(void) {  }

int sub_0154daf0(void);
int sub_0157b250(...);
extern undefined4 g_026e114c;
// @baa 0x016382c0
int sub_016382c0(void)
{
  if (g_026e114c == 0) {
    g_026e114c = sub_0157b250(L"BmGame");
    sub_0154daf0();
  }
  return g_026e114c;
}

// @baa 0x016382f0
int sub_016382f0(int a0, int a1) { return a1; }

struct C_01638300 { C_01638300* sub_01638300(int a0); };

// @baa 0x01638300
C_01638300* C_01638300::sub_01638300(int a0) { return this; }

// @baa 0x01638350
UINT UObject::sub_01638350(UINT arg1)
{
    return (UINT)this;
}

struct C_01638360 { C_01638360* sub_01638360(int a0); };

// @baa 0x01638360
C_01638360* C_01638360::sub_01638360(int a0) { return this; }

struct C_01638370 { C_01638370* sub_01638370(int a0); };

// @baa 0x01638370
C_01638370* C_01638370::sub_01638370(int a0) { return this; }

struct C_01638380 { C_01638380* sub_01638380(int a0); };

// @baa 0x01638380
C_01638380* C_01638380::sub_01638380(int a0) { return this; }

struct C_01638390 { C_01638390* sub_01638390(int a0); };

// @baa 0x01638390
C_01638390* C_01638390::sub_01638390(int a0) { return this; }

struct C_016384e0 { C_016384e0* sub_016384e0(void); };

// @baa 0x016384e0
C_016384e0* C_016384e0::sub_016384e0(void) { return this; }

struct C_016384f0 { C_016384f0* sub_016384f0(int a0); };

// @baa 0x016384f0
C_016384f0* C_016384f0::sub_016384f0(int a0) { return this; }

// @baa 0x01638540
undefined4 sub_01638540(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_01638550 { C_01638550* sub_01638550(void); };

// @baa 0x01638550
C_01638550* C_01638550::sub_01638550(void) { return this; }

struct C_01638560 { C_01638560* sub_01638560(int a0); };

// @baa 0x01638560
C_01638560* C_01638560::sub_01638560(int a0) { return this; }

struct C_01638570 { C_01638570* sub_01638570(int a0); };

// @baa 0x01638570
C_01638570* C_01638570::sub_01638570(int a0) { return this; }

struct C_01638580 { C_01638580* sub_01638580(int a0); };

// @baa 0x01638580
C_01638580* C_01638580::sub_01638580(int a0) { return this; }

struct C_01638590 { C_01638590* sub_01638590(int a0); };

// @baa 0x01638590
C_01638590* C_01638590::sub_01638590(int a0) { return this; }

// @baa 0x01638720
int sub_01638720(int a0, int a1) { return a1; }

// @baa 0x01638730
int sub_01638730(int a0, int a1) { return a1; }

int sub_016169b0(...);
int sub_0161dcd0(void);
extern undefined4 g_026e1a1c;
// @baa 0x01638740
int sub_01638740(void)
{
  if (g_026e1a1c == 0) {
    g_026e1a1c = sub_016169b0(L"BmGame");
    sub_0161dcd0();
  }
  return g_026e1a1c;
}

// @baa 0x01638770
int sub_01638770(int a0, int a1) { return a1; }

// @baa 0x016388e0
int sub_016388e0(int a0, int a1) { return a1; }

// @baa 0x016388f0
int sub_016388f0(int a0, int a1) { return a1; }

// @baa 0x01638900
int sub_01638900(int a0, int a1) { return a1; }

struct C_01638910 { C_01638910* sub_01638910(int a0); };

// @baa 0x01638910
C_01638910* C_01638910::sub_01638910(int a0) { return this; }

// @baa 0x016389e0
int sub_016389e0(int a0, int a1) { return a1; }

struct C_016389f0 { C_016389f0* sub_016389f0(int a0); };

// @baa 0x016389f0
C_016389f0* C_016389f0::sub_016389f0(int a0) { return this; }

// @baa 0x01638a80
int sub_01638a80(int a0, int a1) { return a1; }

// @baa 0x01638a90
int sub_01638a90(int a0, int a1) { return a1; }

// @baa 0x01638aa0
int sub_01638aa0(int a0, int a1) { return a1; }

// @baa 0x01638ab0
int sub_01638ab0(int a0, int a1) { return a1; }

// @baa 0x01638ac0
int sub_01638ac0(int a0, int a1) { return a1; }

// @baa 0x01638ad0
int sub_01638ad0(int a0, int a1) { return a1; }

struct C_01638ae0 { C_01638ae0* sub_01638ae0(void); };

// @baa 0x01638ae0
C_01638ae0* C_01638ae0::sub_01638ae0(void) { return this; }

// @baa 0x01638af0
int sub_01638af0(int a0, int a1) { return a1; }

// @baa 0x01638b00
int sub_01638b00(int a0, int a1) { return a1; }

// @baa 0x01638b10
int sub_01638b10(int a0, int a1) { return a1; }

// @baa 0x01638b20
int sub_01638b20(int a0, int a1) { return a1; }

// @baa 0x01638b30
int sub_01638b30(int a0, int a1) { return a1; }

// @baa 0x01638b40
int sub_01638b40(int a0, int a1) { return a1; }

// @baa 0x01638b50
int sub_01638b50(int a0, int a1) { return a1; }

struct C_01638b60 { C_01638b60* sub_01638b60(int a0); };

// @baa 0x01638b60
C_01638b60* C_01638b60::sub_01638b60(int a0) { return this; }

// @baa 0x01638bf0
int sub_01638bf0(int a0, int a1) { return a1; }

// @baa 0x01638c00
int sub_01638c00(int a0, int a1) { return a1; }

struct C_01638c10 { C_01638c10* sub_01638c10(int a0); };

// @baa 0x01638c10
C_01638c10* C_01638c10::sub_01638c10(int a0) { return this; }

// @baa 0x01638c90
int sub_01638c90(int a0, int a1) { return a1; }

// @baa 0x01638cd0
int sub_01638cd0(int a0, int a1) { return a1; }

struct C_01638ce0 { C_01638ce0* sub_01638ce0(int a0); };

// @baa 0x01638ce0
C_01638ce0* C_01638ce0::sub_01638ce0(int a0) { return this; }

// @baa 0x01639cf0
int ARGrappleGun::vf_000(void) { return 1; }

// @baa 0x01639d00
IMPLEMENT_CLASS_AT(ARGrapplePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 21);

// @baa 0x01639e10
int ARGrapplePoint::vf_000(void) { return 1; }

// @baa 0x01639e20
bool ARGrapplePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01639e60
int ARRescuePoint::vf_000(void) { return 1; }

// @baa 0x01639e70
IMPLEMENT_CLASS_AT(ARGrapplePointCatchmentArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 23);

// @baa 0x01639f80
int ARGrapplePointCatchmentArea::vf_000(void) { return 1; }

// @baa 0x01639f90
bool ARGrapplePointCatchmentArea::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01639fd0
IMPLEMENT_CLASS_AT(ARGrappleBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 24);

// @baa 0x0163a0e0
int ARGrappleBlockingVolume::vf_000(void) { return 1; }

// @baa 0x0163a0f0
bool ARGrappleBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a590
int ARGrappleGun::vf_358(void) { return 0; }

int sub_016cf150(void);
int sub_016e3a30(...);
extern undefined4 g_026e22cc;
// @baa 0x0163a5d0
int sub_0163a5d0(void)
{
  if (g_026e22cc == 0) {
    g_026e22cc = sub_016e3a30(L"BmGame");
    sub_016cf150();
  }
  return g_026e22cc;
}

// @baa 0x0163a600
int ARHarpoonGun::vf_000(void) { return 1; }

// @baa 0x0163a610
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HarpoonBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 18);

// @baa 0x0163a720
int ARSpecialMoveInstance_HarpoonBase::vf_000(void) { return 1; }

// @baa 0x0163a730
bool ARSpecialMoveInstance_HarpoonBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a780
IMPLEMENT_CLASS_AT(ARProjectileWithRope, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 21);

// @baa 0x0163a890
int ARProjectileWithRope::vf_000(void) { return 1; }

// @baa 0x0163a8a0
bool ARProjectileWithRope::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a8e0
int ARHarpoonProjectile::vf_000(void) { return 1; }

// @baa 0x0163a8f0
IMPLEMENT_CLASS_AT(ARBatclawBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 25);

// @baa 0x0163aa00
int ARBatclawBlockingVolume::vf_000(void) { return 1; }

// @baa 0x0163aa10
bool ARBatclawBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0163aa90 { C_0163aa90* sub_0163aa90(void); };

// @baa 0x0163aa90
C_0163aa90* C_0163aa90::sub_0163aa90(void) { return this; }

int sub_01716720(void);
int sub_01733f10(...);
extern undefined4 g_026e24e0;
// @baa 0x0163aaa0
int sub_0163aaa0(void)
{
  if (g_026e24e0 == 0) {
    g_026e24e0 = sub_01733f10(L"BmGame");
    sub_01716720();
  }
  return g_026e24e0;
}

// @baa 0x0163aad0
IMPLEMENT_CLASS_AT(ARInventoryManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 22);

// @baa 0x0163abe0
int ARInventoryManager::vf_000(void) { return 1; }

// @baa 0x0163abf0
bool ARInventoryManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163ba00
int ARLineLauncher::vf_000(void) { return 1; }

// @baa 0x0163ba10
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_LineLauncher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 19);

// @baa 0x0163bb20
int ARSpecialMoveInstance_LineLauncher::vf_000(void) { return 1; }

// @baa 0x0163bb30
bool ARSpecialMoveInstance_LineLauncher::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163bb70
IMPLEMENT_CLASS_AT(ARLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 20);

// @baa 0x0163bc80
int ARLineLauncherBlockingVolume::vf_000(void) { return 1; }

// @baa 0x0163bc90
bool ARLineLauncherBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163bd30
IMPLEMENT_CLASS_AT(ARPhotoScanner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPhotoScanner.cpp", 10);

// @baa 0x0163be40
int ARPhotoScanner::vf_000(void) { return 1; }

// @baa 0x0163be50
bool ARPhotoScanner::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163c130
IMPLEMENT_CLASS_AT(ARTapePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RTapePlayer.cpp", 9);

// @baa 0x0163c240
int ARTapePlayer::vf_000(void) { return 1; }

// @baa 0x0163c250
bool ARTapePlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163c3c0
int sub_0163c3c0(int a0, int a1) { return a1; }

// @baa 0x0163c3d0
int sub_0163c3d0(int a0, int a1) { return a1; }

// @baa 0x0163c3e0
int sub_0163c3e0(int a0, int a1) { return a1; }

// @baa 0x0163c3f0
int sub_0163c3f0(int a0, int a1) { return a1; }

// @baa 0x0163c400
int sub_0163c400(int a0, int a1) { return a1; }

// @baa 0x0163c410
int sub_0163c410(int a0, int a1) { return a1; }

// @baa 0x0163c420
int sub_0163c420(int a0, int a1) { return a1; }

// @baa 0x0163c430
int sub_0163c430(int a0, int a1) { return a1; }

// @baa 0x0163c440
int sub_0163c440(int a0, int a1) { return a1; }

// @baa 0x0163c450
int sub_0163c450(int a0, int a1) { return a1; }

// @baa 0x0163c460
IMPLEMENT_CLASS_AT(ARCombatMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 9);

// @baa 0x0163c570
int ARCombatMove::vf_000(void) { return 1; }

// @baa 0x0163c580
bool ARCombatMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163c5c0
int ARCombatMove_BatmanAttack::vf_000(void) { return 1; }

// @baa 0x0163c5d0
int ARCombatMove_BatmanWeaponAttack::vf_000(void) { return 1; }

// @baa 0x0163c5e0
int ARCombatMove_BatmanStrike::vf_000(void) { return 1; }

// @baa 0x0163c5f0
int ARCombatMove_BatmanCounter::vf_000(void) { return 1; }

// @baa 0x0163c960
IMPLEMENT_CLASS_AT(ARBMCombatDangerZone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 11);

// @baa 0x0163ca70
int ARBMCombatDangerZone::vf_000(void) { return 1; }

// @baa 0x0163ca80
bool ARBMCombatDangerZone::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163cac0
IMPLEMENT_CLASS_AT(ARBMCombatCollisionProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 12);

// @baa 0x0163cbd0
int ARBMCombatCollisionProxy::vf_000(void) { return 1; }

// @baa 0x0163cbe0
bool ARBMCombatCollisionProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163cc20
IMPLEMENT_CLASS_AT(ARBMCombatDamageProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 13);

// @baa 0x0163cd30
int ARBMCombatDamageProxy::vf_000(void) { return 1; }

// @baa 0x0163cd40
bool ARBMCombatDamageProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163cd80
IMPLEMENT_CLASS_AT(ARCombatArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 14);

// @baa 0x0163ce90
int ARCombatArea::vf_000(void) { return 1; }

// @baa 0x0163cea0
bool ARCombatArea::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163cee0
IMPLEMENT_CLASS_AT(ARBMCombatPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 15);

// @baa 0x0163cff0
int ARBMCombatPoint::vf_000(void) { return 1; }

// @baa 0x0163d000
bool ARBMCombatPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163d040
IMPLEMENT_CLASS_AT(URSeqAct_CombatProgress, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 16);

// @baa 0x0163d150
int URSeqAct_CombatProgress::vf_000(void) { return 1; }

// @baa 0x0163d160
bool URSeqAct_CombatProgress::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct V_0163d320 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void g();
    void sub_0163d320();
};

// @baa 0x0163d320
void V_0163d320::sub_0163d320() { g(); }

// @baa 0x0163d330
int sub_0163d330(int a0, int a1) { return a1; }

// @baa 0x0163d340
int sub_0163d340(int a0, int a1) { return a1; }

// @baa 0x0163d350
int sub_0163d350(int a0, int a1) { return a1; }

// @baa 0x0163d360
int sub_0163d360(int a0, int a1) { return a1; }

// @baa 0x0163d370
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 9);

// @baa 0x0163d480
int ARStealthTakeDownStage::vf_000(void) { return 1; }

// @baa 0x0163d490
bool ARStealthTakeDownStage::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163d4d0
int ARStealthTakeDownStage_GrabOnFloor::vf_000(void) { return 1; }

// @baa 0x0163d4e0
int ARStealthTakeDownStageFearBase::vf_000(void) { return 1; }

// @baa 0x0163d4f0
int ARStealthTakeDownStage_RailingAttack::vf_000(void) { return 1; }

// @baa 0x0163dca0
IMPLEMENT_CLASS_AT(ARHidePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 9);

// @baa 0x0163ddb0
int ARHidePoint::vf_000(void) { return 1; }

// @baa 0x0163ddc0
bool ARHidePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163de00
IMPLEMENT_CLASS_AT(ARGargoyleBombBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 10);

// @baa 0x0163df10
int ARGargoyleBombBase::vf_000(void) { return 1; }

// @baa 0x0163df20
bool ARGargoyleBombBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163e040
void ARHidePoint::vf_39c(void) {  }

int sub_01554710(void);
int sub_015893e0(...);
extern undefined4 g_026e12a0;
// @baa 0x0163e0b0
int sub_0163e0b0(void)
{
  if (g_026e12a0 == 0) {
    g_026e12a0 = sub_015893e0(L"BmGame");
    sub_01554710();
  }
  return g_026e12a0;
}

// @baa 0x0163e530
int sub_0163e530(void) { return 0; }

struct C_0163ea10 { float sub_0163ea10(void); };

// @baa 0x0163ea10
float C_0163ea10::sub_0163ea10(void) { return *(float*)((char*)this + 16); }

struct C_0163ea20 {
    char pad[0x10];
    float f_10;
    float sub_0163ea20();
};

// @baa 0x0163ea20
float C_0163ea20::sub_0163ea20()
{
    return f_10 * 50.0f;
}

struct C_0163eae0 {
    undefined4 sub_0163eae0(byte);
};

int sub_0053dfa0(...);
int sub_01669d60(void);
// @baa 0x0163eae0
undefined4 C_0163eae0::sub_0163eae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01669d60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0163eb00 { int sub_0163eb00(void); };

// @baa 0x0163eb00
int C_0163eb00::sub_0163eb00(void) { return *(int*)((char*)this + 4); }

// @baa 0x0163eb10
int sub_0163eb10(void) { return 0; }

// @baa 0x0163eb20
int sub_0163eb20(void) { return 1; }

struct C_0163eb70 {
    bool sub_0163eb70();
};

// @baa 0x0163eb70
bool C_0163eb70::sub_0163eb70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

struct C_0163eb80 {
    undefined4 sub_0163eb80();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0163eb80
undefined4 C_0163eb80::sub_0163eb80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 4);
}

struct C_0163ebb0 {
    undefined4 sub_0163ebb0();
};

// @baa 0x0163ebb0
undefined4 C_0163ebb0::sub_0163ebb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 4);
}

struct C_0163ebe0 { int sub_0163ebe0(void); };

// @baa 0x0163ebe0
int C_0163ebe0::sub_0163ebe0(void) { return *(int*)((char*)this + 8); }

// @baa 0x0163ebf0
int sub_0163ebf0(void) { return 0; }

struct C_0163ec00 { int sub_0163ec00(void); };

// @baa 0x0163ec00
int C_0163ec00::sub_0163ec00(void) { return *(int*)((char*)this + 52); }

struct C_0163ec10 { void sub_0163ec10(int a0); };

// @baa 0x0163ec10
void C_0163ec10::sub_0163ec10(int a0) { *(int*)((char*)this + 52) = a0; }

struct C_0163ec20 { int sub_0163ec20(void); };

// @baa 0x0163ec20
int C_0163ec20::sub_0163ec20(void) { return *(int*)((char*)this + 16); }

struct C_0163ed90 {
    undefined4 sub_0163ed90(byte);
};

int sub_01677270(void);
// @baa 0x0163ed90
undefined4 C_0163ed90::sub_0163ed90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01677270();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0163edb0 { int sub_0163edb0(void); };

// @baa 0x0163edb0
int C_0163edb0::sub_0163edb0(void) { return *(int*)((char*)this + 24); }

struct C_0163edc0 { int sub_0163edc0(void); };

// @baa 0x0163edc0
int C_0163edc0::sub_0163edc0(void) { return *(int*)((char*)this + 28); }

struct C_0163edd0 {
    bool sub_0163edd0();
};

// @baa 0x0163edd0
bool C_0163edd0::sub_0163edd0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) != 0;
}

struct C_0163ee30 { int sub_0163ee30(void); };

// @baa 0x0163ee30
int C_0163ee30::sub_0163ee30(void) { return *(int*)((char*)this + 20); }

struct C_0163ee40 { char* sub_0163ee40(void); };

// @baa 0x0163ee40
char* C_0163ee40::sub_0163ee40(void) { return (char*)this + 104; }

struct C_0163ee90 {
    void sub_0163ee90();
};

// @baa 0x0163ee90
void C_0163ee90::sub_0163ee90(void)
{
    int param_1 = (int)this;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}

extern char g_02352a6c[];
// @baa 0x0163f1f0
int sub_0163f1f0(void) { return (int)g_02352a6c; }

extern char g_01ebb554[];
struct C_0163f200 { void sub_0163f200(void); };

// @baa 0x0163f200
void C_0163f200::sub_0163f200(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_0163f210 {
    undefined4 * sub_0163f210(byte);
};

// @baa 0x0163f210
undefined4 * C_0163f210::sub_0163f210(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0163f8e0 { int sub_0163f8e0(void); };

// @baa 0x0163f8e0
int C_0163f8e0::sub_0163f8e0(void) { return *(int*)((char*)this + 28); }

struct C_0163f8f0 { int sub_0163f8f0(void); };

// @baa 0x0163f8f0
int C_0163f8f0::sub_0163f8f0(void) { return *(int*)((char*)this + 20); }

struct C_0163f900 { int sub_0163f900(void); };

// @baa 0x0163f900
int C_0163f900::sub_0163f900(void) { return *(int*)((char*)this + 24); }

struct C_0163f910 { int sub_0163f910(void); };

// @baa 0x0163f910
int C_0163f910::sub_0163f910(void) { return *(int*)((char*)this + 32); }

struct C_0163f920 {
    bool sub_0163f920();
};

// @baa 0x0163f920
bool C_0163f920::sub_0163f920(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) != 0;
}

struct C_0163fcd0 { int sub_0163fcd0(void); };

// @baa 0x0163fcd0
int C_0163fcd0::sub_0163fcd0(void) { return *(int*)((char*)this + 4); }

struct C_0163fce0 { int sub_0163fce0(void); };

// @baa 0x0163fce0
int C_0163fce0::sub_0163fce0(void) { return *(int*)((char*)this + 4); }

struct C_0163fcf0 { int a, b, c; C_0163fcf0(); };

// @baa 0x0163fcf0
C_0163fcf0::C_0163fcf0() : a(0), b(0), c(0) {}

struct C_0163fd00 { int sub_0163fd00(void); };

// @baa 0x0163fd00
int C_0163fd00::sub_0163fd00(void) { return *(int*)((char*)this + 4); }

struct C_0163fd10 { int sub_0163fd10(void); };

// @baa 0x0163fd10
int C_0163fd10::sub_0163fd10(void) { return *(int*)((char*)this + 4); }

struct C_0163fd20 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0163fd20* sub_0163fd20(INT value);
};

// @baa 0x0163fd20
C_0163fd20* C_0163fd20::sub_0163fd20(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0163fd40 {
    C_0163fd40* sub_0163fd40();
};

// @baa 0x0163fd40
C_0163fd40* C_0163fd40::sub_0163fd40() {
    C_0163fd40* p = this;
    ((int*)((char*)p + 4))[0]++;
    return p;
}

struct C_0163fd50 { int sub_0163fd50(void); };

// @baa 0x0163fd50
int C_0163fd50::sub_0163fd50(void) { return *(int*)((char*)this + 4); }

struct C_0163fdd0 { int sub_0163fdd0(void); };

// @baa 0x0163fdd0
int C_0163fdd0::sub_0163fdd0(void) { return *(int*)((char*)this + 4); }

struct C_0163fde0 { int sub_0163fde0(void); };

// @baa 0x0163fde0
int C_0163fde0::sub_0163fde0(void) { return *(int*)((char*)this + 4); }

struct C_0163fdf0 { int sub_0163fdf0(void); };

// @baa 0x0163fdf0
int C_0163fdf0::sub_0163fdf0(void) { return *(int*)((char*)this + 4); }

struct C_0163fe00 { int a, b, c; C_0163fe00(); };

// @baa 0x0163fe00
C_0163fe00::C_0163fe00() : a(0), b(0), c(0) {}

struct C_0163fe10 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0163fe10* sub_0163fe10(INT value);
};

// @baa 0x0163fe10
C_0163fe10* C_0163fe10::sub_0163fe10(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0163fe30 {
    C_0163fe30* sub_0163fe30();
};

// @baa 0x0163fe30
C_0163fe30* C_0163fe30::sub_0163fe30()
{
    *(int*)((char*)this + 4) += 1;
    return this;
}

struct C_0163fe40 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0163fe40* sub_0163fe40(INT value);
};

// @baa 0x0163fe40
C_0163fe40* C_0163fe40::sub_0163fe40(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0163fe60 {
    char pad[4];
    int field;
    C_0163fe60& sub_0163fe60();
};

// @baa 0x0163fe60
C_0163fe60& C_0163fe60::sub_0163fe60()
{
    ++field;
    return *this;
}

struct C_0163fe70 { int a, b, c; C_0163fe70(); };

// @baa 0x0163fe70
C_0163fe70::C_0163fe70() : a(0), b(0), c(0) {}

struct C_0163fe80 { int sub_0163fe80(void); };

// @baa 0x0163fe80
int C_0163fe80::sub_0163fe80(void) { return *(int*)((char*)this + 4); }

struct C_0163ff00 { int sub_0163ff00(void); };

// @baa 0x0163ff00
int C_0163ff00::sub_0163ff00(void) { return *(int*)((char*)this + 0); }

struct C_0163ff10 { int sub_0163ff10(void); };

// @baa 0x0163ff10
int C_0163ff10::sub_0163ff10(void) { return *(int*)((char*)this + 0); }

struct C_0163ff20 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0163ff20(INT Index);
};

// @baa 0x0163ff20
UBOOL C_0163ff20::sub_0163ff20(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0163ff40 { C_0163ff40* sub_0163ff40(int a0); };

// @baa 0x0163ff40
C_0163ff40* C_0163ff40::sub_0163ff40(int a0) { return this; }

struct C_0163ff50 { C_0163ff50* sub_0163ff50(int a0); };

// @baa 0x0163ff50
C_0163ff50* C_0163ff50::sub_0163ff50(int a0) { return this; }

struct C_0163ff60 { int sub_0163ff60(void); };

// @baa 0x0163ff60
int C_0163ff60::sub_0163ff60(void) { return *(int*)((char*)this + 0); }

struct C_0163ff70 { C_0163ff70* sub_0163ff70(int a0); };

// @baa 0x0163ff70
C_0163ff70* C_0163ff70::sub_0163ff70(int a0) { return this; }

struct C_0163ff80 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0163ff80(INT Index);
};

// @baa 0x0163ff80
UBOOL C_0163ff80::sub_0163ff80(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0163ffa0 { C_0163ffa0* sub_0163ffa0(int a0); };

// @baa 0x0163ffa0
C_0163ffa0* C_0163ffa0::sub_0163ffa0(int a0) { return this; }

struct C_0163ffb0 { C_0163ffb0* sub_0163ffb0(int a0); };

// @baa 0x0163ffb0
C_0163ffb0* C_0163ffb0::sub_0163ffb0(int a0) { return this; }

struct C_0163ffc0 { int sub_0163ffc0(void); };

// @baa 0x0163ffc0
int C_0163ffc0::sub_0163ffc0(void) { return *(int*)((char*)this + 0); }

struct C_0163ffd0 { C_0163ffd0* sub_0163ffd0(int a0); };

// @baa 0x0163ffd0
C_0163ffd0* C_0163ffd0::sub_0163ffd0(int a0) { return this; }

struct C_0163ffe0 { C_0163ffe0* sub_0163ffe0(int a0); };

// @baa 0x0163ffe0
C_0163ffe0* C_0163ffe0::sub_0163ffe0(int a0) { return this; }

struct C_0163fff0 { C_0163fff0* sub_0163fff0(int a0); };

// @baa 0x0163fff0
C_0163fff0* C_0163fff0::sub_0163fff0(int a0) { return this; }

// @baa 0x0163d310
void URSeqAct_CombatProgress::vf_110(INT, INT)
{
    vf_1a0();
}
