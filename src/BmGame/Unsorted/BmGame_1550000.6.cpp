// BmGame_1550000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0155cdb0
/* Each bat node starts its animation at its own random point. */
void URAnimNode_Bat::InitAnim(USkeletalMeshComponent* MeshComp, UAnimNodeBlendBase* Parent)
{
	Super::InitAnim(MeshComp, Parent);
	RandomTimeOffset = appFrand();
}
