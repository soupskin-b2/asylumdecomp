// UnrealEd_1330000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>

extern char g_025d67c0[];
struct UAnimNodeEditInfo_ : public UAnimNodeEditInfo
{
	void* sub_013377b0(void* Dest);
};

// @baa 0x013377b0
void* UAnimNodeEditInfo_::sub_013377b0(void* Dest)
{
	memcpy(Dest, g_025d67c0, 64);
	return Dest;
}
