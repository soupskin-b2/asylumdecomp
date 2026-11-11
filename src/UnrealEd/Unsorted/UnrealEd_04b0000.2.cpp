// UnrealEd_04b0000.cpp (part 2 of 2): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02663cf4;
extern "C" C* __cdecl sub_004a5a10(void);
// @baa 0x004b21f0
short __cdecl sub_004b21f0(void)
{
    if (g_02663cf4 == 0)
        g_02663cf4 = sub_004a5a10();
    return g_02663cf4->sub_01ab5e50();
}

extern C* g_02663d10;
extern "C" C* __cdecl sub_004a6f10(void);
// @baa 0x004b2bc0
short __cdecl sub_004b2bc0(void)
{
    if (g_02663d10 == 0)
        g_02663d10 = sub_004a6f10();
    return g_02663d10->sub_01ab5e50();
}

extern C* g_02663d74;
extern "C" C* __cdecl sub_004ada20(void);
// @baa 0x004b6110
short __cdecl sub_004b6110(void)
{
    if (g_02663d74 == 0)
        g_02663d74 = sub_004ada20();
    return g_02663d74->sub_01ab5e50();
}

extern C* g_02663d48;
extern "C" C* __cdecl sub_004ab950(void);
// @baa 0x004b6170
short __cdecl sub_004b6170(void)
{
    if (g_02663d48 == 0)
        g_02663d48 = sub_004ab950();
    return g_02663d48->sub_01ab5e50();
}

extern C* g_02663d40;
extern "C" C* __cdecl sub_004ab350(void);
// @baa 0x004b61d0
short __cdecl sub_004b61d0(void)
{
    if (g_02663d40 == 0)
        g_02663d40 = sub_004ab350();
    return g_02663d40->sub_01ab5e50();
}

extern C* g_02663d7c;
extern "C" C* __cdecl sub_004ae720(void);
// @baa 0x004b6230
short __cdecl sub_004b6230(void)
{
    if (g_02663d7c == 0)
        g_02663d7c = sub_004ae720();
    return g_02663d7c->sub_01ab5e50();
}

extern C* g_02663ce0;
extern "C" C* __cdecl sub_004b2210(void);
// @baa 0x004b7e50
short __cdecl sub_004b7e50(void)
{
    if (g_02663ce0 == 0)
        g_02663ce0 = sub_004b2210();
    return g_02663ce0->sub_01ab5e50();
}

extern C* g_02663d30;
extern "C" C* __cdecl sub_004b3d80(void);
// @baa 0x004b8880
short __cdecl sub_004b8880(void)
{
    if (g_02663d30 == 0)
        g_02663d30 = sub_004b3d80();
    return g_02663d30->sub_01ab5e50();
}
