// PrimitiveComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006fef60
IMPLEMENT_CLASS_AT(UStaticMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 16);

// @baa 0x006dcdd0
void UCylinderComponent::SetCylinderSize(FLOAT NewRadius, FLOAT NewHeight)
{
	CollisionHeight = NewHeight;
	CollisionRadius = NewRadius;
	BeginDeferredReattach();
}

/* Kit gap: TArray::AddZeroed isn't declared; this build calls TArray<UMaterialInterface*>::Add out of line
 * (0x006dfb00) and inlines the zeroing (UE3 Array.h AddZeroed). */
template<class T> struct TArray_ : public TArray<T>
{
	INT Add(INT Count);
	INT AddZeroed(INT Count)
	{
		const INT Index = Add(Count);
		appMemzero((BYTE*)this->GetData() + Index * sizeof(T), Count * sizeof(T));
		return Index;
	}
};

struct UMeshComponent_ : public UMeshComponent
{
	void sub_006ea640(INT ElementIndex, UMaterialInterface* Material);
};

// @baa 0x006ea640
/* UMeshComponent::SetMaterial: overrides the element's material (growing the override list as needed) and
 * reattaches the component when it changed. */
void UMeshComponent_::sub_006ea640(INT ElementIndex, UMaterialInterface* Material)
{
	if (Materials.Num() <= ElementIndex || Materials(ElementIndex) != Material)
	{
		if (Materials.Num() <= ElementIndex)
		{
			((TArray_<UMaterialInterface*>&)Materials).AddZeroed(ElementIndex + 1 - Materials.Num());
		}
		Materials(ElementIndex) = Material;
		BeginDeferredReattach();
	}
}
