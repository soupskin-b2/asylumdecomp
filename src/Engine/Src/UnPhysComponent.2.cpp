// UnPhysComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: USkeletalMeshComponent::MatchRefBone (0090e8e0, behind execMatchRefBone), USkeletalMesh::BoneIsChildOf
 * (00d49ed0) and the real names of URB_BodyInstance::SetFixed (SetFixed) and
 * URB_ConstraintInstance::SetAngularVelocityDrive (SetAngularVelocityDrive) aren't declared. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	INT MatchRefBone(FName BoneName) const;
};

// @baa 0x00a1ca60
/* After constraints break, frees everything below each broken joint: unfixes the bodies, turns off their bone springs
 * and switches off the drives of their constraints. */
void USkeletalMeshComponent::UpdateMeshForBrokenConstraints()
{
	// Needs a mesh and physics.
	if (!SkeletalMesh || !PhysicsAsset || !PhysicsAssetInstance)
	{
		return;
	}

	for (INT ConstraintIdx = 0; ConstraintIdx < PhysicsAssetInstance->Constraints.Num(); ConstraintIdx++)
	{
		URB_ConstraintInstance* ConstraintInst = PhysicsAssetInstance->Constraints(ConstraintIdx);
		// Only broken constraints.
		if (ConstraintInst && ConstraintInst->bTerminated)
		{
			const INT ConstrainedBoneIdx = ((USkeletalMeshComponent_*)this)->MatchRefBone(PhysicsAsset->ConstraintSetup(ConstraintIdx)->JointName);
			if (ConstrainedBoneIdx != INDEX_NONE)
			{
				// Every body at or below the broken joint.
				for (INT BodyIdx = 0; BodyIdx < PhysicsAsset->BodySetup.Num(); BodyIdx++)
				{
					URB_BodySetup* BodySetup = PhysicsAsset->BodySetup(BodyIdx);
					const INT BoneIndex = ((USkeletalMeshComponent_*)this)->MatchRefBone(BodySetup->BoneName);
					if (BoneIndex != INDEX_NONE &&
						(BoneIndex == ConstrainedBoneIdx || ((USkeletalMesh*)SkeletalMesh)->BoneIsChildOf(BoneIndex, ConstrainedBoneIdx)))
					{
						URB_BodyInstance* BodyInst = PhysicsAssetInstance->Bodies(BodyIdx);
						if (BodyInst)
						{
							// Unfix the body.
							if (BodyInst->IsFixed())
							{
								BodyInst->SetFixed(FALSE);
							}

							// Turn off its bone springs.
							if (BodyInst->bEnableBoneSpringLinear || BodyInst->bEnableBoneSpringAngular)
							{
								FMatrix DummyMatrix;
								BodyInst->EnableBoneSpring(FALSE, FALSE, DummyMatrix);
							}
						}

						// Turn off the drives of the body's constraint.
						URB_ConstraintInstance* BodyConstraintInst = PhysicsAssetInstance->FindConstraintInstance(BodySetup->BoneName, PhysicsAsset);
						if (BodyConstraintInst)
						{
							if (BodyConstraintInst->bLinearXPositionDrive || BodyConstraintInst->bLinearYPositionDrive || BodyConstraintInst->bLinearZPositionDrive)
							{
								BodyConstraintInst->SetLinearPositionDrive(FALSE, FALSE, FALSE);
							}
							if (BodyConstraintInst->bLinearXVelocityDrive || BodyConstraintInst->bLinearYVelocityDrive || BodyConstraintInst->bLinearZVelocityDrive)
							{
								BodyConstraintInst->SetLinearVelocityDrive(FALSE, FALSE, FALSE);
							}
							if (BodyConstraintInst->bSwingPositionDrive || BodyConstraintInst->bTwistPositionDrive)
							{
								BodyConstraintInst->SetAngularPositionDrive(FALSE, FALSE);
							}
							if (BodyConstraintInst->bSwingVelocityDrive || BodyConstraintInst->bTwistVelocityDrive)
							{
								BodyConstraintInst->SetAngularVelocityDrive(FALSE, FALSE);
							}
						}
					}
				}
			}
		}
	}
}

#line 112 "candidate.cpp"
