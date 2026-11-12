// Launch_1ab0000.cpp (part 4 of 4): 7 functions
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

struct C_01ab2d00
{
    INT Value_00;
    BYTE Flag_04;
    INT Value_08;

    C_01ab2d00* sub_01ab2d00();
};

// @baa 0x01ab2d00
C_01ab2d00* C_01ab2d00::sub_01ab2d00()
{
    Value_00 = 0;
    Flag_04 = 0;
    Value_08 = 0;
    return this;
}

extern BYTE g_027be3e4;
// @baa 0x01ab2f80
INT sub_01ab2f80()
{
    return g_027be3e4 ? 0x10 : 0;
}

struct C_01ab5ce0
{
    INT Value;

    C_01ab5ce0* sub_01ab5ce0(INT* Source);
};

// @baa 0x01ab5ce0
C_01ab5ce0* C_01ab5ce0::sub_01ab5ce0(INT* Source)
{
    Value = *Source;
    return this;
}

struct C_01ab5cf0
{
    INT Value;

    C_01ab5cf0* sub_01ab5cf0(INT* Source);
};

// @baa 0x01ab5cf0
C_01ab5cf0* C_01ab5cf0::sub_01ab5cf0(INT* Source)
{
    Value = *Source;
    return this;
}
