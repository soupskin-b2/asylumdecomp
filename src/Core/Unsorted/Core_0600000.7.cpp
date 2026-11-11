// Core_0600000.cpp: 4 functions
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
