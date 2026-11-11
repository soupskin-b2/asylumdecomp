// GFx_18f0000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023f5994[];
struct C { void sub_018f5790(void); };

// @baa 0x018f5790
void C::sub_018f5790(void) { *(int*)((char*)this + 0) = (int)g_023f5994; }

struct C_018f57a0 { C_018f57a0* sub_018f57a0(void); };

// @baa 0x018f57a0
C_018f57a0* C_018f57a0::sub_018f57a0(void) { *(int*)((char*)this + 0) = (int)g_023f5994; return this; }

struct C_018f5940 { void sub_018f5940(void); };

// @baa 0x018f5940
void C_018f5940::sub_018f5940(void) { *(int*)((char*)this + 0) = (int)g_023f5994; }
