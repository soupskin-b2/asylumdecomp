// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C"
{
    extern int g_025df474;
    extern unsigned char g_026c4c5a;

    unsigned char sub_0059f5f0(int Value, int* Out);
}

// @baa 0x01ded610
void sub_01ded610()
{
    g_026c4c5a = sub_0059f5f0(0x139, &g_025df474);
}
