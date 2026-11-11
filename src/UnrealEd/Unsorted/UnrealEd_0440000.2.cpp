// UnrealEd_0440000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02617620;
extern "C" C* __cdecl sub_0043f7e0(void);
// @baa 0x0044eb10
short __cdecl sub_0044eb10(void)
{
    if (g_02617620 == 0)
        g_02617620 = sub_0043f7e0();
    return g_02617620->sub_01ab5e50();
}
