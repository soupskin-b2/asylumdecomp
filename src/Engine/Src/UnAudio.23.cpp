// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* Kit gap: TArray::AddItem/AddUniqueItem aren't declared. This is TArray<USoundNodeAttenuation*>::AddUniqueItem's
 * out-of-line copy (USoundCue::RecursiveFindNode<USoundNodeAttenuation>, caller 00cd05c0). */
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

// @baa 0x00cbeec0
template INT TArray_<USoundNodeAttenuation*>::AddUniqueItem(USoundNodeAttenuation* const& Item);
