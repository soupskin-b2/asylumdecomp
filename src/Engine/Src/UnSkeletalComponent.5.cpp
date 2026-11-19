// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Script.h"

template UAnimTree* Cast<UAnimTree>(UObject* Src);

/* UAnimTree's own lookups: the headers list neither (00c55810 is FindSkelControl). */

// @baa 0x00914010
void USkeletalMeshComponent::execFindSkelControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InControlName);
	P_FINISH;

	FName ControlName = InControlName;
	UAnimTree* AnimTree = Cast<UAnimTree>(Animations);
	*(class USkelControlBase**)Result = AnimTree ? ((UAnimTree*)AnimTree)->FindSkelControl(ControlName) : NULL;
}

/* UAnimTree's own lookups: the headers list neither (00c61880 is FindMorphNode). */

// @baa 0x009140b0
void USkeletalMeshComponent::execFindMorphNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;

	FName MorphNodeName = InNodeName;
	UAnimTree* AnimTree = Cast<UAnimTree>(Animations);
	*(class UMorphNodeBase**)Result = AnimTree ? ((UAnimTree*)AnimTree)->FindMorphNode(MorphNodeName) : NULL;
}
