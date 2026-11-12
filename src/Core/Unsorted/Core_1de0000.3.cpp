// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" unsigned char __cdecl sub_0059f5f0(int, int*);
extern int g_025df2cc;
extern unsigned char g_026c2c08;
// @baa 0x01decd30
void sub_01decd30(void)
{
	g_026c2c08 = sub_0059f5f0(0x181, &g_025df2cc);
}
