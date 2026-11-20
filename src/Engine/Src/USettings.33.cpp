// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#define STR(S) (*(const FString&)(S))

/* TArray<FNamedInterface>::Add (0x00d6ce30) is out of line in this build; Array.h's body. */
template<> __declspec(noinline) INT TArray<FNamedInterface>::Add(INT Count)
{
#line 779 BAA_ARRAY_FILE
    check(Count>=0);
    const INT OldNum = ArrayNum;
    if ((ArrayNum += Count) > ArrayMax)
    {
        ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(FNamedInterface));
        AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(FNamedInterface));
    }
    return OldNum;
}

#line 50 "USettings.cpp"
// @baa 0x00d74070
/* UOnlineSubsystem slot 0x10c (UE3's Init): create each named interface from its configured class. */
UBOOL UOnlineSubsystem::Init()
{
    for (INT InterfaceIndex = 0; InterfaceIndex < NamedInterfaceDefs.Num(); InterfaceIndex++)
    {
        const FNamedInterfaceDef& Def = NamedInterfaceDefs(InterfaceIndex);
        UClass* Class = LoadClass<UObject>(NULL, STR(Def.InterfaceClassName), NULL, LOAD_None, NULL);
        if (Class)
        {
            INT AddIndex = NamedInterfaces.AddZeroed(1);
            FNamedInterface& Interface = NamedInterfaces(AddIndex);
            Interface.InterfaceName = Def.InterfaceName;
            Interface.InterfaceObject = ConstructObject<UObject>((UClass*)Class);
        }
    }
    return TRUE;
}

#line 77 "candidate.cpp"
