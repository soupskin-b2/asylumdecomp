// REvidence.cpp: 13 functions
// Placed here by: callers 7, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016704e0
IMPLEMENT_CLASS_AT(URCrimeSceneAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 43);

// @baa 0x016730b0
struct FName_ : public FName {
    FName_(const TCHAR* Name, INT FindType = 1, UBOOL bSplitName = 1) { sub_005d5620(Name, FindType, bSplitName); }
    void sub_005d5620(const TCHAR* Name, INT FindType, UBOOL bSplitName);
};

struct FNameArray : public TArray<FName> {};

void* sub_0056fa40(unsigned int Size, FNameArray& Array);
inline void* operator new(unsigned int Size, FNameArray& Array) { return sub_0056fa40(Size, Array); }

struct UObject_016757e0 : public UObject {
    void sub_016757e0();
};

// @baa 0x016757e0
void UObject_016757e0::sub_016757e0()
{
    new(*(FNameArray*)((BYTE*)GetClass() + 0xf0)) FName_(TEXT("Object"));
}

// @baa 0x01677220
IMPLEMENT_CLASS_AT(UREvidence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 7);

// @baa 0x0167b3b0
// @baa 0x016807d0
IMPLEMENT_CLASS_AT(URDummyEvidenceConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 40);

// @baa 0x016820a0
// @baa 0x016826e0
IMPLEMENT_CLASS_AT(UREvidenceFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 8);

// @baa 0x01682700
IMPLEMENT_CLASS_AT(URDummyEvidenceConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 41);

// @baa 0x01682720
IMPLEMENT_CLASS_AT(URCrimeSceneAssetFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\REvidence.cpp", 44);

// @baa 0x016829a0
// @baa 0x01682aa0
// @baa 0x016835b0
