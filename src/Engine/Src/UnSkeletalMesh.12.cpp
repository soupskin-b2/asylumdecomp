// UnSkeletalMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/SkeletalMesh.h"

/* vertex types (UnSkeletalMesh.h); only referenced through their arrays here */
struct FRigidSkinVertex;
struct FSoftSkinVertex;
FArchive& operator<<(FArchive& Ar, TArray<FRigidSkinVertex>& A);
 /* 0x00675df0 */
FArchive& operator<<(FArchive& Ar, TArray<FSoftSkinVertex>& A);
  /* 0x00675ef0 */
FArchive& operator<<(FArchive& Ar, TArray<WORD>& A);
             /* 0x006076c0 */
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

/* UnSkeletalMesh.cpp helper (0x00d776d0): world-space matrix of a bone */
FMatrix GetBoneMatrix(INT BoneIndex, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld);
class FPrimitiveDrawInterface;

// @baa 0x00d77740
/* the joint frames of each constraint; the drawing itself is compiled out of this build */
void UPhysicsAsset::DrawConstraints(FPrimitiveDrawInterface* PDI, USkeletalMesh* SkelMesh, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld, FLOAT Scale)
{
    for (INT i = 0; i < ConstraintSetup.Num(); i++)
    {
        URB_ConstraintSetup* cs = (URB_ConstraintSetup*)ConstraintSetup(i);

        FMatrix Con1Frame;
        const INT Bone1Index = SkelMesh->MatchRefBone(cs->ConstraintBone1);
        if (Bone1Index != INDEX_NONE)
        {
            FMatrix Body1TM = GetBoneMatrix(Bone1Index, SpaceBases, LocalToWorld);
            Body1TM.RemoveScaling();
            Con1Frame = (const FMatrix&)cs->GetRefFrameMatrix(0) * Body1TM;
        }

        FMatrix Con2Frame;
        const INT Bone2Index = SkelMesh->MatchRefBone(cs->ConstraintBone2);
        if (Bone2Index != INDEX_NONE)
        {
            FMatrix Body2TM = GetBoneMatrix(Bone2Index, SpaceBases, LocalToWorld);
            Body2TM.RemoveScaling();
            Con2Frame = (const FMatrix&)cs->GetRefFrameMatrix(1) * Body2TM;
        }
    }
}

// @baa 0x009764f0
/* fill the buffer from a LOD's skin vertices */
void FSkeletalMeshVertexBuffer::Init(const TArray<FSoftSkinVertex>& InVertices)
{
    AllocateData();

    VertexData->ResizeBuffer(InVertices.Num());
    Data = VertexData->GetDataPointer();
    Stride = VertexData->GetStride();
    NumVertices = VertexData->GetNumVertices();

    for (INT VertIdx = 0; VertIdx < InVertices.Num(); VertIdx++)
    {
        const FSoftSkinVertex& SrcVertex = InVertices(VertIdx);
        SetVertex(VertIdx, SrcVertex);
    }
}

// @baa 0x0096e6c0
/* (re)create the CPU vertex data in the format the UV precision asks for */
void FSkeletalMeshVertexBuffer::AllocateData()
{
    CleanUp();
    if (!bUseFullPrecisionUVs)
    {
        VertexData = new TSkeletalMeshVertexData<TGPUSkinVertexFloat16Uvs<1>>(TRUE);
    }
    else
    {
        VertexData = new TSkeletalMeshVertexData<TGPUSkinVertexFloat32Uvs<1>>(TRUE);
    }
}
