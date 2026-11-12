// fmod_musicengine.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct Sub
{
    INT sub_017e7ce0();
};

struct C
{
    Sub* Pointer;

    INT sub_017fad60();
};

// @baa 0x017fad60
INT C::sub_017fad60()
{
    if (Pointer)
        return Pointer->sub_017e7ce0();
    return 0;
}
