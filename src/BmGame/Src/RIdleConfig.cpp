// RIdleConfig.cpp: 52 functions
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

// @baa 0x01611750

// @baa 0x01611860
int URIdleConfig::vf_000(void) { return 1; }

// @baa 0x01611870
bool URIdleConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016118b0
int URSimpleIdleConfig::vf_000(void) { return 1; }

// @baa 0x016118c0
int URIdleTransitionConfig::vf_000(void) { return 1; }

// @baa 0x016118d0
int URPairedIdleConfig::vf_000(void) { return 1; }

// @baa 0x016118e0
int URIdleWithDeathConfig::vf_000(void) { return 1; }

// @baa 0x016118f0

// @baa 0x01611a00
int URSimpleIdleConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611a10
bool URSimpleIdleConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611a90

// @baa 0x01611ba0
int URIdleTransitionConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611bb0
bool URIdleTransitionConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611c30

// @baa 0x01611d40
int URIdleWithDeathConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611d50
bool URIdleWithDeathConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611dd0

// @baa 0x01611ee0
int URPairedIdleConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x01611ef0
bool URPairedIdleConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01611f70
void URIdleConfig::vf_110(int a0) {  }

// @baa 0x01611f80
void URIdleConfig::vf_114(int a0) {  }

// @baa 0x01611f90
void URIdleConfig::FireOutputLink(class URBMBehaviour_IdleWithPlannarProp* a0) {  }

int sub_005c7a20(void);
extern undefined * g_02345320;
// @baa 0x01624ac0
undefined4 * UObject::sub_01624ac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02345320);
  return param_1;
}

extern undefined * g_02345440;
// @baa 0x01624ae0
undefined4 * UObject::sub_01624ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02345440);
  return param_1;
}

extern undefined * g_02345560;
// @baa 0x01624ba0
undefined4 * UObject::sub_01624ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02345560);
  return param_1;
}

extern undefined * g_02345688;
// @baa 0x01624c50
undefined4 * UObject::sub_01624c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02345688);
  return param_1;
}

struct C_01624fc0 { void sub_015af750(int); C_01624fc0 *sub_01624fc0(int); };

// @baa 0x01624fc0
C_01624fc0 *C_01624fc0::sub_01624fc0(int a) { sub_015af750(a); return this; }

// @baa 0x01611a50
/* A new, empty object of the class the editor asked for. */
UObject* URSimpleIdleConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x01611bf0
/* A new, empty object of the class the editor asked for. */
UObject* URIdleTransitionConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x01611d90
/* A new, empty object of the class the editor asked for. */
UObject* URIdleWithDeathConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x01611f30
/* A new, empty object of the class the editor asked for. */
UObject* URPairedIdleConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}
