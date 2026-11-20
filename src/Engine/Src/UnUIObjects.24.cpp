// UnUIObjects.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* FRotator::IsZero (UnMath.h) */
static __forceinline UBOOL IsZero(const FRotator& R)
{
    return ((R.Pitch & 65535) == 0) && ((R.Yaw & 65535) == 0) && ((R.Roll & 65535) == 0);
}

// @baa 0x00db7e80
/* UpdateRotationSupport: the scene supports rotation if any widget in it is rotated. */
void UUIScene::vf_204()
{
    bSupportsRotation = FALSE;

    TArray<UUIObject*> SceneChildren = GetChildren(TRUE, NULL);
    for (INT ChildIndex = 0; ChildIndex < SceneChildren.Num(); ChildIndex++)
    {
        UUIObject* Child = SceneChildren(ChildIndex);
        if (!IsZero(Child->Rotation.Rotation))
        {
            bSupportsRotation = TRUE;
            break;
        }
    }
}

/* This is TArray<UUIScreenObject*>::AddUniqueItem's out-of-line copy (UUIScreenObject collecting itself and its
 * children whose class has the flag 0x2000000, caller 00db3500). */
// @baa 0x00db1440
template INT TArray<UUIScreenObject*>::AddUniqueItem(UUIScreenObject* const& Item);
