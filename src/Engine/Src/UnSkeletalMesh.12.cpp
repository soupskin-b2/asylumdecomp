// UnSkeletalMesh.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

/* vertex types (UnSkeletalMesh.h); only referenced through their arrays here */
struct FRigidSkinVertex;
struct FSoftSkinVertex;
FArchive& operator<<(FArchive& Ar, TArray<FRigidSkinVertex>& A);
 /* 0x00675df0 */
FArchive& operator<<(FArchive& Ar, TArray<FSoftSkinVertex>& A);
  /* 0x00675ef0 */
FArchive& operator<<(FArchive& Ar, TArray<WORD>& A);
             /* 0x006076c0 */
/* FSkelMeshChunk (UnSkeletalMesh.h): vertices of one LOD skinned with one bone map. Not in the kit. */
struct FSkelMeshChunk
{
    DWORD BaseVertexIndex;
    TArray<FRigidSkinVertex> RigidVertices;
    TArray<FSoftSkinVertex> SoftVertices;
    TArray<WORD> BoneMap;
    INT NumRigidVertices;
    INT NumSoftVertices;
    INT MaxBoneInfluences;
};

// @baa 0x00967630
FArchive& operator<<(FArchive& Ar, FSkelMeshChunk& C)
{
    Ar << C.BaseVertexIndex;
    Ar << C.RigidVertices;
    Ar << C.SoftVertices;
    Ar << C.BoneMap;
    Ar << C.NumRigidVertices;
    Ar << C.NumSoftVertices;
    Ar << C.MaxBoneInfluences;
    return Ar;
}

#define SMALL_NUMBER (1.e-8f)
/* FMatrix methods used here (UnMath.h, out of line); the kit's FMatrix has none. */
struct FMatrix_ : public FMatrix
{
    void RemoveScaling(FLOAT Tolerance = SMALL_NUMBER); /* 0x006a7f30 */
    FMatrix operator*(const FMatrix& Other) const;      /* 0x0058e560 */
};

/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h */
struct USkeletalMesh_ : public USkeletalMesh
{
    INT MatchRefBone(FName StartBoneName) const;
};

/* URB_ConstraintSetup::GetRefFrameMatrix (UnPhysConstraint.cpp, 0x00a322d0) isn't declared in Classes.h */
struct URB_ConstraintSetup_ : public URB_ConstraintSetup
{
    FMatrix GetRefFrameMatrix(INT BodyIndex);
};

/* UnSkeletalMesh.cpp helper (0x00d776d0): world-space matrix of a bone */
FMatrix GetBoneMatrix(INT BoneIndex, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld);
class FPrimitiveDrawInterface;
struct UPhysicsAsset_ : public UPhysicsAsset
{
    void DrawConstraints(FPrimitiveDrawInterface* PDI, USkeletalMesh* SkelMesh, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld, FLOAT Scale);
};

// @baa 0x00d77740
/* the joint frames of each constraint; the drawing itself is compiled out of this build */
void UPhysicsAsset_::DrawConstraints(FPrimitiveDrawInterface* PDI, USkeletalMesh* SkelMesh, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld, FLOAT Scale)
{
    for (INT i = 0; i < ConstraintSetup.Num(); i++)
    {
        URB_ConstraintSetup_* cs = (URB_ConstraintSetup_*)ConstraintSetup(i);

        FMatrix Con1Frame;
        const INT Bone1Index = ((USkeletalMesh_*)SkelMesh)->MatchRefBone(cs->ConstraintBone1);
        if (Bone1Index != INDEX_NONE)
        {
            FMatrix Body1TM = GetBoneMatrix(Bone1Index, SpaceBases, LocalToWorld);
            ((FMatrix_&)Body1TM).RemoveScaling();
            Con1Frame = (const FMatrix_&)cs->GetRefFrameMatrix(0) * Body1TM;
        }

        FMatrix Con2Frame;
        const INT Bone2Index = ((USkeletalMesh_*)SkelMesh)->MatchRefBone(cs->ConstraintBone2);
        if (Bone2Index != INDEX_NONE)
        {
            FMatrix Body2TM = GetBoneMatrix(Bone2Index, SpaceBases, LocalToWorld);
            ((FMatrix_&)Body2TM).RemoveScaling();
            Con2Frame = (const FMatrix_&)cs->GetRefFrameMatrix(1) * Body2TM;
        }
    }
}
