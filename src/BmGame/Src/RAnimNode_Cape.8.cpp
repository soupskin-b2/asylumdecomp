// RAnimNode_Cape.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x01590410
void URPoseConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URPoseConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Pose Config");
}

/* Kit gap: FName has no operator== (UnName.h). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x0155cfa0
void URAnimNode_Cape::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime)
{
	Super::OnChildAnimEnd(Child, PlayedTime, ExcessTime);

	// note when the cape animation we're playing finishes
	if (Child && Child->AnimSeq && Child->AnimSeq->SequenceName == CurrCapeAnimName)
	{
		HasCurrentAnimEnded = TRUE;
	}
}

void sub_0158c5b0();
void sub_0158c560();
struct ARLevelTransition_ : public ARLevelTransition
{
    INT sub_007771e0(INT A);
};

// @baa 0x01590a30
INT ARLevelTransition::vf_17c(INT A)
{
    ARLevelTransition_* Self = (ARLevelTransition_*)this;
    if (A != 0)
    {
        sub_0158c5b0();
        sub_0158c560();
    }
    return Self->sub_007771e0(A);
}
