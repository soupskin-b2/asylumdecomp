// BmGame_15b0000.cpp: 131 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_0231d538;
// @baa 0x015b41c0
undefined4 * UObject::sub_015b41c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231d538);
  return param_1;
}

extern undefined * g_0231d6d8;
// @baa 0x015b4270
undefined4 * UObject::sub_015b4270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231d6d8);
  return param_1;
}

// @baa 0x015b4290
IMPLEMENT_CLASS_AT(URSkelControlFootPlacement, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp", 16);

// @baa 0x015b42f0
struct M_015b4980 { void sub_015b3b90(); };

struct C { char pad[4]; M_015b4980 m; void sub_015b4980(); };

// @baa 0x015b4980
void C::sub_015b4980() { m.sub_015b3b90(); }

// @baa 0x015bc6a0
void sub_015bc6a0(void) {  }

// @baa 0x015bc6b0
void sub_015bc6b0(void) {  }

// @baa 0x015bc6c0
float10 sub_015bc6c0(double param_1)
{
  return (float10)param_1;
}

struct C_015bc7f0 {
    void sub_015bc7f0(float *);
};

// @baa 0x015bc7f0
void C_015bc7f0::sub_015bc7f0(float * param_2)
{
    float * param_1 = (float *)this;
  *param_2 = 1.0 - *param_1;
  return;
}

struct C_015bc830 {
    undefined4 sub_015bc830();
};

// @baa 0x015bc830
undefined4 C_015bc830::sub_015bc830(void)
{
    float * param_1 = (float *)this;
  if (0.9999 < *param_1) {
    return 1;
  }
  return 0;
}

struct C_015bc850 {
    undefined4 sub_015bc850();
};

// @baa 0x015bc850
undefined4 C_015bc850::sub_015bc850(void)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) && (param_1[3] == 0)) {
    return 1;
  }
  return 0;
}

struct C_015bccc0 {
    bool sub_015bccc0();
};

// @baa 0x015bccc0
bool C_015bccc0::sub_015bccc0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

// @baa 0x015bcd40
undefined4 sub_015bcd40(uint * param_1, uint * param_2)
{
  if ((((((*param_1 ^ *param_2) & 1) == 0) && (param_1[5] == param_2[5])) &&
      ((char)param_1[4] == (char)param_2[4])) &&
     ((param_1[8] == param_2[8] && (param_1[9] == param_2[9])))) {
    return 0;
  }
  return 1;
}

// @baa 0x015bce50
int sub_015bce50(int a0, int a1) { return a1; }

extern undefined * g_02325fe0;
// @baa 0x015bce60
undefined4 * UObject::sub_015bce60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02325fe0);
  return param_1;
}

// @baa 0x015bce80
IMPLEMENT_CLASS_AT(URAnimUtil_PhysicsOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PhysicsOutput.cpp", 16);

// @baa 0x015bcee0
// @baa 0x015bcf00
undefined4 sub_015bcf00(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_023260f0;
// @baa 0x015bcf10
undefined4 * UObject::sub_015bcf10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023260f0);
  return param_1;
}

// @baa 0x015bcf30
IMPLEMENT_CLASS_AT(URAnimNotify_AddForce, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 16);

// @baa 0x015bcf90
void URAnimNotify_AddForce::vf_10c(UINT a0) {  }

// @baa 0x015bcfa0
// @baa 0x015bcfc0
undefined4 sub_015bcfc0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bcff0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginBoneRescale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 17);

// @baa 0x015bd050
void URAnimNotify_BeginBoneRescale::vf_10c(UINT a0) {  }

// @baa 0x015bd060
// @baa 0x015bd080
undefined4 sub_015bd080(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd090
IMPLEMENT_CLASS_AT(URAnimNotify_BeginEnd, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 18);

// @baa 0x015bd0f0
void URAnimNotify_BeginEnd::vf_10c(UINT a0) {  }

// @baa 0x015bd170
IMPLEMENT_CLASS_AT(URAnimNotify_Clip, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 24);

// @baa 0x015bd1d0
// @baa 0x015bd1f0
undefined4 sub_015bd1f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd220
IMPLEMENT_CLASS_AT(URAnimNotify_ClipRootMotion, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 25);

// @baa 0x015bd280
// @baa 0x015bd2a0
undefined4 sub_015bd2a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd2d0
IMPLEMENT_CLASS_AT(URAnimNotify_CollisionOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 26);

// @baa 0x015bd330
// @baa 0x015bd350
undefined4 sub_015bd350(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd380
IMPLEMENT_CLASS_AT(URAnimNotify_FloorHeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 29);

// @baa 0x015bd3e0
// @baa 0x015bd400
undefined4 sub_015bd400(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd430
IMPLEMENT_CLASS_AT(URAnimNotify_ForwardYaw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 30);

// @baa 0x015bd490
// @baa 0x015bd4b0
undefined4 sub_015bd4b0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd4e0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginFixIK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 19);

// @baa 0x015bd540
void URAnimNotify_BeginFixIK::vf_10c(UINT a0) {  }

// @baa 0x015bd550
// @baa 0x015bd570
undefined4 sub_015bd570(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd5a0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginRagdoll, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 20);

// @baa 0x015bd600
void URAnimNotify_BeginRagdoll::vf_10c(UINT a0) {  }

// @baa 0x015bd610
// @baa 0x015bd640
int sub_015bd640(int a0, int a1) { return a1; }

// @baa 0x015bd670
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 22);

// @baa 0x015bd6d0
void URAnimNotify_CanCancelAfterHere::vf_10c(UINT a0) {  }

// @baa 0x015bd6e0
// @baa 0x015bd700
undefined4 sub_015bd700(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd730
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelBeforeHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 21);

// @baa 0x015bd790
void URAnimNotify_CanCancelBeforeHere::vf_10c(UINT a0) {  }

// @baa 0x015bd7a0
// @baa 0x015bd7c0
undefined4 sub_015bd7c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd7f0
IMPLEMENT_CLASS_AT(URAnimNotify_CanCorrectAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 23);

// @baa 0x015bd850
void URAnimNotify_CanCorrectAfterHere::vf_10c(UINT a0) {  }

// @baa 0x015bd860
// @baa 0x015bd880
undefined4 sub_015bd880(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd8b0
IMPLEMENT_CLASS_AT(URAnimNotify_EndFixIK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 27);

// @baa 0x015bd910
void URAnimNotify_EndFixIK::vf_10c(UINT a0) {  }

// @baa 0x015bd920
// @baa 0x015bd940
undefined4 sub_015bd940(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bd970
IMPLEMENT_CLASS_AT(URAnimNotify_EndRagdoll, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 28);

// @baa 0x015bd9d0
void URAnimNotify_EndRagdoll::vf_10c(UINT a0) {  }

// @baa 0x015bdac0
IMPLEMENT_CLASS_AT(URAnimNotify_MeetingPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 31);

// @baa 0x015bdb20
void URAnimNotify_MeetingPoint::vf_10c(UINT a0) {  }

// @baa 0x015bdb30
// @baa 0x015bdb50
undefined4 sub_015bdb50(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015bdb90
IMPLEMENT_CLASS_AT(URAnimNotify_WeaponSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 33);

// @baa 0x015bdbf0
void URAnimNotify_WeaponSwitch::vf_10c(UINT a0) {  }

// @baa 0x015bdc00
struct C_015be0f0 { int a, b; C_015be0f0(int, int); };

// @baa 0x015be0f0
C_015be0f0::C_015be0f0(int x, int y) : a(x), b(y) {}

struct C_015be130 {
    void sub_015be130();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x015be130
void C_015be130::sub_015be130(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    sub_006311e0("!InsideSetWeights && \"Missing EndSetWeights?\"",
                 "BmGame/Inc\\BmGameAnimNodeClasses.h",0x64a,&g_01e3f3dc);
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
  return;
}

// @baa 0x015be290
undefined4 sub_015be290(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02327460;
// @baa 0x015be2a0
undefined4 * UObject::sub_015be2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327460);
  return param_1;
}

// @baa 0x015be2c0
IMPLEMENT_CLASS_AT(URAnimUtil_PosePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PosePlayer.cpp", 16);

// @baa 0x015be320
// @baa 0x015be360
int sub_015be360(int a0, int a1) { return a1; }

extern undefined * g_02327570;
// @baa 0x015be370
undefined4 * UObject::sub_015be370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327570);
  return param_1;
}

// @baa 0x015be390
IMPLEMENT_CLASS_AT(URAnimUtil_MovementPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_MovementPlayer.cpp", 14);

// @baa 0x015be3f0
struct C_015be410 { int a, b; C_015be410(int, int); };

// @baa 0x015be410
C_015be410::C_015be410(int x, int y) : a(x), b(y) {}

// @baa 0x015be4b0
int sub_015be4b0(int a0, int a1) { return a1; }

extern undefined * g_02327680;
// @baa 0x015be4c0
undefined4 * UObject::sub_015be4c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327680);
  return param_1;
}

// @baa 0x015be4e0
IMPLEMENT_CLASS_AT(URAnimUtil_OverlayPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_OverlayPlayer.cpp", 14);

// @baa 0x015be540
// @baa 0x015be560
undefined4 sub_015be560(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02327790;
// @baa 0x015be570
undefined4 * UObject::sub_015be570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327790);
  return param_1;
}

// @baa 0x015be590
IMPLEMENT_CLASS_AT(URAnimUtil_RagdollPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_RagdollPlayer.cpp", 14);

// @baa 0x015be5f0
// @baa 0x015be610
undefined4 sub_015be610(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_023278a0;
// @baa 0x015be620
undefined4 * UObject::sub_015be620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023278a0);
  return param_1;
}

// @baa 0x015be640
IMPLEMENT_CLASS_AT(URAnimUtil_Layers, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Layers.cpp", 14);

// @baa 0x015be6a0
// @baa 0x015be700
int sub_015be700(int a0, int a1) { return a1; }

extern undefined * g_023279b0;
// @baa 0x015be710
undefined4 * UObject::sub_015be710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023279b0);
  return param_1;
}

// @baa 0x015be730
IMPLEMENT_CLASS_AT(URAnimUtil_MovementOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_MovementOutput.cpp", 14);

// @baa 0x015be790
int sub_015966a0(void);
int sub_0159c8e0(...);
extern undefined4 g_026e1408;
// @baa 0x015be7b0
int sub_015be7b0(void)
{
  if (g_026e1408 == 0) {
    g_026e1408 = sub_0159c8e0(L"BmGame");
    sub_015966a0();
  }
  return g_026e1408;
}

int sub_01596800(void);
int sub_0159c9e0(...);
extern undefined4 g_026e140c;
// @baa 0x015be7e0
int sub_015be7e0(void)
{
  if (g_026e140c == 0) {
    g_026e140c = sub_0159c9e0(L"BmGame");
    sub_01596800();
  }
  return g_026e140c;
}

struct C_015be810 {
    bool sub_015be810();
};

// @baa 0x015be810
bool C_015be810::sub_015be810(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

// @baa 0x015be840
// @baa 0x015be950
int URAnimUtil_Layers::vf_000(void) { return 1; }

// @baa 0x015be960
bool URAnimUtil_Layers::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015bf450
// @baa 0x015bf560
int URAnimUtil_MovementPlayer::vf_000(void) { return 1; }

// @baa 0x015bf570
bool URAnimUtil_MovementPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015bf9a0
// @baa 0x015bfab0
int URAnimNotify_AddForce::vf_000(void) { return 1; }

// @baa 0x015bfac0
bool URAnimNotify_AddForce::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015bfb00
// @baa 0x015bfc10
int URAnimNotify_BeginBoneRescale::vf_000(void) { return 1; }

// @baa 0x015bfc20
bool URAnimNotify_BeginBoneRescale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015bfc60
// @baa 0x015bfd70
int URAnimNotify_BeginEnd::vf_000(void) { return 1; }

// @baa 0x015bfd80
bool URAnimNotify_BeginEnd::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015bfdc0
// @baa 0x015bfed0
int URAnimNotify_BeginFixIK::vf_000(void) { return 1; }

// @baa 0x015bfee0
bool URAnimNotify_BeginFixIK::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_015bccd0
{
    FLOAT X, Y;
    C_015bccd0& operator=(const C_015bccd0& O);
};

// @baa 0x015bccd0
C_015bccd0& C_015bccd0::operator=(const C_015bccd0& O)
{
    X = O.X;
    Y = O.Y;
    return *this;
}

struct C_015be820
{
    INT A, B, C, D, E;
    C_015be820* sub_015be820();
};

// @baa 0x015be820
C_015be820* C_015be820::sub_015be820()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    return this;
}

struct C_015be6c0
{
    UBOOL F;
    FLOAT X, Y;
    C_015be6c0* sub_015be6c0(FLOAT A, FLOAT B);
};

// @baa 0x015be6c0
C_015be6c0* C_015be6c0::sub_015be6c0(FLOAT A, FLOAT B)
{
    F |= 1;
    X = A;
    Y = B;
    return this;
}
