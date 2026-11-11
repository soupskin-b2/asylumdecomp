// UnrealEd_0470000.cpp (part 2 of 2): 1 function
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
