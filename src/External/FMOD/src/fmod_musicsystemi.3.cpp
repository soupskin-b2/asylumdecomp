// fmod_musicsystemi.cpp (part 3 of 3): 5 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_017f7fc0 { void sub_017f7c70(); };

struct C { char pad[32]; M_017f7fc0 m; void sub_017f7fc0(); };

// @baa 0x017f7fc0
void C::sub_017f7fc0() { m.sub_017f7c70(); }

struct M_017f7fd0 { void sub_017f7c80(); };

struct C_017f7fd0 { char pad[32]; M_017f7fd0 m; void sub_017f7fd0(); };

// @baa 0x017f7fd0
void C_017f7fd0::sub_017f7fd0() { m.sub_017f7c80(); }

// @baa 0x017e0be0
INT __stdcall sub_017e0be0(BYTE* Object)
{
    Object[5] = 1;
    return 0;
}

// @baa 0x017e0bf0
INT __stdcall sub_017e0bf0(BYTE* Object)
{
    Object[5] = 0;
    return 0;
}

// fmod_musicsystemi.cpp: FMOD MusicSystemI wrapper
// The interface holds an implementation pointer at offset 8.  This entry
// (slot 0 of the FMOD::MusicSystemI vtable) reports the state the implementation
// left behind, or zero when there is no implementation.
struct FMODMusicEngineI;
class FMODMusicSystemImpl {
public:
    // True when the music engine has no outstanding sources and the
    // associated objects release without error.
    int sub_017f7350();
};

struct FMODMusicSystemI {
    // vtable pointer
    void* _vtable;
    // music engine the interface fronts
    FMODMusicEngineI* pEngine;
    // implementation backing the interface (offset 8)
    FMODMusicSystemImpl* pImpl;
};

// @baa 0x017e0f50
// Slot 0 of the FMOD::MusicSystemI vtable.  Called with the interface pointer
// on the stack (__stdcall, one 4-byte argument).
int __stdcall sub_017e0f50(FMODMusicSystemI* pSystem)
{
    int result = 0;
    if (pSystem->pImpl != 0)
    {
        result = pSystem->pImpl->sub_017f7350();
        if (result != 0)
            return result;
    }
    return 0;
}
