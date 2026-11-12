// UnNetDrv.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00e149f0
// Engine.PackageMapSeekFree: seeking free objects on this package map is not supported.
// The native only reports the attempt on the error device; nothing can be found.
INT UPackageMapSeekFree::vf_134(INT /*InIndex*/)
{
	GError->Logf(TEXT("This should never have been called with UPackageMapSeekFree!"));
	return -1;
}
