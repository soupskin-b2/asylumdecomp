// RCapeComponent.cpp (part 1 of 2): 79 functions
// Placed here by: neighbours 22, file 19, class 12, callers 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_01ebc268[];
// @baa 0x016ad8c0
int sub_016ad8c0(void) { return (int)g_01ebc268; }

// @baa 0x016ad8d0
IMPLEMENT_CLASS_AT(ARRagdollWakeupVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRagdollWakeupVolume.cpp", 8);

// @baa 0x016ad9e0
int ARRagdollWakeupVolume::vf_000(void) { return 1; }

// @baa 0x016ad9f0
bool ARRagdollWakeupVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { int sub_016ada30(void); };

// @baa 0x016ada30
int C::sub_016ada30(void) { return *(int*)((char*)this + 0); }

struct C_016ada40 { int sub_016ada40(void); };

// @baa 0x016ada40
int C_016ada40::sub_016ada40(void) { return *(int*)((char*)this + 8); }

struct C_016ada50 { int sub_016ada50(void); };

// @baa 0x016ada50
int C_016ada50::sub_016ada50(void) { return *(int*)((char*)this + 8); }

struct C_016ada60 { int sub_016ada60(void); };

// @baa 0x016ada60
int C_016ada60::sub_016ada60(void) { return *(int*)((char*)this + 0); }

struct C_016ada70 {
    bool sub_016ada70();
};

// @baa 0x016ada70
bool C_016ada70::sub_016ada70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x18) != 0;
}

struct C_016ada80 { int sub_016ada80(void); };

// @baa 0x016ada80
int C_016ada80::sub_016ada80(void) { return *(int*)((char*)this + 4); }

struct C_016ada90 {
    char pad[0x38];
    float f;
    float sub_016ada90();
};

extern float g_01e52d14;
// @baa 0x016ada90
float C_016ada90::sub_016ada90(void)
{
    return f * g_01e52d14;
}

struct C_016adaa0 { float sub_016adaa0(void); };

// @baa 0x016adaa0
float C_016adaa0::sub_016adaa0(void) { return *(float*)((char*)this + 56); }

struct C_016adab0 { int sub_016adab0(void); };

// @baa 0x016adab0
int C_016adab0::sub_016adab0(void) { return *(int*)((char*)this + 16); }

struct C_016adac0 { int sub_016adac0(void); };

// @baa 0x016adac0
int C_016adac0::sub_016adac0(void) { return *(int*)((char*)this + 8); }

struct C_016adad0 { int sub_016adad0(void); };

// @baa 0x016adad0
int C_016adad0::sub_016adad0(void) { return *(int*)((char*)this + 12); }

struct C_016adae0 { int sub_016adae0(void); };

// @baa 0x016adae0
int C_016adae0::sub_016adae0(void) { return *(int*)((char*)this + 20); }

struct C_016adb30 { int sub_016adb30(void); };

// @baa 0x016adb30
int C_016adb30::sub_016adb30(void) { return *(int*)((char*)this + 68); }

struct C_016adb40 { int sub_016adb40(void); };

// @baa 0x016adb40
int C_016adb40::sub_016adb40(void) { return *(int*)((char*)this + 72); }

struct C_016adb50 { int sub_016adb50(void); };

// @baa 0x016adb50
int C_016adb50::sub_016adb50(void) { return *(int*)((char*)this + 0); }

struct C_016adc30 { float sub_016adc30(void); };

// @baa 0x016adc30
float C_016adc30::sub_016adc30(void) { return *(float*)((char*)this + 48); }

// @baa 0x016add60
IMPLEMENT_CLASS_AT(URCapeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 18);

// @baa 0x016ade90
bool URCapeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ae4d0
bool URCapeComponent::sub_016ae4d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xb8) != 0;
}

struct C_016ae680 {
    char _pad[0x64];
    int *field_64;
    void sub_016ae680();
};

// @baa 0x016ae680
void C_016ae680::sub_016ae680(void)
{
    int *p = field_64;
    *(int *)((char *)p + 0x34) |= 0x80;
}

struct C_view {
    int sub_016cec10();
};

// @baa 0x016ae8c0
void URCapeComponent::sub_016ae8c0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xb8) != 0) {
    ((C_view *)((*(char **)((char *)this + 0x64))))->sub_016cec10();
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x40;
  }
  return;
}

struct C_view_016ae8e0 {
    int sub_016cec20();
};

// @baa 0x016ae8e0
void URCapeComponent::sub_016ae8e0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xb8) != 0) {
    ((C_view_016ae8e0 *)((*(char **)((char *)this + 0x64))))->sub_016cec20();
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xffffffbf;
  }
  return;
}

struct C_view_016ae940 {
    int sub_016d5a90(int);
};

int sub_006311e0(...);
extern undefined4 g_02383f1c;
// @baa 0x016ae940
void URCapeComponent::sub_016ae940(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xb8) != 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      sub_006311e0("ClothSkeletalMesh != NULL",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                   ,0x158,&g_02383f1c);
    }
    ((C_view_016ae940 *)((*(char **)((char *)this + 0x54))))->sub_016d5a90(param_2);
  }
  return;
}

extern undefined4 g_0266e868;
// @baa 0x016ae980
undefined4 sub_016ae980(void)
{
  return g_0266e868;
}

extern undefined4 g_0238572c;
// @baa 0x016aea90
int URCapeComponent::sub_016aea90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5a1,&g_0238572c);
  }
  return *(int *)(param_1 + 0x50) + 0x54;
}

extern undefined4 g_0238580c;
// @baa 0x016aeac0
int URCapeComponent::sub_016aeac0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5a7,&g_0238580c);
  }
  return *(int *)(param_1 + 0x50) + 0x54;
}

extern undefined4 g_023859cc;
// @baa 0x016aeaf0
int URCapeComponent::sub_016aeaf0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5c2,&g_023859cc);
  }
  return *(int *)(param_1 + 0x50) + 0x90;
}

extern undefined4 g_02385aac;
// @baa 0x016aeb20
int URCapeComponent::sub_016aeb20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5c8,&g_02385aac);
  }
  return *(int *)(param_1 + 0x50) + 0xa8;
}

extern undefined4 g_02385b8c;
// @baa 0x016aeb50
int URCapeComponent::sub_016aeb50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5ce,&g_02385b8c);
  }
  return *(int *)(param_1 + 0x50) + 0x84;
}

extern undefined4 g_02385c6c;
// @baa 0x016aeb80
int URCapeComponent::sub_016aeb80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5d4,&g_02385c6c);
  }
  return *(int *)(param_1 + 0x50) + 0x90;
}

extern undefined4 g_02385d4c;
// @baa 0x016aebb0
int URCapeComponent::sub_016aebb0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5da,&g_02385d4c);
  }
  return *(int *)(param_1 + 0x50) + 0x9c;
}

extern undefined4 g_02385e2c;
// @baa 0x016aebe0
int URCapeComponent::sub_016aebe0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5e0,&g_02385e2c);
  }
  return *(int *)(param_1 + 0x50) + 0xa8;
}

extern undefined4 g_02385f0c;
// @baa 0x016aec10
uint URCapeComponent::sub_016aec10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5e6,&g_02385f0c);
  }
  return *(uint *)(*(int *)(param_1 + 0x50) + 0xf4) & 1;
}

extern undefined4 g_02385fec;
// @baa 0x016aec50
uint URCapeComponent::sub_016aec50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5ec,&g_02385fec);
  }
  return *(uint *)(*(int *)(param_1 + 0x50) + 0xf4) >> 1 & 1;
}

extern undefined4 g_023860cc;
// @baa 0x016aec90
uint URCapeComponent::sub_016aec90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x5f2,&g_023860cc);
  }
  return *(uint *)(*(int *)(param_1 + 0x50) + 0xf4) >> 2 & 1;
}

extern undefined4 g_0238636c;
// @baa 0x016aed50
int URCapeComponent::sub_016aed50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x50) == 0) {
    sub_006311e0("CapeConfig != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x62a,&g_0238636c);
  }
  return *(int *)(param_1 + 0x50) + 300;
}

// @baa 0x016b1fa0
void URCapeComponent::vf_14c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x74) = iVar1;
  }
  return;
}

// @baa 0x016b1fc0
void URCapeComponent::vf_150(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 < 2) {
      iVar1 = 2;
    }
    *(int *)(param_1 + 0x74) = iVar1;
  }
  return;
}

struct C_view_016b20d0 {
    int sub_0090eb80(int, int);
};

int sub_016b0430(...);
extern undefined4 g_02384c00;
// @baa 0x016b20d0
int URCapeComponent::sub_016b20d0(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  uVar1 = ((C_view_016b20d0 *)((*(char **)((char *)this + 0x54))))->sub_0090eb80(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x134), *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x138));
  iVar2 = sub_016b0430(uVar1);
  if (iVar2 == 0) {
    sub_006311e0("pCapeAnimNode != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp"
                 ,0x357,&g_02384c00);
  }
  return iVar2;
}

// @baa 0x016b8a70
// @baa 0x016b8af0
struct E { BYTE Bytes[124]; };

struct S {
    BYTE Pad[0x10];
    TArray<E> Items; // 0x10
    const E* sub_016b8bd0(INT Index) const;
};

// @baa 0x016b8bd0
const E* S::sub_016b8bd0(INT Index) const
{
    return &Items(Index);
}

struct S_016b8c20 {
    BYTE Pad[0x10];
    TArray<E> Items; // 0x10
    E* sub_016b8c20(INT Index);
};

// @baa 0x016b8c20
E* S_016b8c20::sub_016b8c20(INT Index)
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_016bdea0 { void* Data; int Num; int Max; void sub_016bdea0(); };

// @baa 0x016bdea0
void C_016bdea0::sub_016bdea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x016be850
// @baa 0x016be870
// @baa 0x016c79d0
IMPLEMENT_CLASS_AT(URCapeStateConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 23);

// @baa 0x016c79f0
IMPLEMENT_CLASS_AT(URCapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 22);

// @baa 0x016c7a10
IMPLEMENT_CLASS_AT(URCapeStateConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 21);

// @baa 0x016c7a30
void sub_0053dfa0(void* Original);
struct FCapeAllocation {
    void* Data;
    ~FCapeAllocation()
    {
        if (Data)
        {
            sub_0053dfa0(Data);
            Data = NULL;
        }
    }
};

struct FCapeSimBase {
    BYTE _pad[0x34];
    ~FCapeSimBase();
};

struct FCapeSim : public FCapeSimBase {
    FCapeAllocation Allocation;
    INT Num;
    ~FCapeSim();
};

// @baa 0x016ca190
FCapeSim::~FCapeSim()
{
    Num = 0;
}

// @baa 0x016cbf70
// @baa 0x016cccc0
IMPLEMENT_CLASS_AT(URCapeConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 20);

// @baa 0x016ccfa0
int sub_0053dfa0(...);
int sub_016cd5b0(void);
// @baa 0x016cd630
undefined4 URCapeComponent::sub_016cd630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_016cd5b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_016d5a90 {
    int sub_00914900(int);
    int sub_00935c60();
};

// @baa 0x016d5a90
void URCapeSkeletalMeshComponent::sub_016d5a90(int param_2)
{
    int param_1 = (int)this;
  int *piVar1;
  int *piVar2;
  if (param_2 != 0) {
    piVar2 = *(int **)(param_1 + 0x290);
    piVar1 = piVar2 + *(int *)(param_1 + 0x294);
    for (; piVar2 < piVar1; piVar2 = piVar2 + 1) {
      if (*piVar2 == param_2) {
        return;
      }
    }
    ((C_view_016d5a90 *)(((char *)this + 0x290)))->sub_00914900((int)(&param_2));
    ((C_view_016d5a90 *)(this))->sub_00935c60();
  }
  return;
}

// @baa 0x017196e0
int sub_017196e0(void) { return 1; }

// UE3's FName(EName) constructor; the shared FName is an aggregate without it.

struct FName_ : public FName {
    FName_(EName N) { Index = N; Number = 0; }
};

struct URCapeComponent_ : public URCapeComponent {
    void sub_016ae990();
};

// @baa 0x016ae990
// Clears the forwarded state change request.
void URCapeComponent_::sub_016ae990()
{
    IsStateChangeRequested = FALSE;
    ForwardToStateRestart = FALSE;
    ForwardToAnimIsMirrored = FALSE;
    ForwardToCinematitClearVelocityOnExit = FALSE;
    ForwardToTeleportToInitialPose = FALSE;
    ForwardToStateName = FName_(NAME_None);
    ForwardToCinematicAnimName = FName_(NAME_None);
    ForwardToCinematicTemporaryAnimSet = NULL;
    ForwardToCinematicTemplateStateConfig = NULL;
    ForwardToAnimStartTime = 0.f;
    ForwardToAnimPlayRate = 0.f;
    ForwardToAnimSyncAnimName = FName_(NAME_None);
    ForwardToAnimSyncAnimOffset = 0.f;
}

struct C_016adba0
{
    char pad_00[0x30];
    float Value;

    void sub_016adba0(float In);
};

// @baa 0x016adba0
void C_016adba0::sub_016adba0(float In)
{
    Value = In;
}

struct Sub
{
    INT sub_01579fb0();
};

struct C_016ae7f0
{
    char pad_00[0x60];
    Sub* Object;

    INT sub_016ae7f0();
};

// @baa 0x016ae7f0
INT C_016ae7f0::sub_016ae7f0()
{
    if (Object)
        return Object->sub_01579fb0();
    return 0;
}

// @baa 0x016ae030

// @baa 0x016ae140
int URCapeStateConfig::vf_000(void) { return 1; }

// @baa 0x016ae150
bool URCapeStateConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ae190

// @baa 0x016ae2a0
int URCapeConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ae2b0
bool URCapeConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ae330

// @baa 0x016ae440
int URCapeStateConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x016ae450
bool URCapeStateConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016cd890
void URCapeComponent::vf_134(INT)
{
    sub_016cd7b0(1, 1);
}

// @baa 0x016cd8a0
void URCapeComponent::vf_13c(INT)
{
    sub_016cd7b0(1, 0);
}

// @baa 0x016c6d40

struct URCapeSkeletalMeshComponent_ : public URCapeSkeletalMeshComponent
{
	UBOOL sub_016d59d0() const;
};

// @baa 0x016d59d0
/* Whether the cape's anim sets differ from its core anim sets (and so need resetting to them). */
UBOOL URCapeSkeletalMeshComponent_::sub_016d59d0() const
{
	const INT NumCore = CoreAnimSets.Num();
	if (AnimSets.Num() != NumCore)
	{
		return TRUE;
	}
	for (INT i = 0; i < NumCore; i++)
	{
		if (AnimSets(i) != CoreAnimSets(i))
		{
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x016ae490
/* A new, empty object of the class the editor asked for. */
UObject* URCapeStateConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x016ae2f0
/* A new, empty object of the class the editor asked for. */
UObject* URCapeConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}
