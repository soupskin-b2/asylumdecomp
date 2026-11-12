// UnParticleComponents.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>

/* The exe calls TArray<FParticleSysParam>::Add out of line (00b520f0); AddZeroed is inline around it. */
struct FParticleSysParamArray : public TArray<FParticleSysParam>
{
    INT sub_00b520f0(INT Count);
    INT AddZeroed(INT Count = 1)
    {
        const INT Index = sub_00b520f0(Count);
        memset((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FParticleSysParam), 0, Count * sizeof(FParticleSysParam));
        return Index;
    }
};

// @baa 0x00b5e4c0
void UParticleSystemComponent::SetColorParameter(FName Name, FColor Param)
{
    if (Name.Index == NAME_None && Name.Number == 0)
    {
        return;
    }

    // First see if an entry for this name already exists
    for (INT i = 0; i < InstanceParameters.Num(); i++)
    {
        FParticleSysParam& P = InstanceParameters(i);
        if (P.Name == Name && P.ParamType == PSPT_Color)
        {
            P.Color = Param;
            return;
        }
    }

    // We didn't find one, so create a new one.
    FParticleSysParamArray& Params = (FParticleSysParamArray&)InstanceParameters;
    INT NewParamIndex = Params.AddZeroed();
    InstanceParameters(NewParamIndex).Name = Name;
    InstanceParameters(NewParamIndex).ParamType = PSPT_Color;
    InstanceParameters(NewParamIndex).Color = Param;
}
