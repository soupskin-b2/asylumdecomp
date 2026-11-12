// UnCoreNet.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005fc130
/* Slot 0x10c (unnamed in the kit; UE3's CanSerializeObject(UObject*)): subclasses must handle it. */
INT UPackageMap::vf_10c(INT)
{
	GError->Logf(TEXT("Unexpected UPackageMap::CanSerializeObject"));
	return TRUE;
}

// @baa 0x005fc150
/* Slot 0x118 (unnamed in the kit; UE3's SerializeObject(FArchive&, UClass*, UObject*&)): subclasses must handle it. */
INT UPackageMap::vf_118(INT, INT, INT)
{
	GError->Logf(TEXT("Unexpected UPackageMap::SerializeObject"));
	return TRUE;
}
