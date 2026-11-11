// RIdleConfig.cpp: 21 functions
// Placed here by: callers 10, file 9, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct FName_ : public FName {
    FName_(const TCHAR* Name, INT FindType = 1, UBOOL bSplitName = 1) { sub_005d5620(Name, FindType, bSplitName); }
    void sub_005d5620(const TCHAR* Name, INT FindType, UBOOL bSplitName);
};

struct FNameArray : public TArray<FName> {};

void* sub_0056fa40(unsigned int Size, FNameArray& Array);
inline void* operator new(unsigned int Size, FNameArray& Array) { return sub_0056fa40(Size, Array); }

struct UObject_0161d720 : public UObject {
    void sub_0161d720();
};

// @baa 0x0161d720
void UObject_0161d720::sub_0161d720()
{
    new(*(FNameArray*)((BYTE*)GetClass() + 0xf0)) FName_(TEXT("Object"));
}

// @baa 0x016249f0
IMPLEMENT_CLASS_AT(URIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 8);

// @baa 0x01624f00
// @baa 0x01626a30
IMPLEMENT_CLASS_AT(URSimpleIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 9);

// @baa 0x01626a50
IMPLEMENT_CLASS_AT(URIdleTransitionConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 10);

// @baa 0x01626a70
IMPLEMENT_CLASS_AT(URIdleWithDeathConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 12);

// @baa 0x01626a90
IMPLEMENT_CLASS_AT(URPairedIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 11);

// @baa 0x01626df0
// @baa 0x01626eb0
// @baa 0x01626fc0
bool URSimpleIdleConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01627000
// @baa 0x016270c0
// @baa 0x01627180
// @baa 0x016297b0
IMPLEMENT_CLASS_AT(URSimpleIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 14);

// @baa 0x016297d0
IMPLEMENT_CLASS_AT(URIdleTransitionConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 15);

// @baa 0x016297f0
IMPLEMENT_CLASS_AT(URIdleWithDeathConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 16);

// @baa 0x01629810
IMPLEMENT_CLASS_AT(URPairedIdleConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 17);

// @baa 0x0162cef0
// @baa 0x0162e710
// @baa 0x0162e7d0
// @baa 0x0162e890
