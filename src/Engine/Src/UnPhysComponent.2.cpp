// UnPhysComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gaps: USkeletalMeshComponent::MatchRefBone (0090e8e0, behind execMatchRefBone), USkeletalMesh::BoneIsChildOf
 * (00d49ed0) and the real names of URB_BodyInstance::sub_00a09ca0 (SetFixed) and
 * URB_ConstraintInstance::sub_00a39310 (SetAngularVelocityDrive) aren't declared. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	INT MatchRefBone(FName BoneName) const;
};

struct USkeletalMesh_ : public USkeletalMesh
{
	UBOOL BoneIsChildOf(INT ChildBoneIndex, INT ParentBoneIndex) const;
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
		URB_ConstraintInstance* ConstraintInst = ((TArrayAt_<URB_ConstraintInstance*>&)PhysicsAssetInstance->Constraints).At(ConstraintIdx);
		// Only broken constraints.
		if (ConstraintInst && ConstraintInst->bTerminated)
		{
			const INT ConstrainedBoneIdx = ((USkeletalMeshComponent_*)this)->MatchRefBone(((TArrayAt_<URB_ConstraintSetup*>&)PhysicsAsset->ConstraintSetup).At(ConstraintIdx)->JointName);
			if (ConstrainedBoneIdx != INDEX_NONE)
			{
				// Every body at or below the broken joint.
				for (INT BodyIdx = 0; BodyIdx < PhysicsAsset->BodySetup.Num(); BodyIdx++)
				{
					URB_BodySetup* BodySetup = ((TArrayAt_<URB_BodySetup*>&)PhysicsAsset->BodySetup).At(BodyIdx);
					const INT BoneIndex = ((USkeletalMeshComponent_*)this)->MatchRefBone(BodySetup->BoneName);
					if (BoneIndex != INDEX_NONE &&
						(BoneIndex == ConstrainedBoneIdx || ((USkeletalMesh_*)SkeletalMesh)->BoneIsChildOf(BoneIndex, ConstrainedBoneIdx)))
					{
						URB_BodyInstance* BodyInst = ((TArrayAt_<URB_BodyInstance*>&)PhysicsAssetInstance->Bodies).At(BodyIdx);
						if (BodyInst)
						{
							// Unfix the body.
							if (BodyInst->IsFixed())
							{
								BodyInst->sub_00a09ca0(FALSE);
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
								BodyConstraintInst->sub_00a39310(FALSE, FALSE);
							}
						}
					}
				}
			}
		}
	}
}

#line 112 "candidate.cpp"
