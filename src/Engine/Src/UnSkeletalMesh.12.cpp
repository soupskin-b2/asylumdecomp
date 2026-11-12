// UnSkeletalMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

/* URB_ConstraintSetup::GetRefFrameMatrix (UnPhysConstraint.cpp, 0x00a322d0) isn't declared in Classes.h */

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
        URB_ConstraintSetup* cs = (URB_ConstraintSetup*)ConstraintSetup(i);

        FMatrix Con1Frame;
        const INT Bone1Index = SkelMesh->MatchRefBone(cs->ConstraintBone1);
        if (Bone1Index != INDEX_NONE)
        {
            FMatrix Body1TM = GetBoneMatrix(Bone1Index, SpaceBases, LocalToWorld);
            ((FMatrix_&)Body1TM).RemoveScaling();
            Con1Frame = (const FMatrix_&)cs->GetRefFrameMatrix(0) * Body1TM;
        }

        FMatrix Con2Frame;
        const INT Bone2Index = SkelMesh->MatchRefBone(cs->ConstraintBone2);
        if (Bone2Index != INDEX_NONE)
        {
            FMatrix Body2TM = GetBoneMatrix(Bone2Index, SpaceBases, LocalToWorld);
            ((FMatrix_&)Body2TM).RemoveScaling();
            Con2Frame = (const FMatrix_&)cs->GetRefFrameMatrix(1) * Body2TM;
        }
    }
}

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

/* FSoftSkinVertex (UnSkeletalMesh.h): a vertex skinned to up to 4 bones (0x28 bytes). Not in the kit. */
struct FSoftSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

/* FStaticMeshVertexDataInterface (StaticMeshVertex.h): the CPU copy of a vertex buffer's data. Not in the kit. */
class FStaticMeshVertexDataInterface
{
public:
    virtual ~FStaticMeshVertexDataInterface() {}
    virtual void ResizeBuffer(UINT NumVertices) = 0;
    virtual UINT GetStride() const = 0;
    virtual BYTE* GetDataPointer() = 0;
    virtual UINT GetNumVertices() const = 0;
};

/* FRenderResource (RenderResource.h). Not in the kit. */
class FRenderResource
{
public:
    virtual ~FRenderResource();

private:
    /* TLinkedList<FRenderResource*> ResourceLink */
    FRenderResource* ResourceLinkElement;
    void* ResourceLinkNext;
    void* ResourceLinkPrevLink;
    UBOOL bInitialized;
};

/* FVertexBuffer (RenderResource.h). Not in the kit. */
class FVertexBuffer : public FRenderResource
{
public:
    void* VertexBufferRHI; /* FVertexBufferRHIRef */
};

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): the GPU-skin vertices of a LOD. Not in the kit. */
class FSkeletalMeshVertexBuffer : public FVertexBuffer
{
public:
    void Init(const TArray<FSoftSkinVertex>& InVertices);
    void SetVertex(UINT VertexIndex, const FSoftSkinVertex& SrcVertex); /* 0x0094bae0 */

private:
    void AllocateData();                                                /* 0x0096e6c0 */

    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;   /* 0x1c */
    UBOOL bUsePackedPosition;
    FStaticMeshVertexDataInterface* VertexData; /* 0x24 */
    BYTE* Data;
    UINT Stride;
    UINT NumVertices;
};

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

/* FResourceArrayInterface (ResourceArray.h): data handed to the RHI when a resource is created. Not in the kit. */
class FResourceArrayInterface
{
public:
    virtual const void* GetResourceData() const = 0;
    virtual DWORD GetResourceDataSize() const = 0;
    virtual void Discard() = 0;
    virtual UBOOL IsStatic() const = 0;
    virtual UBOOL GetAllowCPUAccess() const = 0;
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess) = 0;
};

/* TResourceArray (ResourceArray.h): a TArray the RHI can read. Not in the kit. */
template<typename ElementType>
class TResourceArray : public FResourceArrayInterface, public TArray<ElementType>
{
public:
    TResourceArray(UBOOL InNeedsCPUAccess = FALSE)
    :   TArray<ElementType>()
    ,   bNeedsCPUAccess(InNeedsCPUAccess)
    {}

    virtual const void* GetResourceData() const { return const_cast<TResourceArray*>(this)->GetData(); }
    virtual DWORD GetResourceDataSize() const { return this->Num() * sizeof(ElementType); }
    virtual void Discard() { if (!bNeedsCPUAccess) { this->Empty(); } }
    virtual UBOOL IsStatic() const { return FALSE; }
    virtual UBOOL GetAllowCPUAccess() const { return bNeedsCPUAccess; }
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess) { bNeedsCPUAccess = bInNeedsCPUAccess; }

private:
    UBOOL bNeedsCPUAccess;
};

/* FVector2DHalf (Color.h / UnMath.h): a 2D vector of 16-bit floats. Not in the kit. */
struct FVector2DHalf
{
    WORD X;
    WORD Y;
};

/* the GPU-skin vertex formats (UnSkeletalMesh.h). Not in the kit. */
struct FGPUSkinVertexBase
{
    FPackedNormal TangentX;
    FPackedNormal TangentZ;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

struct FGPUSkinVertexFloat16Uvs : public FGPUSkinVertexBase
{
    FVector Position;
    FVector2DHalf UV;
};

struct FGPUSkinVertexFloat32Uvs : public FGPUSkinVertexBase
{
    FVector Position;
    FVector2D UV;
};

/* TSkeletalMeshVertexData (UnSkeletalMesh.h): the CPU copy of a skeletal mesh's GPU-skin vertices */
template<typename VertexDataType>
class TSkeletalMeshVertexData : public FStaticMeshVertexDataInterface, public TResourceArray<VertexDataType>
{
public:
    TSkeletalMeshVertexData(UBOOL InNeedsCPUAccess = FALSE)
    :   TResourceArray<VertexDataType>(InNeedsCPUAccess)
    {}

    virtual void ResizeBuffer(UINT NumVertices)
    {
        if ((UINT)this->Num() < NumVertices)
        {
            this->Add(NumVertices - this->Num());
        }
        else if ((UINT)this->Num() > NumVertices)
        {
            this->Remove(NumVertices, this->Num() - NumVertices);
        }
    }
    virtual UINT GetStride() const { return sizeof(VertexDataType); }
    virtual BYTE* GetDataPointer() { return (BYTE*)&(*this)(0); }
    virtual UINT GetNumVertices() const { return this->Num(); }
};

/* FSkeletalMeshVertexBuffer_0096e6c0 (UnSkeletalMesh.h): the GPU-skin vertices of a LOD. Not in the kit. */
class FSkeletalMeshVertexBuffer_0096e6c0 : public FVertexBuffer
{
public:
    void AllocateData();

private:
    /* free the CPU copy of the vertices */
    void CleanUp()
    {
        delete VertexData;
        VertexData = NULL;
    }

    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;   /* 0x1c */
    UBOOL bUsePackedPosition;
    FStaticMeshVertexDataInterface* VertexData; /* 0x24 */
    BYTE* Data;
    UINT Stride;
    UINT NumVertices;
};

// @baa 0x0096e6c0
/* (re)create the CPU vertex data in the format the UV precision asks for */
void FSkeletalMeshVertexBuffer_0096e6c0::AllocateData()
{
    CleanUp();
    if (!bUseFullPrecisionUVs)
    {
        VertexData = new TSkeletalMeshVertexData<FGPUSkinVertexFloat16Uvs>(TRUE);
    }
    else
    {
        VertexData = new TSkeletalMeshVertexData<FGPUSkinVertexFloat32Uvs>(TRUE);
    }
}
