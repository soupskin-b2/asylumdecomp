// PrimitiveComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006ff070
bool UStaticMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x006ea5a0
/* The material override for ElementIndex, or NULL when it has none. (UE3's GetMaterial is const, so the array is
 * read through its const accessor.) */
UMaterialInterface* UMeshComponent::GetMaterial(INT ElementIndex)
{
    const TArrayAt_<UMaterialInterface*>& ConstMaterials = (const TArrayAt_<UMaterialInterface*>&)Materials;
    if (ElementIndex < Materials.Num() && ConstMaterials.At(ElementIndex))
    {
        return ConstMaterials.At(ElementIndex);
    }
    return NULL;
}

#line 45 "candidate.cpp"
