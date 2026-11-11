// R3rdPersonCamera.cpp (part 1 of 12): 158 functions
// Placed here by: neighbours 125, callers 18, class 8, file 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_007defc0(int);
};

int sub_0053df70(...);
// @baa 0x007defc0
void C::sub_007defc0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_01613a60(void);
int sub_01634360(...);
extern undefined4 g_026e1a4c;
// @baa 0x0154c9e0
int sub_0154c9e0(void)
{
  if (g_026e1a4c == 0) {
    g_026e1a4c = sub_01634360(L"BmGame");
    sub_01613a60();
  }
  return g_026e1a4c;
}

// @baa 0x01686ab0
int sub_01686ab0(int a0, int a1) { return a1; }

struct C_01686ac0 { C_01686ac0* sub_01686ac0(void); };

// @baa 0x01686ac0
C_01686ac0* C_01686ac0::sub_01686ac0(void) { return this; }

struct C_01686ad0 { C_01686ad0* sub_01686ad0(void); };

// @baa 0x01686ad0
C_01686ad0* C_01686ad0::sub_01686ad0(void) { return this; }

struct C_01686ae0 { C_01686ae0* sub_01686ae0(void); };

// @baa 0x01686ae0
C_01686ae0* C_01686ae0::sub_01686ae0(void) { return this; }

struct C_01686b60 { C_01686b60* sub_01686b60(int a0); };

// @baa 0x01686b60
C_01686b60* C_01686b60::sub_01686b60(int a0) { return this; }

struct C_01686b70 { C_01686b70* sub_01686b70(int a0); };

// @baa 0x01686b70
C_01686b70* C_01686b70::sub_01686b70(int a0) { return this; }

struct C_01686b80 { C_01686b80* sub_01686b80(int a0); };

// @baa 0x01686b80
C_01686b80* C_01686b80::sub_01686b80(int a0) { return this; }

extern FName g_026e2634;
struct FCameraState_ {
    DWORD Data[11];
};

struct AR3rdPersonCamera_ : public AR3rdPersonCamera {
    UFunction* sub_005d7d10(FName InName, INT Global); /* FindFunctionChecked */
    void sub_01686c60(FCameraState_& OutState, FLOAT DeltaTime);
};

// @baa 0x01686c60
void AR3rdPersonCamera_::sub_01686c60(FCameraState_& OutState, FLOAT DeltaTime)
{
    struct { FCameraState_ OutState; FLOAT DeltaTime; } Parms;
    Parms.OutState = OutState;
    Parms.DeltaTime = DeltaTime;
    ProcessEvent(sub_005d7d10(g_026e2634, 0), &Parms, 0);
    OutState = Parms.OutState;
}

// @baa 0x01686d60
int sub_01686d60(int a0, int a1) { return a1; }

extern char g_02202300[];
// @baa 0x01686d70
int sub_01686d70(void) { return (int)g_02202300; }

// @baa 0x01686db0
int sub_01686db0(int a0, int a1) { return a1; }

// @baa 0x01686dc0
int sub_01686dc0(int a0, int a1) { return a1; }

// @baa 0x01686dd0
int sub_01686dd0(int a0, int a1) { return a1; }

// @baa 0x01686de0
int sub_01686de0(int a0, int a1) { return a1; }

// @baa 0x01686df0
int sub_01686df0(int a0, int a1) { return a1; }

int sub_016ac1e0(void);
int sub_016cb000(...);
extern undefined4 g_026e20fc;
// @baa 0x01686e00
int sub_01686e00(void)
{
  if (g_026e20fc == 0) {
    g_026e20fc = sub_016cb000(L"BmGame");
    sub_016ac1e0();
  }
  return g_026e20fc;
}

// @baa 0x01686e30
IMPLEMENT_CLASS_AT(ARPawnPlayerAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 44);

// @baa 0x01686f40
int ARPawnPlayerAnim::vf_000(void) { return 1; }

// @baa 0x01686f50
bool ARPawnPlayerAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01686f90
int ARPawnPlayerCombat::vf_000(void) { return 1; }

// @baa 0x01686fa0
int ARPawnPlayer::vf_000(void) { return 1; }

// @baa 0x01686fb0
int ARPawnPlayerBm::vf_000(void) { return 1; }

// @baa 0x01686fc0
int ARPawnPlayerJokerBase::vf_000(void) { return 1; }

// @baa 0x01686fd0
int ARPawnPlayerChallengeJokerBase::vf_000(void) { return 1; }

// @baa 0x01686fe0
IMPLEMENT_CLASS_AT(URBatmanDamageState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 50);

// @baa 0x016870f0
int URBatmanDamageState::vf_000(void) { return 1; }

// @baa 0x01687100
bool URBatmanDamageState::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01687140
IMPLEMENT_CLASS_AT(URBatmanDamageStateFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 51);

// @baa 0x01687250
int URBatmanDamageStateFactoryNew::vf_000(void) { return 1; }

// @baa 0x01687260
bool URBatmanDamageStateFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016872a0
IMPLEMENT_CLASS_AT(URSeqAct_UpdateBatmanDamageLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 52);

// @baa 0x016873b0
int URSeqAct_UpdateBatmanDamageLevel::vf_000(void) { return 1; }

// @baa 0x016873c0
bool URSeqAct_UpdateBatmanDamageLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01687400
IMPLEMENT_CLASS_AT(UREnvironmentCheckTicker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 54);

// @baa 0x01687510
int UREnvironmentCheckTicker::vf_000(void) { return 1; }

// @baa 0x01687520
bool UREnvironmentCheckTicker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01687560
IMPLEMENT_CLASS_AT(URDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 56);

// @baa 0x01687670
int URDamageType::vf_000(void) { return 1; }

// @baa 0x01687680
bool URDamageType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016876c0
int URDmgType_Strike::vf_000(void) { return 1; }

// @baa 0x016876d0
int URDmgType_Throw::vf_000(void) { return 1; }

// @baa 0x016876e0
int URDmgType_IntoThrow::vf_000(void) { return 1; }

// @baa 0x016876f0
int URDmgType_Counter::vf_000(void) { return 1; }

// @baa 0x01687700
int URDmgType_CombatTakedown::vf_000(void) { return 1; }

// @baa 0x01687710
int URDmgType_Takedown::vf_000(void) { return 1; }

// @baa 0x01687720
int URDmgType_Takedown_Floor::vf_000(void) { return 1; }

// @baa 0x01687730
int URDmgType_Redirect::vf_000(void) { return 1; }

// @baa 0x01688690
void ARPawnPlayer::vf_664(int a0) {  }

// @baa 0x016886a0
void ARPawnPlayer::vf_668(int a0) {  }

struct C_01688700 {
    void sub_01688700(undefined4, undefined4, undefined4);
};

// @baa 0x01688700
void C_01688700::sub_01688700(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x888) = *(uint *)(param_1 + 0x888) | 1;
  *(undefined4 *)(param_1 + 0x87c) = param_2;
  *(undefined4 *)(param_1 + 0x880) = param_3;
  *(undefined4 *)(param_1 + 0x884) = param_4;
  return;
}

// @baa 0x01688950
float ARPawnPlayerChallengeJokerBase::vf_678(void) { return *(float*)((char*)this + 2700); }

// @baa 0x01688ab0
void sub_01688ab0(char * param_1)
{
  if (*param_1 == '\x01') {
    *param_1 = '\x02';
    return;
  }
  if (*param_1 == '\x02') {
    *param_1 = '\x01';
  }
  return;
}

// @baa 0x01688ad0
void sub_01688ad0(char * param_1)
{
  if (*param_1 == '\x03') {
    *param_1 = '\x04';
    return;
  }
  if (*param_1 == '\x04') {
    *param_1 = '\x03';
  }
  return;
}

// @baa 0x01688af0
void sub_01688af0(char * param_1)
{
  if (*param_1 == '\x01') {
    *param_1 = '\x02';
    return;
  }
  if (*param_1 == '\x02') {
    *param_1 = '\x01';
  }
  return;
}

// @baa 0x01688b30
void sub_01688b30(float * param_1)
{
  *param_1 = *param_1 * -1.0;
  return;
}

// @baa 0x01688b50
void sub_01688b50(char * param_1)
{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *param_1 = '\x02';
    return;
  }
  if (cVar1 == '\x02') {
    *param_1 = '\x01';
    return;
  }
  if (cVar1 == '\x03') {
    *param_1 = '\x04';
    return;
  }
  if (cVar1 == '\x04') {
    *param_1 = '\x03';
  }
  return;
}

// @baa 0x01688b80
void sub_01688b80(char * param_1)
{
  if (*param_1 == '\x01') {
    *param_1 = '\x02';
    return;
  }
  if (*param_1 == '\x02') {
    *param_1 = '\x01';
  }
  return;
}

// @baa 0x01688bb0
IMPLEMENT_CLASS_AT(ARCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 14);

// @baa 0x01688cc0
int ARCameraActor::vf_000(void) { return 1; }

// @baa 0x01688cd0
bool ARCameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01688d10
int ARScarecrowCamera::vf_000(void) { return 1; }

// @baa 0x01688d20
int ARAnimatedCameraActor::vf_000(void) { return 1; }

// @baa 0x01688d30
IMPLEMENT_CLASS_AT(AR3rdPersonCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 17);

// @baa 0x01688e60
bool AR3rdPersonCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01688ea0
IMPLEMENT_CLASS_AT(ARBMCutsceneBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 19);

// @baa 0x01688fb0
int ARBMCutsceneBase::vf_000(void) { return 1; }

// @baa 0x01688fc0
bool ARBMCutsceneBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01689000
int ARBmBatmanCutscene::vf_000(void) { return 1; }

// @baa 0x01689010
IMPLEMENT_CLASS_AT(URDOFManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 22);

// @baa 0x01689120
int URDOFManager::vf_000(void) { return 1; }

// @baa 0x01689130
bool URDOFManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_016895e0 { C_016895e0* sub_016895e0(void); };

// @baa 0x016895e0
C_016895e0* C_016895e0::sub_016895e0(void) { return this; }

// @baa 0x0168a610
undefined4 AR3rdPersonCamera::sub_0168a610(void)
{
    int param_1 = (int)this;

  if (((((*(uint *)(param_1 + 0x35c) & 0x2000000) != 0) ||
       ((*(uint *)(param_1 + 0x360) & 0x800) != 0)) && (*(int *)(param_1 + 0x1a8) != 0)) &&
     (*(int *)(param_1 + 0x2c4) == *(int *)(*(int *)(param_1 + 0x1a8) + 0x1a8))) {
    return 1;
  }
  return 0;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01696d40 { void* Data; int Num; int Max; void sub_01696d40(); };

// @baa 0x01696d40
void C_01696d40::sub_01696d40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01696e90 { void* Data; int Num; int Max; void sub_01696e90(); };

// @baa 0x01696e90
void C_01696e90::sub_01696e90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01696ef0 { void* Data; int Num; int Max; void sub_01696ef0(); };

// @baa 0x01696ef0
void C_01696ef0::sub_01696ef0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01696f50 { void* Data; int Num; int Max; void sub_01696f50(); };

// @baa 0x01696f50
void C_01696f50::sub_01696f50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01696fb0 { void* Data; int Num; int Max; void sub_01696fb0(); };

// @baa 0x01696fb0
void C_01696fb0::sub_01696fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b3f0 { void* Data; int Num; int Max; void sub_0169b3f0(); };

// @baa 0x0169b3f0
void C_0169b3f0::sub_0169b3f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b450 {
    undefined4 sub_0169b450();
};

// @baa 0x0169b450
undefined4 C_0169b450::sub_0169b450(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0169b460 { C_0169b460* sub_0169b460(void); };

// @baa 0x0169b460
C_0169b460* C_0169b460::sub_0169b460(void) { return this; }

struct C_0169b470 { C_0169b470* sub_0169b470(void); };

// @baa 0x0169b470
C_0169b470* C_0169b470::sub_0169b470(void) { return this; }

struct C_0169b480 { void* Data; int Num; int Max; void sub_0169b480(); };

// @baa 0x0169b480
void C_0169b480::sub_0169b480() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b4e0 { void* Data; int Num; int Max; void sub_0169b4e0(); };

// @baa 0x0169b4e0
void C_0169b4e0::sub_0169b4e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b540 { void* Data; int Num; int Max; void sub_0169b540(); };

// @baa 0x0169b540
void C_0169b540::sub_0169b540() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b5a0 { void* Data; int Num; int Max; void sub_0169b5a0(); };

// @baa 0x0169b5a0
void C_0169b5a0::sub_0169b5a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0169b600 { void* Data; int Num; int Max; void sub_0169b600(); };

// @baa 0x0169b600
void C_0169b600::sub_0169b600() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0169d5d0
// @baa 0x0169dcc0
// @baa 0x0169dde0
// @baa 0x0169de80
// @baa 0x0169deb0
IMPLEMENT_CLASS_AT(ARPawnPlayerCombat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 45);

// @baa 0x0169df90
// @baa 0x0169dfc0
ARPawnPlayer::ARPawnPlayer()
{
    FrontBarrier.Type = 0;
    FrontBarrier.AnimDir = 0;
    FrontBarrier.ActorInstance = 0;
    UnderBarrier.Type = 0;
    UnderBarrier.AnimDir = 0;
    UnderBarrier.ActorInstance = 0;
    UpperBarrier.Type = 0;
    UpperBarrier.AnimDir = 0;
    UpperBarrier.ActorInstance = 0;
    LeftFeature.Type = 0;
    LeftFeature.AnimDir = 0;
    LeftFeature.ActorInstance = 0;
    RightFeature.Type = 0;
    RightFeature.AnimDir = 0;
    RightFeature.ActorInstance = 0;
    *(DWORD*)((BYTE*)this + 0x9cc) = 0;
    *(DWORD*)((BYTE*)this + 0x9d0) = 0;
}

struct C_0169e120 { C_0169e120* sub_0169e120(int a0); };

// @baa 0x0169e120
C_0169e120* C_0169e120::sub_0169e120(int a0) { return this; }

struct C_0169e130 { C_0169e130* sub_0169e130(int a0); };

// @baa 0x0169e130
C_0169e130* C_0169e130::sub_0169e130(int a0) { return this; }

struct C_0169e140 { C_0169e140* sub_0169e140(int a0); };

// @baa 0x0169e140
C_0169e140* C_0169e140::sub_0169e140(int a0) { return this; }

struct C_0169e150 { C_0169e150* sub_0169e150(int a0); };

// @baa 0x0169e150
C_0169e150* C_0169e150::sub_0169e150(int a0) { return this; }

// @baa 0x0169e2b0
int ARPawnPlayer::sub_0169e2b0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x6bc;
}

// @baa 0x0169e2c0
UINT ARPawnPlayer::vf_178() { return 1; }

struct A_0169e2d0 { virtual void sub_0169e2e0(); char pad[1720]; };

struct B_0169e2d0 { virtual void sub_0169e2e0(); };

struct C_0169e2d0 : A_0169e2d0, B_0169e2d0 { virtual void sub_0169e2e0(); C_0169e2d0(); };

C_0169e2d0::C_0169e2d0() {}

// @baa 0x0169e2d0
void C_0169e2d0::sub_0169e2e0() {}

int sub_005c7a70(...);
int sub_0169dfc0(void);
// @baa 0x0169e2e0
undefined4 ARPawnPlayer::sub_0169e2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0169dfc0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xa8c);
  }
  return param_1;
}

int sub_0169e310(void);
extern undefined * g_0237ef08;
extern undefined * g_0237ef20;
// @baa 0x0169e3b0
undefined4 * ARPawnPlayer::sub_0169e3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0169e310();
  *param_1 = (undefined4)(&g_0237ef20);
  param_1[0x1af] = (undefined4)(&g_0237ef08);
  return param_1;
}

struct A_0169e3d0 { virtual void sub_0169e470(); char pad[1720]; };

struct B_0169e3d0 { virtual void sub_0169e470(); };

struct C_0169e3d0 : A_0169e3d0, B_0169e3d0 { virtual void sub_0169e470(); C_0169e3d0(); };

C_0169e3d0::C_0169e3d0() {}

// @baa 0x0169e3d0
void C_0169e3d0::sub_0169e470() {}

// @baa 0x0169e3e0
IMPLEMENT_CLASS_AT(ARPawnPlayerBm, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 47);

// @baa 0x0169e470
extern undefined * g_0237f598;
extern undefined * g_0237f5b0;
// @baa 0x0169e4a0
undefined4 * ARPawnPlayer::sub_0169e4a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0169e310();
  *param_1 = (undefined4)(&g_0237f5b0);
  param_1[0x1af] = (undefined4)(&g_0237f598);
  return param_1;
}

struct A_0169e4c0 { virtual void sub_0169e570(); char pad[1720]; };

struct B_0169e4c0 { virtual void sub_0169e570(); };

struct C_0169e4c0 : A_0169e4c0, B_0169e4c0 { virtual void sub_0169e570(); C_0169e4c0(); };

C_0169e4c0::C_0169e4c0() {}

// @baa 0x0169e4c0
void C_0169e4c0::sub_0169e570() {}

// @baa 0x0169e4d0
IMPLEMENT_CLASS_AT(ARPawnPlayerChallengeJokerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 49);

// @baa 0x0169e570
extern undefined * g_0237fc38;
extern undefined * g_0237fc50;
// @baa 0x0169e5a0
undefined4 * ARPawnPlayer::sub_0169e5a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0169e310();
  *param_1 = (undefined4)(&g_0237fc50);
  param_1[0x1af] = (undefined4)(&g_0237fc38);
  return param_1;
}

struct A_0169e5c0 { virtual void sub_0169e650(); char pad[1720]; };

struct B_0169e5c0 { virtual void sub_0169e650(); };

struct C_0169e5c0 : A_0169e5c0, B_0169e5c0 { virtual void sub_0169e650(); C_0169e5c0(); };

C_0169e5c0::C_0169e5c0() {}

// @baa 0x0169e5c0
void C_0169e5c0::sub_0169e650() {}

// @baa 0x0169e5d0
IMPLEMENT_CLASS_AT(ARPawnPlayerJokerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 48);

// @baa 0x0169e650
// @baa 0x0169e6b0
// @baa 0x0169e770
// @baa 0x0169e7a0
// @baa 0x0169e840
// @baa 0x0169e8a0
IMPLEMENT_CLASS_AT(ARBmBatmanCutscene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 20);

// @baa 0x0169e900
// @baa 0x0169e930
// @baa 0x0169e9c0
// @baa 0x0169ea20
IMPLEMENT_CLASS_AT(ARAnimatedCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 16);

// @baa 0x0169ea80
// @baa 0x0169eae0
IMPLEMENT_CLASS_AT(ARScarecrowCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\R3rdPersonCamera.cpp", 15);

// @baa 0x0169eb40
// @baa 0x0169ef50
// @baa 0x0169ef80
// @baa 0x0169efb0
IMPLEMENT_CLASS_AT(ARPawnPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 46);

// @baa 0x0169efc0
// @baa 0x0169eff0
// @baa 0x0169f020
// @baa 0x0169f050
// @baa 0x0169f080
// @baa 0x0169f0b0
// @baa 0x0169f0e0
// @baa 0x0169f110
// @baa 0x0169f140
// @baa 0x0169f5f0
// @baa 0x0169f6b0
// @baa 0x0169f770
// @baa 0x0169f830
// @baa 0x0169f8f0
// @baa 0x0169f9b0
// @baa 0x0169fa90
// @baa 0x0169fb00
int sub_01688ea0(void);
int sub_0169f8f0(...);
extern undefined4 g_026e1e40;
// @baa 0x0169fb30
int sub_0169fb30(void)
{
  if (g_026e1e40 == 0) {
    g_026e1e40 = sub_0169f8f0(L"BmGame");
    sub_01688ea0();
  }
  return g_026e1e40;
}

int sub_01688bb0(void);
int sub_0169f5f0(...);
extern undefined4 g_026e1e30;
// @baa 0x0169fb60
int sub_0169fb60(void)
{
  if (g_026e1e30 == 0) {
    g_026e1e30 = sub_0169f5f0(L"BmGame");
    sub_01688bb0();
  }
  return g_026e1e30;
}

// @baa 0x0169fb90
// @baa 0x0169fca0
bool ARPawnPlayerCombat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169fce0
// @baa 0x0169fdf0
bool ARScarecrowCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169fe30
// @baa 0x0169ff40
bool ARAnimatedCameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0169ff80
// @baa 0x016a0090
bool ARBmBatmanCutscene::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
