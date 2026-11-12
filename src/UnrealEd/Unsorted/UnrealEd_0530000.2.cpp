// UnrealEd_0530000.cpp (part 2 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_026657b0;
extern "C" C* __cdecl sub_00534190(void);
// @baa 0x00534470
short __cdecl sub_00534470(void)
{
    if (g_026657b0 == 0)
        g_026657b0 = sub_00534190();
    return g_026657b0->sub_01ab5e50();
}

struct Sub
{
    void sub_005319e0(INT Value);
};

// @baa 0x00532c60
void sub_00532c60(INT A1, Sub* Object)
{
    Object->sub_005319e0(A1);
}

struct Sub_005350c0
{
    void sub_00534e60(INT Value);
};

// @baa 0x005350c0
void sub_005350c0(INT A1, Sub_005350c0* Object)
{
    Object->sub_00534e60(A1);
}
