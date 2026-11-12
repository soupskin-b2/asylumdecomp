// RPlayerController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

extern FName g_026e3a48;
 // SearchNewAmbientSound
struct ARPlayerController_ : ARPlayerController
{
    void eventSearchNewAmbientSound() /* 0x016125c0 */
    {
        ProcessEvent(FindFunctionChecked(g_026e3a48), NULL);
    }
};

// @baa 0x01613da0
void ARPlayerController::vf_4b4()
{
    if (Pawn)
    {
        if (AmbOtherSoundPtr)
        {
            AmbOtherSoundPtr->Location = Pawn->Location;
        }
        if (CurrentAmbientSound)
        {
            CurrentAmbientSound->Location = Pawn->Location;
        }
    }

    const FLOAT Alpha = (WorldInfo->TimeSeconds - AmbientStartFadeTime)
        / (AmbientEndFadeTime - AmbientStartFadeTime);
    FLOAT ClampedAlpha = Alpha;
    if (ClampedAlpha < 0.0f)
    {
        ClampedAlpha = 0.0f;
    }
    else if (ClampedAlpha > 1.0f)
    {
        ClampedAlpha = 1.0f;
    }
    const FLOAT FadeIn = (FLOAT)sqrt((DOUBLE)ClampedAlpha);
    const FLOAT FadeOut = (FLOAT)sqrt(1.0 - (DOUBLE)ClampedAlpha);

    if (AmbStopping)
    {
        AmbCurrentSoundPtr->VolumeMultiplier = FadeOut;
        if (Alpha >= 1.0f)
        {
            AmbCurrentSoundPtr->Stop();
            AmbStopping = FALSE;
        }
    }

    if (AmbOtherSoundPtr && CurrentAmbientSound)
    {
        if (AmbOtherSoundPtr->sub_00786280() && CurrentAmbientSound->sub_00786280())
        {
            if (NewRoomAmbientSound)
            {
                if (Alpha < 1.0f)
                {
                    AmbCurrentSoundPtr->VolumeMultiplier = FadeOut;
                    AmbOtherSoundPtr->VolumeMultiplier = FadeIn;
                }
                else
                {
                    AmbCurrentSoundPtr->Stop();
                    UAudioComponent* NextSound = AmbOtherSoundPtr;
                    AmbOtherSoundPtr = AmbCurrentSoundPtr;
                    AmbCurrentSoundPtr = NextSound;
                    CurrentRoomAmbientSound = NewRoomAmbientSound;
                    NewRoomAmbientSound = NULL;
                    static_cast<ARPlayerController_*>(this)->eventSearchNewAmbientSound();
                }
            }
            else if (AmbCurrentSoundPtr->sub_00786280())
            {
                if (Alpha < 1.0f)
                {
                    AmbCurrentSoundPtr->VolumeMultiplier = FadeOut;
                }
                else
                {
                    AmbCurrentSoundPtr->Stop();
                    CurrentRoomAmbientSound = NewRoomAmbientSound;
                }
            }
        }
        else
        {
            static_cast<ARPlayerController_*>(this)->eventSearchNewAmbientSound();
        }
    }
}
