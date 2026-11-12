// UnInterpolation.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

struct UInterpData_ : public UInterpData {
    UInterpGroupDirector* FindDirectorGroup(); // 00d132d0
};

// @baa 0x00d132d0
UInterpGroupDirector* UInterpData_::FindDirectorGroup()
{
    UInterpGroupDirector* DirGroup = NULL;

    // Should only have 1 DirGroup at most!
    for (INT i = 0; i < InterpGroups.Num(); i++)
    {
        UInterpGroupDirector* TestDirGroup = Cast<UInterpGroupDirector>(InterpGroups(i));
        if (TestDirGroup)
        {
#line 433 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
            check(!DirGroup);
            DirGroup = TestDirGroup;
        }
    }

    return DirGroup;
}

#line 33 "candidate.cpp"

struct UInterpGroupDirector_ : public UInterpGroupDirector {
    UInterpTrackDirector* GetDirectorTrack();       // 00d0eb90
    UInterpTrackFade* GetFadeTrack();               // 00d14af0
    UInterpTrackSoundFade* GetSoundFadeTrack();     // 00d14b90
    UInterpTrackSlomo* GetSlomoTrack();             // 00d14c30
    UInterpTrackColorScale* GetColorScaleTrack();   // 00d14cd0
    UInterpTrackAudioMaster* GetAudioMasterTrack(); // 00d14d70
};

// @baa 0x00d14af0
UInterpTrackFade* UInterpGroupDirector_::GetFadeTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackFade* FadeTrack = Cast<UInterpTrackFade>(InterpTracks(i));
        if (FadeTrack)
        {
            return FadeTrack;
        }
    }

    return NULL;
}

// @baa 0x00d0eb90
UInterpTrackDirector* UInterpGroupDirector_::GetDirectorTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackDirector* DirTrack = Cast<UInterpTrackDirector>(InterpTracks(i));
        if (DirTrack)
        {
            return DirTrack;
        }
    }

    return NULL;
}

// @baa 0x00d14b90
UInterpTrackSoundFade* UInterpGroupDirector_::GetSoundFadeTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackSoundFade* SoundFadeTrack = Cast<UInterpTrackSoundFade>(InterpTracks(i));
        if (SoundFadeTrack)
        {
            return SoundFadeTrack;
        }
    }

    return NULL;
}

// @baa 0x00d14c30
UInterpTrackSlomo* UInterpGroupDirector_::GetSlomoTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackSlomo* SlomoTrack = Cast<UInterpTrackSlomo>(InterpTracks(i));
        if (SlomoTrack)
        {
            return SlomoTrack;
        }
    }

    return NULL;
}

// @baa 0x00d14cd0
UInterpTrackColorScale* UInterpGroupDirector_::GetColorScaleTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackColorScale* ColorTrack = Cast<UInterpTrackColorScale>(InterpTracks(i));
        if (ColorTrack)
        {
            return ColorTrack;
        }
    }

    return NULL;
}

// @baa 0x00d14d70
UInterpTrackAudioMaster* UInterpGroupDirector_::GetAudioMasterTrack()
{
    for (INT i = 0; i < InterpTracks.Num(); i++)
    {
        UInterpTrackAudioMaster* AudioMasterTrack = Cast<UInterpTrackAudioMaster>(InterpTracks(i));
        if (AudioMasterTrack)
        {
            return AudioMasterTrack;
        }
    }

    return NULL;
}
