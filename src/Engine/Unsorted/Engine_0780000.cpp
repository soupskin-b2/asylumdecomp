// Engine_0780000.cpp (part 1 of 5): 286 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00782760
IMPLEMENT_CLASS_AT(AWorldInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 46);

// @baa 0x00782870
bool AWorldInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007828b0
IMPLEMENT_CLASS_AT(APlayerReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 76);

// @baa 0x007829c0
bool APlayerReplicationInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782a00
IMPLEMENT_CLASS_AT(AGameReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 78);

// @baa 0x00782b10
bool AGameReplicationInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782b50
IMPLEMENT_CLASS_AT(ADebugCameraController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 84);

// @baa 0x00782c60
bool ADebugCameraController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782ca0
IMPLEMENT_CLASS_AT(APhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 92);

// @baa 0x00782db0
bool APhysicsVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782df0
IMPLEMENT_CLASS_AT(ABlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 98);

// @baa 0x00782f00
bool ABlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00782f40
IMPLEMENT_CLASS_AT(AAutoLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 99);

// @baa 0x00783050
bool AAutoLadder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00783090
IMPLEMENT_CLASS_AT(ATeamInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 100);

// @baa 0x007831a0
bool ATeamInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007831e0
IMPLEMENT_CLASS_AT(ATriggerVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 107);

// @baa 0x007832f0
bool ATriggerVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00783330
IMPLEMENT_CLASS_AT(AVolumePathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 108);

// @baa 0x00783440
bool AVolumePathNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00783480
IMPLEMENT_CLASS_AT(ALevelStreamingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 113);

// @baa 0x00783590
bool ALevelStreamingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007835d0
IMPLEMENT_CLASS_AT(ACullDistanceVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 115);

// @baa 0x007836e0
bool ACullDistanceVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00783720
IMPLEMENT_CLASS_AT(ASkyLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 118);

// @baa 0x00783830
bool ASkyLightToggleable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00783870
IMPLEMENT_CLASS_AT(AAirNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 125);

// @baa 0x00783980
bool AAirNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0077b3b0(...);
int sub_00782df0(void);
extern undefined4 g_026b3c5c;
// @baa 0x007847b0
int sub_007847b0(void)
{
  if (g_026b3c5c == 0) {
    g_026b3c5c = sub_0077b3b0(L"Engine");
    sub_00782df0();
  }
  return g_026b3c5c;
}

int sub_0077af30(...);
int sub_00782ca0(void);
extern undefined4 g_026b3c44;
// @baa 0x007847e0
int sub_007847e0(void)
{
  if (g_026b3c44 == 0) {
    g_026b3c44 = sub_0077af30(L"Engine");
    sub_00782ca0();
  }
  return g_026b3c44;
}

// @baa 0x00784810
IMPLEMENT_CLASS_AT(AWaterVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 93);

// @baa 0x00784920
bool AWaterVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784960
IMPLEMENT_CLASS_AT(AGravityVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 94);

// @baa 0x00784a70
bool AGravityVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784ab0
IMPLEMENT_CLASS_AT(ADefaultPhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 95);

// @baa 0x00784bc0
bool ADefaultPhysicsVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784c00
IMPLEMENT_CLASS_AT(ALadderVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 96);

// @baa 0x00784d10
bool ALadderVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784d50
IMPLEMENT_CLASS_AT(ADynamicBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 110);

// @baa 0x00784e60
bool ADynamicBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784f50
void sub_00784f50(void) {  }

// @baa 0x00784f60
void sub_00784f60(void) {  }

// @baa 0x00784f70
float10 sub_00784f70(double param_1)
{
  return (float10)param_1;
}

struct C {
    undefined4 sub_00785010();
};

// @baa 0x00785010
undefined4 C::sub_00785010(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

extern char g_01f15d50[];
struct C_00785020 { void sub_00785020(void); };

// @baa 0x00785020
void C_00785020::sub_00785020(void) { *(int*)((char*)this + 0) = (int)g_01f15d50; }

// @baa 0x00785030
int __stdcall sub_00785030(int a0) { return 0; }

struct C_00785040 {
    undefined4 * sub_00785040(byte);
};

int sub_0053dfa0(...);
// @baa 0x00785040
undefined4 * C_00785040::sub_00785040(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f15d50);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00785060 { C_00785060* sub_00785060(void); };

// @baa 0x00785060
C_00785060* C_00785060::sub_00785060(void) { *(int*)((char*)this + 0) = (int)g_01f15d50; return this; }

struct C_00785070 { C_00785070* sub_00785070(int a0); };

// @baa 0x00785070
C_00785070* C_00785070::sub_00785070(int a0) { return this; }

int sub_00764b50(void);
int sub_007846f0(...);
extern undefined4 g_026b3ccc;
// @baa 0x00785080
int sub_00785080(void)
{
  if (g_026b3ccc == 0) {
    g_026b3ccc = sub_007846f0(L"Engine");
    sub_00764b50();
  }
  return g_026b3ccc;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x007850b0
void sub_007850b0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00785120
int sub_00785120(int a0, int a1) { return a1; }

struct C_00785130 { C_00785130* sub_00785130(int a0); };

// @baa 0x00785130
C_00785130* C_00785130::sub_00785130(int a0) { return this; }

struct C_00785140 { C_00785140* sub_00785140(int a0); };

// @baa 0x00785140
C_00785140* C_00785140::sub_00785140(int a0) { return this; }

struct C_007851d0 { C_007851d0* sub_007851d0(void); };

// @baa 0x007851d0
C_007851d0* C_007851d0::sub_007851d0(void) { return this; }

struct C_007851e0 { C_007851e0* sub_007851e0(void); };

// @baa 0x007851e0
C_007851e0* C_007851e0::sub_007851e0(void) { return this; }

struct C_007851f0 { C_007851f0* sub_007851f0(void); };

// @baa 0x007851f0
C_007851f0* C_007851f0::sub_007851f0(void) { return this; }

// @baa 0x00785230
int sub_00785230(int a0, int a1) { return a1; }

// @baa 0x00785240
int sub_00785240(int a0, int a1) { return a1; }

// @baa 0x00785250
int sub_00785250(int a0, int a1) { return a1; }

// @baa 0x00785260
int sub_00785260(int a0, int a1) { return a1; }

struct C_00785270 { C_00785270* sub_00785270(int a0); };

// @baa 0x00785270
C_00785270* C_00785270::sub_00785270(int a0) { return this; }

int sub_005c7a20(void);
extern undefined * g_01f15fa8;
// @baa 0x007854f0
undefined4 * UObject::sub_007854f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f15fa8);
  return param_1;
}

// @baa 0x00785510
IMPLEMENT_CLASS_AT(UCameraModifier, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 18);

// @baa 0x00785570
// @baa 0x00785590
void sub_00785590(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_007855d0 { int sub_007855d0(void); };

// @baa 0x007855d0
int C_007855d0::sub_007855d0(void) { return *(int*)((char*)this + 8); }

struct C_007855e0 { int sub_007855e0(void); };

// @baa 0x007855e0
int C_007855e0::sub_007855e0(void) { return *(int*)((char*)this + 16); }

struct C_007855f0 {
    bool sub_007855f0();
};

// @baa 0x007855f0
bool C_007855f0::sub_007855f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

struct C_00785600 {
    undefined4 sub_00785600();
};

// @baa 0x00785600
undefined4 C_00785600::sub_00785600(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 0x68);
  }
  return 0;
}

// @baa 0x00785610
int sub_00785610(int a0, int a1) { return a1; }

int sub_00946350(void);
int sub_0097fae0(...);
extern undefined4 g_026b5f14;
// @baa 0x00785630
int sub_00785630(void)
{
  if (g_026b5f14 == 0) {
    g_026b5f14 = sub_0097fae0(L"Engine");
    sub_00946350();
  }
  return g_026b5f14;
}

// @baa 0x00785660
int sub_00785660(int a0, int a1) { return a1; }

struct V_00786c40 {
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
    virtual void g(int);
    void sub_00786c40();
};

// @baa 0x00786c40
void V_00786c40::sub_00786c40() { g(0); }

struct C_00787020 {
    void sub_00787020(float, int, int);
};

// @baa 0x00787020
void C_00787020::sub_00787020(float param_2, int param_3, int param_4)
{
    int param_1 = (int)this;
  float fVar1;
  fVar1 = 1.0 - param_2;
  *(float *)(param_1 + 8) = *(float *)(param_3 + 8) * fVar1 + *(float *)(param_4 + 8) * param_2;
  *(float *)(param_1 + 0xc) =
       *(float *)(param_3 + 0xc) * fVar1 + *(float *)(param_4 + 0xc) * param_2;
  *(float *)(param_1 + 0x10) =
       *(float *)(param_3 + 0x10) * fVar1 + *(float *)(param_4 + 0x10) * param_2;
  *(float *)(param_1 + 0x14) =
       *(float *)(param_3 + 0x14) * fVar1 + *(float *)(param_4 + 0x14) * param_2;
  *(float *)(param_1 + 0x18) =
       *(float *)(param_3 + 0x18) * fVar1 + *(float *)(param_4 + 0x18) * param_2;
  *(float *)(param_1 + 0x1c) =
       *(float *)(param_3 + 0x1c) * fVar1 + *(float *)(param_4 + 0x1c) * param_2;
  *(float *)(param_1 + 0x20) =
       *(float *)(param_3 + 0x20) * fVar1 + *(float *)(param_4 + 0x20) * param_2;
  return;
}

struct C_00787100 { void sub_00787100(int a0); };

// @baa 0x00787100
void C_00787100::sub_00787100(int a0) { *(int*)((char*)this + 12) = a0; }

// @baa 0x00787480
IMPLEMENT_CLASS_AT(UBrushComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnBrushComponent.cpp", 11);

// @baa 0x00787590
int UBrushComponent::vf_000(void) { return 1; }

// @baa 0x007875a0
bool UBrushComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_01f11408[];
// @baa 0x00787600
int sub_00787600(void) { return (int)g_01f11408; }

extern char g_01ebb554[];
// @baa 0x00787610
void UBrushComponent::sub_00787610(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00787620
undefined4 * UBrushComponent::sub_00787620(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00759550(void);
// @baa 0x00787640
undefined4 UBrushComponent::vf_12c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x1a4) != 0) {
    iVar1 = sub_00759550();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x007876e0
IMPLEMENT_CLASS_AT(ACamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 11);

// @baa 0x007877f0
int ACamera::vf_000(void) { return 1; }

// @baa 0x00787800
bool ACamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787840
IMPLEMENT_CLASS_AT(ACameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 12);

// @baa 0x00787950
int ACameraActor::vf_000(void) { return 1; }

// @baa 0x00787960
bool ACameraActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007879a0
int ADynamicCameraActor::vf_000(void) { return 1; }

// @baa 0x007879b0
int AAnimatedCamera::vf_000(void) { return 1; }

// @baa 0x007879c0
IMPLEMENT_CLASS_AT(UCameraAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 15);

// @baa 0x00787ad0
int UCameraAnim::vf_000(void) { return 1; }

// @baa 0x00787ae0
bool UCameraAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787b20
IMPLEMENT_CLASS_AT(UCameraAnimInst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 16);

// @baa 0x00787c30
int UCameraAnimInst::vf_000(void) { return 1; }

// @baa 0x00787c40
bool UCameraAnimInst::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787c80
// @baa 0x00787d90
int UCameraModifier::vf_000(void) { return 1; }

// @baa 0x00787da0
bool UCameraModifier::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00787ed0
bool ACamera::vf_1b8(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x1a8) != 0;
}

// @baa 0x00787ee0
int UCameraModifier::vf_10c(int a0, int a1, int a2) { return 0; }

// @baa 0x00787ef0
uint UCameraModifier::vf_110(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x30) & 1;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(long *pAddend);
void __fastcall sub_007881a0(long *pAddend);
// @baa 0x007881a0
void __fastcall sub_007881a0(long *pAddend)
{
    InterlockedIncrement(pAddend + 5);
}

struct C_007883d0 { int a, b, c; C_007883d0(); };

// @baa 0x007883d0
C_007883d0::C_007883d0() : a(0), b(0), c(0) {}

struct C_007883e0 { int sub_007883e0(void); };

// @baa 0x007883e0
int C_007883e0::sub_007883e0(void) { return *(int*)((char*)this + 4); }

struct C_007883f0 { int sub_007883f0(void); };

// @baa 0x007883f0
int C_007883f0::sub_007883f0(void) { return *(int*)((char*)this + 4); }

struct C_00788400 { int a, b, c; C_00788400(); };

// @baa 0x00788400
C_00788400::C_00788400() : a(0), b(0), c(0) {}

struct C_00788410 { int sub_00788410(void); };

// @baa 0x00788410
int C_00788410::sub_00788410(void) { return *(int*)((char*)this + 4); }

struct C_00788420 { int a, b, c; C_00788420(); };

// @baa 0x00788420
C_00788420::C_00788420() : a(0), b(0), c(0) {}

struct C_00788430 { int a, b, c; C_00788430(); };

// @baa 0x00788430
C_00788430::C_00788430() : a(0), b(0), c(0) {}

struct C_00788440 { int sub_00788440(void); };

// @baa 0x00788440
int C_00788440::sub_00788440(void) { return *(int*)((char*)this + 4); }

struct C_00788450 { int sub_00788450(void); };

// @baa 0x00788450
int C_00788450::sub_00788450(void) { return *(int*)((char*)this + 4); }

struct C_00788460 { int sub_00788460(void); };

// @baa 0x00788460
int C_00788460::sub_00788460(void) { return *(int*)((char*)this + 4); }

struct C_00788470 { int sub_00788470(void); };

// @baa 0x00788470
int C_00788470::sub_00788470(void) { return *(int*)((char*)this + 4); }

struct C_00788480 { int sub_00788480(void); };

// @baa 0x00788480
int C_00788480::sub_00788480(void) { return *(int*)((char*)this + 4); }

struct C_00788490 { int sub_00788490(void); };

// @baa 0x00788490
int C_00788490::sub_00788490(void) { return *(int*)((char*)this + 4); }

struct C_007884a0 { C_007884a0* sub_007884a0(void); };

// @baa 0x007884a0
C_007884a0* C_007884a0::sub_007884a0(void) { return this; }

struct C_007884b0 { int sub_007884b0(void); };

// @baa 0x007884b0
int C_007884b0::sub_007884b0(void) { return *(int*)((char*)this + 4); }

struct C_007884c0 { int sub_007884c0(void); };

// @baa 0x007884c0
int C_007884c0::sub_007884c0(void) { return *(int*)((char*)this + 4); }

struct C_007884d0 { int sub_007884d0(void); };

// @baa 0x007884d0
int C_007884d0::sub_007884d0(void) { return *(int*)((char*)this + 4); }

struct C_00788510 { int sub_00788510(void); };

// @baa 0x00788510
int C_00788510::sub_00788510(void) { return *(int*)((char*)this + 4); }

struct C_00788520 { int sub_00788520(void); };

// @baa 0x00788520
int C_00788520::sub_00788520(void) { return *(int*)((char*)this + 4); }

struct C_00788530 { int sub_00788530(void); };

// @baa 0x00788530
int C_00788530::sub_00788530(void) { return *(int*)((char*)this + 4); }

struct C_00788540 { int sub_00788540(void); };

// @baa 0x00788540
int C_00788540::sub_00788540(void) { return *(int*)((char*)this + 4); }

struct C_00788550 { int a, b, c; C_00788550(); };

// @baa 0x00788550
C_00788550::C_00788550() : a(0), b(0), c(0) {}

struct C_00788560 { int sub_00788560(void); };

// @baa 0x00788560
int C_00788560::sub_00788560(void) { return *(int*)((char*)this + 4); }

struct C_00788570 { int a, b, c; C_00788570(); };

// @baa 0x00788570
C_00788570::C_00788570() : a(0), b(0), c(0) {}

struct C_00788580 { int sub_00788580(void); };

// @baa 0x00788580
int C_00788580::sub_00788580(void) { return *(int*)((char*)this + 4); }

struct C_00788590 { int a, b, c; C_00788590(); };

// @baa 0x00788590
C_00788590::C_00788590() : a(0), b(0), c(0) {}

struct C_007885a0 { int sub_007885a0(void); };

// @baa 0x007885a0
int C_007885a0::sub_007885a0(void) { return *(int*)((char*)this + 0); }

struct C_007885b0 { int sub_007885b0(void); };

// @baa 0x007885b0
int C_007885b0::sub_007885b0(void) { return *(int*)((char*)this + 4); }

struct C_00788640 { int sub_00788640(void); };

// @baa 0x00788640
int C_00788640::sub_00788640(void) { return *(int*)((char*)this + 0); }

struct C_00788650 { int sub_00788650(void); };

// @baa 0x00788650
int C_00788650::sub_00788650(void) { return *(int*)((char*)this + 0); }

struct C_007886d0 {
    int sub_007886d0(int);
};

// @baa 0x007886d0
int C_007886d0::sub_007886d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_007886e0 { int sub_007886e0(void); };

// @baa 0x007886e0
int C_007886e0::sub_007886e0(void) { return *(int*)((char*)this + 0); }

struct C_00788760 { int sub_00788760(void); };

// @baa 0x00788760
int C_00788760::sub_00788760(void) { return *(int*)((char*)this + 0); }

struct C_007887e0 { int sub_007887e0(void); };

// @baa 0x007887e0
int C_007887e0::sub_007887e0(void) { return *(int*)((char*)this + 0); }

struct C_007887f0 { int sub_007887f0(void); };

// @baa 0x007887f0
int C_007887f0::sub_007887f0(void) { return *(int*)((char*)this + 4); }

struct C_00788830 { C_00788830* sub_00788830(int a0); };

// @baa 0x00788830
C_00788830* C_00788830::sub_00788830(int a0) { return this; }

struct C_00788840 { C_00788840* sub_00788840(int a0); };

// @baa 0x00788840
C_00788840* C_00788840::sub_00788840(int a0) { return this; }

struct C_00788850 { C_00788850* sub_00788850(int a0); };

// @baa 0x00788850
C_00788850* C_00788850::sub_00788850(int a0) { return this; }

struct C_00788860 { C_00788860* sub_00788860(int a0); };

// @baa 0x00788860
C_00788860* C_00788860::sub_00788860(int a0) { return this; }

struct C_00788870 { int sub_00788870(void); };

// @baa 0x00788870
int C_00788870::sub_00788870(void) { return *(int*)((char*)this + 0); }

struct C_00788880 { int sub_00788880(void); };

// @baa 0x00788880
int C_00788880::sub_00788880(void) { return *(int*)((char*)this + 0); }

struct C_00788890 {
    int sub_00788890(int);
};

// @baa 0x00788890
int C_00788890::sub_00788890(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 100 + *param_1;
}

struct C_00788920 { int sub_00788920(void); };

// @baa 0x00788920
int C_00788920::sub_00788920(void) { return *(int*)((char*)this + 0); }

struct C_007889d0 { C_007889d0* sub_007889d0(int a0); };

// @baa 0x007889d0
C_007889d0* C_007889d0::sub_007889d0(int a0) { return this; }

struct C_007889e0 { int sub_007889e0(void); };

// @baa 0x007889e0
int C_007889e0::sub_007889e0(void) { return *(int*)((char*)this + 0); }

struct C_007889f0 { C_007889f0* sub_007889f0(int a0); };

// @baa 0x007889f0
C_007889f0* C_007889f0::sub_007889f0(int a0) { return this; }

struct C_00788a00 { int sub_00788a00(void); };

// @baa 0x00788a00
int C_00788a00::sub_00788a00(void) { return *(int*)((char*)this + 0); }

struct C_00788a10 { int sub_00788a10(void); };

// @baa 0x00788a10
int C_00788a10::sub_00788a10(void) { return *(int*)((char*)this + 0); }

struct C_00788a20 { C_00788a20* sub_00788a20(int a0); };

// @baa 0x00788a20
C_00788a20* C_00788a20::sub_00788a20(int a0) { return this; }

struct C_00788a30 { int sub_00788a30(void); };

// @baa 0x00788a30
int C_00788a30::sub_00788a30(void) { return *(int*)((char*)this + 0); }

struct C_00788a40 { int sub_00788a40(void); };

// @baa 0x00788a40
int C_00788a40::sub_00788a40(void) { return *(int*)((char*)this + 0); }

struct C_00788ac0 {
    int sub_00788ac0(int);
};

// @baa 0x00788ac0
int C_00788ac0::sub_00788ac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00788ad0 { C_00788ad0* sub_00788ad0(int a0); };

// @baa 0x00788ad0
C_00788ad0* C_00788ad0::sub_00788ad0(int a0) { return this; }

struct C_00788ae0 { int sub_00788ae0(void); };

// @baa 0x00788ae0
int C_00788ae0::sub_00788ae0(void) { return *(int*)((char*)this + 0); }

struct C_00788af0 { int sub_00788af0(void); };

// @baa 0x00788af0
int C_00788af0::sub_00788af0(void) { return *(int*)((char*)this + 0); }

struct C_00788b80 {
    int sub_00788b80(int);
};

// @baa 0x00788b80
int C_00788b80::sub_00788b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00788b90 { C_00788b90* sub_00788b90(int a0); };

// @baa 0x00788b90
C_00788b90* C_00788b90::sub_00788b90(int a0) { return this; }

struct C_00788ba0 { int sub_00788ba0(void); };

// @baa 0x00788ba0
int C_00788ba0::sub_00788ba0(void) { return *(int*)((char*)this + 0); }

struct C_00788bb0 { int sub_00788bb0(void); };

// @baa 0x00788bb0
int C_00788bb0::sub_00788bb0(void) { return *(int*)((char*)this + 0); }

struct C_00788bc0 { int sub_00788bc0(void); };

// @baa 0x00788bc0
int C_00788bc0::sub_00788bc0(void) { return *(int*)((char*)this + 0); }

struct C_00788bd0 { int sub_00788bd0(void); };

// @baa 0x00788bd0
int C_00788bd0::sub_00788bd0(void) { return *(int*)((char*)this + 0); }

struct C_00788be0 { int sub_00788be0(void); };

// @baa 0x00788be0
int C_00788be0::sub_00788be0(void) { return *(int*)((char*)this + 0); }

struct C_00788c60 {
    int sub_00788c60();
};

// @baa 0x00788c60
int C_00788c60::sub_00788c60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00788c70 { int a, b; C_00788c70(int, int); };

// @baa 0x00788c70
C_00788c70::C_00788c70(int x, int y) : a(x), b(y) {}

struct C_00788c90 {
    int sub_00788c90();
};

// @baa 0x00788c90
int C_00788c90::sub_00788c90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00788ca0 { int a, b; C_00788ca0(int, int); };

// @baa 0x00788ca0
C_00788ca0::C_00788ca0(int x, int y) : a(x), b(y) {}

// @baa 0x00788cc0
void sub_00788cc0(void) {  }

// @baa 0x00788cd0
void sub_00788cd0(void) {  }

// @baa 0x00788ce0
void sub_00788ce0(void) {  }

struct E { BYTE Bytes[48]; };

struct S_00788cf0 {
    TArray<E> Items; // 0x00
    E* sub_00788cf0(INT Index);
};

// @baa 0x00788cf0
E* S_00788cf0::sub_00788cf0(INT Index)
{
    return &Items(Index);
}

struct C_00788d40 { int sub_00788d40(void); };

// @baa 0x00788d40
int C_00788d40::sub_00788d40(void) { return *(int*)((char*)this + 0); }

struct C_00788d50 { int sub_00788d50(void); };

// @baa 0x00788d50
int C_00788d50::sub_00788d50(void) { return *(int*)((char*)this + 0); }

struct C_00788d60 { int sub_00788d60(void); };

// @baa 0x00788d60
int C_00788d60::sub_00788d60(void) { return *(int*)((char*)this + 0); }

struct C_00788d70 { int sub_00788d70(void); };

// @baa 0x00788d70
int C_00788d70::sub_00788d70(void) { return *(int*)((char*)this + 0); }

struct C_00788d80 { int sub_00788d80(void); };

// @baa 0x00788d80
int C_00788d80::sub_00788d80(void) { return *(int*)((char*)this + 0); }

struct C_00788d90 { int sub_00788d90(void); };

// @baa 0x00788d90
int C_00788d90::sub_00788d90(void) { return *(int*)((char*)this + 0); }

struct C_00788da0 { int sub_00788da0(void); };

// @baa 0x00788da0
int C_00788da0::sub_00788da0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00788db0
int sub_00788db0(int a0) { return *(int*)a0; }

// @baa 0x00788dc0
bool sub_00788dc0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00788dd0 { int a, b; C_00788dd0(const C_00788dd0 &); };

// @baa 0x00788dd0
C_00788dd0::C_00788dd0(const C_00788dd0 &o) : a(o.a), b(o.b) {}

struct C_00788e30 { int sub_00788e30(void); };

// @baa 0x00788e30
int C_00788e30::sub_00788e30(void) { return *(int*)((char*)this + 0); }

struct C_00788e40 { int sub_00788e40(void); };

// @baa 0x00788e40
int C_00788e40::sub_00788e40(void) { return *(int*)((char*)this + 0); }

// @baa 0x00788f30
int sub_00788f30(int a0) { return *(int*)a0; }

// @baa 0x00788f40
bool sub_00788f40(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00788f50
int sub_00788f50(int a0) { return a0; }

struct C_00788f60 { int a, b; C_00788f60(const C_00788f60 &); };

// @baa 0x00788f60
C_00788f60::C_00788f60(const C_00788f60 &o) : a(o.a), b(o.b) {}

struct C_00788fc0 { int sub_00788fc0(void); };

// @baa 0x00788fc0
int C_00788fc0::sub_00788fc0(void) { return *(int*)((char*)this + 0); }

struct C_00788fd0 { int sub_00788fd0(void); };

// @baa 0x00788fd0
int C_00788fd0::sub_00788fd0(void) { return *(int*)((char*)this + 0); }

struct C_00788fe0 { int sub_00788fe0(void); };

// @baa 0x00788fe0
int C_00788fe0::sub_00788fe0(void) { return *(int*)((char*)this + 0); }

struct C_00788ff0 { int sub_00788ff0(void); };

// @baa 0x00788ff0
int C_00788ff0::sub_00788ff0(void) { return *(int*)((char*)this + 0); }

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00789000(INT Index);
};

// @baa 0x00789000
FFaceFXElement* UFxRenderWidget::sub_00789000(INT Index)
{
	return &BoneArray(Index);
}

struct C_00789050 { int sub_00789050(void); };

// @baa 0x00789050
int C_00789050::sub_00789050(void) { return *(int*)((char*)this + 0); }

struct C_00789060 { int sub_00789060(void); };

// @baa 0x00789060
int C_00789060::sub_00789060(void) { return *(int*)((char*)this + 0); }

struct C_00789070 { int sub_00789070(void); };

// @baa 0x00789070
int C_00789070::sub_00789070(void) { return *(int*)((char*)this + 0); }

struct C_00789080 { int sub_00789080(void); };

// @baa 0x00789080
int C_00789080::sub_00789080(void) { return *(int*)((char*)this + 0); }

void sub_00572b30();
// @baa 0x00789730
void sub_00789730(void) { sub_00572b30(); }

int sub_00627f00(...);
// @baa 0x007897a0
void sub_007897a0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00789850 { int a, b; C_00789850(const C_00789850 &); };

// @baa 0x00789850
C_00789850::C_00789850(const C_00789850 &o) : a(o.a), b(o.b) {}

struct C_00789870 { int a, b; C_00789870(const C_00789870 &); };

// @baa 0x00789870
C_00789870::C_00789870(const C_00789870 &o) : a(o.a), b(o.b) {}

struct C_00789e10 {
    int sub_00789e10();
};

// @baa 0x00789e10
int C_00789e10::sub_00789e10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct S_0078c0c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078c0c0(INT Index);
};

// @baa 0x0078c0c0
DWORD* S_0078c0c0::sub_0078c0c0(INT Index)
{
    return &Items(Index);
}

struct S_0078c110 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078c110(INT Index);
};

// @baa 0x0078c110
DWORD* S_0078c110::sub_0078c110(INT Index)
{
    return &Items(Index);
}

struct E_0078c160 { BYTE Bytes[32]; };

struct S_0078c160 {
    TArray<E_0078c160> Items; // 0x00
    E_0078c160* sub_0078c160(INT Index);
};

// @baa 0x0078c160
E_0078c160* S_0078c160::sub_0078c160(INT Index)
{
    return &Items(Index);
}

struct S_0078c1b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078c1b0(INT Index);
};

// @baa 0x0078c1b0
DWORD* S_0078c1b0::sub_0078c1b0(INT Index)
{
    return &Items(Index);
}

struct C_0078c230{
int sub_0078c230(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0078c230
int C_0078c230::sub_0078c230(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E_0078c340 { BYTE Bytes[72]; };

struct S_0078c340 {
    TArray<E_0078c340> Items; // 0x00
    E_0078c340* sub_0078c340(INT Index);
};

// @baa 0x0078c340
E_0078c340* S_0078c340::sub_0078c340(INT Index)
{
    return &Items(Index);
}

struct E_0078c390 { BYTE Bytes[72]; };

struct S_0078c390 {
    TArray<E_0078c390> Items; // 0x00
    const E_0078c390* sub_0078c390(INT Index) const;
};

// @baa 0x0078c390
const E_0078c390* S_0078c390::sub_0078c390(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0078c3e0 {
    int sub_0078c3e0(int);
    int sub_00788b00(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0078c3e0
int C_0078c3e0::sub_0078c3e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0078c3e0 *)(this))->sub_00788b00(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x48),0,param_2 * 0x48);
  return iVar1;
}

struct UFxRenderWidget_0078c420
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0078c420(INT Index);
};

// @baa 0x0078c420
FFaceFXElement* UFxRenderWidget_0078c420::sub_0078c420(INT Index)
{
	return &BoneArray(Index);
}

struct E_0078c470 { BYTE Bytes[16]; };

struct S_0078c470 {
    TArray<E_0078c470> Items; // 0x00
    E_0078c470* sub_0078c470(INT Index);
};

// @baa 0x0078c470
E_0078c470* S_0078c470::sub_0078c470(INT Index)
{
    return &Items(Index);
}

struct S_0078c510 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078c510(INT Index);
};

// @baa 0x0078c510
DWORD* S_0078c510::sub_0078c510(INT Index)
{
    return &Items(Index);
}

struct S_0078c560 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078c560(INT Index);
};

// @baa 0x0078c560
DWORD* S_0078c560::sub_0078c560(INT Index)
{
    return &Items(Index);
}

// @baa 0x0078c630
void __stdcall sub_0078c630(int a0, int a1) {  }

// @baa 0x0078c640
void __stdcall sub_0078c640(int a0, int a1) {  }

struct C_0078c650 {
    int sub_0078c650(int);
};

// @baa 0x0078c650
int C_0078c650::sub_0078c650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0078c660
void __stdcall sub_0078c660(int a0, int a1) {  }

struct C_0078c670 {
    int sub_0078c670(int);
};

// @baa 0x0078c670
int C_0078c670::sub_0078c670(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct E_0078c680 { BYTE Bytes[12]; };

struct S_0078c680 {
    TArray<E_0078c680> Items; // 0x00
    E_0078c680* sub_0078c680(INT Index);
};

// @baa 0x0078c680
E_0078c680* S_0078c680::sub_0078c680(INT Index)
{
    return &Items(Index);
}

struct C_0078c6d0 {
    int sub_0078c6d0(int);
};

// @baa 0x0078c6d0
int C_0078c6d0::sub_0078c6d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0078c6e0 {
    int sub_0078c6e0(int);
};

// @baa 0x0078c6e0
int C_0078c6e0::sub_0078c6e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0078c6f0 {
    int sub_0078c6f0(int);
};

// @baa 0x0078c6f0
int C_0078c6f0::sub_0078c6f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0078c700 {
    int sub_0078c700(int);
};

// @baa 0x0078c700
int C_0078c700::sub_0078c700(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0078c710 {
    int sub_0078c710(int);
};

// @baa 0x0078c710
int C_0078c710::sub_0078c710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0078c720
void __stdcall sub_0078c720(int a0, int a1) {  }

struct C_0078c730{
int sub_0078c730(undefined4*);
};

// @baa 0x0078c730
int C_0078c730::sub_0078c730(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_0078c790 {
    int sub_0078c790(int);
};

// @baa 0x0078c790
int C_0078c790::sub_0078c790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0078c7a0
void __stdcall sub_0078c7a0(int a0, int a1) {  }

struct C_0078c7b0{
int sub_0078c7b0(undefined4*);
};

// @baa 0x0078c7b0
int C_0078c7b0::sub_0078c7b0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x0078c810
void __stdcall sub_0078c810(int a0, int a1) {  }

// @baa 0x0078c820
void __stdcall sub_0078c820(int a0, int a1) {  }

struct C_0078c830 {
    int sub_0078c830(int);
};

// @baa 0x0078c830
int C_0078c830::sub_0078c830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0078c840
void __stdcall sub_0078c840(int a0, int a1) {  }

struct C_0078c850 {
    int sub_0078c850(int);
};

// @baa 0x0078c850
int C_0078c850::sub_0078c850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0078c860
void __stdcall sub_0078c860(int a0, int a1) {  }

struct C_0078c870 {
    int sub_0078c870(int);
};

// @baa 0x0078c870
int C_0078c870::sub_0078c870(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0078c880
void __stdcall sub_0078c880(int a0, int a1) {  }

struct C_0078c890 {
    int sub_0078c890(int);
};

// @baa 0x0078c890
int C_0078c890::sub_0078c890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0078c8a0
void __stdcall sub_0078c8a0(int a0, int a1) {  }

struct C_0078c8b0 {
    undefined4 sub_0078c8b0(byte);
};

// @baa 0x0078c8b0
undefined4 C_0078c8b0::sub_0078c8b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0078c8d0 {
    undefined4 sub_0078c8d0(byte);
};

// @baa 0x0078c8d0
undefined4 C_0078c8d0::sub_0078c8d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0078c8f0 {
    undefined4 sub_0078c8f0(byte);
};

// @baa 0x0078c8f0
undefined4 C_0078c8f0::sub_0078c8f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_0078c910 { BYTE Bytes[32]; };

struct S_0078c910 {
    TArray<E_0078c910> Items; // 0x00
    E_0078c910* sub_0078c910(INT Index);
};

// @baa 0x0078c910
E_0078c910* S_0078c910::sub_0078c910(INT Index)
{
    return &Items(Index);
}

struct E_0078c960 { BYTE Bytes[80]; };

struct S_0078c960 {
    TArray<E_0078c960> Items; // 0x00
    E_0078c960* sub_0078c960(INT Index);
};

// @baa 0x0078c960
E_0078c960* S_0078c960::sub_0078c960(INT Index)
{
    return &Items(Index);
}

struct E_0078c9b0 { BYTE Bytes[80]; };

struct S_0078c9b0 {
    TArray<E_0078c9b0> Items; // 0x00
    E_0078c9b0* sub_0078c9b0(INT Index);
};

// @baa 0x0078c9b0
E_0078c9b0* S_0078c9b0::sub_0078c9b0(INT Index)
{
    return &Items(Index);
}

struct E_0078ca00 { BYTE Bytes[80]; };

struct S_0078ca00 {
    TArray<E_0078ca00> Items; // 0x00
    E_0078ca00* sub_0078ca00(INT Index);
};

// @baa 0x0078ca00
E_0078ca00* S_0078ca00::sub_0078ca00(INT Index)
{
    return &Items(Index);
}

struct C_0078ca50 { int sub_0078ca50(void); };

// @baa 0x0078ca50
int C_0078ca50::sub_0078ca50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0078ca60 { int sub_0078ca60(void); };

// @baa 0x0078ca60
int C_0078ca60::sub_0078ca60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0078ca70 { int sub_0078ca70(void); };

// @baa 0x0078ca70
int C_0078ca70::sub_0078ca70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0078cae0 { int sub_0078cae0(void); };

// @baa 0x0078cae0
int C_0078cae0::sub_0078cae0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0078caf0 { C_0078caf0* sub_0078caf0(void); };

// @baa 0x0078caf0
C_0078caf0* C_0078caf0::sub_0078caf0(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_0078cb30 { C_0078cb30* sub_0078cb30(void); };

// @baa 0x0078cb30
C_0078cb30* C_0078cb30::sub_0078cb30(void) { *(int*)((char*)this + 8) = -1; return this; }

int sub_005413d0(...);
// @baa 0x0078cb90
void sub_0078cb90(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0078cba0 {
    int sub_0078cba0(int);
};

// @baa 0x0078cba0
int C_0078cba0::sub_0078cba0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0078cbb0 { C_0078cbb0* sub_0078cbb0(void); };

// @baa 0x0078cbb0
C_0078cbb0* C_0078cbb0::sub_0078cbb0(void) { *(int*)((char*)this + 8) = -1; return this; }

// @baa 0x0078cc40
void sub_0078cc40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0078cc50 {
    void sub_0078cc50(undefined4 *);
};

// @baa 0x0078cc50
void C_0078cc50::sub_0078cc50(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_0078cc70 {
    int sub_0078cc70(int);
};

// @baa 0x0078cc70
int C_0078cc70::sub_0078cc70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0078cc80 {
    int sub_0078cc80(int);
};

// @baa 0x0078cc80
int C_0078cc80::sub_0078cc80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x0078ccc0
void sub_0078ccc0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0078ccf0 {
    int sub_0078ccf0(int);
};

// @baa 0x0078ccf0
int C_0078ccf0::sub_0078ccf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0078cd00 {
    int sub_0078cd00(int);
};

// @baa 0x0078cd00
int C_0078cd00::sub_0078cd00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0078cd10 {
    int sub_0078cd10(int);
};

// @baa 0x0078cd10
int C_0078cd10::sub_0078cd10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0078cd20 {
    int sub_0078cd20(int);
};

// @baa 0x0078cd20
int C_0078cd20::sub_0078cd20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0078cd30 {
    int sub_0078cd30();
};

// @baa 0x0078cd30
int C_0078cd30::sub_0078cd30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0078cd50 {
    int sub_0078cd50();
};

// @baa 0x0078cd50
int C_0078cd50::sub_0078cd50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0078cd70 {
    int sub_0078cd70();
};

// @baa 0x0078cd70
int C_0078cd70::sub_0078cd70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0078cd90 {
    int sub_0078cd90();
};

// @baa 0x0078cd90
int C_0078cd90::sub_0078cd90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0078cdb0 {
    int sub_0078cdb0();
};

// @baa 0x0078cdb0
int C_0078cdb0::sub_0078cdb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0078cdc0 {
    int sub_0078cdc0();
};

// @baa 0x0078cdc0
int C_0078cdc0::sub_0078cdc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0078cde0
void sub_0078cde0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0078ce10 {
    int sub_0078ce10(int);
};

// @baa 0x0078ce10
int C_0078ce10::sub_0078ce10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0078ce20
void sub_0078ce20(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0078ce50 {
    int sub_0078ce50(int);
};

// @baa 0x0078ce50
int C_0078ce50::sub_0078ce50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0078ce60 {
    void sub_0078ce60(undefined4, undefined4, undefined4, float, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x0078ce60
void C_0078ce60::sub_0078ce60(undefined4 param_2, undefined4 param_3, undefined4 param_4, float param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,(double)param_5,param_6,param_7);
  return;
}

struct C_0078ce90 {
    void sub_0078ce90(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0078ce90
void C_0078ce90::sub_0078ce90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_0078cec0 {
    void sub_0078cec0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0078cec0
void C_0078cec0::sub_0078cec0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_0078cee0 {
    void sub_0078cee0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x0078cee0
void C_0078cee0::sub_0078cee0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

struct FAdj
{
    BYTE  SoundClassName;
    BYTE  pad[3];
    FName SoundName;
    DWORD Tail[2];
};

struct FEnumObject
{
    char pad[0x38];
    TArray<FName> Names;
};

struct CVtObj
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8(int);
};

struct CUSoundMode
{
    char pad0[0x58];
    TArray<FAdj> Adjusters;

    void sub_0078d860(int);
};

extern void* g_0268d07c;
extern CVtObj* g_026667c4;
int sub_005b3970(...);
int sub_0059c600(void);
int sub_005d88c0(...);
// @baa 0x0078d860
void CUSoundMode::sub_0078d860(int)
{
    if (g_0268d07c == 0)
    {
        g_0268d07c = (void*)sub_005b3970(L"Core");
        sub_0059c600();
    }
    const FEnumObject* Enum = (const FEnumObject*)sub_005d88c0((int)g_0268d07c, 0, L"Engine.AudioDevice.ESoundClassName", 0);
    if (Enum != 0)
    {
        for (INT i = 0; i < Adjusters.Num(); i++)
        {
            FAdj& Adj = Adjusters(i);
            BYTE Index = Adj.SoundClassName;
            Adj.SoundName = Enum->Names(Index);
        }
    }
    g_026667c4->v8(0x11);
}

struct CObj
{
    FString Get(int) const;
};

struct CFStrOps
{
    void sub_00544ab0(const wchar_t*);
};

struct CFoo
{
    char pad[0x4c];
    CObj* Ptr;
    FString sub_0078d960();
};

FString CFoo::sub_0078d960()
{
    FString Result;
    if (Ptr != 0)
    {
        Result = Ptr->Get(0);
    }
    else
    {
        ((CFStrOps*)&Result)->sub_00544ab0(L"No_SoundCue");
    }
    return Result;
}

int sub_00656520(void);
// @baa 0x0078ed80
undefined4 UTexture2DComposite::sub_0078ed80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct T_0078fc70;
// @baa 0x0078fc70
template INT TArray<T_0078fc70*>::RemoveItem(T_0078fc70* const&);

struct C_0078fd70 { void sub_0078fd70(void); };

// @baa 0x0078fd70
void C_0078fd70::sub_0078fd70(void) { *(int*)((char*)this + 4) = 0; }

// @baa 0x0078d960
FString UAudioComponent::GetDetailedInfoInternal()
{
	FString Result;
	if (SoundCue)
	{
		Result = SoundCue->GetPathName();
	}
	else
	{
		Result = TEXT("No_SoundCue");
	}
	return Result;
}
