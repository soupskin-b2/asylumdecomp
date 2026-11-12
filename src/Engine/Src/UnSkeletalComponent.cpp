// UnSkeletalComponent.cpp (part 1 of 3): 71 functions
// Placed here by: neighbours 58, callers 8, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_007bcf50(int);
};

int sub_0053df70(...);
// @baa 0x007bcf50
void C::sub_007bcf50(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0090a2e0 {
    float10 sub_0090a2e0();
};

// @baa 0x0090a2e0
float10 C_0090a2e0::sub_0090a2e0(void)
{
    float * param_1 = (float *)this;
  return ((float10)param_1[1] * (float10)param_1[6] - (float10)param_1[2] * (float10)param_1[5]) *
         (float10)param_1[8] +
         (((float10)param_1[5] * (float10)param_1[10] - (float10)param_1[6] * (float10)param_1[9]) *
          (float10)*param_1 -
         ((float10)param_1[1] * (float10)param_1[10] - (float10)param_1[2] * (float10)param_1[9]) *
         (float10)param_1[4]);
}

struct C_0090a3b0 { C_0090a3b0* sub_0090a3b0(void); };

// @baa 0x0090a3b0
C_0090a3b0* C_0090a3b0::sub_0090a3b0(void) { return this; }

struct C_0090a810 {
    int Unk0;
    int Unk4;
    int sub_0090a810();
};

// @baa 0x0090a810
int C_0090a810::sub_0090a810()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_0090a820 { int sub_0090a820(void); };

// @baa 0x0090a820
int C_0090a820::sub_0090a820(void) { return *(int*)((char*)this + 4); }

struct C_0090a830 { int sub_0090a830(void); };

// @baa 0x0090a830
int C_0090a830::sub_0090a830(void) { return *(int*)((char*)this + 4); }

// @baa 0x0090a8a0
undefined2 sub_0090a8a0(void)
{
  return 0x69;
}

struct C_0090aad0 {
    undefined1 sub_0090aad0();
};

// @baa 0x0090aad0
undefined1 C_0090aad0::sub_0090aad0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 8);
}

struct C_0090aae0 { int sub_0090aae0(void); };

// @baa 0x0090aae0
int C_0090aae0::sub_0090aae0(void) { return *(int*)((char*)this + 8); }

struct C_0090aaf0 {
    undefined1 sub_0090aaf0();
};

// @baa 0x0090aaf0
undefined1 C_0090aaf0::sub_0090aaf0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc);
}

struct C_0090ab00 {
    undefined1 sub_0090ab00();
};

// @baa 0x0090ab00
undefined1 C_0090ab00::sub_0090ab00(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xd);
}

struct C_0090ab10 {
    bool sub_0090ab10();
};

// @baa 0x0090ab10
bool C_0090ab10::sub_0090ab10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x30) != 2;
}

struct C_0090ab20 { int sub_0090ab20(void); };

// @baa 0x0090ab20
int C_0090ab20::sub_0090ab20(void) { return *(int*)((char*)this + 24); }

struct C_0090ab30 { C_0090ab30* sub_0090ab30(void); };

// @baa 0x0090ab30
C_0090ab30* C_0090ab30::sub_0090ab30(void) { return this; }

struct C_0090ac40 { C_0090ac40* sub_0090ac40(int a0); };

// @baa 0x0090ac40
C_0090ac40* C_0090ac40::sub_0090ac40(int a0) { return this; }

struct C_0090ac50 { C_0090ac50* sub_0090ac50(int a0); };

// @baa 0x0090ac50
C_0090ac50* C_0090ac50::sub_0090ac50(int a0) { return this; }

struct C_0090ac60 { C_0090ac60* sub_0090ac60(int a0); };

// @baa 0x0090ac60
C_0090ac60* C_0090ac60::sub_0090ac60(int a0) { return this; }

struct C_0090ac70 { C_0090ac70* sub_0090ac70(int a0); };

// @baa 0x0090ac70
C_0090ac70* C_0090ac70::sub_0090ac70(int a0) { return this; }

struct C_0090ac80 { C_0090ac80* sub_0090ac80(int a0); };

// @baa 0x0090ac80
C_0090ac80* C_0090ac80::sub_0090ac80(int a0) { return this; }

struct C_0090ac90 { C_0090ac90* sub_0090ac90(int a0); };

// @baa 0x0090ac90
C_0090ac90* C_0090ac90::sub_0090ac90(int a0) { return this; }

struct C_0090aca0 { C_0090aca0* sub_0090aca0(int a0); };

// @baa 0x0090aca0
C_0090aca0* C_0090aca0::sub_0090aca0(int a0) { return this; }

struct C_0090acb0 { C_0090acb0* sub_0090acb0(int a0); };

// @baa 0x0090acb0
C_0090acb0* C_0090acb0::sub_0090acb0(int a0) { return this; }

extern char g_01f753d4[];
// @baa 0x0090f250
int sub_0090f250(void) { return (int)g_01f753d4; }

extern char g_01ebb554[];
// @baa 0x0090f260
void USkeletalMeshComponent::sub_0090f260(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x0090f270
undefined4 * USkeletalMeshComponent::sub_0090f270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0090f2b0
undefined4 USkeletalMeshComponent::sub_0090f2b0(void)
{
    int param_1 = (int)this;

  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0xb0);
  *puVar1 = *puVar1 ^ (*(int *)(param_1 + 8) << 6 ^ *(uint *)(*(int *)(param_1 + 4) + 0xb0)) & 0x40;
  return 0xc;
}

extern char g_01f75634[];
// @baa 0x0090f2d0
int sub_0090f2d0(void) { return (int)g_01f75634; }

// @baa 0x0090f2e0
void USkeletalMeshComponent::sub_0090f2e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x0090f2f0
undefined4 * USkeletalMeshComponent::sub_0090f2f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0090f310
uint USkeletalMeshComponent::vf_250(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b0) != 0) {
    return *(uint *)(*(int *)(param_1 + 0x1b0) + 0x130) >> 2 & 1;
  }
  return 0;
}

// @baa 0x0090f370
uint USkeletalMeshComponent::vf_254(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b0) != 0) {
    return *(uint *)(*(int *)(param_1 + 0x1b0) + 0x130) >> 1 & 1;
  }
  return 0;
}

struct C_0090f5d0 {
    void sub_0090f5d0();
};

// @baa 0x0090f5d0
void C_0090f5d0::sub_0090f5d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0090f710 { int sub_0090f710(void); };

// @baa 0x0090f710
int C_0090f710::sub_0090f710(void) { return *(int*)((char*)this + 4); }

struct C_0090f720 { int a, b, c; C_0090f720(); };

// @baa 0x0090f720
C_0090f720::C_0090f720() : a(0), b(0), c(0) {}

struct C_0090f730 { int a, b, c; C_0090f730(); };

// @baa 0x0090f730
C_0090f730::C_0090f730() : a(0), b(0), c(0) {}

struct C_0090f740 { int sub_0090f740(void); };

// @baa 0x0090f740
int C_0090f740::sub_0090f740(void) { return *(int*)((char*)this + 4); }

struct C_0090f750 { int sub_0090f750(void); };

// @baa 0x0090f750
int C_0090f750::sub_0090f750(void) { return *(int*)((char*)this + 4); }

struct C_0090f760 { int sub_0090f760(void); };

// @baa 0x0090f760
int C_0090f760::sub_0090f760(void) { return *(int*)((char*)this + 4); }

struct C_0090f770 { int a, b, c; C_0090f770(); };

// @baa 0x0090f770
C_0090f770::C_0090f770() : a(0), b(0), c(0) {}

struct C_0090f780 { int sub_0090f780(void); };

// @baa 0x0090f780
int C_0090f780::sub_0090f780(void) { return *(int*)((char*)this + 4); }

struct C_0090f790 {
    void sub_0090f790();
};

// @baa 0x0090f790
void C_0090f790::sub_0090f790(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0090f7c0 { int sub_0090f7c0(void); };

// @baa 0x0090f7c0
int C_0090f7c0::sub_0090f7c0(void) { return *(int*)((char*)this + 4); }

struct C_0090f7d0 { int sub_0090f7d0(void); };

// @baa 0x0090f7d0
int C_0090f7d0::sub_0090f7d0(void) { return *(int*)((char*)this + 4); }

struct C_0090f7e0 { int a, b, c; C_0090f7e0(); };

// @baa 0x0090f7e0
C_0090f7e0::C_0090f7e0() : a(0), b(0), c(0) {}

struct C_0090f7f0 { int sub_0090f7f0(void); };

// @baa 0x0090f7f0
int C_0090f7f0::sub_0090f7f0(void) { return *(int*)((char*)this + 4); }

struct C_0090f830 { int a, b, c; C_0090f830(); };

// @baa 0x0090f830
C_0090f830::C_0090f830() : a(0), b(0), c(0) {}

struct C_0090f840 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0090f840(INT Index);
};

// @baa 0x0090f840
UBOOL C_0090f840::sub_0090f840(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0090f860 { int a, b, c; C_0090f860(); };

// @baa 0x0090f860
C_0090f860::C_0090f860() : a(0), b(0), c(0) {}

struct C_0090f870 { int sub_0090f870(void); };

// @baa 0x0090f870
int C_0090f870::sub_0090f870(void) { return *(int*)((char*)this + 4); }

struct C_0090f8f0 { int a, b, c; C_0090f8f0(); };

// @baa 0x0090f8f0
C_0090f8f0::C_0090f8f0() : a(0), b(0), c(0) {}

struct C_0090f900 { int sub_0090f900(void); };

// @baa 0x0090f900
int C_0090f900::sub_0090f900(void) { return *(int*)((char*)this + 4); }

struct C_0090f910 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0090f910(INT Index);
};

// @baa 0x0090f910
UBOOL C_0090f910::sub_0090f910(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0090f930 { int sub_0090f930(void); };

// @baa 0x0090f930
int C_0090f930::sub_0090f930(void) { return *(int*)((char*)this + 4); }

struct C_0090f940 { int sub_0090f940(void); };

// @baa 0x0090f940
int C_0090f940::sub_0090f940(void) { return *(int*)((char*)this + 4); }

struct C_0090f950 { int sub_0090f950(void); };

// @baa 0x0090f950
int C_0090f950::sub_0090f950(void) { return *(int*)((char*)this + 4); }

struct C_0090f960 { int sub_0090f960(void); };

// @baa 0x0090f960
int C_0090f960::sub_0090f960(void) { return *(int*)((char*)this + 4); }

// @baa 0x00913f10
undefined4 USkeletalMeshComponent::vf_258(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b0) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x60);
  }
  return 0;
}

int sub_0092db40(void);
// @baa 0x00935790
void USkeletalMeshComponent::sub_00935790(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x27c) = param_2;
  sub_0092db40();
  return;
}

// @baa 0x00938ba0
IMPLEMENT_CLASS_AT(USkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalComponent.cpp", 74);

// @baa 0x00939070
// @baa 0x00becdf0
void sub_00becdf0(void) {  }

struct C_00bece30 {
    undefined4 sub_00bece30(undefined4, undefined4 *);
};

// @baa 0x00bece30
undefined4 C_00bece30::sub_00bece30(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = param_3[1];
  return 1;
}

struct C_00bece50 { int a, b, c; C_00bece50(); };

// @baa 0x00bece50
C_00bece50::C_00bece50() : a(0), b(0), c(0) {}

// @baa 0x00bece60
void sub_00bece60(void) {  }

struct C_00bece70 { void sub_00bece70(int a0); };

// @baa 0x00bece70
void C_00bece70::sub_00bece70(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_00bece80 {
    undefined4 sub_00bece80(undefined4 *);
};

// @baa 0x00bece80
undefined4 C_00bece80::sub_00bece80(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  return 1;
}

struct C_01ac6ba0 {
    void sub_01ac6ba0(int, undefined4);
};

// @baa 0x01ac6ba0
void C_01ac6ba0::sub_01ac6ba0(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 * 0x58 + 0x40 + *(int *)(param_1 + 4)) = param_3;
  return;
}

// A USkeletalComponent whose first three float fields after a 0x30-byte
// header (RelativeScale3D) sit at offsets 0x30/0x34/0x38.
struct USkeletalComponent_0090a320 {
    char Header[0x30];
    float RelativeScale3D[3];
    void sub_0090a320(const float * NewScale);
};

// @baa 0x0090a320
// @baa 0090a320
// Sets the component's relative scale from a supplied 3-float vector.
void USkeletalComponent_0090a320::sub_0090a320(const float * NewScale)
{
    RelativeScale3D[0] = NewScale[0];
    RelativeScale3D[1] = NewScale[1];
    RelativeScale3D[2] = NewScale[2];
}

/* FName::operator== (UnName.h); the kit's FName has no operators. */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

/* Classes.h has this as void* sub_0091f3f0(FName). */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    URB_BodyInstance* FindBodyInstanceNamed(FName BoneName);
};

// @baa 0x0091f3f0
URB_BodyInstance* USkeletalMeshComponent_::FindBodyInstanceNamed(FName BoneName)
{
    if (!PhysicsAsset || !PhysicsAssetInstance)
    {
        return NULL;
    }

    for (INT i = 0; i < PhysicsAsset->BodySetup.Num(); i++)
    {
        URB_BodyInstance* BodyInst = PhysicsAssetInstance->Bodies(i);
        URB_BodySetup* BodySetup = PhysicsAsset->BodySetup(i);
        if (BodySetup->BoneName == BoneName)
        {
            return BodyInst;
        }
    }
    return NULL;
}

/* Natives behind execGetTimeOfScriptNotify (0x0092da90) and
 * execGetTimeOfScriptNotifyInAnimSequence (0x0092d9b0); not in Classes.h. */
struct USkeletalMeshComponent__0092d890 : public USkeletalMeshComponent
{
    FLOAT GetTimeOfScriptNotifyInAnimSequence(UAnimSequence* AnimSeq, FName NotifyName, INT NthOccurrence);
    FLOAT GetTimeOfScriptNotify(FName NotifyName, INT NthOccurrence);
};

// @baa 0x0092d890
FLOAT USkeletalMeshComponent__0092d890::GetTimeOfScriptNotify(FName NotifyName, INT NthOccurrence)
{
    // search every sequence of every anim set for the notify
    for (INT SetIdx = 0; SetIdx < AnimSets.Num(); SetIdx++)
    {
        if (AnimSets(SetIdx))
        {
            UAnimSet* AnimSet = AnimSets(SetIdx);
            for (INT SeqIdx = 0; SeqIdx < AnimSet->Sequences.Num(); SeqIdx++)
            {
                const FLOAT Time = GetTimeOfScriptNotifyInAnimSequence(AnimSet->Sequences(SeqIdx), NotifyName, NthOccurrence);
                if (Time != -1.f)
                {
                    return Time;
                }
            }
        }
    }
    return -1.f;
}

// The game keeps these TArray<BYTE> members out of line.
extern template void TArray<BYTE>::Remove(INT Index, INT Count);
extern template TArray<BYTE>::~TArray();
// @baa 0x00921dc0
/* Strips adjacent duplicate entries from a sorted byte array (takes it by value, as the original does). */
UBOOL RemoveAdjacentDuplicates(TArray<BYTE> Array)
{
    for (INT i = 1; i < Array.Num(); )
    {
        if (Array(i - 1) - Array(i) == 0)
        {
            Array.Remove(i, 1);
        }
        else
        {
            i++;
        }
    }
    return TRUE;
}
