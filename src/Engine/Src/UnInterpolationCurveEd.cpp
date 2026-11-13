// UnInterpolationCurveEd.cpp (part 1 of 3): 186 functions
// Placed here by: neighbours 124, class 31, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int g_026c4360;
extern "C" int g_026c4364;
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
    void sub_00ce8790();
};

// @baa 0x00ce8790
void UObjectThunk::sub_00ce8790()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4360, g_026c4364, 0), 0, 0);
}

// @baa 0x00ceb140
int UInterpTrackFloatBase::vf_000(void) { return 1; }

// @baa 0x00ceb150
int UInterpTrackVectorBase::vf_000(void) { return 1; }

// @baa 0x00ceb160
int UInterpTrackFloatProp::vf_000(void) { return 1; }

// @baa 0x00ceb170
int UInterpTrackInstFloatProp::vf_000(void) { return 1; }

// @baa 0x00ceb180
int UInterpTrackVectorProp::vf_000(void) { return 1; }

// @baa 0x00ceb190
int UInterpTrackInstVectorProp::vf_000(void) { return 1; }

// @baa 0x00ceb1a0
int UInterpTrackColorProp::vf_000(void) { return 1; }

// @baa 0x00ceb1b0
int UInterpTrackInstColorProp::vf_000(void) { return 1; }

// @baa 0x00ceb1c0
int UInterpTrackEvent::vf_000(void) { return 1; }

// @baa 0x00ceb1d0
int UInterpTrackInstEvent::vf_000(void) { return 1; }

// @baa 0x00ceb1e0
int UInterpTrackDirector::vf_000(void) { return 1; }

// @baa 0x00ceb1f0
int UInterpTrackInstDirector::vf_000(void) { return 1; }

// @baa 0x00ceb200
int UInterpTrackFade::vf_000(void) { return 1; }

// @baa 0x00ceb210
int UInterpTrackInstFade::vf_000(void) { return 1; }

// @baa 0x00ceb220
int UInterpTrackSlomo::vf_000(void) { return 1; }

// @baa 0x00ceb230
int UInterpTrackInstSlomo::vf_000(void) { return 1; }

// @baa 0x00ceb240
int UInterpTrackAnimControl::vf_000(void) { return 1; }

// @baa 0x00ceb250
int UInterpTrackInstAnimControl::vf_000(void) { return 1; }

// @baa 0x00ceb260
int UInterpTrackSound::vf_000(void) { return 1; }

// @baa 0x00ceb270
int UInterpTrackInstSound::vf_000(void) { return 1; }

// @baa 0x00ceb280
int UInterpTrackFloatParticleParam::vf_000(void) { return 1; }

// @baa 0x00ceb290
int UInterpTrackInstFloatParticleParam::vf_000(void) { return 1; }

// @baa 0x00ceb2a0
int UInterpTrackFloatMaterialParam::vf_000(void) { return 1; }

// @baa 0x00ceb2b0
int UInterpTrackInstFloatMaterialParam::vf_000(void) { return 1; }

// @baa 0x00ceb2c0
int UInterpTrackVectorMaterialParam::vf_000(void) { return 1; }

// @baa 0x00ceb2d0
int UInterpTrackInstVectorMaterialParam::vf_000(void) { return 1; }

// @baa 0x00ceb2e0
int UInterpTrackColorScale::vf_000(void) { return 1; }

// @baa 0x00ceb2f0
int UInterpTrackInstColorScale::vf_000(void) { return 1; }

// @baa 0x00ceb300
int UInterpTrackFaceFX::vf_000(void) { return 1; }

// @baa 0x00ceb310
int UInterpTrackInstFaceFX::vf_000(void) { return 1; }

// @baa 0x00ceb320
int UInterpTrackFaceFXRegister::vf_000(void) { return 1; }

// @baa 0x00ceb330
int UInterpTrackInstFaceFXRegister::vf_000(void) { return 1; }

// @baa 0x00ceb340
int UInterpTrackMorphWeight::vf_000(void) { return 1; }

// @baa 0x00ceb350
int UInterpTrackInstMorphWeight::vf_000(void) { return 1; }

// @baa 0x00ceb360
int UInterpTrackSkelControlScale::vf_000(void) { return 1; }

// @baa 0x00ceb370
int UInterpTrackInstSkelControlScale::vf_000(void) { return 1; }

// @baa 0x00ceb380
int UInterpTrackSoundFade::vf_000(void) { return 1; }

// @baa 0x00ceb390
int UInterpTrackInstSoundFade::vf_000(void) { return 1; }

// @baa 0x00ceb3a0
int UInterpTrackAudioMaster::vf_000(void) { return 1; }

// @baa 0x00ceb3b0
int UInterpTrackInstAudioMaster::vf_000(void) { return 1; }

// @baa 0x00ceb3c0
int UInterpTrackVisibility::vf_000(void) { return 1; }

typedef uint size_t;

struct C{
void sub_00cec440(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00cec440
void C::sub_00cec440(int param_2,int param_3)
{
int iVar1;
int*param_1=(int*)this;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(0>param_2){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],8);
param_1[2]=iVar2;
if((*param_1)||(0!=iVar2)){
iVar2=sub_0053df70(*param_1,iVar2*8,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*8),(void*)(*param_1+param_2*8),
(iVar1-param_2)*8);
return;
}

// @baa 0x00cef340
INT UInterpTrackFloatBase::GetNumKeyframes() { return *(int*)((char*)this + 84); }

// @baa 0x00cef360
INT UInterpTrackVectorBase::GetNumKeyframes() { return *(int*)((char*)this + 84); }

// @baa 0x00cef370
INT UInterpTrackEvent::GetNumKeyframes() { return *(int*)((char*)this + 84); }

// @baa 0x00cef380
INT UInterpTrackDirector::GetNumKeyframes() { return *(int*)((char*)this + 92); }

// @baa 0x00cef390
INT UInterpTrackAnimControl::GetNumKeyframes() { return *(int*)((char*)this + 176); }

// @baa 0x00cef3a0
INT UInterpTrackSound::GetNumKeyframes() { return *(int*)((char*)this + 204); }

// @baa 0x00cef3d0
INT UInterpTrackFaceFX::GetNumKeyframes() { return *(int*)((char*)this + 96); }

// @baa 0x00cef3e0
INT UInterpTrackVisibility::GetNumKeyframes() { return *(int*)((char*)this + 84); }

// @baa 0x00cf4f90
FString UInterpTrackFloatProp::vf_144()
{
    return TEXT("UnrealEd.InterpTrackFloatPropHelper");
}

// @baa 0x00cf4fc0
FString UInterpTrackVectorProp::vf_144()
{
    return TEXT("UnrealEd.InterpTrackVectorPropHelper");
}

// @baa 0x00cf4ff0
FString UInterpTrackColorProp::vf_144()
{
    return TEXT("UnrealEd.InterpTrackColorPropHelper");
}

// @baa 0x00cf5480
FString UInterpTrackEvent::vf_144()
{
    return TEXT("UnrealEd.InterpTrackEventHelper");
}

// @baa 0x00cf5960
FString UInterpTrackDirector::vf_144()
{
    return TEXT("UnrealEd.InterpTrackDirectorHelper");
}

// @baa 0x00cf5df0
FString UInterpTrackAnimControl::vf_144()
{
    return TEXT("UnrealEd.InterpTrackAnimControlHelper");
}

// @baa 0x00cf6470
FString UInterpTrackSound::vf_144()
{
    return TEXT("UnrealEd.InterpTrackSoundHelper");
}

// @baa 0x00cf6da0
FString UInterpTrackFaceFX::vf_144()
{
    return TEXT("UnrealEd.InterpTrackFaceFXHelper");
}

// @baa 0x00cf7180
FString UInterpTrackVisibility::vf_144()
{
    return TEXT("UnrealEd.InterpTrackVisibilityHelper");
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00cf8390 { void* Data; int Num; int Max; void sub_00cf8390(); };

// @baa 0x00cf8390
void C_00cf8390::sub_00cf8390() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cf84d0 { void* Data; int Num; int Max; void sub_00cf84d0(); };

// @baa 0x00cf84d0
void C_00cf84d0::sub_00cf84d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d011d0
IMPLEMENT_CLASS_AT(UInterpTrackFloatBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 44);

// @baa 0x00d01250
// @baa 0x00d01ce0
IMPLEMENT_CLASS_AT(UInterpTrackVectorBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 45);

// @baa 0x00d01d60
// @baa 0x00d01df0
IMPLEMENT_CLASS_AT(UInterpTrackAudioMaster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 103);

// @baa 0x00d01e60
// @baa 0x00d01ec0
IMPLEMENT_CLASS_AT(UInterpTrackColorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 53);

// @baa 0x00d01f30
// @baa 0x00d01f90
IMPLEMENT_CLASS_AT(UInterpTrackColorScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 83);

// @baa 0x00d02000
// @baa 0x00d02060
int UInterpTrackSound::vf_14c(void) { return 1; }

// @baa 0x00d02070
IMPLEMENT_CLASS_AT(UInterpTrackSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 71);

// @baa 0x00d020f0
// @baa 0x00d02150
IMPLEMENT_CLASS_AT(UInterpTrackVectorMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 80);

// @baa 0x00d021c0
// @baa 0x00d02220
IMPLEMENT_CLASS_AT(UInterpTrackVectorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 50);

// @baa 0x00d02290
// @baa 0x00d022f0
int UInterpTrackVisibility::vf_14c(void) { return 1; }

// @baa 0x00d02300
IMPLEMENT_CLASS_AT(UInterpTrackVisibility, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 106);

// @baa 0x00d02380
// @baa 0x00d02640
// @baa 0x00d02750
bool UInterpTrackFloatBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d02790
// @baa 0x00d028a0
bool UInterpTrackVectorBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d028e0
IMPLEMENT_CLASS_AT(UInterpTrackEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 56);

// @baa 0x00d029f0
bool UInterpTrackEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d02a30
IMPLEMENT_CLASS_AT(UInterpTrackDirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 59);

// @baa 0x00d02b40
bool UInterpTrackDirector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d02b80
IMPLEMENT_CLASS_AT(UInterpTrackFaceFX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 86);

// @baa 0x00d02c90
bool UInterpTrackFaceFX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d02cd0
// @baa 0x00d02de0
bool UInterpTrackVisibility::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d06fb0
// @baa 0x00d073e0
// @baa 0x00d07420
// @baa 0x00d07460
// @baa 0x00d074a0
// @baa 0x00d074e0
// @baa 0x00d07520
// @baa 0x00d07560
// @baa 0x00d075a0
// @baa 0x00d1eb20
INT UInterpTrackFloatBase::GetNumSubCurves() { return 1; }

// @baa 0x00d1eb30
INT UInterpTrackVectorBase::GetNumSubCurves() { return 3; }

int sub_005eae70(...);
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x00d1f030
void sub_00d1f030(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Anim_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f070
void sub_00d1f070(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Anim_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f0b0
void sub_00d1f0b0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Sound_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f0f0
void sub_00d1f0f0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Fade_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f130
void sub_00d1f130(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Fade_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f170
void sub_00d1f170(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Slomo_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f1b0
void sub_00d1f1b0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Fade_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f1f0
void sub_00d1f1f0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_AudioMaster_Mat",0,0,0,1);
  return;
}

// @baa 0x00d1f230
void sub_00d1f230(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Visibility_Mat",0,0,0,1);
  return;
}

extern undefined4 g_0209cdfc;
// @baa 0x00d215f0
INT UInterpTrackMove::GetNumKeys()
{
#line 47 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolationCurveEd.cpp"
    check(PosTrack.Points.Num() == EulerTrack.Points.Num());
    return PosTrack.Points.Num();
}

extern undefined4 g_0209cf2c;
// @baa 0x00d21620
INT UInterpTrackMove::GetNumSubCurves()
{
#line 53 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolationCurveEd.cpp"
    check(PosTrack.Points.Num() == EulerTrack.Points.Num());
    INT NumSubs = 0;
    if (bShowTranslationOnCurveEd)
        NumSubs += 3;
    if (bShowRotationOnCurveEd && !bUseQuatInterpolation)
        NumSubs += 3;
    return NumSubs;
}

// @baa 0x00d218d0
UBOOL UInterpTrackMove::UsingLegacyInterpMethod() const
{
    return PosTrack.InterpMethod != IMT_UseFixedTangentEvalAndNewAutoTangents || EulerTrack.InterpMethod != IMT_UseFixedTangentEvalAndNewAutoTangents;
}

// @baa 0x00d218f0
INT UInterpTrackFloatBase::GetNumKeys() { return FloatTrack.Points.Num(); }

// @baa 0x00d21900
UBOOL UInterpTrackFloatBase::UsingLegacyInterpMethod() const { return FloatTrack.InterpMethod != IMT_UseFixedTangentEvalAndNewAutoTangents; }

// @baa 0x00d21910
INT UInterpTrackVectorBase::GetNumKeys() { return VectorTrack.Points.Num(); }

// @baa 0x00d219c0
UBOOL UInterpTrackVectorBase::UsingLegacyInterpMethod() const { return VectorTrack.InterpMethod != IMT_UseFixedTangentEvalAndNewAutoTangents; }

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x00d219d0
undefined4 UObject::sub_00d219d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d219f0
undefined4 UObject::sub_00d219f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d21a10
undefined4 UObject::sub_00d21a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d21f00
undefined4 UObject::sub_00d21f00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_007839c0();
    int sub_005db480();
    int sub_005d9570(int);
};

// @baa 0x00d22040
void APrefabInstance::PostLoad(void)
{
    int param_1 = (int)this;
  int iVar1;
  ((C_view *)(this))->sub_007839c0();
  iVar1 = ((C_view *)(this))->sub_005db480();
  if ((iVar1 < 0x218) && (*(int *)(param_1 + 0x1ec) != 0)) {
    *(int *)(*(int *)(param_1 + 0x1ec) + 0x10c) = param_1;
    ((C_view *)(this))->sub_005d9570(1);
  }
  return;
}

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00d227a0(INT Index);
};

// @baa 0x00d227a0
E* S::sub_00d227a0(INT Index)
{
    return &Items(Index);
}

struct S_00d227f0 {
    TArray<E> Items; // 0x00
    const E* sub_00d227f0(INT Index) const;
};

// @baa 0x00d227f0
const E* S_00d227f0::sub_00d227f0(INT Index) const
{
    return &Items(Index);
}

struct S_00d22840 {
    TArray<E> Items; // 0x00
    E* sub_00d22840(INT Index);
};

// @baa 0x00d22840
E* S_00d22840::sub_00d22840(INT Index)
{
    return &Items(Index);
}

struct S_00d22890 {
    TArray<E> Items; // 0x00
    E* sub_00d22890(INT Index);
};

// @baa 0x00d22890
E* S_00d22890::sub_00d22890(INT Index)
{
    return &Items(Index);
}

struct E_00d22910 { BYTE Bytes[44]; };

struct S_00d22910 {
    TArray<E_00d22910> Items; // 0x00
    E_00d22910* sub_00d22910(INT Index);
};

// @baa 0x00d22910
E_00d22910* S_00d22910::sub_00d22910(INT Index)
{
    return &Items(Index);
}

struct C_00d22990 {
    int sub_00d22990(int);
    int sub_008ac9b0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d22990
int C_00d22990::sub_00d22990(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d22990 *)(this))->sub_008ac9b0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct E_00d229d0 { BYTE Bytes[13]; };

struct S_00d229d0 {
    TArray<E_00d229d0> Items; // 0x00
    E_00d229d0* sub_00d229d0(INT Index);
};

// @baa 0x00d229d0
E_00d229d0* S_00d229d0::sub_00d229d0(INT Index)
{
    return &Items(Index);
}

struct S_00d22a20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d22a20(INT Index);
};

// @baa 0x00d22a20
DWORD* S_00d22a20::sub_00d22a20(INT Index)
{
    return &Items(Index);
}

struct E_00d22ad0 { BYTE Bytes[12]; };

struct S_00d22ad0 {
    TArray<E_00d22ad0> Items; // 0x00
    E_00d22ad0* sub_00d22ad0(INT Index);
};

// @baa 0x00d22ad0
E_00d22ad0* S_00d22ad0::sub_00d22ad0(INT Index)
{
    return &Items(Index);
}

struct E_00d22b20 { BYTE Bytes[20]; };

struct S_00d22b20 {
    TArray<E_00d22b20> Items; // 0x00
    const E_00d22b20* sub_00d22b20(INT Index) const;
};

// @baa 0x00d22b20
const E_00d22b20* S_00d22b20::sub_00d22b20(INT Index) const
{
    return &Items(Index);
}

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
	FFaceFXElement* sub_00d22be0(INT Index);
};

// @baa 0x00d22be0
FFaceFXElement* UFxRenderWidget::sub_00d22be0(INT Index)
{
	return &BoneArray(Index);
}

struct C_00d22c70 {
    int sub_00d22c70(int);
};

// @baa 0x00d22c70
int C_00d22c70::sub_00d22c70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00d22c80
void __stdcall sub_00d22c80(int a0, int a1) {  }

struct C_00d22c90 {
    int sub_00d22c90(int);
};

// @baa 0x00d22c90
int C_00d22c90::sub_00d22c90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d22ca0 {
    int sub_00d22ca0(int);
};

// @baa 0x00d22ca0
int C_00d22ca0::sub_00d22ca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_00d22cb0 {
    int sub_00d22cb0(int);
};

// @baa 0x00d22cb0
int C_00d22cb0::sub_00d22cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d22cc0 {
    int sub_00d22cc0(int);
};

// @baa 0x00d22cc0
int C_00d22cc0::sub_00d22cc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd + *param_1;
}

// @baa 0x00d22cd0
void __stdcall sub_00d22cd0(int a0, int a1) {  }

struct C_00d22ce0 {
    int sub_00d22ce0(int);
};

// @baa 0x00d22ce0
int C_00d22ce0::sub_00d22ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00d22cf0
void __stdcall sub_00d22cf0(int a0, int a1) {  }

struct C_00d22d00 {
    int sub_00d22d00(int);
};

// @baa 0x00d22d00
int C_00d22d00::sub_00d22d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00d22d10 {
    int sub_00d22d10(int);
};

// @baa 0x00d22d10
int C_00d22d10::sub_00d22d10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d22d20 {
    undefined4 sub_00d22d20(byte);
    int sub_00d67c50();
};

// @baa 0x00d22d20
undefined4 C_00d22d20::sub_00d22d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d22d20 *)(((char *)this + 4)))->sub_00d67c50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_00d22d50 { BYTE Bytes[24]; };

struct S_00d22d50 {
    TArray<E_00d22d50> Items; // 0x00
    E_00d22d50* sub_00d22d50(INT Index);
};

// @baa 0x00d22d50
E_00d22d50* S_00d22d50::sub_00d22d50(INT Index)
{
    return &Items(Index);
}

struct C_00d22e00 { C_00d22e00* sub_00d22e00(void); };

// @baa 0x00d22e00
C_00d22e00* C_00d22e00::sub_00d22e00(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_00d22e90 { C_00d22e90* sub_00d22e90(void); };

// @baa 0x00d22e90
C_00d22e90* C_00d22e90::sub_00d22e90(void) { *(int*)((char*)this + 8) = -1; return this; }

// @baa 0x00d23360
void sub_00d23360(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00d23490 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00d23490& sub_00d23490(int Arg);
};

// @baa 0x00d23490
C_00d23490& C_00d23490::sub_00d23490(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x00d23540
void __stdcall sub_00d23540(int a0) {  }

// @baa 0x00d23550
void sub_00d23550(void) {  }

// @baa 0x00d23560
int sub_00d23560(void) { return 0; }

// @baa 0x00d23570
int sub_00d23570(void) { return 0; }

struct C_00d23600 {
    undefined4 sub_00d23600(byte);
};

int sub_00d23580(void);
// @baa 0x00d23600
undefined4 C_00d23600::sub_00d23600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d23580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d23770 { C_00d23770* sub_00d23770(void); };

// @baa 0x00d23770
C_00d23770* C_00d23770::sub_00d23770(void) { return this; }

struct A_00d23780 { virtual void sub_00d29f10(); char pad[20]; };

struct B_00d23780 { virtual void sub_00d29f10(); };

struct C_00d23780 : A_00d23780, B_00d23780 { virtual void sub_00d29f10(); C_00d23780(); };

C_00d23780::C_00d23780() {}

// @baa 0x00d23780
void C_00d23780::sub_00d29f10() {}

// @baa 0x00cfb5d0
void UInterpTrackFloatBase::PostEditChange(UProperty* PropertyThatChanged)
{
    if (Randomiser.bUseRandomise) {
        vf_160();
    }
    ((FInterpCurveFloat&)FloatTrack).sub_007b96a0(CurveTension);
    UInterpTrack::PostEditChange(PropertyThatChanged);
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* TArray<FEventTrackKey>: Insert out of line in the exe (00cebce0), InsertZeroed inlined (Array.h) */
struct FEventTrackKeyArray : public TArrayAt_<FEventTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FEventTrackKey), Count * sizeof(FEventTrackKey));
    }
};

// @baa 0x00cf5120
INT UInterpTrackEvent::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= EventTrack.Num())
    {
        return INDEX_NONE;
    }

    FEventTrackKey EventKey = ((FEventTrackKeyArray&)EventTrack).At(KeyIndex);
    EventKey.Time = NewKeyTime;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < EventTrack.Num() && ((FEventTrackKeyArray&)EventTrack).At(i).Time < NewKeyTime; i++);
    ((FEventTrackKeyArray&)EventTrack).InsertZeroed(i);
    ((FEventTrackKeyArray&)EventTrack).At(i) = EventKey;

    return i;
}

#line 1144 "candidate.cpp"

/* TArray<FEventTrackKey>: Insert out of line in the exe (00cebce0) */
struct FEventTrackKeyArray_00cf53b0 : public TArrayAt_<FEventTrackKey>
{
    void Insert(INT Index, INT Count = 1);
};

// @baa 0x00cf53b0
INT UInterpTrackEvent::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    FEventTrackKey NewEventKey;
    NewEventKey.EventName = NAME_None;
    NewEventKey.Time = Time;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < EventTrack.Num() && ((FEventTrackKeyArray_00cf53b0&)EventTrack).At(i).Time < Time; i++);
    ((FEventTrackKeyArray_00cf53b0&)EventTrack).Insert(i);
    ((FEventTrackKeyArray_00cf53b0&)EventTrack).At(i) = NewEventKey;

    return i;
}

/* TArray<FDirectorTrackCut>: Insert out of line in the exe (00cebb60) */
struct FDirectorTrackCutArray : public TArrayAt_<FDirectorTrackCut>
{
    void Insert(INT Index, INT Count = 1);
};

// @baa 0x00cf5870
INT UInterpTrackDirector::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    FDirectorTrackCut NewCut;
    NewCut.TransitionTime = 0.f;
    NewCut.TargetCamGroup = NAME_None;
    NewCut.TargetBoneName = NAME_None;
    NewCut.Time = Time;

    // Find the correct index to insert this cut.
    INT i = 0;
    for (i = 0; i < CutTrack.Num() && ((FDirectorTrackCutArray&)CutTrack).At(i).Time < Time; i++);
    ((FDirectorTrackCutArray&)CutTrack).Insert(i);
    ((FDirectorTrackCutArray&)CutTrack).At(i) = NewCut;

    return i;
}

/* TArray<FDirectorTrackCut>: Insert out of line in the exe (00cebb60), InsertZeroed inlined (Array.h) */
struct FDirectorTrackCutArray_00cf55b0 : public TArrayAt_<FDirectorTrackCut>
{
    void Insert(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FDirectorTrackCut), Count * sizeof(FDirectorTrackCut));
    }
};

// @baa 0x00cf55b0
INT UInterpTrackDirector::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= CutTrack.Num())
    {
        return INDEX_NONE;
    }

    FDirectorTrackCut NewCut = ((FDirectorTrackCutArray_00cf55b0&)CutTrack).At(KeyIndex);
    NewCut.Time = NewKeyTime;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < CutTrack.Num() && ((FDirectorTrackCutArray_00cf55b0&)CutTrack).At(i).Time < NewKeyTime; i++);
    ((FDirectorTrackCutArray_00cf55b0&)CutTrack).InsertZeroed(i);
    ((FDirectorTrackCutArray_00cf55b0&)CutTrack).At(i) = NewCut;

    return i;
}

/* TArray<FEventTrackKey>: Insert and Remove out of line in the exe (00cebce0, 00cf7cf0), InsertZeroed inlined (Array.h) */
struct FEventTrackKeyArray_00cfb960 : public TArrayAt_<FEventTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void Remove(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FEventTrackKey), Count * sizeof(FEventTrackKey));
    }
};

// @baa 0x00cfb960
INT UInterpTrackEvent::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= EventTrack.Num())
    {
        return KeyIndex;
    }

    if (bUpdateOrder)
    {
        // First, remove cut from array.
        FEventTrackKey MoveKey = ((FEventTrackKeyArray_00cfb960&)EventTrack).At(KeyIndex);
        ((FEventTrackKeyArray_00cfb960&)EventTrack).Remove(KeyIndex);

        // Set its time to the new one.
        MoveKey.Time = NewKeyTime;

        // Find correct new position and insert.
        INT i = 0;
        for (i = 0; i < EventTrack.Num() && ((FEventTrackKeyArray_00cfb960&)EventTrack).At(i).Time < NewKeyTime; i++);
        ((FEventTrackKeyArray_00cfb960&)EventTrack).InsertZeroed(i);
        ((FEventTrackKeyArray_00cfb960&)EventTrack).At(i) = MoveKey;

        return i;
    }
    else
    {
        ((FEventTrackKeyArray_00cfb960&)EventTrack).At(KeyIndex).Time = NewKeyTime;
        return KeyIndex;
    }
}

/* TArray<FDirectorTrackCut>: Insert and Remove out of line in the exe (00cebb60, 00cf7ba0), InsertZeroed inlined (Array.h) */
struct FDirectorTrackCutArray_00cfbb10 : public TArrayAt_<FDirectorTrackCut>
{
    void Insert(INT Index, INT Count = 1);
    void Remove(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FDirectorTrackCut), Count * sizeof(FDirectorTrackCut));
    }
};

// @baa 0x00cfbb10
INT UInterpTrackDirector::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= CutTrack.Num())
    {
        return KeyIndex;
    }

    if (bUpdateOrder)
    {
        // First, remove cut from array.
        FDirectorTrackCut MoveCut = ((FDirectorTrackCutArray_00cfbb10&)CutTrack).At(KeyIndex);
        ((FDirectorTrackCutArray_00cfbb10&)CutTrack).Remove(KeyIndex);

        // Set its time to the new one.
        MoveCut.Time = NewKeyTime;

        // Find correct new position and insert.
        INT i = 0;
        for (i = 0; i < CutTrack.Num() && ((FDirectorTrackCutArray_00cfbb10&)CutTrack).At(i).Time < NewKeyTime; i++);
        ((FDirectorTrackCutArray_00cfbb10&)CutTrack).InsertZeroed(i);
        ((FDirectorTrackCutArray_00cfbb10&)CutTrack).At(i) = MoveCut;

        return i;
    }
    else
    {
        ((FDirectorTrackCutArray_00cfbb10&)CutTrack).At(KeyIndex).Time = NewKeyTime;
        return KeyIndex;
    }
}

/* TArray<FAnimControlTrackKey>: Insert and Remove out of line in the exe (00cebe90, 00cf7ed0), InsertZeroed inlined (Array.h) */
struct FAnimControlTrackKeyArray : public TArrayAt_<FAnimControlTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void Remove(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FAnimControlTrackKey), Count * sizeof(FAnimControlTrackKey));
    }
};

// @baa 0x00cfbfd0
INT UInterpTrackAnimControl::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= AnimSeqs.Num())
    {
        return KeyIndex;
    }

    if (bUpdateOrder)
    {
        // First, remove cut from array.
        FAnimControlTrackKey MoveSeq = ((FAnimControlTrackKeyArray&)AnimSeqs).At(KeyIndex);
        ((FAnimControlTrackKeyArray&)AnimSeqs).Remove(KeyIndex);

        // Set its time to the new one.
        MoveSeq.StartTime = NewKeyTime;

        // Find correct new position and insert.
        INT i = 0;
        for (i = 0; i < AnimSeqs.Num() && ((FAnimControlTrackKeyArray&)AnimSeqs).At(i).StartTime < NewKeyTime; i++);
        ((FAnimControlTrackKeyArray&)AnimSeqs).InsertZeroed(i);
        ((FAnimControlTrackKeyArray&)AnimSeqs).At(i) = MoveSeq;

        return i;
    }
    else
    {
        ((FAnimControlTrackKeyArray&)AnimSeqs).At(KeyIndex).StartTime = NewKeyTime;
        return KeyIndex;
    }
}

/* TArray<FSoundTrackKey>: Insert and Remove out of line in the exe (00cec2e0, 00cf83f0), InsertZeroed inlined (Array.h) */
struct FSoundTrackKeyArray : public TArrayAt_<FSoundTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void Remove(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FSoundTrackKey), Count * sizeof(FSoundTrackKey));
    }
};

// @baa 0x00cfc200
INT UInterpTrackSound::SetKeyframeTime(INT KeyIndex, FLOAT NewKeyTime, UBOOL bUpdateOrder)
{
    if (KeyIndex < 0 || KeyIndex >= Sounds.Num())
    {
        return KeyIndex;
    }

    if (bUpdateOrder)
    {
        // First, remove cut from array.
        FSoundTrackKey MoveSound = ((FSoundTrackKeyArray&)Sounds).At(KeyIndex);
        ((FSoundTrackKeyArray&)Sounds).Remove(KeyIndex);

        // Set its time to the new one.
        MoveSound.Time = NewKeyTime;

        // Find correct new position and insert.
        INT i = 0;
        for (i = 0; i < Sounds.Num() && ((FSoundTrackKeyArray&)Sounds).At(i).Time < NewKeyTime; i++);
        ((FSoundTrackKeyArray&)Sounds).InsertZeroed(i);
        ((FSoundTrackKeyArray&)Sounds).At(i) = MoveSound;

        return i;
    }
    else
    {
        ((FSoundTrackKeyArray&)Sounds).At(KeyIndex).Time = NewKeyTime;
        return KeyIndex;
    }
}

/* TArray<FAnimControlTrackKey>: Insert out of line in the exe (00cebe90), InsertZeroed inlined (Array.h) */
struct FAnimControlTrackKeyArray_00cf5b70 : public TArrayAt_<FAnimControlTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FAnimControlTrackKey), Count * sizeof(FAnimControlTrackKey));
    }
};

// @baa 0x00cf5b70
INT UInterpTrackAnimControl::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= AnimSeqs.Num())
    {
        return INDEX_NONE;
    }

    FAnimControlTrackKey NewSeq = ((FAnimControlTrackKeyArray_00cf5b70&)AnimSeqs).At(KeyIndex);
    NewSeq.StartTime = NewKeyTime;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < AnimSeqs.Num() && ((FAnimControlTrackKeyArray_00cf5b70&)AnimSeqs).At(i).StartTime < NewKeyTime; i++);
    ((FAnimControlTrackKeyArray_00cf5b70&)AnimSeqs).InsertZeroed(i);
    ((FAnimControlTrackKeyArray_00cf5b70&)AnimSeqs).At(i) = NewSeq;

    return i;
}

/* TArray<FSoundTrackKey>: Insert out of line in the exe (00cec2e0), InsertZeroed inlined (Array.h) */
struct FSoundTrackKeyArray_00cf5f30 : public TArrayAt_<FSoundTrackKey>
{
    void Insert(INT Index, INT Count = 1);
    void InsertZeroed(INT Index, INT Count = 1)
    {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FSoundTrackKey), Count * sizeof(FSoundTrackKey));
    }
};

// @baa 0x00cf5f30
INT UInterpTrackSound::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= Sounds.Num())
    {
        return INDEX_NONE;
    }

    FSoundTrackKey NewSound = ((FSoundTrackKeyArray_00cf5f30&)Sounds).At(KeyIndex);
    NewSound.Time = NewKeyTime;

    // Find the correct index to insert this key.
    INT i = 0;
    for (i = 0; i < Sounds.Num() && ((FSoundTrackKeyArray_00cf5f30&)Sounds).At(i).Time < NewKeyTime; i++);
    ((FSoundTrackKeyArray_00cf5f30&)Sounds).InsertZeroed(i);
    ((FSoundTrackKeyArray_00cf5f30&)Sounds).At(i) = NewSound;

    return i;
}

/* FInterpCurve<FLOAT> (UnMath.h): AddPoint out of line in the exe (007b95b0), AutoSetTangents is the kit's sub_007b96a0 */
struct FInterpCurveFloat_ : public FInterpCurveFloat
{
    void AutoSetTangents(FLOAT Tension) { sub_007b96a0(Tension); }
};

// @baa 0x00cfb470
INT UInterpTrackFloatBase::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= FloatTrack.Points.Num())
    {
        return INDEX_NONE;
    }

    FInterpCurveFloat_& Curve = (FInterpCurveFloat_&)FloatTrack;
    TArrayAt_<FInterpCurvePointFloat>& Points = (TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points;

    FInterpCurvePointFloat FloatPoint = Points.At(KeyIndex);
    INT NewKeyIndex = Curve.AddPoint(NewKeyTime, 0.f);
    Points.At(NewKeyIndex) = FloatPoint;
    Points.At(NewKeyIndex).InVal = NewKeyTime;

    Curve.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

/* FInterpCurve<FVector> (UnMath.h): AddPoint and AutoSetTangents out of line in the exe (007bb100, 007bb200) */

// @baa 0x00cfb7e0
INT UInterpTrackVectorBase::DuplicateKeyframe(INT KeyIndex, FLOAT NewKeyTime)
{
    if (KeyIndex < 0 || KeyIndex >= VectorTrack.Points.Num())
    {
        return INDEX_NONE;
    }

    FInterpCurveVector& Curve = (FInterpCurveVector&)VectorTrack;
    TArrayAt_<FInterpCurvePointVector>& Points = (TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points;

    FInterpCurvePointVector VectorPoint = Points.At(KeyIndex);
    INT NewKeyIndex = Curve.AddPoint(NewKeyTime, FVector(0.f));
    Points.At(NewKeyIndex) = VectorPoint;
    Points.At(NewKeyIndex).InVal = NewKeyTime;

    Curve.AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfbcf0
INT UInterpTrackFade::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveFloat_&)FloatTrack).AddPoint(Time, 0.f);
    ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveFloat_&)FloatTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

// @baa 0x00cfbeb0
INT UInterpTrackSlomo::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    INT NewKeyIndex = ((FInterpCurveFloat_&)FloatTrack).AddPoint(Time, 1.f);
    ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(NewKeyIndex).InterpMode = InitInterpMode;

    ((FInterpCurveFloat_&)FloatTrack).AutoSetTangents(CurveTension);

    return NewKeyIndex;
}

/* TArray<FSoundTrackKey>: Insert out of line in the exe (00cec2e0) */
struct FSoundTrackKeyArray_00cf6090 : public TArrayAt_<FSoundTrackKey>
{
    void Insert(INT Index, INT Count = 1);
};

// @baa 0x00cf6090
INT UInterpTrackSound::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    FSoundTrackKey NewSound;
    NewSound.Sound = NULL;
    NewSound.Time = Time;
    NewSound.Volume = 1.0f;
    NewSound.Pitch = 1.0f;

    // Find the correct index to insert this sound.
    INT i = 0;
    for (i = 0; i < Sounds.Num() && ((FSoundTrackKeyArray_00cf6090&)Sounds).At(i).Time < Time; i++);
    ((FSoundTrackKeyArray_00cf6090&)Sounds).Insert(i);
    ((FSoundTrackKeyArray_00cf6090&)Sounds).At(i) = NewSound;

    return i;
}

/* TArray<FAnimControlTrackKey>: Insert out of line in the exe (00cebe90) */
struct FAnimControlTrackKeyArray_00cf5ce0 : public TArrayAt_<FAnimControlTrackKey>
{
    void Insert(INT Index, INT Count = 1);
};

// @baa 0x00cf5ce0
INT UInterpTrackAnimControl::AddKeyframe(FLOAT Time, UInterpTrackInst* TrInst, BYTE InitInterpMode)
{
    FAnimControlTrackKey NewSeq;
    NewSeq.AnimSeqName = NAME_None;
    NewSeq.bLooping = FALSE;
    NewSeq.AnimStartOffset = 0.f;
    NewSeq.AnimEndOffset = 0.f;
    NewSeq.AnimPlayRate = 1.f;
    NewSeq.StartTime = Time;
    NewSeq.bReverse = FALSE;

    // Find the correct index to insert this sequence.
    INT i = 0;
    for (i = 0; i < AnimSeqs.Num() && ((FAnimControlTrackKeyArray_00cf5ce0&)AnimSeqs).At(i).StartTime < Time; i++);
    ((FAnimControlTrackKeyArray_00cf5ce0&)AnimSeqs).Insert(i);
    ((FAnimControlTrackKeyArray_00cf5ce0&)AnimSeqs).At(i) = NewSeq;

    return i;
}

// @baa 0x00cf5020
void UInterpTrackEvent::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (EventTrack.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FEventTrackKey>&)EventTrack).At(0).Time;
        EndTime = ((TArrayAt_<FEventTrackKey>&)EventTrack).At(EventTrack.Num() - 1).Time;
    }
}

// @baa 0x00cf54b0
void UInterpTrackDirector::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (CutTrack.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FDirectorTrackCut>&)CutTrack).At(0).Time;
        EndTime = ((TArrayAt_<FDirectorTrackCut>&)CutTrack).At(CutTrack.Num() - 1).Time;
    }
}

// @baa 0x00cf47a0
void UInterpTrackFloatBase::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (FloatTrack.Points.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(0).InVal;
        EndTime = ((TArrayAt_<FInterpCurvePointFloat>&)FloatTrack.Points).At(FloatTrack.Points.Num() - 1).InVal;
    }
}

// @baa 0x00cf4d60
void UInterpTrackVectorBase::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (VectorTrack.Points.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(0).InVal;
        EndTime = ((TArrayAt_<FInterpCurvePointVector>&)VectorTrack.Points).At(VectorTrack.Points.Num() - 1).InVal;
    }
}

// @baa 0x00cf5a60
void UInterpTrackAnimControl::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (AnimSeqs.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FAnimControlTrackKey>&)AnimSeqs).At(0).StartTime;
        EndTime = ((TArrayAt_<FAnimControlTrackKey>&)AnimSeqs).At(AnimSeqs.Num() - 1).StartTime;
    }
}

// @baa 0x00cf5e20
void UInterpTrackSound::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (Sounds.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FSoundTrackKey>&)Sounds).At(0).Time;
        EndTime = ((TArrayAt_<FSoundTrackKey>&)Sounds).At(Sounds.Num() - 1).Time;
    }
}

// @baa 0x00cf6e30
void UInterpTrackVisibility::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (VisibilityTrack.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FVisibilityTrackKey>&)VisibilityTrack).At(0).Time;
        EndTime = ((TArrayAt_<FVisibilityTrackKey>&)VisibilityTrack).At(VisibilityTrack.Num() - 1).Time;
    }
}

// @baa 0x00cf64a0
void UInterpTrackFaceFX::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
    if (FaceFXSeqs.Num() == 0)
    {
        StartTime = 0.f;
        EndTime = 0.f;
    }
    else
    {
        StartTime = ((TArrayAt_<FFaceFXTrackKey>&)FaceFXSeqs).At(0).StartTime;
        EndTime = ((TArrayAt_<FFaceFXTrackKey>&)FaceFXSeqs).At(FaceFXSeqs.Num() - 1).StartTime;
    }
}
