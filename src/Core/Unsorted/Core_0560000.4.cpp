// Core_0560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// UField::AddCppProperty (00567fd0, 22 bytes)
// A field that cannot take properties reports the name of the unimplemented virtual.
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00567fd0
void UField::AddCppProperty(INT ArrayDim)
{
	GError->Logf(TEXT("UField::AddCppProperty"));
}
