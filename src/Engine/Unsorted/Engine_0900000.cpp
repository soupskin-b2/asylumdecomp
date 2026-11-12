// Engine_0900000.cpp (part 1 of 2): 138 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0090a050
void sub_0090a050(void)
{
  return;
}

struct C { C* sub_0090af40(int a0); };

// @baa 0x0090af40
C* C::sub_0090af40(int a0) { return this; }

struct C_0090af50 { C_0090af50* sub_0090af50(int a0); };

// @baa 0x0090af50
C_0090af50* C_0090af50::sub_0090af50(int a0) { return this; }

struct C_0090b370 {
    undefined4 sub_0090b370(int *);
};

// @baa 0x0090b370
undefined4 C_0090b370::sub_0090b370(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}

// @baa 0x0090b430
int sub_0090b430(int a0, int a1) { return a1; }

struct C_0090b440 {
    undefined4 sub_0090b440();
};

// @baa 0x0090b440
undefined4 C_0090b440::sub_0090b440(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0x344) & 2) == 0) &&
     ((*(int *)(param_1 + 0x27c) == 0 || ((*(byte *)(*(int *)(param_1 + 0x27c) + 0x344) & 2) == 0)))
     ) {
    return 0;
  }
  return 1;
}

// @baa 0x0090b4b0
int sub_0090b4b0(int a0, int a1) { return a1; }

// @baa 0x0090b4c0
IMPLEMENT_CLASS_AT(UMusicTrackDataStructures, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequenceMusic.cpp", 10);

// @baa 0x0090b5d0
int UMusicTrackDataStructures::vf_000(void) { return 1; }

// @baa 0x0090b5e0
bool UMusicTrackDataStructures::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090b620
IMPLEMENT_CLASS_AT(USeqAct_PlayMusicTrack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequenceMusic.cpp", 11);

// @baa 0x0090b730
int USeqAct_PlayMusicTrack::vf_000(void) { return 1; }

// @baa 0x0090b740
bool USeqAct_PlayMusicTrack::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090b7d0
IMPLEMENT_CLASS_AT(UShadowMapTexture2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 10);

// @baa 0x0090b8e0
int UShadowMapTexture2D::vf_000(void) { return 1; }

// @baa 0x0090b8f0
bool UShadowMapTexture2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090b930
IMPLEMENT_CLASS_AT(UShadowMap2D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 11);

// @baa 0x0090ba40
int UShadowMap2D::vf_000(void) { return 1; }

// @baa 0x0090ba50
bool UShadowMap2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0090ba90
IMPLEMENT_CLASS_AT(UShadowMap1D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnShadowMap.cpp", 12);

// @baa 0x0090bba0
int UShadowMap1D::vf_000(void) { return 1; }

// @baa 0x0090bbb0
bool UShadowMap1D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00c02840(...);
int sub_00c0f170(void);
extern undefined4 g_026c082c;
// @baa 0x0090bca0
int sub_0090bca0(void)
{
  if (g_026c082c == 0) {
    g_026c082c = sub_00c02840(L"Engine");
    sub_00c0f170();
  }
  return g_026c082c;
}

// @baa 0x0090bcd0
int sub_0090bcd0(int a0, int a1) { return a1; }

// @baa 0x0090bce0
IMPLEMENT_CLASS_AT(UAnimNotify, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 22);

// @baa 0x0090bd40
void UAnimNotify::vf_10c(UINT a0) {  }

// @baa 0x0090bd50
int sub_005c7a20(void);
extern undefined * g_01f77bc0;
// @baa 0x0090bd70
undefined4 * UObject::sub_0090bd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77bc0);
  return param_1;
}

// @baa 0x0090bd90
int sub_0090bd90(int a0, int a1) { return a1; }

extern undefined * g_01f77cd8;
// @baa 0x0090bda0
undefined4 * UObject::sub_0090bda0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77cd8);
  return param_1;
}

// @baa 0x0090bdc0
IMPLEMENT_CLASS_AT(UAnimNotify_CameraEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2372);

// @baa 0x0090be20
// @baa 0x0090be40
undefined4 sub_0090be40(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f77df0;
// @baa 0x0090be50
undefined4 * UObject::sub_0090be50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77df0);
  return param_1;
}

// @baa 0x0090be70
IMPLEMENT_CLASS_AT(UAnimNotify_Footstep, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2346);

// @baa 0x0090bed0
// @baa 0x0090bef0
undefined4 sub_0090bef0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f77f08;
// @baa 0x0090bf00
undefined4 * UObject::sub_0090bf00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f77f08);
  return param_1;
}

// @baa 0x0090bf20
IMPLEMENT_CLASS_AT(UAnimNotify_ForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2438);

// @baa 0x0090bf80
// @baa 0x0090bfa0
undefined4 sub_0090bfa0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f78020;
// @baa 0x0090bfb0
undefined4 * UObject::sub_0090bfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78020);
  return param_1;
}

// @baa 0x0090bfd0
IMPLEMENT_CLASS_AT(UAnimNotify_PlayParticleEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2408);

// @baa 0x0090c030
// @baa 0x0090c050
undefined4 sub_0090c050(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f78138;
// @baa 0x0090c060
undefined4 * UObject::sub_0090c060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78138);
  return param_1;
}

// @baa 0x0090c080
IMPLEMENT_CLASS_AT(UAnimNotify_Rumble, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2434);

// @baa 0x0090c0e0
// @baa 0x0090c100
undefined4 sub_0090c100(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f78250;
// @baa 0x0090c110
undefined4 * UObject::sub_0090c110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78250);
  return param_1;
}

// @baa 0x0090c130
IMPLEMENT_CLASS_AT(UAnimNotify_Script, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2294);

// @baa 0x0090c190
struct C_0090c1b0 {
    DWORD sub_0090c1b0(int);
};

// @baa 0x0090c1b0
DWORD C_0090c1b0::sub_0090c1b0(int)
{
    return (DWORD)this;
}

// @baa 0x0090c210
int sub_0090c210(int a0, int a1) { return a1; }

extern undefined * g_01f78368;
// @baa 0x0090c220
undefined4 * UObject::sub_0090c220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78368);
  return param_1;
}

// @baa 0x0090c240
IMPLEMENT_CLASS_AT(UAnimNotify_Scripted, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2316);

// @baa 0x0090c2a0
// @baa 0x0090c2c0
undefined4 sub_0090c2c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_01f78480;
// @baa 0x0090c2d0
undefined4 * UObject::sub_0090c2d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f78480);
  return param_1;
}

// @baa 0x0090c2f0
IMPLEMENT_CLASS_AT(UAnimNotify_Sound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2258);

// @baa 0x0090c350
int sub_00c69780(void);
int sub_00c6b9f0(...);
extern undefined4 g_026c2b74;
// @baa 0x0090c370
int sub_0090c370(void)
{
  if (g_026c2b74 == 0) {
    g_026c2b74 = sub_00c6b9f0(L"Engine");
    sub_00c69780();
  }
  return g_026c2b74;
}

int sub_00c78670(void);
int sub_00c7dec0(...);
extern undefined4 g_026c2bc4;
// @baa 0x0090c3a0
int sub_0090c3a0(void)
{
  if (g_026c2bc4 == 0) {
    g_026c2bc4 = sub_00c7dec0(L"Engine");
    sub_00c78670();
  }
  return g_026c2bc4;
}

// @baa 0x0090c3d0
int sub_0090c3d0(int a0, int a1) { return a1; }

// @baa 0x0090c3e0
int sub_0090c3e0(int a0, int a1) { return a1; }

// @baa 0x0090c3f0
int sub_0090c3f0(int a0, int a1) { return a1; }

// @baa 0x0090c400
int sub_0090c400(int a0, int a1) { return a1; }

// @baa 0x0090c410
int sub_0090c410(int a0, int a1) { return a1; }

// @baa 0x0090c420
int sub_0090c420(int a0, int a1) { return a1; }

// @baa 0x0090c430
int sub_0090c430(int a0, int a1) { return a1; }

// @baa 0x0090c440
int sub_0090c440(int a0, int a1) { return a1; }

// @baa 0x0090c450
int sub_0090c450(int a0, int a1) { return a1; }

struct C_0090c460 { C_0090c460* sub_0090c460(void); };

// @baa 0x0090c460
C_0090c460* C_0090c460::sub_0090c460(void) { return this; }

struct C_0090c470 { C_0090c470* sub_0090c470(void); };

// @baa 0x0090c470
C_0090c470* C_0090c470::sub_0090c470(void) { return this; }

// @baa 0x0090c4d0
int sub_0090c4d0(int a0, int a1) { return a1; }

// @baa 0x0090c4e0
int sub_0090c4e0(int a0, int a1) { return a1; }

struct C_0090d360 { C_0090d360* sub_0090d360(int a0); };

// @baa 0x0090d360
C_0090d360* C_0090d360::sub_0090d360(int a0) { return this; }

// @baa 0x0090d7f0
void sub_0090d7f0(void) {  }

struct C_0090d830 {
    void sub_0090d830();
};

int sub_015d56c0(...);
// @baa 0x0090d830
void C_0090d830::sub_0090d830(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_015d56c0(param_1);
  return;
}

struct C_0090d840 {
    void sub_0090d840();
};

int sub_015c3500(...);
// @baa 0x0090d840
void C_0090d840::sub_0090d840(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_015c3500(param_1);
  return;
}

// @baa 0x0090d850
int __stdcall sub_0090d850(int a0) { return 1; }

// @baa 0x0090d860
int UAnimNotify_Sound::vf_000(void) { return 1; }

// @baa 0x0090d870
int UAnimNotify_Script::vf_000(void) { return 1; }

// @baa 0x0090d8b0
int UAnimNotify_Scripted::vf_000(void) { return 1; }

// @baa 0x0090d920
int UAnimNotify_Footstep::vf_000(void) { return 1; }

// @baa 0x0090d930
int UAnimNotify_CameraEffect::vf_000(void) { return 1; }

// @baa 0x0090d990
int UAnimNotify_PlayParticleEffect::vf_000(void) { return 1; }

// @baa 0x0090d9a0
int UAnimNotify_Rumble::vf_000(void) { return 1; }

// @baa 0x0090d9b0
IMPLEMENT_CLASS_AT(UWaveFormBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2435);

struct C_0090f170 { C_0090f170* sub_0090f170(void); };

// @baa 0x0090f170
C_0090f170* C_0090f170::sub_0090f170(void) { return this; }

struct C_0090f9f0 { int sub_0090f9f0(void); };

// @baa 0x0090f9f0
int C_0090f9f0::sub_0090f9f0(void) { return *(int*)((char*)this + 4); }

struct C_0090fa00 { int sub_0090fa00(void); };

// @baa 0x0090fa00
int C_0090fa00::sub_0090fa00(void) { return *(int*)((char*)this + 4); }

struct C_0090fa10 { int a, b, c; C_0090fa10(); };

// @baa 0x0090fa10
C_0090fa10::C_0090fa10() : a(0), b(0), c(0) {}

struct C_0090fa20 { int a, b, c; C_0090fa20(); };

// @baa 0x0090fa20
C_0090fa20::C_0090fa20() : a(0), b(0), c(0) {}

struct C_0090fa30 { int sub_0090fa30(void); };

// @baa 0x0090fa30
int C_0090fa30::sub_0090fa30(void) { return *(int*)((char*)this + 4); }

struct T_0090fa40 { int x; };

// @baa 0x0090fa40
template T_0090fa40& TIndirectArray<T_0090fa40>::operator()(INT);

struct T_0090fa90 { int x; };

// @baa 0x0090fa90
template T_0090fa90& TIndirectArray<T_0090fa90>::operator()(INT);

struct C_0090fae0 { int a, b, c; C_0090fae0(); };

// @baa 0x0090fae0
C_0090fae0::C_0090fae0() : a(0), b(0), c(0) {}

struct C_0090faf0 { int sub_0090faf0(void); };

// @baa 0x0090faf0
int C_0090faf0::sub_0090faf0(void) { return *(int*)((char*)this + 4); }

struct C_0090fb00 { int a, b, c; C_0090fb00(); };

// @baa 0x0090fb00
C_0090fb00::C_0090fb00() : a(0), b(0), c(0) {}

struct C_0090fb10 { int sub_0090fb10(void); };

// @baa 0x0090fb10
int C_0090fb10::sub_0090fb10(void) { return *(int*)((char*)this + 4); }

struct C_0090fb20 { int a, b, c; C_0090fb20(); };

// @baa 0x0090fb20
C_0090fb20::C_0090fb20() : a(0), b(0), c(0) {}

struct C_0090fb30 { int sub_0090fb30(void); };

// @baa 0x0090fb30
int C_0090fb30::sub_0090fb30(void) { return *(int*)((char*)this + 4); }

struct C_0090fb40 { int sub_0090fb40(void); };

// @baa 0x0090fb40
int C_0090fb40::sub_0090fb40(void) { return *(int*)((char*)this + 4); }

struct C_0090fb50 { int sub_0090fb50(void); };

// @baa 0x0090fb50
int C_0090fb50::sub_0090fb50(void) { return *(int*)((char*)this + 4); }

struct C_0090fb60 { int sub_0090fb60(void); };

// @baa 0x0090fb60
int C_0090fb60::sub_0090fb60(void) { return *(int*)((char*)this + 4); }

struct C_0090fb70 { int sub_0090fb70(void); };

// @baa 0x0090fb70
int C_0090fb70::sub_0090fb70(void) { return *(int*)((char*)this + 4); }

struct C_0090fb80 { int sub_0090fb80(void); };

// @baa 0x0090fb80
int C_0090fb80::sub_0090fb80(void) { return *(int*)((char*)this + 4); }

struct C_0090fb90 { int sub_0090fb90(void); };

// @baa 0x0090fb90
int C_0090fb90::sub_0090fb90(void) { return *(int*)((char*)this + 4); }

struct C_0090fba0 { int a, b, c; C_0090fba0(); };

// @baa 0x0090fba0
C_0090fba0::C_0090fba0() : a(0), b(0), c(0) {}

struct C_0090fc20 { C_0090fc20* sub_0090fc20(void); };

// @baa 0x0090fc20
C_0090fc20* C_0090fc20::sub_0090fc20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0090fc80 { C_0090fc80* sub_0090fc80(int a0); };

// @baa 0x0090fc80
C_0090fc80* C_0090fc80::sub_0090fc80(int a0) { return this; }

struct C_0090fc90 { int sub_0090fc90(void); };

// @baa 0x0090fc90
int C_0090fc90::sub_0090fc90(void) { return *(int*)((char*)this + 0); }

struct C_0090fd10 { C_0090fd10* sub_0090fd10(int a0); };

// @baa 0x0090fd10
C_0090fd10* C_0090fd10::sub_0090fd10(int a0) { return this; }

struct C_0090fd20 { int sub_0090fd20(void); };

// @baa 0x0090fd20
int C_0090fd20::sub_0090fd20(void) { return *(int*)((char*)this + 0); }

struct C_0090fd30 { int sub_0090fd30(void); };

// @baa 0x0090fd30
int C_0090fd30::sub_0090fd30(void) { return *(int*)((char*)this + 0); }

struct C_0090fd40 { int sub_0090fd40(void); };

// @baa 0x0090fd40
int C_0090fd40::sub_0090fd40(void) { return *(int*)((char*)this + 0); }

struct C_0090fd50 { int sub_0090fd50(void); };

// @baa 0x0090fd50
int C_0090fd50::sub_0090fd50(void) { return *(int*)((char*)this + 0); }

struct C_0090fd60 { C_0090fd60* sub_0090fd60(int a0); };

// @baa 0x0090fd60
C_0090fd60* C_0090fd60::sub_0090fd60(int a0) { return this; }

struct C_0090fd70 { int sub_0090fd70(void); };

// @baa 0x0090fd70
int C_0090fd70::sub_0090fd70(void) { return *(int*)((char*)this + 0); }

struct C_0090fdf0 { int sub_0090fdf0(void); };

// @baa 0x0090fdf0
int C_0090fdf0::sub_0090fdf0(void) { return *(int*)((char*)this + 0); }

struct C_0090fe00 { int sub_0090fe00(void); };

// @baa 0x0090fe00
int C_0090fe00::sub_0090fe00(void) { return *(int*)((char*)this + 0); }

struct C_0090fe10 {
    int sub_0090fe10(int);
};

// @baa 0x0090fe10
int C_0090fe10::sub_0090fe10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0090fe20 { C_0090fe20* sub_0090fe20(int a0); };

// @baa 0x0090fe20
C_0090fe20* C_0090fe20::sub_0090fe20(int a0) { return this; }

struct C_0090fe30 { C_0090fe30* sub_0090fe30(int a0); };

// @baa 0x0090fe30
C_0090fe30* C_0090fe30::sub_0090fe30(int a0) { return this; }

struct C_0090fe40 { C_0090fe40* sub_0090fe40(int a0); };

// @baa 0x0090fe40
C_0090fe40* C_0090fe40::sub_0090fe40(int a0) { return this; }

struct C_0090fe50 { int sub_0090fe50(void); };

// @baa 0x0090fe50
int C_0090fe50::sub_0090fe50(void) { return *(int*)((char*)this + 0); }

struct C_0090fe60 { int sub_0090fe60(void); };

// @baa 0x0090fe60
int C_0090fe60::sub_0090fe60(void) { return *(int*)((char*)this + 0); }

struct C_0090fee0 {
    int sub_0090fee0(int);
};

// @baa 0x0090fee0
int C_0090fee0::sub_0090fee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0090fef0 { int sub_0090fef0(void); };

// @baa 0x0090fef0
int C_0090fef0::sub_0090fef0(void) { return *(int*)((char*)this + 0); }

struct C_0090ff00 { int sub_0090ff00(void); };

// @baa 0x0090ff00
int C_0090ff00::sub_0090ff00(void) { return *(int*)((char*)this + 0); }

struct C_0090ff10 { int sub_0090ff10(void); };

// @baa 0x0090ff10
int C_0090ff10::sub_0090ff10(void) { return *(int*)((char*)this + 0); }

struct C_0090ff20 { int sub_0090ff20(void); };

// @baa 0x0090ff20
int C_0090ff20::sub_0090ff20(void) { return *(int*)((char*)this + 0); }

struct C_0090ff30 { int sub_0090ff30(void); };

// @baa 0x0090ff30
int C_0090ff30::sub_0090ff30(void) { return *(int*)((char*)this + 0); }

struct C_0090ff40 { int sub_0090ff40(void); };

// @baa 0x0090ff40
int C_0090ff40::sub_0090ff40(void) { return *(int*)((char*)this + 0); }

struct C_0090ff50 { int sub_0090ff50(void); };

// @baa 0x0090ff50
int C_0090ff50::sub_0090ff50(void) { return *(int*)((char*)this + 0); }

struct C_0090ffd0 { int sub_0090ffd0(void); };

// @baa 0x0090ffd0
int C_0090ffd0::sub_0090ffd0(void) { return *(int*)((char*)this + 0); }

struct C_0090c480 {
    BYTE state;      // 0x0
    DWORD flags;     // 0x4
    BYTE a;          // 0x8
    BYTE b;          // 0x9
    C_0090c480* sub_0090c480();
};

// @baa 0x0090c480
C_0090c480* C_0090c480::sub_0090c480()
{
    state = 0;
    flags = (flags & 0xfffffffb) | 3;
    a = 0;
    b = 0;
    return this;
}
