// UnVcWin32.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern "C" __declspec(dllimport) void __stdcall Sleep(DWORD dwMilliseconds);
// @baa 0x005ec9d0
void appSleep( FLOAT Seconds )
{
	Sleep( (DWORD)(Seconds * 1000.0) );
}
