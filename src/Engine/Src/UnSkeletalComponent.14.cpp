// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern template UAnimTree* Cast<UAnimTree>(UObject* Src);
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    USkelControlBase* FindSkelControl(FName InControlName);
};

// @baa 0x00913fb0
/* find a skel control by name in the anim tree, if there is one */
USkelControlBase* USkeletalMeshComponent_::FindSkelControl(FName InControlName)
{
    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        return Tree->FindSkelControl(InControlName);
    }
    return NULL;
}

struct USkeletalMeshComponent__00913fe0 : public USkeletalMeshComponent
{
    UMorphNodeBase* FindMorphNode(FName InNodeName);
};

// @baa 0x00913fe0
/* find a morph node by name in the anim tree, if there is one */
UMorphNodeBase* USkeletalMeshComponent__00913fe0::FindMorphNode(FName InNodeName)
{
    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        return Tree->FindMorphNode(InNodeName);
    }
    return NULL;
}
