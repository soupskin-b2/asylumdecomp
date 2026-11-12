// FMod_0780000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAudioComponent_ : public UAudioComponent
{
    /* SetSeekSpeed (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078ddc0(FName InName, FLOAT InFloat);
};

// @baa 0x0078e680
void UAudioComponent::execSetSeekSpeed(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    ((UAudioComponent_*)this)->sub_0078ddc0(InName, InFloat);
}

struct UAudioComponent__0078e720 : public UAudioComponent
{
    /* SetWaveParameter (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078e0c0(FName InName, USoundNodeWave* InWave);
};

// @baa 0x0078e720
void UAudioComponent::execSetWaveParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_OBJECT(USoundNodeWave, InWave);
    P_FINISH;
    ((UAudioComponent__0078e720*)this)->sub_0078e0c0(InName, InWave);
}
