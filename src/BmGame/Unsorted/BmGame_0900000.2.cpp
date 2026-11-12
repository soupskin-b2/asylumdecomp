// BmGame_0900000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0090eb10
void USkeletalMeshComponent::execSetEnableClothSimulation(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnable);
	P_FINISH;
	SetEnableClothSimulation(bInEnable);
}

struct USkeletalMesh_ : public USkeletalMesh
{
    USkeletalMeshSocket* sub_00951be0(FName N);
};

// @baa 0x0090ebb0
void USkeletalMeshComponent::execGetSocketByName(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InSocketName);
    P_FINISH;
    USkeletalMeshSocket* S = NULL;
    if (SkeletalMesh != NULL)
        S = ((USkeletalMesh_*)SkeletalMesh)->sub_00951be0(InSocketName);
    *(USkeletalMeshSocket**)Result = S;
}
