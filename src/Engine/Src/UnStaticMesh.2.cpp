// UnStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

/* Kit gap: UnMath.h's appCeilLogTwo (inline). */
FORCEINLINE DWORD appCeilLogTwo(DWORD Arg)
{
    INT Bitmask = ((INT)(appCountLeadingZeros(Arg) << 26)) >> 31;
    return (32 - appCountLeadingZeros(Arg - 1)) & (~Bitmask);
}

// @baa 0x009574f0
/* Keeps the light map resolution a power of two, drops decal materials from the overrides, and clamps the
 * subdivision settings. */
void UStaticMeshComponent::PostEditChange(UProperty* PropertyThatChanged)
{
    if (OverriddenLightMapResolution > 0)
    {
        OverriddenLightMapResolution = 1 << appCeilLogTwo(OverriddenLightMapResolution);
    }
    else
    {
        OverriddenLightMapResolution = 0;
    }

    for (INT MaterialIndex = 0; MaterialIndex < Materials.Num(); MaterialIndex++)
    {
        UMaterialInterface*& MaterialInterface = Materials(MaterialIndex);
        if (MaterialInterface && ObjectIsA(MaterialInterface, UDecalMaterial::StaticClass()))
        {
            MaterialInterface = NULL;
        }
    }

    SubDivisionStepSize = Clamp(SubDivisionStepSize, 1, 128);
    MaxSubDivisions = Clamp(MaxSubDivisions, 2, 50);
    MinSubDivisions = Clamp(MinSubDivisions, 2, MaxSubDivisions);

    Super::PostEditChange(PropertyThatChanged);
}
