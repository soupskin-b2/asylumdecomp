// Engine_1ad0000.cpp (part 3 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca55c;
extern "C" C* __cdecl sub_01ad7720(void);
// @baa 0x01ad77d0
short __cdecl sub_01ad77d0(void)
{
    if (g_027ca55c == 0)
        g_027ca55c = sub_01ad7720();
    return g_027ca55c->sub_01ab5e50();
}

extern C* g_027ca564;
extern "C" C* __cdecl sub_01ada140(void);
// @baa 0x01ada220
short __cdecl sub_01ada220(void)
{
    if (g_027ca564 == 0)
        g_027ca564 = sub_01ada140();
    return g_027ca564->sub_01ab5e50();
}

extern C* g_027ca568;
extern "C" C* __cdecl sub_01ada330(void);
// @baa 0x01ada410
short __cdecl sub_01ada410(void)
{
    if (g_027ca568 == 0)
        g_027ca568 = sub_01ada330();
    return g_027ca568->sub_01ab5e50();
}

extern C* g_027ca56c;
extern "C" C* __cdecl sub_01ada4a0(void);
// @baa 0x01ada600
short __cdecl sub_01ada600(void)
{
    if (g_027ca56c == 0)
        g_027ca56c = sub_01ada4a0();
    return g_027ca56c->sub_01ab5e50();
}

extern C* g_027ca570;
extern "C" C* __cdecl sub_01ada710(void);
// @baa 0x01ada850
short __cdecl sub_01ada850(void)
{
    if (g_027ca570 == 0)
        g_027ca570 = sub_01ada710();
    return g_027ca570->sub_01ab5e50();
}

extern C* g_027ca574;
extern "C" C* __cdecl sub_01ada930(void);
// @baa 0x01adaa10
short __cdecl sub_01adaa10(void)
{
    if (g_027ca574 == 0)
        g_027ca574 = sub_01ada930();
    return g_027ca574->sub_01ab5e50();
}

extern C* g_027ca578;
extern "C" C* __cdecl sub_01adac00(void);
// @baa 0x01adacb0
short __cdecl sub_01adacb0(void)
{
    if (g_027ca578 == 0)
        g_027ca578 = sub_01adac00();
    return g_027ca578->sub_01ab5e50();
}
