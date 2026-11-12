// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UMorphTargetSet::FindMorphTarget (0x0083d900) is declared as sub_0083d900 in Classes.h. */
inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    UMorphTarget* FindMorphTarget(FName MorphTargetName);
};

// @baa 0x0091d930
/* search the morph target sets newest first */
UMorphTarget* USkeletalMeshComponent_::FindMorphTarget(FName MorphTargetName)
{
    if (MorphTargetName == NAME_None)
    {
        return NULL;
    }
    for (INT i = MorphSets.Num() - 1; i >= 0; i--)
    {
        if (MorphSets(i))
        {
            UMorphTarget* Target = (UMorphTarget*)MorphSets(i)->sub_0083d900(MorphTargetName); // FindMorphTarget
            if (Target)
            {
                return Target;
            }
        }
    }
    return NULL;
}
