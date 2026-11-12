// FMODFact.cpp: 6 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0110f860
IMPLEMENT_CLASS_AT(URFMODSoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\FMODFact.cpp", 2080);

// @baa 0x0110f880
IMPLEMENT_CLASS_AT(URReimportFMODSoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\FMODFact.cpp", 2171);

// @baa 0x0110f890
// @baa 0x0110f950

// @baa 0x01110260

// @baa 0x01110370
bool URReimportFMODSoundFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
