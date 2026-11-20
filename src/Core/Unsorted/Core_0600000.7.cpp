// Core_0600000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00600570
/* every property type implements it (serializes the property's value) */
void UProperty::SerializeItem(FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults) const PURE_VIRTUAL(UProperty::SerializeItem,);

// @baa 0x006005f0
UBOOL UProperty::SetPropertyValue(BYTE* PropertyValueAddress, const UPropertyValue& PropertyValue) const PURE_VIRTUAL(UProperty::SetPropertyValue, return FALSE;);

// @baa 0x006005d0
UBOOL UProperty::GetPropertyValue(BYTE* PropertyValueAddress, UPropertyValue& out_PropertyValue) const
{
    PURE_VIRTUAL(UProperty::GetPropertyValue, return FALSE;);
}

// @baa 0x00600610
UBOOL UProperty::HasValue(const BYTE* Data, DWORD PortFlags) const
{
    PURE_VIRTUAL(UProperty::HasValue, return FALSE;);
}

// @baa 0x00600590
void UProperty::ExportTextItem(FString& ValueStr, const BYTE* PropertyValue, const BYTE* DefaultValue, UObject* Parent, INT PortFlags) const
{
	PURE_VIRTUAL(UProperty::ExportTextItem,);
}

// @baa 0x00600630
void UProperty::ClearValue(BYTE* Data, DWORD PortFlags) const
{
	PURE_VIRTUAL(UProperty::ClearValue,);
}

// @baa 0x00600550
UBOOL UProperty::Identical(const void* A, const void* B, DWORD Property) const
{
	PURE_VIRTUAL(UProperty::Identical, return 0;);
}

extern TCHAR g_01e3f3dc[];
struct UProperty__006004d0 : public UProperty
{
	FString GetCPPMacroType(FString& ExtendedTypeText);
};

// @baa 0x006004d0
FString UProperty__006004d0::GetCPPMacroType(FString& ExtendedTypeText) PURE_VIRTUAL(UProperty::GetCPPMacroType, return FString(g_01e3f3dc);)

struct UProperty__00600510 : public UProperty
{
	FString GetCPPType(FString* ExtendedTypeText, INT CPPExportFlags);
};

// @baa 0x00600510
FString UProperty__00600510::GetCPPType(FString* ExtendedTypeText, INT CPPExportFlags) PURE_VIRTUAL(UProperty::GetCPPType, return FString(g_01e3f3dc);)
