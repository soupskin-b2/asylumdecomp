// UnAnimTree.cpp: 59 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no EName and no comparison operators. */
enum EName_ { NAME_None_ = 0 };

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

/* Kit gaps, with UE3's definitions (UnMath.h, UnSkeletalMesh.h): FQuat has no constructor from a matrix
 * (out of line here), FVector no constructor, FMatrix no GetOrigin, FBoneAtom no constructor from a matrix and no operator=. */
struct FQuat_ : public FQuat
{
	FQuat_(const FMatrix& M);					/* 005c40e0 */
};

struct FVector_ : public FVector
{
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

static inline FVector_ GetOrigin(const FMatrix& M)
{
	return FVector_(M.WPlane.X, M.WPlane.Y, M.WPlane.Z);
}

/* FBoneAtom with UE3's constructor from a matrix (same layout; the kit's FBoneAtom has no constructors). */
struct FBoneAtom_
{
	FQuat_ Rotation;
	FVector_ Translation;
	FLOAT Scale;

	FBoneAtom_(const FMatrix& InMatrix)
	:	Rotation(InMatrix)
	,	Translation(GetOrigin(InMatrix))
	,	Scale(1.f)
	{}
};

static inline void AssignBoneAtom(FBoneAtom& Dest, const FBoneAtom_& Src)	/* FBoneAtom::operator= */
{
	Dest.Rotation = Src.Rotation;
	Dest.Translation = Src.Translation;
	Dest.Scale = Src.Scale;
}

/* Out-of-line code Classes.h doesn't declare. */
struct FBoneAtomArray : public TArray<FBoneAtom>
{
	FBoneAtomArray& sub_00c64160(const TArray<FBoneAtom>& Other);	/* operator= */
};

struct UAnimNodeBlendBase__00c71100 : public UAnimNodeBlendBase
{
	void sub_00c6c9a0(TArray<FBoneAtom>& Atoms, const TArray<BYTE>& DesiredBones, FBoneAtom& RootMotionDelta, INT& bHasRootMotion);	/* GetBoneAtoms */
};

/* UAnimTree's GetBoneAtoms override (its vtable slot is declared only as a vf_). */
struct UAnimTree__00c71100 : public UAnimTree
{
	void GetBoneAtoms(TArray<FBoneAtom>& Atoms, const TArray<BYTE>& DesiredBones, FBoneAtom& RootMotionDelta, INT& bHasRootMotion);
};

// @baa 0x00c71100
void UAnimTree__00c71100::GetBoneAtoms(TArray<FBoneAtom>& Atoms, const TArray<BYTE>& DesiredBones, FBoneAtom& RootMotionDelta, INT& bHasRootMotion)
{
	// the saved pose, if we want it
	if (bUseSavedPose)
	{
#line 3073 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
		check(SavedPose.Num() == Atoms.Num());
		((FBoneAtomArray&)Atoms).sub_00c64160(SavedPose);
		AssignBoneAtom(RootMotionDelta, FBoneAtom_(FMatrix::Identity));
		bHasRootMotion = 0;
		return;
	}

	((UAnimNodeBlendBase__00c71100*)this)->sub_00c6c9a0(Atoms, DesiredBones, RootMotionDelta, bHasRootMotion);
}

#line 431 "candidate.cpp"

/* UAnimNode's node search statics (UnAnimTree.cpp) and TArray<UAnimNode*>::AddItem (out of line here)
 * aren't declared in the kit. */
struct FAnimNodeArray : public TArray<UAnimNode*>
{
	INT sub_00914af0(UAnimNode* const& Item);		/* AddItem */
};

/* UAnimNode's GetNodesInternal (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNode_ : public UAnimNode
{
	static UBOOL bNodeSearching;		/* 026c2bcc */
	static INT CurrentSearchTag;		/* 026c2bd0 */
	void GetNodesInternal(TArray<UAnimNode*>& Nodes);
};

// @baa 0x00c52fa0
void UAnimNode_::GetNodesInternal(TArray<UAnimNode*>& Nodes)
{
#line 346 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(UAnimNode_::bNodeSearching);

	// each node only once per search
	if (SearchTag != UAnimNode_::CurrentSearchTag)
	{
		SearchTag = UAnimNode_::CurrentSearchTag;
		((FAnimNodeArray&)Nodes).sub_00914af0(this);
	}
}

#line 462 "candidate.cpp"

/* UAnimTree's anim group accessors (UnAnimTree.cpp) aren't declared in Classes.h. */
struct UAnimTree__00c613b0 : public UAnimTree
{
	INT sub_00c556d0(FName GroupName);		/* GetGroupIndex */
	FLOAT GetGroupRelativePosition(FName GroupName);
};

// @baa 0x00c613b0
FLOAT UAnimTree__00c613b0::GetGroupRelativePosition(FName GroupName)
{
	const INT GroupIndex = sub_00c556d0(GroupName);
	if (GroupIndex != INDEX_NONE)
	{
		return AnimGroups(GroupIndex).SynchPctPosition;
	}

	return 0.f;
}

/* UAnimTree's anim group accessors (UnAnimTree.cpp) aren't declared in Classes.h. */
struct UAnimTree__00c61420 : public UAnimTree
{
	INT sub_00c556d0(FName GroupName);		/* GetGroupIndex */
	UAnimNodeSequence* GetGroupSynchMaster(FName GroupName);
};

// @baa 0x00c61420
UAnimNodeSequence* UAnimTree__00c61420::GetGroupSynchMaster(FName GroupName)
{
	const INT GroupIndex = sub_00c556d0(GroupName);
	if (GroupIndex != INDEX_NONE)
	{
		return AnimGroups(GroupIndex).SynchMaster;
	}

	return NULL;
}

/* UAnimTree's anim group accessors (UnAnimTree.cpp) aren't declared in Classes.h. */
struct UAnimTree__00c61490 : public UAnimTree
{
	INT sub_00c556d0(FName GroupName);		/* GetGroupIndex */
	UAnimNodeSequence* GetGroupNotifyMaster(FName GroupName);
};

// @baa 0x00c61490
UAnimNodeSequence* UAnimTree__00c61490::GetGroupNotifyMaster(FName GroupName)
{
	const INT GroupIndex = sub_00c556d0(GroupName);
	if (GroupIndex != INDEX_NONE)
	{
		return AnimGroups(GroupIndex).NotifyMaster;
	}

	return NULL;
}

/* UAnimTree's anim group accessors (UnAnimTree.cpp) aren't declared in Classes.h. */
struct UAnimTree__00c61570 : public UAnimTree
{
	INT sub_00c556d0(FName GroupName);		/* GetGroupIndex */
	FLOAT GetGroupRateScale(FName GroupName);
};

// @baa 0x00c61570
FLOAT UAnimTree__00c61570::GetGroupRateScale(FName GroupName)
{
	const INT GroupIndex = sub_00c556d0(GroupName);
	if (GroupIndex != INDEX_NONE)
	{
		return AnimGroups(GroupIndex).RateScale;
	}

	return 0.f;
}

/* UAnimTree's anim group accessors (UnAnimTree.cpp) aren't declared in Classes.h. */
struct UAnimTree__00c61500 : public UAnimTree
{
	INT sub_00c556d0(FName GroupName);		/* GetGroupIndex */
	void SetGroupRateScale(FName GroupName, FLOAT NewRateScale);
};

// @baa 0x00c61500
void UAnimTree__00c61500::SetGroupRateScale(FName GroupName, FLOAT NewRateScale)
{
	const INT GroupIndex = sub_00c556d0(GroupName);
	if (GroupIndex != INDEX_NONE)
	{
		AnimGroups(GroupIndex).RateScale = NewRateScale;
	}
}

/* UAnimNode::CountNumParentsTicked isn't declared in Classes.h. */
struct UAnimNode__00c53000 : public UAnimNode
{
	INT CountNumParentsTicked();
};

// @baa 0x00c53000
INT UAnimNode__00c53000::CountNumParentsTicked()
{
	// the parents already ticked this frame
	INT NumParentsTicked = 0;
	for (INT i = 0; i < ParentNodes.Num(); i++)
	{
		if (ParentNodes(i)->NodeTickTag == SkelComponent->TickTag)
		{
			NumParentsTicked++;
		}
	}
	return NumParentsTicked;
}

/* UAnimNodeAimOffset's editor slider position (UAnimNode vtable slot, declared only as a vf_). */
struct UAnimNodeAimOffset__00c4ba00 : public UAnimNodeAimOffset
{
	FLOAT GetSliderPosition(INT SliderIndex, INT ValueIndex);
};

// @baa 0x00c4ba00
FLOAT UAnimNodeAimOffset__00c4ba00::GetSliderPosition(INT SliderIndex, INT ValueIndex)
{
#line 4138 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(SliderIndex == 0);
	check(ValueIndex == 0 || ValueIndex == 1);

	// the aim, from [-1, 1] to [0, 1] (Y upside down)
	if (ValueIndex == 0)
	{
		return (Aim.X * 0.5f) + 0.5f;
	}
	else
	{
		return (Aim.Y * -0.5f) + 0.5f;
	}
}

#line 602 "candidate.cpp"

/* The Super:: PostEditChange (UObject's; the classes between don't override it). */
struct UObject_ : public UObject
{
	void sub_005c1a10(UProperty* PropertyThatChanged);
};

/* UAnimNodeBlendPerBone's PostEditChange (vtable 0x4c, declared only as vf_04c). */
struct UAnimNodeBlendPerBone_ : public UAnimNodeBlendPerBone
{
	void sub_00c60a20();		/* BuildWeightList */
	void PostEditChange(UProperty* PropertyThatChanged);
};

// @baa 0x00c698d0
void UAnimNodeBlendPerBone_::PostEditChange(UProperty* PropertyThatChanged)
{
	if (PropertyThatChanged)
	{
		if (PropertyThatChanged->GetFName() == FName(TEXT("BranchStartBoneName")))
		{
			sub_00c60a20();
		}
	}

	((UObject_*)this)->sub_005c1a10(PropertyThatChanged);
}

/* UAnimNodeAimOffset's PostEditChange (vtable 0x4c, declared only as vf_04c). */
struct UAnimNodeAimOffset__00c7ecf0 : public UAnimNodeAimOffset
{
	void sub_00c7bab0();		/* BakeOffsetsFromAnimations */
	void PostEditChange(UProperty* PropertyThatChanged);
};

// @baa 0x00c7ecf0
void UAnimNodeAimOffset__00c7ecf0::PostEditChange(UProperty* PropertyThatChanged)
{
	((UObject_*)this)->sub_005c1a10(PropertyThatChanged);

	if (PropertyThatChanged)
	{
		if (PropertyThatChanged->GetFName() == FName(TEXT("bBakeFromAnimations")))
		{
			bBakeFromAnimations = FALSE;
			sub_00c7bab0();
		}
	}
}
