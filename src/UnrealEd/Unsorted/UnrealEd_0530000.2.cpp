// UnrealEd_0530000.cpp (part 2 of 3): 1 function
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
