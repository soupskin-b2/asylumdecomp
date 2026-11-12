// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

extern template UAnimTree* Cast<UAnimTree>(UObject* Src);
/* UAnimTree::GetTreeActiveMorphs (0x00c55760) isn't declared in Classes.h. */

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void UpdateActiveMorphs();
};

// @baa 0x00934a30
/* rebuild the list of morph targets the anim tree currently wants */
void USkeletalMeshComponent_::UpdateActiveMorphs()
{
    ActiveMorphs.Empty();

    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        Tree->GetTreeActiveMorphs(ActiveMorphs);
    }
}
