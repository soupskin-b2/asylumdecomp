// fmod_musicsystemi.cpp (part 2 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023dfbfc[];
struct C { void sub_017e1480(void); };

// @baa 0x017e1480
void C::sub_017e1480(void) { *(int*)((char*)this + 0) = (int)g_023dfbfc; }
