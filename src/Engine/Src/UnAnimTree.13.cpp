// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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
