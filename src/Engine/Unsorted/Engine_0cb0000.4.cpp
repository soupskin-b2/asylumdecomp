// Engine_0cb0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* Kit gap: TArray::AddItem/AddUniqueItem aren't declared. This is TArray<USoundNodeWave*>::AddUniqueItem's
 * out-of-line copy (USoundCue::RecursiveFindNode<USoundNodeWave>, caller 00cdc110). */
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

// @baa 0x00cbef70
template INT TArray_<USoundNodeWave*>::AddUniqueItem(USoundNodeWave* const& Item);
