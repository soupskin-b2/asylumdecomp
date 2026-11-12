// NewMaterialEditor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* Kit gap: TArray::AddItem/AddUniqueItem aren't declared. This is TArray<UMaterialExpression*>::AddUniqueItem's
 * out-of-line copy (material editor selection: selected expressions, caller 0142c5e0). */
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

// @baa 0x01429f60
template INT TArray_<UMaterialExpression*>::AddUniqueItem(UMaterialExpression* const& Item);

// @baa 0x0142a060
template INT TArray_<UMaterialExpressionComment*>::AddUniqueItem(UMaterialExpressionComment* const& Item);

// @baa 0x0142a1c0
template INT TArray_<UMaterialExpressionCompound*>::AddUniqueItem(UMaterialExpressionCompound* const& Item);
