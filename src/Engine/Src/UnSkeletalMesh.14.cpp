// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"
#include "ue3/SkeletalMesh.h"

/* UnMath.h: the handedness of a tangent basis, -1 or +1 */
static FORCEINLINE FLOAT GetBasisDeterminantSign(const FPackedNormal& XAxis, const FPackedNormal& YAxis, const FPackedNormal& ZAxis)
{
    FMatrix Basis(XAxis, YAxis, ZAxis, FVector(0, 0, 0));
    return (Basis.Determinant() < 0) ? -1.0f : +1.0f;
}

// @baa 0x0094bae0
/* convert a skin vertex to the GPU format and store it */
void FSkeletalMeshVertexBuffer::SetVertex(UINT VertexIndex, const FSoftSkinVertex& SrcVertex)
{
    FGPUSkinVertexBase* DestVertex = (FGPUSkinVertexBase*)(Data + VertexIndex * Stride);
    DestVertex->Position = SrcVertex.Position;
    DestVertex->TangentX = SrcVertex.TangentX;
    DestVertex->TangentZ = SrcVertex.TangentZ;
    // store the sign of the determinant in TangentZ.W
    DestVertex->TangentZ.Vector.W = (BYTE)appTrunc((GetBasisDeterminantSign(SrcVertex.TangentX, SrcVertex.TangentY, SrcVertex.TangentZ) + 1.0f) * 127.5f);
    appMemcpy(DestVertex->InfluenceBones, SrcVertex.InfluenceBones, sizeof(SrcVertex.InfluenceBones));
    appMemcpy(DestVertex->InfluenceWeights, SrcVertex.InfluenceWeights, sizeof(SrcVertex.InfluenceWeights));

    if (!bUseFullPrecisionUVs)
    {
        ((TGPUSkinVertexFloat16Uvs<1>*)DestVertex)->UVs[0] = FVector2DHalf(SrcVertex.U, SrcVertex.V);
    }
    else
    {
        ((TGPUSkinVertexFloat32Uvs<1>*)DestVertex)->UVs[0] = FVector2D(SrcVertex.U, SrcVertex.V);
    }
}
