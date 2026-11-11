// ShaderCompiler.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_00c47450(int); C *sub_00c47540(int); };

// @baa 0x00c47540
C *C::sub_00c47540(int a) { sub_00c47450(a); return this; }

void sub_00c47560();
// @baa 0x00c47610
void sub_00c47610(void) { sub_00c47560(); }
