// Engine_0920000.cpp: 3 functions
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
