// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FString's operator* (UnString.h), StaticLoadClass (UnObjBas.h, 0x005eb8e0) / LoadClass<T>, and
 * ConstructObject<T> (UnClass.h; UObject's instantiation is 0x00d71ee0, declared as the matched work/00d71ee0.cpp
 * has it) aren't declared. */
struct FStringM : public FString
{
    FORCEINLINE const TCHAR* operator*() const
    {
        return Num() ? &(*this)(0) : TEXT("");
    }
};

#define STR(S) (*(const FStringM&)(S))
#define LOAD_None 0x00000000 /* UnObjBas.h ELoadFlags */
#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
struct UClass_ : public UClass
{
};

UClass* StaticLoadClass(UClass* BaseClass, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox);
template<class T> inline UClass* LoadClass(UObject* Outer, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox)
{
    return StaticLoadClass(T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox);
}

template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer = INVALID_OBJECT, FName Name = NAME_None, QWORD SetFlags = 0, UObject* Template = NULL,
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
            Interface.InterfaceObject = ConstructObject<UObject>((UClass_*)Class);
        }
    }
    return TRUE;
}

#line 77 "candidate.cpp"
