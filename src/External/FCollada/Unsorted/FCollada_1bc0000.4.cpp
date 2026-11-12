// FCollada_1bc0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int __stdcall ReleaseMutex(void* Mutex);
extern void* g_027d4140;
// @baa 0x01bc1760
void sub_01bc1760()
{
    ReleaseMutex(g_027d4140);
}
