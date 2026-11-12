// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

struct UUIScreenObject_ : public UUIScreenObject
{
    TArray<UUIObject*> sub_00db7140(UBOOL bRecurse, TArray<UUIObject*>* ExclusionSet) const;   /* GetChildren */
};

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

    TArray<UUIObject*> SceneChildren = ((UUIScreenObject_*)this)->sub_00db7140(TRUE, NULL);
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
