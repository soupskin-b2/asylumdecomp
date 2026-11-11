// Launch_1ac0000.cpp (part 3 of 3): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca540;
extern "C" C* __cdecl sub_01ace550(void);
// @baa 0x01acfa90
short __cdecl sub_01acfa90(void)
{
    if (g_027ca540 == 0)
        g_027ca540 = sub_01ace550();
    return g_027ca540->sub_01ab5e50();
}

extern C* g_027ca544;
extern "C" C* __cdecl sub_01ace5e0(void);
// @baa 0x01acfbc0
short __cdecl sub_01acfbc0(void)
{
    if (g_027ca544 == 0)
        g_027ca544 = sub_01ace5e0();
    return g_027ca544->sub_01ab5e50();
}

extern C* g_027ca548;
extern "C" C* __cdecl sub_01ace670(void);
// @baa 0x01acfcf0
short __cdecl sub_01acfcf0(void)
{
    if (g_027ca548 == 0)
        g_027ca548 = sub_01ace670();
    return g_027ca548->sub_01ab5e50();
}

extern C* g_027ca54c;
extern "C" C* __cdecl sub_01ace700(void);
// @baa 0x01acfe20
short __cdecl sub_01acfe20(void)
{
    if (g_027ca54c == 0)
        g_027ca54c = sub_01ace700();
    return g_027ca54c->sub_01ab5e50();
}

extern C* g_027ca550;
extern "C" C* __cdecl sub_01ace790(void);
// @baa 0x01acff50
short __cdecl sub_01acff50(void)
{
    if (g_027ca550 == 0)
        g_027ca550 = sub_01ace790();
    return g_027ca550->sub_01ab5e50();
}
