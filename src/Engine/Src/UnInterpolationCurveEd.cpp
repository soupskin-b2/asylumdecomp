// UnInterpolationCurveEd.cpp (part 1 of 3): 162 functions
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
int UInterpTrackFloatBase::vf_10c(void) { return *(int*)((char*)this + 84); }

// @baa 0x00cef360
int UInterpTrackVectorBase::vf_10c(void) { return *(int*)((char*)this + 84); }

// @baa 0x00cef370
int UInterpTrackEvent::vf_10c(void) { return *(int*)((char*)this + 84); }

// @baa 0x00cef380
int UInterpTrackDirector::vf_10c(void) { return *(int*)((char*)this + 92); }

// @baa 0x00cef390
int UInterpTrackAnimControl::vf_10c(void) { return *(int*)((char*)this + 176); }

// @baa 0x00cef3a0
int UInterpTrackSound::vf_10c(void) { return *(int*)((char*)this + 204); }

// @baa 0x00cef3d0
int UInterpTrackFaceFX::vf_10c(void) { return *(int*)((char*)this + 96); }

// @baa 0x00cef3e0
int UInterpTrackVisibility::vf_10c(void) { return *(int*)((char*)this + 84); }

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
int sub_00d1eb20(void) { return 1; }

// @baa 0x00d1eb30
int sub_00d1eb30(void) { return 3; }

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
int UInterpTrackVisibility::sub_00d215f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != *(int *)(param_1 + 0x34)) {
    sub_006311e0("PosTrack.Points.Num() == EulerTrack.Points.Num()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolationCurveEd.cpp"
                 ,0x2f,&g_0209cdfc);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return iVar1;
}

extern undefined4 g_0209cf2c;
// @baa 0x00d21620
int UInterpTrackVisibility::sub_00d21620(void)
{
    int param_1 = (int)this;

  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x34)) {
    sub_006311e0("PosTrack.Points.Num() == EulerTrack.Points.Num()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolationCurveEd.cpp"
                 ,0x35,&g_0209cf2c);
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar2 = 0;
  if ((uVar1 & 8) != 0) {
    iVar2 = 3;
  }
  if (((uVar1 & 0x10) != 0) && ((uVar1 & 1) == 0)) {
    iVar2 = iVar2 + 3;
  }
  return iVar2;
}

// @baa 0x00d218d0
undefined4 UInterpTrackVisibility::sub_00d218d0(void)
{
    int param_1 = (int)this;

  if ((*(char *)(param_1 + 0x2c) == '\0') && (*(char *)(param_1 + 0x3c) == '\0')) {
    return 0;
  }
  return 1;
}

// @baa 0x00d218f0
int UInterpTrackFloatBase::sub_00d218f0(void) { return *(int*)((char*)this + 36); }

// @baa 0x00d21900
bool UInterpTrackFloatBase::sub_00d21900(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x2c) != '\0';
}

// @baa 0x00d21910
int UInterpTrackVectorBase::sub_00d21910(void) { return *(int*)((char*)this + 36); }

// @baa 0x00d219c0
bool UInterpTrackVectorBase::sub_00d219c0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x2c) != '\0';
}

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
void APrefabInstance::vf_01c(void)
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
void UInterpTrackFloatBase::vf_04c(UINT PropertyThatChanged)
{
    if (Randomiser.bUseRandomise) {
        vf_160();
    }
    ((FInterpCurveFloat&)FloatTrack).sub_007b96a0(CurveTension);
    UInterpTrack::vf_04c(PropertyThatChanged);
}
