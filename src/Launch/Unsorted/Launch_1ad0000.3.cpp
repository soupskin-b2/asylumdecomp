// Launch_1ad0000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca554;
extern "C" C* __cdecl sub_01ad2b30(void);
// @baa 0x01ad2be0
short __cdecl sub_01ad2be0(void)
{
    if (g_027ca554 == 0)
        g_027ca554 = sub_01ad2b30();
    return g_027ca554->sub_01ab5e50();
}
