// UnrealEd_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00834940
/* InitMorphNode(SkelComp): remembers the component, then SetMorphTarget(MorphName) (inlined):
 * looks the named morph target up on it. */
void UMorphNodePose::vf_124(INT InSkelComp)
{
	SkelComponent = (USkeletalMeshComponent*)InSkelComp;

	const FName InMorphName = MorphName;
	MorphName = InMorphName;
	Target = NULL;
	if ((InMorphName.Index != NAME_None || InMorphName.Number != 0) && SkelComponent)
	{
		Target = SkelComponent->FindMorphTarget(InMorphName);
	}
}
