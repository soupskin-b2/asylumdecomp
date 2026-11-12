// UnForceFeedbackWaveform.cpp: 6 functions
// Placed here by: file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007ab910
IMPLEMENT_CLASS_AT(UForceFeedbackManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnForceFeedbackWaveform.cpp", 10);

// @baa 0x007b0f90
// @baa 0x007c53a0
IMPLEMENT_CLASS_AT(UForceFeedbackWaveform, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnForceFeedbackWaveform.cpp", 9);

// @baa 0x007a4b50

// @baa 0x007a4c60
int UForceFeedbackManager::vf_000(void) { return 1; }

// @baa 0x007a4c70
bool UForceFeedbackManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
