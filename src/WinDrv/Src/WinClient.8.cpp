// WinClient.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include "ue3/Win32.h"

/* winbase.h's MEMORYSTATUS and GlobalMemoryStatus; ue3/Win32.h doesn't declare them yet. */
extern "C" {
typedef ULONG_PTR SIZE_T;
typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;
WINBASEAPI void WINAPI GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer);
}

// @baa 0x00eb4c30
/* Platform memory statistics. PC only reports the free and total physical memory; the other four
 * statistics are zero. The original's name and parameter names aren't known. */
void GetMemoryStats(DWORD& AvailPhysical, DWORD& TotalPhysical, DWORD& Stat3, DWORD& Stat4, DWORD& Stat5, DWORD& Stat6)
{
    MEMORYSTATUS Status;
    GlobalMemoryStatus(&Status);
    AvailPhysical = Status.dwAvailPhys;
    TotalPhysical = Status.dwTotalPhys;
    Stat3 = 0;
    Stat4 = 0;
    Stat5 = 0;
    Stat6 = 0;
}
