// RAnimNode_Cape.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01590410
void URPoseConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URPoseConfig::StaticClass();
	bCreateNew = TRUE;
	Description = TEXT("Animation Pose Config");
}

/* Kit gap: FName has no operator== (UnName.h). */
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
