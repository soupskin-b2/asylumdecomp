// PrimitiveComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006ff070
UBOOL UStaticMeshComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006ea5a0
/* The material override for ElementIndex, or NULL when it has none. (UE3's GetMaterial is const, so the array is
 * read through its const accessor.) */
UMaterialInterface* UMeshComponent::GetMaterial(INT ElementIndex)
{
    const TArray<UMaterialInterface*>& ConstMaterials = (const TArray<UMaterialInterface*>&)Materials;
    if (ElementIndex < Materials.Num() && ConstMaterials(ElementIndex))
    {
        return ConstMaterials(ElementIndex);
    }
    return NULL;
}

#line 45 "candidate.cpp"
