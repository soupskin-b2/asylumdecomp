// BmGame_16a0000.cpp (part 1 of 2): 196 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016a09f0
IMPLEMENT_CLASS_AT(ARPawnPlayerBm, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 47);

// @baa 0x016a0b00
bool ARPawnPlayerBm::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016a0b40
IMPLEMENT_CLASS_AT(ARPawnPlayerJokerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 48);

// @baa 0x016a0c50
bool ARPawnPlayerJokerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016a0c90
IMPLEMENT_CLASS_AT(ARPawnPlayerChallengeJokerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 49);

// @baa 0x016a0da0
bool ARPawnPlayerChallengeJokerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016a9990
void sub_016a9990(void) {  }

// @baa 0x016a99a0
float10 sub_016a99a0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x016a99b0
int sub_016a99b0(int a0, int a1) { return a1; }

// @baa 0x016a99c0
int sub_016a99c0(int a0, int a1) { return a1; }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_016a99d0();
};

// @baa 0x016a99d0
S *S::sub_016a99d0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C {
    C* sub_016a99e0(int x);
};

// @baa 0x016a99e0
C* C::sub_016a99e0(int x)
{
    return this;
}

struct C_016a9a30 {
    C_016a9a30 *sub_016a9a30(void *arg);
};

// @baa 0x016a9a30
C_016a9a30 *C_016a9a30::sub_016a9a30(void *arg)
{
    return this;
}

struct C_016a9a40 { C_016a9a40* sub_016a9a40(int a0); };

// @baa 0x016a9a40
C_016a9a40* C_016a9a40::sub_016a9a40(int a0) { return this; }

// @baa 0x016a9bf0
int sub_016a9bf0(int a0, int a1) { return a1; }

struct C_016a9c00 { C_016a9c00* sub_016a9c00(int a0); };

// @baa 0x016a9c00
C_016a9c00* C_016a9c00::sub_016a9c00(int a0) { return this; }

// @baa 0x016a9c50
int UObject::sub_016a9c50(int param)
{
    return (int)this;
}

// @baa 0x016a9d00
int sub_016a9d00(int a0, int a1) { return a1; }

// @baa 0x016a9d10
int sub_016a9d10(int a0, int a1) { return a1; }

// @baa 0x016a9d20
int sub_016a9d20(int a0, int a1) { return a1; }

// @baa 0x016a9d30
int sub_016a9d30(int a0, int a1) { return a1; }

// @baa 0x016a9d40
int sub_016a9d40(int a0, int a1) { return a1; }

// @baa 0x016a9d50
int sub_016a9d50(int a0, int a1) { return a1; }

// @baa 0x016a9d60
int sub_016a9d60(int a0, int a1) { return a1; }

// @baa 0x016a9d70
int sub_016a9d70(int a0, int a1) { return a1; }

int sub_0155cdf0(void);
int sub_01590eb0(...);
extern undefined4 g_026e1380;
// @baa 0x016a9d80
int sub_016a9d80(void)
{
  if (g_026e1380 == 0) {
    g_026e1380 = sub_01590eb0(L"BmGame");
    sub_0155cdf0();
  }
  return g_026e1380;
}

// @baa 0x016a9db0
int sub_016a9db0(int a0, int a1) { return a1; }

// @baa 0x016a9dc0
IMPLEMENT_CLASS_AT(ARBatarangCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarangCamera.cpp", 11);

// @baa 0x016a9ed0
int ARBatarangCamera::vf_000(void) { return 1; }

// @baa 0x016a9ee0
bool ARBatarangCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016aa3a0
IMPLEMENT_CLASS_AT(ARCinematicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCinematicCameraActor.cpp", 6);

// @baa 0x016aa4b0
int ARCinematicCameraActor::vf_000(void) { return 1; }

// @baa 0x016aa4c0
bool ARCinematicCameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016aa530
void ARCinematicCameraActor::vf_26c(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x26c) = param_2;
  *(undefined4 *)(param_1 + 0x270) = param_3;
  return;
}

// @baa 0x016aa550
IMPLEMENT_CLASS_AT(ARControllableChatteringTeethCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethCamera.cpp", 13);

// @baa 0x016aa660
int ARControllableChatteringTeethCamera::vf_000(void) { return 1; }

// @baa 0x016aa670
bool ARControllableChatteringTeethCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016aabd0
IMPLEMENT_CLASS_AT(ARLineLauncherDirectorCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLauncherDirectorCamera.cpp", 6);

// @baa 0x016aace0
int ARLineLauncherDirectorCamera::vf_000(void) { return 1; }

// @baa 0x016aacf0
bool ARLineLauncherDirectorCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ab0d0
IMPLEMENT_CLASS_AT(ARMultiTargetCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RMultiTargetCamera.cpp", 10);

// @baa 0x016ab1e0
int ARMultiTargetCamera::vf_000(void) { return 1; }

// @baa 0x016ab1f0
bool ARMultiTargetCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ab430
IMPLEMENT_CLASS_AT(ARSilentPredatorCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSilentPredatorCamera.cpp", 6);

// @baa 0x016ab540
int ARSilentPredatorCamera::vf_000(void) { return 1; }

// @baa 0x016ab550
bool ARSilentPredatorCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ab6c0
int sub_016ab6c0(int a0, int a1) { return a1; }

struct C_016ab6d0 { C_016ab6d0* sub_016ab6d0(void); };

// @baa 0x016ab6d0
C_016ab6d0* C_016ab6d0::sub_016ab6d0(void) { return this; }

// @baa 0x016ab710
int sub_016ab710(int a0, int a1) { return a1; }

struct C_016ab720 { C_016ab720* sub_016ab720(void); };

// @baa 0x016ab720
C_016ab720* C_016ab720::sub_016ab720(void) { return this; }

// @baa 0x016ab730
int sub_016ab730(int a0, int a1) { return a1; }

// @baa 0x016ab740
int sub_016ab740(int a0, int a1) { return a1; }

// @baa 0x016ab750
int sub_016ab750(int a0, int a1) { return a1; }

// @baa 0x016ab760
int sub_016ab760(int a0, int a1) { return a1; }

// @baa 0x016ab770
int sub_016ab770(int a0, int a1) { return a1; }

// @baa 0x016ab780
int sub_016ab780(int a0, int a1) { return a1; }

// @baa 0x016ab790
int sub_016ab790(int a0, int a1) { return a1; }

// @baa 0x016ab7a0
int sub_016ab7a0(int a0, int a1) { return a1; }

// @baa 0x016ab7b0
int sub_016ab7b0(int a0, int a1) { return a1; }

// @baa 0x016ab7c0
int sub_016ab7c0(int a0, int a1) { return a1; }

// @baa 0x016ab7d0
int sub_016ab7d0(int a0, int a1) { return a1; }

// @baa 0x016ab7e0
int sub_016ab7e0(int a0, int a1) { return a1; }

struct C_016ab7f0 { C_016ab7f0* sub_016ab7f0(int a0); };

// @baa 0x016ab7f0
C_016ab7f0* C_016ab7f0::sub_016ab7f0(int a0) { return this; }

// @baa 0x016ab840
IMPLEMENT_CLASS_AT(ARPawnBossCrocBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 15);

// @baa 0x016ab950
int ARPawnBossCrocBase::vf_000(void) { return 1; }

// @baa 0x016ab960
bool ARPawnBossCrocBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ab9a0
IMPLEMENT_CLASS_AT(ARPontoonEdgeBlockerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 16);

// @baa 0x016abab0
int ARPontoonEdgeBlockerBase::vf_000(void) { return 1; }

// @baa 0x016abac0
bool ARPontoonEdgeBlockerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abb00
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HoleGrab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 17);

// @baa 0x016abc10
int ARSpecialMoveInstance_HoleGrab::vf_000(void) { return 1; }

// @baa 0x016abc20
bool ARSpecialMoveInstance_HoleGrab::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abc60
IMPLEMENT_CLASS_AT(URSeqAct_CrocTeleportFinalAttackRefPoints, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 18);

// @baa 0x016abd70
int URSeqAct_CrocTeleportFinalAttackRefPoints::vf_000(void) { return 1; }

// @baa 0x016abd80
bool URSeqAct_CrocTeleportFinalAttackRefPoints::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abdc0
IMPLEMENT_CLASS_AT(URGuardRemovalController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 19);

// @baa 0x016abed0
int URGuardRemovalController::vf_000(void) { return 1; }

// @baa 0x016abee0
bool URGuardRemovalController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abf20
IMPLEMENT_CLASS_AT(URSeqAct_CrocRelativeAnimCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 20);

// @baa 0x016ac030
int URSeqAct_CrocRelativeAnimCamera::vf_000(void) { return 1; }

// @baa 0x016ac040
bool URSeqAct_CrocRelativeAnimCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac080
IMPLEMENT_CLASS_AT(ARFracturablePontoonPropBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 21);

// @baa 0x016ac190
int ARFracturablePontoonPropBase::vf_000(void) { return 1; }

// @baa 0x016ac1a0
bool ARFracturablePontoonPropBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac1e0
IMPLEMENT_CLASS_AT(ARPontoonGateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 22);

// @baa 0x016ac2f0
int ARPontoonGateBase::vf_000(void) { return 1; }

// @baa 0x016ac300
bool ARPontoonGateBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac340
IMPLEMENT_CLASS_AT(ARBatarangTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 23);

// @baa 0x016ac450
int ARBatarangTarget::vf_000(void) { return 1; }

// @baa 0x016ac460
bool ARBatarangTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac4a0
IMPLEMENT_CLASS_AT(ARCrocLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 24);

// @baa 0x016ac5b0
int ARCrocLineLauncherBlockingVolume::vf_000(void) { return 1; }

// @baa 0x016ac5c0
bool ARCrocLineLauncherBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016acb70
void ARFracturablePontoonPropBase::vf_394(void) {  }

struct C_view {
    int sub_009ff950(int);
};

// @baa 0x016acb80
void ARFracturablePontoonPropBase::vf_398(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0x20c) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0x20d) = 2;
    if (*(char *)(*(int *)(param_1 + 0x1ac) + 0x19c) == '\0') {
      ((C_view *)((*(char **)((char *)this + 0x1ac))))->sub_009ff950(1);
    }
  }
  return;
}

// @baa 0x016acce0
void sub_016acce0(void) {  }

struct V_016accf0 {
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
    virtual void g(int);
    void sub_016accf0();
};

// @baa 0x016accf0
void V_016accf0::sub_016accf0() { g(6); }

// @baa 0x016acd00
IMPLEMENT_CLASS_AT(ARSoftBodyProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 17);

// @baa 0x016ace10
int ARSoftBodyProjectile::vf_000(void) { return 1; }

// @baa 0x016ace20
bool ARSoftBodyProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ace60
IMPLEMENT_CLASS_AT(ARPlantPod, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 18);

// @baa 0x016acf70
int ARPlantPod::vf_000(void) { return 1; }

// @baa 0x016acf80
bool ARPlantPod::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad150
IMPLEMENT_CLASS_AT(ARBMBossManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 19);

// @baa 0x016ad260
int ARBMBossManager::vf_000(void) { return 1; }

// @baa 0x016ad270
bool ARBMBossManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad2b0
IMPLEMENT_CLASS_AT(ARPawnBossScarecrowBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 21);

// @baa 0x016ad3c0
int ARPawnBossScarecrowBase::vf_000(void) { return 1; }

// @baa 0x016ad3d0
bool ARPawnBossScarecrowBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad410
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 22);

// @baa 0x016ad520
int URSeqAct_SetScarecrowCamera::vf_000(void) { return 1; }

// @baa 0x016ad530
bool URSeqAct_SetScarecrowCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad570
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowPositionOnPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 23);

// @baa 0x016ad680
int URSeqAct_SetScarecrowPositionOnPath::vf_000(void) { return 1; }

// @baa 0x016ad690
bool URSeqAct_SetScarecrowPositionOnPath::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad7c0
int sub_016ad7c0(int a0, int a1) { return a1; }

struct C_016ad7d0 { C_016ad7d0* sub_016ad7d0(int a0); };

// @baa 0x016ad7d0
C_016ad7d0* C_016ad7d0::sub_016ad7d0(int a0) { return this; }

// @baa 0x016ad820
int sub_016ad820(int a0, int a1) { return a1; }

struct C_016ad830 { C_016ad830* sub_016ad830(void); };

// @baa 0x016ad830
C_016ad830* C_016ad830::sub_016ad830(void) { return this; }

// @baa 0x016ad840
int sub_016ad840(int a0, int a1) { return a1; }

struct C_016ad850 { C_016ad850* sub_016ad850(void); };

// @baa 0x016ad850
C_016ad850* C_016ad850::sub_016ad850(void) { return this; }

struct C_016ad860 { C_016ad860* sub_016ad860(int a0); };

// @baa 0x016ad860
C_016ad860* C_016ad860::sub_016ad860(int a0) { return this; }

// @baa 0x016ad8b0
undefined4 sub_016ad8b0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x016ae030
IMPLEMENT_CLASS_AT(URCapeStateConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 21);

// @baa 0x016ae140
int URCapeStateConfig::vf_000(void) { return 1; }

// @baa 0x016ae150
bool URCapeStateConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ae190
IMPLEMENT_CLASS_AT(URCapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 22);

// @baa 0x016ae2a0
int URCapeConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ae2b0
bool URCapeConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ae330
IMPLEMENT_CLASS_AT(URCapeStateConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 23);

// @baa 0x016ae440
int URCapeStateConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ae450
bool URCapeStateConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_016af060 { int sub_016af060(void); };

// @baa 0x016af060
int C_016af060::sub_016af060(void) { return *(int*)((char*)this + 60); }

struct C_016afad0 { int sub_016afad0(void); };

// @baa 0x016afad0
int C_016afad0::sub_016afad0(void) { return *(int*)((char*)this + 4); }

struct C_016afae0 { int sub_016afae0(void); };

// @baa 0x016afae0
int C_016afae0::sub_016afae0(void) { return *(int*)((char*)this + 4); }

struct C_016afaf0 { int a, b, c; C_016afaf0(); };

// @baa 0x016afaf0
C_016afaf0::C_016afaf0() : a(0), b(0), c(0) {}

struct C_016afb00 { int sub_016afb00(void); };

// @baa 0x016afb00
int C_016afb00::sub_016afb00(void) { return *(int*)((char*)this + 4); }

struct C_016afb10 { int sub_016afb10(void); };

// @baa 0x016afb10
int C_016afb10::sub_016afb10(void) { return *(int*)((char*)this + 4); }

struct C_016afb20 { int a, b, c; C_016afb20(); };

// @baa 0x016afb20
C_016afb20::C_016afb20() : a(0), b(0), c(0) {}

struct C_016afb30 { int sub_016afb30(void); };

// @baa 0x016afb30
int C_016afb30::sub_016afb30(void) { return *(int*)((char*)this + 4); }

struct C_016afb40 { int sub_016afb40(void); };

// @baa 0x016afb40
int C_016afb40::sub_016afb40(void) { return *(int*)((char*)this + 4); }

struct C_016afb50 { int sub_016afb50(void); };

// @baa 0x016afb50
int C_016afb50::sub_016afb50(void) { return *(int*)((char*)this + 4); }

struct C_016afb60 { int sub_016afb60(void); };

// @baa 0x016afb60
int C_016afb60::sub_016afb60(void) { return *(int*)((char*)this + 4); }

struct C_016afb70 { int sub_016afb70(void); };

// @baa 0x016afb70
int C_016afb70::sub_016afb70(void) { return *(int*)((char*)this + 4); }

struct C_016afb80 { int sub_016afb80(void); };

// @baa 0x016afb80
int C_016afb80::sub_016afb80(void) { return *(int*)((char*)this + 4); }

struct C_016afb90 { int sub_016afb90(void); };

// @baa 0x016afb90
int C_016afb90::sub_016afb90(void) { return *(int*)((char*)this + 4); }

struct C_016afba0 { int sub_016afba0(void); };

// @baa 0x016afba0
int C_016afba0::sub_016afba0(void) { return *(int*)((char*)this + 4); }

struct C_016afbb0 { int a, b, c; C_016afbb0(); };

// @baa 0x016afbb0
C_016afbb0::C_016afbb0() : a(0), b(0), c(0) {}

struct C_016afbc0 { int sub_016afbc0(void); };

// @baa 0x016afbc0
int C_016afbc0::sub_016afbc0(void) { return *(int*)((char*)this + 4); }

struct C_016afbd0 { int a, b, c; C_016afbd0(); };

// @baa 0x016afbd0
C_016afbd0::C_016afbd0() : a(0), b(0), c(0) {}

struct C_016afbe0 { int sub_016afbe0(void); };

// @baa 0x016afbe0
int C_016afbe0::sub_016afbe0(void) { return *(int*)((char*)this + 4); }

struct C_016afc60 { int a, b, c; C_016afc60(); };

// @baa 0x016afc60
C_016afc60::C_016afc60() : a(0), b(0), c(0) {}

struct C_016afc70 { int sub_016afc70(void); };

// @baa 0x016afc70
int C_016afc70::sub_016afc70(void) { return *(int*)((char*)this + 4); }

struct C_016afc80 { int a, b, c; C_016afc80(); };

// @baa 0x016afc80
C_016afc80::C_016afc80() : a(0), b(0), c(0) {}

struct C_016afd00 { int a, b, c; C_016afd00(); };

// @baa 0x016afd00
C_016afd00::C_016afd00() : a(0), b(0), c(0) {}

struct C_016afd10 { int sub_016afd10(void); };

// @baa 0x016afd10
int C_016afd10::sub_016afd10(void) { return *(int*)((char*)this + 4); }

struct C_016afd20 { C_016afd20* sub_016afd20(int a0); };

// @baa 0x016afd20
C_016afd20* C_016afd20::sub_016afd20(int a0) { return this; }

struct C_016afd30 { int sub_016afd30(void); };

// @baa 0x016afd30
int C_016afd30::sub_016afd30(void) { return *(int*)((char*)this + 0); }

struct C_016afd40 { C_016afd40* sub_016afd40(int a0); };

// @baa 0x016afd40
C_016afd40* C_016afd40::sub_016afd40(int a0) { return this; }

struct C_016afd50 { int sub_016afd50(void); };

// @baa 0x016afd50
int C_016afd50::sub_016afd50(void) { return *(int*)((char*)this + 0); }

struct C_016afd60 { C_016afd60* sub_016afd60(int a0); };

// @baa 0x016afd60
C_016afd60* C_016afd60::sub_016afd60(int a0) { return this; }

struct C_016afd70 { C_016afd70* sub_016afd70(int a0); };

// @baa 0x016afd70
C_016afd70* C_016afd70::sub_016afd70(int a0) { return this; }

struct C_016afd80 { C_016afd80* sub_016afd80(int a0); };

// @baa 0x016afd80
C_016afd80* C_016afd80::sub_016afd80(int a0) { return this; }

struct C_016afd90 { C_016afd90* sub_016afd90(int a0); };

// @baa 0x016afd90
C_016afd90* C_016afd90::sub_016afd90(int a0) { return this; }

struct C_016afda0 { C_016afda0* sub_016afda0(int a0); };

// @baa 0x016afda0
C_016afda0* C_016afda0::sub_016afda0(int a0) { return this; }

struct C_016afdb0 { C_016afdb0* sub_016afdb0(int a0); };

// @baa 0x016afdb0
C_016afdb0* C_016afdb0::sub_016afdb0(int a0) { return this; }

struct C_016afdc0 { C_016afdc0* sub_016afdc0(int a0); };

// @baa 0x016afdc0
C_016afdc0* C_016afdc0::sub_016afdc0(int a0) { return this; }

struct C_016afdd0 { int sub_016afdd0(void); };

// @baa 0x016afdd0
int C_016afdd0::sub_016afdd0(void) { return *(int*)((char*)this + 0); }

struct C_016afde0 { int sub_016afde0(void); };

// @baa 0x016afde0
int C_016afde0::sub_016afde0(void) { return *(int*)((char*)this + 0); }

struct C_016afdf0 { int sub_016afdf0(void); };

// @baa 0x016afdf0
int C_016afdf0::sub_016afdf0(void) { return *(int*)((char*)this + 0); }

struct C_016afe00 { int sub_016afe00(void); };

// @baa 0x016afe00
int C_016afe00::sub_016afe00(void) { return *(int*)((char*)this + 0); }

struct C_016afe10 { int sub_016afe10(void); };

// @baa 0x016afe10
int C_016afe10::sub_016afe10(void) { return *(int*)((char*)this + 0); }

struct C_016afe20 { C_016afe20* sub_016afe20(int a0); };

// @baa 0x016afe20
C_016afe20* C_016afe20::sub_016afe20(int a0) { return this; }

struct C_016afe30 { int sub_016afe30(void); };

// @baa 0x016afe30
int C_016afe30::sub_016afe30(void) { return *(int*)((char*)this + 0); }

struct C_016afe40 { int sub_016afe40(void); };

// @baa 0x016afe40
int C_016afe40::sub_016afe40(void) { return *(int*)((char*)this + 0); }

struct C_016afe50 {
    int sub_016afe50(int);
};

// @baa 0x016afe50
int C_016afe50::sub_016afe50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_016afe60 { C_016afe60* sub_016afe60(int a0); };

// @baa 0x016afe60
C_016afe60* C_016afe60::sub_016afe60(int a0) { return this; }

struct C_016afe70 { int sub_016afe70(void); };

// @baa 0x016afe70
int C_016afe70::sub_016afe70(void) { return *(int*)((char*)this + 0); }

struct C_016afe80 { int sub_016afe80(void); };

// @baa 0x016afe80
int C_016afe80::sub_016afe80(void) { return *(int*)((char*)this + 0); }

struct C_016afe90 {
    int sub_016afe90(int);
};

// @baa 0x016afe90
int C_016afe90::sub_016afe90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_016afea0 { C_016afea0* sub_016afea0(int a0); };

// @baa 0x016afea0
C_016afea0* C_016afea0::sub_016afea0(int a0) { return this; }

struct C_016afeb0 { int sub_016afeb0(void); };

// @baa 0x016afeb0
int C_016afeb0::sub_016afeb0(void) { return *(int*)((char*)this + 0); }

struct C_016afec0 {
    int sub_016afec0(int);
};

// @baa 0x016afec0
int C_016afec0::sub_016afec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_016afed0 { C_016afed0* sub_016afed0(int a0); };

// @baa 0x016afed0
C_016afed0* C_016afed0::sub_016afed0(int a0) { return this; }

struct C_016afee0 { int sub_016afee0(void); };

// @baa 0x016afee0
int C_016afee0::sub_016afee0(void) { return *(int*)((char*)this + 0); }

struct C_016afef0 {
    int sub_016afef0(int);
};

// @baa 0x016afef0
int C_016afef0::sub_016afef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_016aff00 { C_016aff00* sub_016aff00(int a0); };

// @baa 0x016aff00
C_016aff00* C_016aff00::sub_016aff00(int a0) { return this; }

struct C_016aff10 { int sub_016aff10(void); };

// @baa 0x016aff10
int C_016aff10::sub_016aff10(void) { return *(int*)((char*)this + 0); }

struct C_016aff20 {
    int sub_016aff20(int);
};

// @baa 0x016aff20
int C_016aff20::sub_016aff20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_016aff30 { C_016aff30* sub_016aff30(int a0); };

// @baa 0x016aff30
C_016aff30* C_016aff30::sub_016aff30(int a0) { return this; }

struct C_016aff40 { int sub_016aff40(void); };

// @baa 0x016aff40
int C_016aff40::sub_016aff40(void) { return *(int*)((char*)this + 0); }

struct C_016aff50 { int sub_016aff50(void); };

// @baa 0x016aff50
int C_016aff50::sub_016aff50(void) { return *(int*)((char*)this + 0); }

struct C_016aff60 {
    int sub_016aff60(int);
};

// @baa 0x016aff60
int C_016aff60::sub_016aff60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_016aff70 { int sub_016aff70(void); };

// @baa 0x016aff70
int C_016aff70::sub_016aff70(void) { return *(int*)((char*)this + 0); }

struct C_016aff80 { int sub_016aff80(void); };

// @baa 0x016aff80
int C_016aff80::sub_016aff80(void) { return *(int*)((char*)this + 0); }

struct Sub
{
    void sub_009ef010();
};

// @baa 0x016afac0
void __stdcall sub_016afac0(Sub* Object)
{
    Object->sub_009ef010();
}
