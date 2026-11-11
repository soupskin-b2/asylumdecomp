// UnSkeletalAnim.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdatePermanentFixing();
	void execUpdatePermanentFixing(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00940310
void USkeletalMeshComponent_::execUpdatePermanentFixing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePermanentFixing();
}

struct USkeletalMeshComponent__00937ec0 : public USkeletalMeshComponent
{
	void sub_00937e40(UAnimTree*);
};

// @baa 0x00937ec0
void USkeletalMeshComponent::execSetAnimTreeTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimTree, NewTemplate);
	P_FINISH;
	((USkeletalMeshComponent__00937ec0*)this)->sub_00937e40(NewTemplate);
}

struct USkeletalMeshComponent__00940090 : public USkeletalMeshComponent
{
	void sub_0093fde0(UActorComponent*);
};

// @baa 0x00940090
void USkeletalMeshComponent::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_FINISH;
	if (Component)
		((USkeletalMeshComponent__00940090*)this)->sub_0093fde0(Component);
}
