// UnProp.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x0062ada0
INT UObjectProperty::Identical(INT A, INT B, INT PortFlags)
{
    UObject* ObjectA = A ? *(UObject**)A : NULL;
    UObject* ObjectB = B ? *(UObject**)B : NULL;
    return ObjectA == ObjectB;
}

// @baa 0x0062b180
void UNameProperty::SerializeItem( FArchive& Ar, void* Value, INT MaxReadBytes, void* Defaults ) const
{
	Ar << *(FName*)Value;
}

struct UComponentProperty_ : public UComponentProperty {
    FName sub_0062f570() const;
};

// @baa 0x0062f570
FName UComponentProperty_::sub_0062f570() const
{
    FName Result = { 5, 0 }; // NAME_ObjectProperty
    return Result;
}
