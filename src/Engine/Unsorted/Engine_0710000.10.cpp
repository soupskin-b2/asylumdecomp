// Engine_0710000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Win32.h"

/* UE3's timing globals (UnFile.h / Core.cpp) */
extern QWORD g_026760d8;
	/* GNumTimingCodeCalls */
extern DOUBLE g_0266e7f8;
	/* GSecondsPerCycle */
extern DOUBLE g_02666798;
	/* GStartTime */
/* appSeconds (UnVcWin32.h), as this build has it */
inline DOUBLE appSeconds()
{
	g_026760d8++;
	LARGE_INTEGER Cycles;
	QueryPerformanceCounter(&Cycles);
	return Cycles.QuadPart * g_0266e7f8 + 16777216.0;
}

// @baa 0x00717d50
/* Keeps all mip levels resident for the next Seconds seconds. */
void UTexture2D::SetForceMipLevelsToBeResident(FLOAT Seconds)
{
	ForceMipLevelsToBeResidentTimestamp = appSeconds() - g_02666798 + Seconds;
}
