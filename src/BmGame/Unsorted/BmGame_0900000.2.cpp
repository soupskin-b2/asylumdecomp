// BmGame_0900000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void sub_0090eac0(UBOOL);
};

// @baa 0x0090eb10
void USkeletalMeshComponent::execSetEnableClothSimulation(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnable);
	P_FINISH;
	((USkeletalMeshComponent_*)this)->sub_0090eac0(bInEnable);
}
