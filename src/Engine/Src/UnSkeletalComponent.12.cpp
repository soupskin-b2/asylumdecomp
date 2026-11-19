// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

/* FName(EName) (UnName.h); the kit's FName has no constructors. */
struct FName_ : public FName
{
    FName_(EName N) { Index = N; Number = 0; }
};

// @baa 0x0091d470
/* GetBoneName(BoneIndex) inlined: the bone's name, or NAME_None for a bad index */
void USkeletalMeshComponent::execGetBoneName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(BoneIndex);
    P_FINISH;
    *(FName*)Result = (SkeletalMesh && BoneIndex >= 0 && BoneIndex < SkeletalMesh->RefSkeleton.Num()) ? SkeletalMesh->RefSkeleton(BoneIndex).Name : (const FName&)FName_(NAME_None);
}

#line 42 "candidate.cpp"
