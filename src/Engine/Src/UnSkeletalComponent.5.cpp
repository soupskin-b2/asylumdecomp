// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Script.h"

template UAnimTree* Cast<UAnimTree>(UObject* Src);

/* UAnimTree's own lookups: the headers list neither (00c55810 is FindSkelControl). */
struct UAnimTree_ : public UAnimTree {
	class USkelControlBase* sub_00c55810(FName ControlName);
};

// @baa 0x00914010
void USkeletalMeshComponent::execFindSkelControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InControlName);
	P_FINISH;

	FName ControlName = InControlName;
	UAnimTree* AnimTree = Cast<UAnimTree>(Animations);
	*(class USkelControlBase**)Result = AnimTree ? ((UAnimTree_*)AnimTree)->sub_00c55810(ControlName) : NULL;
}

/* UAnimTree's own lookups: the headers list neither (00c61880 is FindMorphNode). */
struct UAnimTree__009140b0 : public UAnimTree {
	class UMorphNodeBase* sub_00c61880(FName MorphNodeName);
};

// @baa 0x009140b0
void USkeletalMeshComponent::execFindMorphNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;

	FName MorphNodeName = InNodeName;
	UAnimTree* AnimTree = Cast<UAnimTree>(Animations);
	*(class UMorphNodeBase**)Result = AnimTree ? ((UAnimTree__009140b0*)AnimTree)->sub_00c61880(MorphNodeName) : NULL;
}
