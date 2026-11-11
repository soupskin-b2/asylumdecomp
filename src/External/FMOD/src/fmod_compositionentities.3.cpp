// fmod_compositionentities.cpp (part 3 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e08ac[];
struct C { void sub_017f8970(void); };

// @baa 0x017f8970
void C::sub_017f8970(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; }

struct C_017f8a10 { void sub_017f8a10(void); };

// @baa 0x017f8a10
void C_017f8a10::sub_017f8a10(void) { *(int*)((char*)this + 0) = (int)g_023e08ac; }
