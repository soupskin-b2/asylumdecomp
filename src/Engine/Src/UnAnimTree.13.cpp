// UnAnimTree.cpp: 48 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no EName and no comparison operators. */
enum EName_ { NAME_None_ = 0 };

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

inline UBOOL operator==(const FName& A, EName_ N) { return A.Index == N && A.Number == 0; }

/* UAnimTree::FindSkelControl isn't declared in Classes.h. */
struct UAnimTree_ : public UAnimTree
{
	USkelControlBase* FindSkelControl(FName InControlName);
};

// @baa 0x00c55810
USkelControlBase* UAnimTree_::FindSkelControl(FName InControlName)
{
	if (InControlName == NAME_None_)
	{
		return NULL;
	}

	// walk each bone's chain of controls
	for (INT i = 0; i < SkelControlLists.Num(); i++)
	{
		USkelControlBase* Control = SkelControlLists(i).ControlHead;
		while (Control)
		{
			if (Control->ControlName == InControlName)
			{
				return Control;
			}
			Control = Control->NextControl;
		}
	}

	return NULL;
}

/* UAnimNodeAimOffset::SetActiveProfileByIndex (vtable 0x1a0, declared only as a vf_). */
struct UAnimNodeAimOffset_ : public UAnimNodeAimOffset
{
	void sub_00c62170();				/* UpdateListOfRequiredBones */
	void SetActiveProfileByIndex(INT ProfileIndex);
};

// @baa 0x00c627e0
void UAnimNodeAimOffset_::SetActiveProfileByIndex(INT ProfileIndex)
{
	// a node made from a template uses the template's profiles
	if (TemplateNode)
	{
		if (ProfileIndex == CurrentProfileIndex || ProfileIndex < 0 || ProfileIndex >= TemplateNode->Profiles.Num())
		{
			return;
		}
	}
	else
	{
		if (ProfileIndex == CurrentProfileIndex || ProfileIndex < 0 || ProfileIndex >= Profiles.Num())
		{
			return;
		}
	}

	CurrentProfileIndex = ProfileIndex;
	sub_00c62170();
}

/* Callees Classes.h doesn't declare by name. */
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
	void sub_00c53d10(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime);	/* OnChildAnimEnd */
};

/* UAnimNodeRandom's OnChildAnimEnd override (vtable 0x18c, declared only as a vf_). */
struct UAnimNodeRandom_ : public UAnimNodeRandom
{
	void sub_00c7c270(FLOAT BlendTime, FLOAT StartTime);	/* PlayPendingAnimation */
	void OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime);
};

// @baa 0x00c7ef10
void UAnimNodeRandom_::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime)
{
	((UAnimNodeBlendBase_*)this)->sub_00c53d10(Child, PlayedTime, ExcessTime);

	// the playing animation is over: start the next one, carrying the excess time
	if (Child && Child == PlayingSeqNode)
	{
		sub_00c7c270(0.f, ExcessTime);
	}
}

// @baa 0x00c4b1c0
IMPLEMENT_CLASS_AT(UAnimObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 9);

// @baa 0x00c4b2d0
int UAnimObject::vf_000(void) { return 1; }

// @baa 0x00c4b2e0
bool UAnimObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c4b350
int UAnimNodeCrossfader::vf_000(void) { return 1; }

// @baa 0x00c4b360
int UAnimNodeBlendPerBone::vf_000(void) { return 1; }

// @baa 0x00c4b370
int UAnimNodeBlendList::vf_000(void) { return 1; }

// @baa 0x00c4b380
int UAnimNodeRandom::vf_000(void) { return 1; }

// @baa 0x00c4b390
int UAnimNodeBlendDirectional::vf_000(void) { return 1; }

// @baa 0x00c4b3a0
int UAnimNodeBlendByPosture::vf_000(void) { return 1; }

// @baa 0x00c4b3b0
int UAnimNodeBlendByPhysics::vf_000(void) { return 1; }

// @baa 0x00c4b3c0
int UAnimNodeBlendBySpeed::vf_000(void) { return 1; }

// @baa 0x00c4b3d0
int UAnimNodeBlendByBase::vf_000(void) { return 1; }

int sub_005c7a20(void);
extern undefined * g_0205a040;
// @baa 0x00c64a20
undefined4 * UObject::sub_00c64a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a040);
  return param_1;
}

extern undefined * g_0205a1e0;
// @baa 0x00c64b00
undefined4 * UObject::sub_00c64b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a1e0);
  return param_1;
}

extern undefined * g_0205aa10;
// @baa 0x00c64ec0
undefined4 * UObject::sub_00c64ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205aa10);
  return param_1;
}

extern undefined * g_0205abb0;
// @baa 0x00c65030
undefined4 * UObject::sub_00c65030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205abb0);
  return param_1;
}

extern undefined * g_0205ad50;
// @baa 0x00c65050
undefined4 * UObject::sub_00c65050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205ad50);
  return param_1;
}

extern undefined * g_0205aef0;
// @baa 0x00c65100
undefined4 * UObject::sub_00c65100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205aef0);
  return param_1;
}

extern undefined * g_0205b090;
// @baa 0x00c651b0
undefined4 * UObject::sub_00c651b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b090);
  return param_1;
}

extern undefined * g_0205b230;
// @baa 0x00c65260
undefined4 * UObject::sub_00c65260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b230);
  return param_1;
}

extern undefined * g_0205b3d8;
// @baa 0x00c65330
undefined4 * UObject::sub_00c65330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b3d8);
  return param_1;
}

extern undefined * g_0205b578;
// @baa 0x00c653f0
undefined4 * UObject::sub_00c653f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205b578);
  return param_1;
}

// @baa 0x00c77bf0
IMPLEMENT_CLASS_AT(UAnimNodeBlendList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 16);

// @baa 0x00c77d00
bool UAnimNodeBlendList::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c77d40
IMPLEMENT_CLASS_AT(UAnimNodeBlendDirectional, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 18);

// @baa 0x00c77e50
bool UAnimNodeBlendDirectional::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct UAnimNodeAimOffset__00c78fe0 : public UAnimNodeAimOffset {
    FVector2D sub_00c78fe0();
};

// @baa 0x00c78fe0
FVector2D UAnimNodeAimOffset__00c78fe0::sub_00c78fe0()
{
    return Aim;
}

// @baa 0x00c796b0
IMPLEMENT_CLASS_AT(UAnimNodeCrossfader, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 14);

// @baa 0x00c797c0
bool UAnimNodeCrossfader::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79800
IMPLEMENT_CLASS_AT(UAnimNodeBlendPerBone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 15);

// @baa 0x00c79910
bool UAnimNodeBlendPerBone::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79950
IMPLEMENT_CLASS_AT(UAnimNodeRandom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 17);

// @baa 0x00c79a60
bool UAnimNodeRandom::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79aa0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPosture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 19);

// @baa 0x00c79bb0
bool UAnimNodeBlendByPosture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79bf0
IMPLEMENT_CLASS_AT(UAnimNodeBlendByPhysics, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 20);

// @baa 0x00c79d00
bool UAnimNodeBlendByPhysics::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79d40
IMPLEMENT_CLASS_AT(UAnimNodeBlendBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 21);

// @baa 0x00c79e50
bool UAnimNodeBlendBySpeed::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79e90
IMPLEMENT_CLASS_AT(UAnimNodeBlendByBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 22);

// @baa 0x00c79fa0
bool UAnimNodeBlendByBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79fe0
IMPLEMENT_CLASS_AT(UAnimNodeScaleRateBySpeed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 28);

// @baa 0x00c7a0f0
bool UAnimNodeScaleRateBySpeed::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c7a130
IMPLEMENT_CLASS_AT(UAnimNodePlayCustomAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 29);

// @baa 0x00c7a240
bool UAnimNodePlayCustomAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
