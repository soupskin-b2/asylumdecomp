// Launch_1ab0000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca4d0;
extern "C" C* __cdecl sub_01ab5d40(void);
// @baa 0x01ab5e10
short __cdecl sub_01ab5e10(void)
{
    if (g_027ca4d0 == 0)
        g_027ca4d0 = sub_01ab5d40();
    return g_027ca4d0->sub_01ab5e50();
}

extern C* g_027ca4d8;
extern "C" C* __cdecl sub_01ab6860(void);
// @baa 0x01ab6930
short __cdecl sub_01ab6930(void)
{
    if (g_027ca4d8 == 0)
        g_027ca4d8 = sub_01ab6860();
    return g_027ca4d8->sub_01ab5e50();
}

extern C* g_027ca4dc;
extern "C" C* __cdecl sub_01ab69a0(void);
// @baa 0x01ab76f0
short __cdecl sub_01ab76f0(void)
{
    if (g_027ca4dc == 0)
        g_027ca4dc = sub_01ab69a0();
    return g_027ca4dc->sub_01ab5e50();
}
