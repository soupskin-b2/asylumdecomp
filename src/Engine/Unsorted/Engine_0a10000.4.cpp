// Engine_0a10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gap: USkeletalMeshComponent::UpdateRBBonesFromSpaceBases (UnPhysAsset.cpp) isn't declared. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateRBBonesFromSpaceBases(const FMatrix& CompLocalToWorld, UBOOL bMoveUnfixedBodies, UBOOL bTeleport);	/* 0x00a15b80 */
};

// @baa 0x00a162a0
void USkeletalMeshComponent::execUpdateRBBonesFromSpaceBases(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bMoveUnfixedBodies);
	P_GET_UBOOL(bTeleport);
	P_FINISH;
	((USkeletalMeshComponent_*)this)->UpdateRBBonesFromSpaceBases(LocalToWorld, bMoveUnfixedBodies, bTeleport);
}
