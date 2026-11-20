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
/* The material override for ElementIndex, or NULL when it has none. */
UMaterialInterface* UMeshComponent::GetMaterial(INT ElementIndex) const
{
    if (ElementIndex < Materials.Num() && Materials(ElementIndex))
    {
        return Materials(ElementIndex);
    }
    return NULL;
}

#line 45 "candidate.cpp"
