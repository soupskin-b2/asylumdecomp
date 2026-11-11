// UnrealEd_1ac0000.cpp (part 3 of 4): 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca508;
extern "C" C* __cdecl sub_01acb390(void);
// @baa 0x01acb440
short __cdecl sub_01acb440(void)
{
    if (g_027ca508 == 0)
        g_027ca508 = sub_01acb390();
    return g_027ca508->sub_01ab5e50();
}

extern C* g_027ca50c;
extern "C" C* __cdecl sub_01acbd90(void);
// @baa 0x01acbe90
short __cdecl sub_01acbe90(void)
{
    if (g_027ca50c == 0)
        g_027ca50c = sub_01acbd90();
    return g_027ca50c->sub_01ab5e50();
}

extern C* g_027ca510;
extern "C" C* __cdecl sub_01acc3a0(void);
// @baa 0x01acc670
short __cdecl sub_01acc670(void)
{
    if (g_027ca510 == 0)
        g_027ca510 = sub_01acc3a0();
    return g_027ca510->sub_01ab5e50();
}

extern C* g_027ca514;
extern "C" C* __cdecl sub_01acc430(void);
// @baa 0x01acc6d0
short __cdecl sub_01acc6d0(void)
{
    if (g_027ca514 == 0)
        g_027ca514 = sub_01acc430();
    return g_027ca514->sub_01ab5e50();
}

extern C* g_027ca518;
extern "C" C* __cdecl sub_01acd670(void);
// @baa 0x01acd780
short __cdecl sub_01acd780(void)
{
    if (g_027ca518 == 0)
        g_027ca518 = sub_01acd670();
    return g_027ca518->sub_01ab5e50();
}

extern C* g_027ca51c;
extern "C" C* __cdecl sub_01acdce0(void);
// @baa 0x01acdd90
short __cdecl sub_01acdd90(void)
{
    if (g_027ca51c == 0)
        g_027ca51c = sub_01acdce0();
    return g_027ca51c->sub_01ab5e50();
}

extern C* g_027ca520;
extern "C" C* __cdecl sub_01acdeb0(void);
// @baa 0x01acf1d0
short __cdecl sub_01acf1d0(void)
{
    if (g_027ca520 == 0)
        g_027ca520 = sub_01acdeb0();
    return g_027ca520->sub_01ab5e50();
}

extern C* g_027ca528;
extern "C" C* __cdecl sub_01ace1f0(void);
// @baa 0x01acf370
short __cdecl sub_01acf370(void)
{
    if (g_027ca528 == 0)
        g_027ca528 = sub_01ace1f0();
    return g_027ca528->sub_01ab5e50();
}

extern C* g_027ca52c;
extern "C" C* __cdecl sub_01ace280(void);
// @baa 0x01acf4a0
short __cdecl sub_01acf4a0(void)
{
    if (g_027ca52c == 0)
        g_027ca52c = sub_01ace280();
    return g_027ca52c->sub_01ab5e50();
}

extern C* g_027ca530;
extern "C" C* __cdecl sub_01ace310(void);
// @baa 0x01acf5d0
short __cdecl sub_01acf5d0(void)
{
    if (g_027ca530 == 0)
        g_027ca530 = sub_01ace310();
    return g_027ca530->sub_01ab5e50();
}

extern C* g_027ca534;
extern "C" C* __cdecl sub_01ace3a0(void);
// @baa 0x01acf700
short __cdecl sub_01acf700(void)
{
    if (g_027ca534 == 0)
        g_027ca534 = sub_01ace3a0();
    return g_027ca534->sub_01ab5e50();
}

extern C* g_027ca538;
extern "C" C* __cdecl sub_01ace430(void);
// @baa 0x01acf830
short __cdecl sub_01acf830(void)
{
    if (g_027ca538 == 0)
        g_027ca538 = sub_01ace430();
    return g_027ca538->sub_01ab5e50();
}

extern C* g_027ca53c;
extern "C" C* __cdecl sub_01ace4c0(void);
// @baa 0x01acf960
short __cdecl sub_01acf960(void)
{
    if (g_027ca53c == 0)
        g_027ca53c = sub_01ace4c0();
    return g_027ca53c->sub_01ab5e50();
}

struct C_01acb880
{
    INT pad_00;
    INT Counter;

    BYTE sub_01acb880(INT A, INT Delta);
};

// @baa 0x01acb880
BYTE C_01acb880::sub_01acb880(INT, INT Delta)
{
    Counter += Delta;
    return 1;
}
