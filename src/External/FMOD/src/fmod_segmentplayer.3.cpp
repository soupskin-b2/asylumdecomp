// fmod_segmentplayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C
{
    char pad_00[0x30];
    __int64 First;
    __int64 Second;

    __int64 sub_017fa9b0();
};

// @baa 0x017fa9b0
__int64 C::sub_017fa9b0()
{
    return First + Second;
}
