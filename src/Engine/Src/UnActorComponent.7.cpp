// UnActorComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* TArray<UActorComponent*> members the exe keeps out of line */
struct FActorComponentArray : public TArray<UActorComponent*> {
    void sub_006bc930(INT Index, INT Count);                                  // Remove
    void Remove(INT Index, INT Count = 1) { sub_006bc930(Index, Count); }
    template<class SearchType> UBOOL FindItemByClass(SearchType** Item = NULL, INT* ItemIndex = NULL, INT StartIndex = 0); // <UStaticMeshComponent>: 006b72f0
};

// @baa 0x006c0f40
// AFogVolumeDensityInfo::PostLoad
void AFogVolumeDensityInfo::vf_01c()
{
    Super::vf_01c();

    // remove NULL entries from the components array
    for (INT i = Components.Num() - 1; i >= 0; i--)
    {
        if (Components(i) == NULL)
        {
            ((FActorComponentArray&)Components).Remove(i);
        }
    }

    // the automatic mesh component is no longer used: drop any leftover static mesh component
    if (AutomaticMeshComponent == NULL)
    {
        UStaticMeshComponent* MeshComponent;
        INT ComponentIndex = INDEX_NONE;
        if (((FActorComponentArray&)Components).FindItemByClass<UStaticMeshComponent>(&MeshComponent, &ComponentIndex))
        {
            ((FActorComponentArray&)Components).Remove(ComponentIndex);
        }
    }
}
