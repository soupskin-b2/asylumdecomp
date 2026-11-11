// Editor_1110000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01110260
IMPLEMENT_CLASS_AT(URReimportFMODSoundFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\FMODFact.cpp", 2171);

// @baa 0x01110370
bool URReimportFMODSoundFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_011108d0();
// @baa 0x01112700
void sub_01112700(void) { sub_011108d0(); }
