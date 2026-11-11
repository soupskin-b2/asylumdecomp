// Database.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01ea6bd8[];
struct C { C* sub_005fac30(void); };

// @baa 0x005fac30
C* C::sub_005fac30(void) { *(int*)((char*)this + 0) = (int)g_01ea6bd8; return this; }
