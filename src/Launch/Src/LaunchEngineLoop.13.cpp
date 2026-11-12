// LaunchEngineLoop.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// FName's string constructor (UnName.cpp), missing from the kit's FName.


#define AUTOGENERATE_NAME(name) extern FName UNREALED_##name;
AUTOGENERATE_NAME(CheckAreSettingsValid)
AUTOGENERATE_NAME(FetchDisplayName)
AUTOGENERATE_NAME(FetchRequiredKeyInTimes)
AUTOGENERATE_NAME(GenerateCurveData)
#undef AUTOGENERATE_NAME
#define AUTOGENERATE_NAME(name) UNREALED_##name = FName(TEXT(#name));
// @baa 0x01277f90
void AutoGenerateNamesUnrealEd()
{
AUTOGENERATE_NAME(CheckAreSettingsValid)
AUTOGENERATE_NAME(FetchDisplayName)
AUTOGENERATE_NAME(FetchRequiredKeyInTimes)
AUTOGENERATE_NAME(GenerateCurveData)
}

#undef AUTOGENERATE_NAME
