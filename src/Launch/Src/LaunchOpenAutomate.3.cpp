// LaunchOpenAutomate.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef struct OA_BUF OA_BUF;

OA_BUF * __cdecl sub_01a38732(void);
int __cdecl sub_01a37ef2(char *, char const *, char const *);
extern DWORD g_027d4dec;
extern char g_027d4d98[];
// @baa 0x00401460
OA_BUF * sub_00401460(void)
{
	if (g_027d4dec == 0)
	{
		sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
		return 0;
	}
	return (OA_BUF *)g_027d4d98;
}
