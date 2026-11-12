// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct SkeletalMeshNative : USkeletalMesh
{
    __forceinline const FVector& RefPosePosition(INT BoneIndex)
    {
        return *reinterpret_cast<const FVector*>(reinterpret_cast<const BYTE*>(&RefSkeleton(BoneIndex)) + 0x1c);
    }
};

// @baa 0x0091d730
void USkeletalMeshComponent::execGetRefPosePosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(BoneIndex);
    P_FINISH;
    if (SkeletalMesh && SkeletalMesh->RefSkeleton.IsValidIndex(BoneIndex))
        *(FVector*)Result = static_cast<SkeletalMeshNative*>(SkeletalMesh)->RefPosePosition(BoneIndex);
    else
    {
        FVector Zero(0.0f, 0.0f, 0.0f);
        *(FVector*)Result = Zero;
    }
}
