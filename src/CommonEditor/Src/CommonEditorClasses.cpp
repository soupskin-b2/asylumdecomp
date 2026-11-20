// CommonEditorClasses.cpp: 8 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x017415a0
IMPLEMENT_CLASS_AT(URActorFactoryStaticMeshNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 5);

// @baa 0x017415c0
// @baa 0x017470e0
IMPLEMENT_CLASS_AT(URGenericBrowserType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 6);

// @baa 0x01747760

// @baa 0x0173aa00

// @baa 0x0173ab10
UBOOL URGenericBrowserType::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0173ab20
UBOOL URGenericBrowserType::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* TArray<FGenericBrowserTypeInfo>::AddItem, out of line here (0x01163170). */
struct FGenericBrowserTypeInfoArray : public TArray<FGenericBrowserTypeInfo>
{
	INT AddItem(const FGenericBrowserTypeInfo& Item);
};

// @baa 0x0173f790
/* Init: supports just its configured class, drawn with its configured border color. */
void URGenericBrowserType::Init()
{
	((FGenericBrowserTypeInfoArray&)SupportInfo).AddItem(FGenericBrowserTypeInfo(SupportedClass, SupportedBorderColor));
}
