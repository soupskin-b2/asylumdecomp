// Editor_0a30000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01fc0800[];
struct C { C* sub_00a33380(void); };

// @baa 0x00a33380
C* C::sub_00a33380(void) { *(int*)((char*)this + 0) = (int)g_01fc0800; return this; }

extern char g_01fc0764[];
struct C_00a33390 { C_00a33390* sub_00a33390(void); };

// @baa 0x00a33390
C_00a33390* C_00a33390::sub_00a33390(void) { *(int*)((char*)this + 0) = (int)g_01fc0764; return this; }

extern char g_01fc07c4[];
struct C_00a333a0 { C_00a333a0* sub_00a333a0(void); };

// @baa 0x00a333a0
C_00a333a0* C_00a333a0::sub_00a333a0(void) { *(int*)((char*)this + 0) = (int)g_01fc07c4; return this; }

extern char g_01fc0794[];
struct C_00a334c0 { void sub_00a334c0(void); };

// @baa 0x00a334c0
void C_00a334c0::sub_00a334c0(void) { *(int*)((char*)this + 0) = (int)g_01fc0794; }
