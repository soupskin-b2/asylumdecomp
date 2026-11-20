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

// @baa 0x01590a30
void ARLevelTransition::PostEditMove(UBOOL A)
{
    if (A != 0)
    {
        ARLevelTransition::RebuildTransitionLinks();
        ARLevelTransition::RebuildLevelTransitionList();
    }
    Super::PostEditMove(A);
}
