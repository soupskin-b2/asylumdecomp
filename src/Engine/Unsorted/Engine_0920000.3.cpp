// Engine_0920000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	UBOOL GetHasFallenOutOfWorld();
	void execGetHasFallenOutOfWorld(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00920870
void USkeletalMeshComponent_::execGetHasFallenOutOfWorld( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetHasFallenOutOfWorld();
}

struct USkeletalMeshComponent__0092e0e0 : public USkeletalMeshComponent
{
	void UpdateParentBoneMap();
	void execUpdateParentBoneMap(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0092e0e0
void USkeletalMeshComponent__0092e0e0::execUpdateParentBoneMap( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateParentBoneMap();
}

struct USkeletalMeshComponent__0092e110 : public USkeletalMeshComponent
{
	void InitSkelControls();
	void execInitSkelControls(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0092e110
void USkeletalMeshComponent__0092e110::execInitSkelControls( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	InitSkelControls();
}

struct USkeletalMeshComponent__0092e8c0 : public USkeletalMeshComponent
{
	void sub_0092e850(FName);
};

// @baa 0x0092e8c0
void USkeletalMeshComponent::execRemoveInstanceVertexWeightBoneParented(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_FINISH;
	((USkeletalMeshComponent__0092e8c0*)this)->sub_0092e850(BoneName);
}

struct USkeletalMeshComponent__0092e3c0 : public USkeletalMeshComponent
{
	void* sub_0091f3f0(FName);
};

// @baa 0x0092e3c0
void USkeletalMeshComponent::execFindBodyInstanceNamed(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BoneName);
	P_FINISH;
	*(void**)Result = ((USkeletalMeshComponent__0092e3c0*)this)->sub_0091f3f0(BoneName);
}
