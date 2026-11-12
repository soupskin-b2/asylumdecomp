// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* FaceFX (FxName.h, FxActorInstance.h); only what this needs */
namespace OC3Ent
{
namespace Face
{
    class FxName
    {
    private:
        class FxNameTableEntry* Entry;
    };

    class FxActorInstance
    {
    public:
        /* the current value of a FaceFX register (out of line, 0x01abca80) */
        FLOAT GetRegister(const FxName& RegName);
    };
}
}

/* FFaceFXRegMap (UnFaceFXRegMap.h): maps an UnrealScript register name to the FaceFX one */
struct FFaceFXRegMap
{
    OC3Ent::Face::FxName FaceFXRegName;

    /* the mapping for a register name, NULL if it was never registered (0x00bf7480) */
    static FFaceFXRegMap* GetRegisterMapping(const FString& RegName);
};

// @baa 0x0091f590
/* the value of one of the FaceFX actor instance's registers, 0 without one */
void USkeletalMeshComponent::execGetFaceFXRegister(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(RegName);
    P_FINISH;

    OC3Ent::Face::FxActorInstance*& FaceFXInstance = (OC3Ent::Face::FxActorInstance*&)FaceFXActorInstance; /* FPointer */
    FLOAT RegVal;
    FFaceFXRegMap* RegMapEntry;
    if (FaceFXInstance && (RegMapEntry = FFaceFXRegMap::GetRegisterMapping(RegName)) != NULL)
    {
        RegVal = FaceFXInstance->GetRegister(RegMapEntry->FaceFXRegName);
    }
    else
    {
        RegVal = 0.0f;
    }
    *(FLOAT*)Result = RegVal;
}
