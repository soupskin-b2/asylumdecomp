// fmod_thread.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) INT __stdcall CloseHandle(void* Handle);
// @baa 0x017829d5
INT sub_017829d5(void* Handle)
{
    CloseHandle(Handle);
    return 0;
}
