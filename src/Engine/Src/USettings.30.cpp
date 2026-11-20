// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Out of line here: FSettingsProperty's copy constructor (structcpptext, 00d79460; not in the kit) and this file's
 * TArray::AddItem instance. */
struct FSettingsProperty_ : public FSettingsProperty
{
	FSettingsProperty_(const FSettingsProperty_& Other); /* 0x00d79460 */
};

template<class T> struct TArrayAddItem_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x00d7bef0
/* Appends a copy of Item; returns its index. */
template<> INT TArrayAddItem_<FSettingsProperty>::AddItem(const FSettingsProperty& Item)
{
	const INT Index = this->Add(1);
	new(this->GetTypedData() + Index) FSettingsProperty_((const FSettingsProperty_&)Item);
	return Index;
}
