// UnUIObjects.cpp: 2 functions
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

/* Kit gap: TArray::AddItem/AddUniqueItem aren't declared. This is TArray<UUIScreenObject*>::AddUniqueItem's
 * out-of-line copy (UUIScreenObject collecting itself and its children whose class has the flag 0x2000000, caller 00db3500). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item)
	{
		const INT Index = this->Add(1);
		new((EInternal*)(this->GetTypedData() + Index)) T(Item);
		return Index;
	}
	INT AddUniqueItem(const T& Item);
};

template<class T> INT TArray_<T>::AddUniqueItem(const T& Item)
{
	for (INT Index = 0; Index < this->Num(); Index++)
	{
		if ((*this)(Index) == Item)
		{
			return Index;
		}
	}
	return AddItem(Item);
}

// @baa 0x00db1440
template INT TArray_<UUIScreenObject*>::AddUniqueItem(UUIScreenObject* const& Item);
