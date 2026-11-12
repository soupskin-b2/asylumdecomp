// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#define STR(S) (*(const FString&)(S))
#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;

template<class T>
T* ConstructObject(UClass* Class, UObject* Outer = INVALID_OBJECT, FName Name = NAME_None, QWORD SetFlags = 0, UObject* Template = NULL,
    UObject* SubobjectRoot = NULL, FObjectInstancingGraph* InstanceGraph = NULL);
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
/* TArray::AddZeroed (UE3 Array.h; not in the kit's TArray). */
template<class T> FORCEINLINE INT AddZeroed_(TArray<T>& Array, INT Count)
{
    const INT Index = Array.Add(Count);
    appMemzero((BYTE*)Array.GetData() + Index * sizeof(T), Count * sizeof(T));
    return Index;
}

// @baa 0x00d74070
/* UOnlineSubsystem slot 0x10c (kit vf_10c; UE3's Init): create each named interface from its configured class. */
UBOOL UOnlineSubsystem::Init()
{
    for (INT InterfaceIndex = 0; InterfaceIndex < NamedInterfaceDefs.Num(); InterfaceIndex++)
    {
        const FNamedInterfaceDef& Def = NamedInterfaceDefs(InterfaceIndex);
        UClass* Class = LoadClass<UObject>(NULL, STR(Def.InterfaceClassName), NULL, LOAD_None, NULL);
        if (Class)
        {
            INT AddIndex = AddZeroed_(NamedInterfaces, 1);
            FNamedInterface& Interface = NamedInterfaces(AddIndex);
            Interface.InterfaceName = Def.InterfaceName;
            Interface.InterfaceObject = ConstructObject<UObject>((UClass*)Class);
        }
    }
    return TRUE;
}

#line 77 "candidate.cpp"
