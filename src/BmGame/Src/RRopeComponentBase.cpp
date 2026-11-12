// RRopeComponentBase.cpp: 24 functions
// Placed here by: class 10, file 5, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163f230
IMPLEMENT_CLASS_AT(URRopeComponentBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp", 17);

// @baa 0x0163f340
int URRopeComponentBase::vf_000(void) { return 1; }

// @baa 0x0163f350
bool URRopeComponentBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163f390
void URRopeComponentBase::sub_0163f390(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 0x10;
  return;
}

// @baa 0x0163f480
void URRopeComponentBase::sub_0163f480(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x205) = 2;
  *(undefined1 *)(param_1 + 0x204) = param_2;
  return;
}

// @baa 0x0163f4a0
void URRopeComponentBase::sub_0163f4a0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x205) = 3;
  *(undefined1 *)(param_1 + 0x204) = param_2;
  return;
}

// @baa 0x0163f4f0
DOUBLE URRopeComponentBase::vf_254() {
  return (float10)0;
}

// @baa 0x0163f740
int sub_0163f740(void) { return 0; }

struct C {
    undefined4 sub_0163f7a0(undefined4);
};

int sub_006311e0(...);
int sub_01573f30(...);
extern undefined4 g_02353750;
// @baa 0x0163f7a0
undefined4 C::sub_0163f7a0(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1a4) & 2) == 0) {
    sub_006311e0("IsRopeEnd1Attached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x288,&g_02353750);
  }
  sub_01573f30(param_2,*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b8),
               *(undefined4 *)(param_1 + 0x1bc),param_1 + 0x1c8);
  return param_2;
}

struct C_0163f800 {
    undefined4 sub_0163f800(undefined4);
};

extern undefined4 g_02353840;
// @baa 0x0163f800
undefined4 C_0163f800::sub_0163f800(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x1a4) & 4) == 0) {
    sub_006311e0("IsRopeEnd2Attached",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x28f,&g_02353840);
  }
  sub_01573f30(param_2,*(undefined4 *)(param_1 + 0x1b4),*(undefined4 *)(param_1 + 0x1c0),
               *(undefined4 *)(param_1 + 0x1c4),param_1 + 0x1d4);
  return param_2;
}

struct C_0163f860 {
    undefined4 sub_0163f860();
};

extern undefined4 g_02353934;
// @baa 0x0163f860
undefined4 C_0163f860::sub_0163f860(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x224) == 0) {
    sub_006311e0("RopePhysicsBase != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x2f4,&g_02353934);
  }
  return *(undefined4 *)(param_1 + 0x224);
}

extern undefined4 g_02353a24;
// @baa 0x0163f890
undefined4 URSimpleRopeComponent::sub_0163f890(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x224) == 0) {
    sub_006311e0("RopePhysicsBase != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
                 ,0x2fa,&g_02353a24);
  }
  return *(undefined4 *)(param_1 + 0x224);
}

extern undefined4 g_02353b04;
// @baa 0x0163f8c0
INT URRopeComponentBase::vf_268() {
  sub_006311e0("false",
               "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponentBase.cpp"
               ,0x300,&g_02353b04);
  return 0;
}

// @baa 0x01654ac0
// @baa 0x01654b20
// @baa 0x01655250
// @baa 0x01655590

struct C_0163f750
{
    virtual void d000() = 0;
    virtual void d001() = 0;
    virtual void d002() = 0;
    virtual void d003() = 0;
    virtual void d004() = 0;
    virtual void d005() = 0;
    virtual void d006() = 0;
    virtual void d007() = 0;
    virtual void d008() = 0;
    virtual void d009() = 0;
    virtual void d010() = 0;
    virtual void d011() = 0;
    virtual void d012() = 0;
    virtual void d013() = 0;
    virtual void d014() = 0;
    virtual void d015() = 0;
    virtual void d016() = 0;
    virtual void d017() = 0;
    virtual void d018() = 0;
    virtual void d019() = 0;
    virtual void d020() = 0;
    virtual void d021() = 0;
    virtual void d022() = 0;
    virtual void d023() = 0;
    virtual void d024() = 0;
    virtual void d025() = 0;
    virtual void d026() = 0;
    virtual void d027() = 0;
    virtual void d028() = 0;
    virtual void d029() = 0;
    virtual void d030() = 0;
    virtual void d031() = 0;
    virtual void d032() = 0;
    virtual void d033() = 0;
    virtual void d034() = 0;
    virtual void d035() = 0;
    virtual void d036() = 0;
    virtual void d037() = 0;
    virtual void d038() = 0;
    virtual void d039() = 0;
    virtual void d040() = 0;
    virtual void d041() = 0;
    virtual void d042() = 0;
    virtual void d043() = 0;
    virtual void d044() = 0;
    virtual void d045() = 0;
    virtual void d046() = 0;
    virtual void d047() = 0;
    virtual void d048() = 0;
    virtual void d049() = 0;
    virtual void d050() = 0;
    virtual void d051() = 0;
    virtual void d052() = 0;
    virtual void d053() = 0;
    virtual void d054() = 0;
    virtual void d055() = 0;
    virtual void d056() = 0;
    virtual void d057() = 0;
    virtual void d058() = 0;
    virtual void d059() = 0;
    virtual void d060() = 0;
    virtual void d061() = 0;
    virtual void d062() = 0;
    virtual void d063() = 0;
    virtual void d064() = 0;
    virtual void d065() = 0;
    virtual void d066() = 0;
    virtual void d067() = 0;
    virtual void d068() = 0;
    virtual void d069() = 0;
    virtual void d070() = 0;
    virtual void d071() = 0;
    virtual void d072() = 0;
    virtual void d073() = 0;
    virtual void d074() = 0;
    virtual void d075() = 0;
    virtual void d076() = 0;
    virtual void d077() = 0;
    virtual void d078() = 0;
    virtual void d079() = 0;
    virtual void d080() = 0;
    virtual void d081() = 0;
    virtual void d082() = 0;
    virtual void d083() = 0;
    virtual void d084() = 0;
    virtual void d085() = 0;
    virtual void d086() = 0;
    virtual void d087() = 0;
    virtual void d088() = 0;
    virtual void d089() = 0;
    virtual void d090() = 0;
    virtual void d091() = 0;
    virtual void d092() = 0;
    virtual void d093() = 0;
    virtual void d094() = 0;
    virtual void d095() = 0;
    virtual void d096() = 0;
    virtual void d097() = 0;
    virtual void d098() = 0;
    virtual void d099() = 0;
    virtual void d100() = 0;
    virtual void d101() = 0;
    virtual void d102() = 0;
    virtual void d103() = 0;
    virtual void d104() = 0;
    virtual void d105() = 0;
    virtual void d106() = 0;
    virtual void d107() = 0;
    virtual void d108() = 0;
    virtual void d109() = 0;
    virtual void d110() = 0;
    virtual void d111() = 0;
    virtual void d112() = 0;
    virtual void d113() = 0;
    virtual void d114() = 0;
    virtual void d115() = 0;
    virtual void d116() = 0;
    virtual void d117() = 0;
    virtual void d118() = 0;
    virtual void d119() = 0;
    virtual void d120() = 0;
    virtual void d121() = 0;
    virtual void d122() = 0;
    virtual void d123() = 0;
    virtual void d124() = 0;
    virtual void d125() = 0;
    virtual void d126() = 0;
    virtual void d127() = 0;
    virtual void d128() = 0;
    virtual void d129() = 0;
    virtual void d130() = 0;
    virtual void d131() = 0;
    virtual void d132() = 0;
    virtual void d133() = 0;
    virtual void d134() = 0;
    virtual void d135() = 0;
    virtual void d136() = 0;
    virtual void d137() = 0;
    virtual void d138() = 0;
    virtual void d139() = 0;
    virtual void d140() = 0;
    virtual void d141() = 0;
    virtual void d142() = 0;
    virtual void d143() = 0;
    virtual void d144() = 0;
    virtual void d145() = 0;
    virtual void d146() = 0;
    virtual void d147() = 0;
    virtual void d148() = 0;
    virtual void d149() = 0;
    virtual void d150() = 0;
    virtual void d151() = 0;
    virtual void d152() = 0;
    virtual FLOAT vf264();
    BYTE Pad[0x1e4];
    FLOAT F1e8;
    FLOAT sub_0163f750();
};

// @baa 0x0163f750
FLOAT C_0163f750::sub_0163f750()
{
    return vf264() - F1e8;
}

/* A writable global float holding -1 (shared by the rope/gadget code); its name isn't known. Because it isn't const,
 * the compiler reloads it after each float store. */
extern FLOAT g_02352c90;
// @baa 0x0163f4c0
/* Cancels any rope length change in progress. */
void URRopeComponentBase::StopCurrentRopeLengthChange()
{
	RopeChangeLength = g_02352c90;
	RopeChangeDuration = g_02352c90;
	RopeChangeType = 6;
	RopeLengthControlType = 0;
}

/* Kit gap: FVector has no constructor (UnMath.h). */
struct FVector_ : public FVector
{
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

// @baa 0x0163f3a0
void URRopeComponentBase::DetachRopeEnd1()
{
	IsRopeEnd1Attached = FALSE;
	RopeAttachActor1 = NULL;
	ConstraintActor1AttachPos = FVector_(0, 0, 0);
	RopeActor1AttachBone = NAME_None;
	RopeAttachComponent1 = NULL;
	RopeEnd1AttachMaxDistance = 0.f;
}

// @baa 0x0163f410
void URRopeComponentBase::DetachRopeEnd2()
{
	IsRopeEnd2Attached = FALSE;
	RopeAttachActor2 = NULL;
	ConstraintActor2AttachPos = FVector_(0, 0, 0);
	RopeActor2AttachBone = NAME_None;
	RopeAttachComponent2 = NULL;
	RopeEnd2AttachMaxDistance = 0.f;
}

// @baa 0x0163f5b0
/* URRopeComponentBase slot 0x260 (kit vf_260(BYTE, UBOOL)): forwards to the primitive component's version
 * (UPrimitiveComponent::sub_009ff970, which the kit types as (INT, INT)). */
void URRopeComponentBase::vf_260(BYTE Channel, UBOOL bValue)
{
    sub_009ff970(Channel, bValue);
}

/* Undeclared BmGame helper (cdecl): the primitive component a rope end attaches to on an actor. */
UPrimitiveComponent* sub_01560ac0(AActor* Actor);
struct URRopeComponentBase_ : public URRopeComponentBase
{
	void sub_01644e00(AActor* Actor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT MaxDistance);
};

// @baa 0x01644e00
/* Attaches the rope's first end: to the given component (and its owner) when one is given, else to the actor's
 * attach component, at the given position and bone, allowed to stretch out to MaxDistance (at least 0). */
void URRopeComponentBase_::sub_01644e00(AActor* Actor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT MaxDistance)
{
	IsRopeEnd1Attached = TRUE;
	RopeAttachActor1 = Actor;
	ConstraintActor1AttachPos = AttachPos;
	RopeActor1AttachBone = AttachBone;
	RopeEnd1AttachMaxDistance = MaxDistance >= 0.f ? MaxDistance : 0.f;
	if (AttachComponent)
	{
		RopeAttachComponent1 = AttachComponent;
		RopeAttachActor1 = AttachComponent->Owner;
	}
	else if (Actor)
	{
		RopeAttachComponent1 = sub_01560ac0(Actor);
	}
	else
	{
		RopeAttachComponent1 = NULL;
	}
}

struct URRopeComponentBase__01644ea0 : public URRopeComponentBase
{
	void sub_01644ea0(AActor* Actor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT MaxDistance);
};

// @baa 0x01644ea0
/* Attaches the rope's second end: to the given component (and its owner) when one is given, else to the actor's
 * attach component, at the given position and bone, allowed to stretch out to MaxDistance (at least 0). */
void URRopeComponentBase__01644ea0::sub_01644ea0(AActor* Actor, FVector AttachPos, FName AttachBone, UPrimitiveComponent* AttachComponent, FLOAT MaxDistance)
{
	IsRopeEnd2Attached = TRUE;
	RopeAttachActor2 = Actor;
	ConstraintActor2AttachPos = AttachPos;
	RopeActor2AttachBone = AttachBone;
	RopeEnd2AttachMaxDistance = MaxDistance >= 0.f ? MaxDistance : 0.f;
	if (AttachComponent)
	{
		RopeAttachComponent2 = AttachComponent;
		RopeAttachActor2 = AttachComponent->Owner;
	}
	else if (Actor)
	{
		RopeAttachComponent2 = sub_01560ac0(Actor);
	}
	else
	{
		RopeAttachComponent2 = NULL;
	}
}
