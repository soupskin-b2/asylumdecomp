// UnCoreNet.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005fc130
/* Slot 0x10c (UE3's CanSerializeObject(UObject*)): subclasses must handle it. */
UBOOL UPackageMap::CanSerializeObject(UObject* Obj)
{
	GError->Logf(TEXT("Unexpected UPackageMap::CanSerializeObject"));
	return TRUE;
}

// @baa 0x005fc150
/* Slot 0x118 (UE3's SerializeObject(FArchive&, UClass*, UObject*&)): subclasses must handle it. */
UBOOL UPackageMap::SerializeObject(FArchive& Ar, UClass* Class, UObject*& Obj)
{
	GError->Logf(TEXT("Unexpected UPackageMap::SerializeObject"));
	return TRUE;
}
