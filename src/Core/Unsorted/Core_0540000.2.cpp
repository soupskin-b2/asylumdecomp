// Core_0540000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01e72a60[];
struct C { void sub_00547050(void); };

// @baa 0x00547050
void C::sub_00547050(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }
