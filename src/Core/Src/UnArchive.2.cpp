// UnArchive.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_01e72a60[];
struct C_00570860 { void sub_00570860(void); };
// @baa 0x00570860
void C_00570860::sub_00570860(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }
