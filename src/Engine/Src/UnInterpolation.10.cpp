// UnInterpolation.cpp: 110 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* FName::operator== / != (UnName.h); the kit's FName has no operators. */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

struct USeqAct_Interp_ : public USeqAct_Interp {
    UInterpGroupInst* sub_00cf3830(FName InGroupName); // FindFirstGroupInstByName
};

// @baa 0x00cf3830
UInterpGroupInst* USeqAct_Interp_::sub_00cf3830(FName InGroupName)
{
    if (InGroupName.Index == NAME_None && InGroupName.Number == 0)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (GroupInst(i)->Group->GroupName == InGroupName)
        {
            return GroupInst(i);
        }
    }

    return NULL;
}

struct UInterpGroupInst_ : public UInterpGroupInst {
    AActor* GetGroupActor()
    {
        if (!GroupActor || GroupActor->bDeleteMe)
        {
            return NULL;
        }
        return GroupActor;
    }
    UBOOL HasActor(AActor* InActor) { return GetGroupActor() == InActor; }
};

struct USeqAct_Interp__00cf36a0 : public USeqAct_Interp {
    UInterpGroupInst* sub_00cf36a0(AActor* Actor); // FindGroupInst
};

// @baa 0x00cf36a0
UInterpGroupInst* USeqAct_Interp__00cf36a0::sub_00cf36a0(AActor* Actor)
{
    if (!Actor || Actor->bDeleteMe)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (((UInterpGroupInst_*)GroupInst(i))->HasActor(Actor))
        {
            return GroupInst(i);
        }
    }

    return NULL;
}

void __stdcall sub_00d1ba30(INT A, INT B);
// @baa 0x00d1bbf0
void __stdcall sub_00d1bbf0(INT Value)
{
    sub_00d1ba30(Value, 0);
}

struct USeqAct_Interp__00cf3770 : public USeqAct_Interp {
    UInterpGroupInst* FindFirstGroupInst(UInterpGroup* InGroup); // 00cf3770
};

// @baa 0x00cf3770
UInterpGroupInst* USeqAct_Interp__00cf3770::FindFirstGroupInst(UInterpGroup* InGroup)
{
    if (!InGroup)
    {
        return NULL;
    }

    for (INT i = 0; i < GroupInst.Num(); i++)
    {
        if (GroupInst(i)->Group == InGroup)
        {
            return GroupInst(i);
        }
    }

    return NULL;
}

// @baa 0x00ceb130
int UInterpTrackInstToggle::vf_000(void) { return 1; }

// @baa 0x00ceb3d0
int UInterpTrackInstVisibility::vf_000(void) { return 1; }

// @baa 0x00ceb3e0
int UInterpTrackParticleReplay::vf_000(void) { return 1; }

// @baa 0x00ceb3f0
int UInterpTrackInstParticleReplay::vf_000(void) { return 1; }

// @baa 0x00cef3f0
INT UInterpTrackParticleReplay::GetNumKeyframes() { return *(int*)((char*)this + 84); }

struct C_00cef400{
int sub_00cef400(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cef400
int C_00cef400::sub_00cef400(undefined4*param_2)
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

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00cef460(INT Index);
};

// @baa 0x00cef460
E* S::sub_00cef460(INT Index)
{
    return &Items(Index);
}

struct C_00ceff20 {
    int sub_00ceff20(int);
};

// @baa 0x00ceff20
int C_00ceff20::sub_00ceff20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ceff30 {
    int sub_00ceff30(int);
};

// @baa 0x00ceff30
int C_00ceff30::sub_00ceff30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ceff40 { C_00ceff40* sub_00ceff40(void); };

// @baa 0x00ceff40
C_00ceff40* C_00ceff40::sub_00ceff40(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_00ceff80 { int sub_00ceff80(void); };

// @baa 0x00ceff80
int C_00ceff80::sub_00ceff80(void) { return *(int*)((char*)this + 20); }

struct C_00ceff90 { int sub_00ceff90(void); };

// @baa 0x00ceff90
int C_00ceff90::sub_00ceff90(void) { return *(int*)((char*)this + 20); }

struct C_00ceffa0 {
    int sub_00ceffa0();
};

// @baa 0x00ceffa0
int C_00ceffa0::sub_00ceffa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C {
    int sub_00cf0020(int);
};

// @baa 0x00cf0020
int C::sub_00cf0020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00cf0030 {
    int sub_00cf0030(int);
};

// @baa 0x00cf0030
int C_00cf0030::sub_00cf0030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00cf0040 {
    int sub_00cf0040();
};

// @baa 0x00cf0040
int C_00cf0040::sub_00cf0040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf0060 {
    int sub_00cf0060();
};

// @baa 0x00cf0060
int C_00cf0060::sub_00cf0060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf0080 {
    int sub_00cf0080();
};

// @baa 0x00cf0080
int C_00cf0080::sub_00cf0080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf00a0 {
    int sub_00cf00a0();
};

// @baa 0x00cf00a0
int C_00cf00a0::sub_00cf00a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00cf0390
void sub_00cf0390(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return;
}

// @baa 0x00cf0530
int UInterpGroupInstDirector::sub_00cf0530(void)
{
    int param_1 = (int)this;

  return param_1 + -0x34;
}

struct C_00cf0590 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00cf0590& sub_00cf0590(int Arg);
};

// @baa 0x00cf0590
C_00cf0590& C_00cf0590::sub_00cf0590(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_00cf0630 { C_00cf0630* sub_00cf0630(void); };

// @baa 0x00cf0630
C_00cf0630* C_00cf0630::sub_00cf0630(void) { return this; }

struct C_00cf06c0 { C_00cf06c0* sub_00cf06c0(void); };

// @baa 0x00cf06c0
C_00cf06c0* C_00cf06c0::sub_00cf06c0(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_02098808;
// @baa 0x00cf11b0
undefined4 * UObject::sub_00cf11b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098808);
  return param_1;
}

struct C_00cf11d0 { C_00cf11d0* sub_00cf11d0(void); };

// @baa 0x00cf11d0
C_00cf11d0* C_00cf11d0::sub_00cf11d0(void) { return this; }

// @baa 0x00cf12d0
IMPLEMENT_CLASS_AT(UInterpTrackInstProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 36);

// @baa 0x00cf13e0
bool UInterpTrackInstProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1420
IMPLEMENT_CLASS_AT(UInterpTrackInstMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 39);

// @baa 0x00cf1530
bool UInterpTrackInstMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1570
IMPLEMENT_CLASS_AT(UInterpTrackInstToggle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 42);

// @baa 0x00cf1680
bool UInterpTrackInstToggle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf16c0
IMPLEMENT_CLASS_AT(UInterpTrackInstEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 57);

// @baa 0x00cf17d0
bool UInterpTrackInstEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1810
IMPLEMENT_CLASS_AT(UInterpTrackInstDirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 60);

// @baa 0x00cf1920
bool UInterpTrackInstDirector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1960
IMPLEMENT_CLASS_AT(UInterpTrackInstFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 63);

// @baa 0x00cf1a70
bool UInterpTrackInstFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ab0
IMPLEMENT_CLASS_AT(UInterpTrackInstSlomo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 66);

// @baa 0x00cf1bc0
bool UInterpTrackInstSlomo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1c00
IMPLEMENT_CLASS_AT(UInterpTrackInstAnimControl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 69);

// @baa 0x00cf1d10
bool UInterpTrackInstAnimControl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1d50
IMPLEMENT_CLASS_AT(UInterpTrackInstSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 72);

// @baa 0x00cf1e60
bool UInterpTrackInstSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ea0
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatParticleParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 75);

// @baa 0x00cf1fb0
bool UInterpTrackInstFloatParticleParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ff0
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 78);

// @baa 0x00cf2100
bool UInterpTrackInstFloatMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2140
IMPLEMENT_CLASS_AT(UInterpTrackInstVectorMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 81);

// @baa 0x00cf2250
bool UInterpTrackInstVectorMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2290
IMPLEMENT_CLASS_AT(UInterpTrackInstColorScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 84);

// @baa 0x00cf23a0
bool UInterpTrackInstColorScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf23e0
IMPLEMENT_CLASS_AT(UInterpTrackInstFaceFX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 87);

// @baa 0x00cf24f0
bool UInterpTrackInstFaceFX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2530
IMPLEMENT_CLASS_AT(UInterpTrackInstFaceFXRegister, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 91);

// @baa 0x00cf2640
bool UInterpTrackInstFaceFXRegister::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2680
IMPLEMENT_CLASS_AT(UInterpTrackInstMorphWeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 94);

// @baa 0x00cf2790
bool UInterpTrackInstMorphWeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf27d0
IMPLEMENT_CLASS_AT(UInterpTrackInstSkelControlScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 97);

// @baa 0x00cf28e0
bool UInterpTrackInstSkelControlScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2920
IMPLEMENT_CLASS_AT(UInterpTrackInstSoundFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 101);

// @baa 0x00cf2a30
bool UInterpTrackInstSoundFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2a70
IMPLEMENT_CLASS_AT(UInterpTrackInstAudioMaster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 104);

// @baa 0x00cf2b80
bool UInterpTrackInstAudioMaster::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2bc0
IMPLEMENT_CLASS_AT(UInterpTrackInstVisibility, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 107);

// @baa 0x00cf2cd0
bool UInterpTrackInstVisibility::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2d10
IMPLEMENT_CLASS_AT(UInterpTrackInstParticleReplay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 110);

// @baa 0x00cf2e20
bool UInterpTrackInstParticleReplay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf7540
FString UInterpTrackParticleReplay::vf_144()
{
    return TEXT("UnrealEd.InterpTrackParticleReplayHelper");
}

// @baa 0x00cfa480
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 48);

// @baa 0x00cfa590
bool UInterpTrackInstFloatProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cfa5d0
IMPLEMENT_CLASS_AT(UInterpTrackInstVectorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 51);

// @baa 0x00cfa6e0
bool UInterpTrackInstVectorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cfa720
IMPLEMENT_CLASS_AT(UInterpTrackInstColorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 54);

// @baa 0x00cfa830
bool UInterpTrackInstColorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00cfce70 {
    int sub_00cfce70(undefined4 *, int);
    int sub_00cf8610(int, int);
};

// @baa 0x00cfce70
int C_00cfce70::sub_00cfce70(undefined4 * param_2, int param_3)
{
    uint param_1 = (uint)this;
  undefined4 *puVar1;
  ((C_00cfce70 *)(this))->sub_00cf8610(param_3, 1);
  puVar1 = (undefined4 *)
           ((-(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1 | *(uint *)(param_1 + 0xc0)) +
           param_3 * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  return param_3;
}

struct C_00cfcf20 { C_00cfcf20* sub_00cfcf20(void); };

// @baa 0x00cfcf20
C_00cfcf20* C_00cfcf20::sub_00cfcf20(void) { return this; }

struct C_00cfd010 {
    undefined4 sub_00cfd010();
};

// @baa 0x00cfd010
undefined4 C_00cfd010::sub_00cfd010(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00cfd120 { C_00cfd120* sub_00cfd120(void); };

// @baa 0x00cfd120
C_00cfd120* C_00cfd120::sub_00cfd120(void) { return this; }

struct C_00cfd130 { C_00cfd130* sub_00cfd130(void); };

// @baa 0x00cfd130
C_00cfd130* C_00cfd130::sub_00cfd130(void) { return this; }

struct C_00cfd140 { C_00cfd140* sub_00cfd140(void); };

// @baa 0x00cfd140
C_00cfd140* C_00cfd140::sub_00cfd140(void) { return this; }

struct C_00cfd150 { C_00cfd150* sub_00cfd150(void); };

// @baa 0x00cfd150
C_00cfd150* C_00cfd150::sub_00cfd150(void) { return this; }

struct C_00cfd160 { C_00cfd160* sub_00cfd160(void); };

// @baa 0x00cfd160
C_00cfd160* C_00cfd160::sub_00cfd160(void) { return this; }

extern undefined * g_02098eb8;
// @baa 0x00d00f60
undefined4 * UObject::sub_00d00f60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098eb8);
  return param_1;
}

extern undefined * g_02098fd8;
// @baa 0x00d00f80
undefined4 * UObject::sub_00d00f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098fd8);
  return param_1;
}

void sub_00cf7fd0();
// @baa 0x00d01b00
void sub_00d01b00(void) { sub_00cf7fd0(); }

struct C_00d01b10 { C_00d01b10* sub_00d01b10(void); };

// @baa 0x00d01b10
C_00d01b10* C_00d01b10::sub_00d01b10(void) { return this; }

// @baa 0x00d0afa0
IMPLEMENT_CLASS_AT(UInterpTrackVectorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 50);

// @baa 0x00d0b0b0
bool UInterpTrackVectorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b0f0
IMPLEMENT_CLASS_AT(UInterpTrackColorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 53);

// @baa 0x00d0b200
bool UInterpTrackColorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b630
IMPLEMENT_CLASS_AT(UInterpTrackSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 71);

// @baa 0x00d0ba20
IMPLEMENT_CLASS_AT(UInterpTrackVectorMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 80);

// @baa 0x00d0bb30
bool UInterpTrackVectorMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0bb70
IMPLEMENT_CLASS_AT(UInterpTrackColorScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 83);

// @baa 0x00d0bc80
bool UInterpTrackColorScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0c200
IMPLEMENT_CLASS_AT(UInterpTrackAudioMaster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 103);

// @baa 0x00d0c310
bool UInterpTrackAudioMaster::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d0c560 { C_00d0c560* sub_00d0c560(void); };

// @baa 0x00d0c560
C_00d0c560* C_00d0c560::sub_00d0c560(void) { return this; }

int sub_0053dfa0(...);
int sub_00d0a8b0(void);
// @baa 0x00d0c8c0
undefined4 UObject::sub_00d0c8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d0a8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d0cce0 {
    int sub_00d0cce0();
};

int sub_00d05b70(void);
// @baa 0x00d0cce0
int C_00d0cce0::sub_00d0cce0(void)
{
    int param_1 = (int)this;

  sub_00d05b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d0cd00 {
    int sub_00d0cd00();
};

int sub_00d05bd0(void);
// @baa 0x00d0cd00
int C_00d0cd00::sub_00d0cd00(void)
{
    int param_1 = (int)this;

  sub_00d05bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d0cd20 {
    int sub_00d0cd20();
};

int sub_00d05c30(void);
// @baa 0x00d0cd20
int C_00d0cd20::sub_00d0cd20(void)
{
    int param_1 = (int)this;

  sub_00d05c30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d16d00 {
    int sub_00d16d00();
};

// @baa 0x00d16d00
int C_00d16d00::sub_00d16d00(void)
{
    int param_1 = (int)this;

  sub_00d05b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d16d20 {
    int sub_00d16d20();
};

// @baa 0x00d16d20
int C_00d16d20::sub_00d16d20(void)
{
    int param_1 = (int)this;

  sub_00d05bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d16d40 {
    int sub_00d16d40();
};

// @baa 0x00d16d40
int C_00d16d40::sub_00d16d40(void)
{
    int param_1 = (int)this;

  sub_00d05c30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
