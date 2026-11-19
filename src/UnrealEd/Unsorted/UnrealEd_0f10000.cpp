// UnrealEd_0f10000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00f149a0
UBOOL UTextureExporterT3D::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
