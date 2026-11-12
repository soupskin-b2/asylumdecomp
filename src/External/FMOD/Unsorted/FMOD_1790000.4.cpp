// FMOD_1790000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

namespace FMOD
{
    class SpeakerLevelsPool
    {
    public:
        SpeakerLevelsPool();

        virtual ~SpeakerLevelsPool();

        DWORD pad_04;
        DWORD Flags_08;
    };
}

// @baa 0x0179f9a3
FMOD::SpeakerLevelsPool::SpeakerLevelsPool()
{
    Flags_08 = 0;
}
