// FaceFX_0480000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027d344c;
extern "C" C* __cdecl sub_01b92c90(void);
// @baa 0x004820f0
short __cdecl sub_004820f0(void)
{
    if (g_027d344c == 0)
        g_027d344c = sub_01b92c90();
    return g_027d344c->sub_01ab5e50();
}
