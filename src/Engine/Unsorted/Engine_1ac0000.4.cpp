// Engine_1ac0000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca4f8;
extern "C" C* __cdecl sub_01ac22b0(void);
// @baa 0x01ac2ee0
short __cdecl sub_01ac2ee0(void)
{
    if (g_027ca4f8 == 0)
        g_027ca4f8 = sub_01ac22b0();
    return g_027ca4f8->sub_01ab5e50();
}

extern C* g_027ca500;
extern "C" C* __cdecl sub_01ac60b0(void);
// @baa 0x01ac61e0
short __cdecl sub_01ac61e0(void)
{
    if (g_027ca500 == 0)
        g_027ca500 = sub_01ac60b0();
    return g_027ca500->sub_01ab5e50();
}
