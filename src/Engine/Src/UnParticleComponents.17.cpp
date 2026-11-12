// UnParticleComponents.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x00b5ead0
/* UE3's UParticleSystemComponent::GetColorParameter(FName InName, FColor& OutColor): the color of the instance
 * parameter of that name. */
UBOOL UParticleSystemComponent::GetColorParameter(FName InName, FColor& OutColor)
{
    if (InName == NAME_None)
    {
        return FALSE;
    }
    for (INT i = 0; i < InstanceParameters.Num(); i++)
    {
        FParticleSysParam& Param = InstanceParameters(i);
        if (Param.Name == InName && Param.ParamType == PSPT_Color)
        {
            OutColor = Param.Color;
            return TRUE;
        }
    }
    return FALSE;
}

/* Unnamed in the kit: the PSPT_VectorArray counterpart of GetVectorParameter (a game addition; CommonGameEffectClasses
 * calls it): the VectorArray pointer of the instance parameter InName, or NULL (FPointer is an INT in the kit). */
struct UParticleSystemComponent_ : public UParticleSystemComponent
{
    INT sub_00b5ecb0(FName InName);
};

// @baa 0x00b5ecb0
INT UParticleSystemComponent_::sub_00b5ecb0(FName InName)
{
    if (InName == NAME_None)
    {
        return 0;
    }
    for (INT i = 0; i < InstanceParameters.Num(); i++)
    {
        FParticleSysParam& Param = InstanceParameters(i);
        if (Param.Name == InName && Param.ParamType == PSPT_VectorArray)
        {
            return Param.VectorArray.Dummy;
        }
    }
    return 0;
}

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x00f209e0
void UParticleSystemFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UParticleSystem::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	((FFactoryFlags*)_native2)->bEditAfterNew = TRUE;
	Description = TEXT("ParticleSystem");
}
