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
int URGenericBrowserType::vf_000(void) { return 1; }

// @baa 0x0173ab20
bool URGenericBrowserType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* GenericBrowserTypes.h: what a browser type supports (a class, its thumbnail border color, an
 * optional context menu, required flags and support callback). 28 bytes under UE3's 4-byte packing. */
#pragma pack(push, 4)
struct FGenericBrowserTypeInfo
{
	UClass* Class;
	FColor BorderColor;
	void* ContextMenu;
	QWORD RequiredFlags;
	void* pfnIsSupported;
	UGenericBrowserType* BrowserType;

	FGenericBrowserTypeInfo(UClass* InClass, const FColor& InBorderColor)
		: Class(InClass), BorderColor(InBorderColor), ContextMenu(NULL), RequiredFlags(0), pfnIsSupported(NULL), BrowserType(NULL)
	{
	}
};

#pragma pack(pop)
/* UGenericBrowserType::SupportInfo (the kit's Native_3c blob), with TArray::AddItem out of line here (0x01163170). */
struct FGenericBrowserTypeInfoArray : public TArray<FGenericBrowserTypeInfo>
{
	INT AddItem(const FGenericBrowserTypeInfo& Item);
};

/* URGenericBrowserType's C++-only members (the kit's _native blob at 0x4c): the class it browses and its border color. */
struct FRGenericBrowserTypeData
{
	UClass* SupportedClass;
	FColor BorderColor;
};

// @baa 0x0173f790
/* Init: supports just its configured class, drawn with its configured border color. */
void URGenericBrowserType::vf_10c()
{
	FRGenericBrowserTypeData& Data = *(FRGenericBrowserTypeData*)_native;
	((FGenericBrowserTypeInfoArray&)Native_3c).AddItem(FGenericBrowserTypeInfo(Data.SupportedClass, Data.BorderColor));
}
