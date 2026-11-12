// UnrealEd_0470000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02618838;
extern "C" C* __cdecl sub_00475df0(void);
// @baa 0x00478df0
short __cdecl sub_00478df0(void)
{
    if (g_02618838 == 0)
        g_02618838 = sub_00475df0();
    return g_02618838->sub_01ab5e50();
}

struct Sub
{
    void sub_0046e8f0(INT Value);
};

// @baa 0x00475540
void sub_00475540(INT A1, Sub* Object)
{
    Object->sub_0046e8f0(A1);
}

struct Sub_00475590
{
    void sub_0046e780(INT Value);
};

// @baa 0x00475590
void sub_00475590(INT A1, Sub_00475590* Object)
{
    Object->sub_0046e780(A1);
}

struct Sub_00478a10
{
    void sub_004756c0(INT Value);
};

// @baa 0x00478a10
void sub_00478a10(INT A1, Sub_00478a10* Object)
{
    Object->sub_004756c0(A1);
}
