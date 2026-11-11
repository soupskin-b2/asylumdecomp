// Core_0600000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UProperty::SerializeItem (0x12c in the vtable) is a pure virtual that every property type
 * implements; it serializes the property's value (and defaults, for the properties that use them). */
struct UProperty_ : public UProperty
{
	void SerializeItem(FArchive& Ar, void* Value, void* Defaults, class UObject* Owner);
};

// @baa 0x00600570
void UProperty_::SerializeItem( FArchive& Ar, void* Value, void* Defaults, class UObject* Owner ) PURE_VIRTUAL(UProperty::SerializeItem,);

// @baa 0x006005f0
UINT UProperty::SetPropertyValue( UINT* Value, INT* ArrayIndex ) PURE_VIRTUAL(UProperty::SetPropertyValue, return 0;);

// @baa 0x006005d0
INT UProperty::GetPropertyValue(INT, INT)
{
    PURE_VIRTUAL(UProperty::GetPropertyValue, return 0;);
}

// @baa 0x00600610
INT UProperty::HasValue(INT, INT)
{
    PURE_VIRTUAL(UProperty::HasValue, return 0;);
}

// @baa 0x00600590
void UProperty::ExportTextItem(UINT Value, UINT DefaultValue, UINT Parent, UINT PortFlags, UINT ExportFlags)
{
	PURE_VIRTUAL(UProperty::ExportTextItem,);
}

// @baa 0x00600630
void UProperty::ClearValue(BYTE* Data, DWORD ArrayDim)
{
	PURE_VIRTUAL(UProperty::ClearValue,);
}

// @baa 0x00600550
INT UProperty::Identical(INT A, INT B, INT Property)
{
	PURE_VIRTUAL(UProperty::Identical, return 0;);
}

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
struct UProperty__006004d0 : public UProperty
{
	FString GetCPPMacroType(FString& ExtendedTypeText);
};

// @baa 0x006004d0
FString UProperty__006004d0::GetCPPMacroType(FString& ExtendedTypeText)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UProperty::GetCPPMacroType)", L"UProperty::GetCPPMacroType");
	return FString(g_01e3f3dc);
}

struct UProperty__00600510 : public UProperty
{
	FString GetCPPType(FString* ExtendedTypeText, INT CPPExportFlags);
};

// @baa 0x00600510
FString UProperty__00600510::GetCPPType(FString* ExtendedTypeText, INT CPPExportFlags)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UProperty::GetCPPType)", L"UProperty::GetCPPType");
	return FString(g_01e3f3dc);
}
