// UnrealEd_0480000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_0261883c;
extern "C" C* __cdecl sub_004843e0(void);
// @baa 0x00484f60
short __cdecl sub_00484f60(void)
{
    if (g_0261883c == 0)
        g_0261883c = sub_004843e0();
    return g_0261883c->sub_01ab5e50();
}

extern C* g_027ca558;
extern "C" C* __cdecl sub_01ad7030(void);
// @baa 0x00488830
short __cdecl sub_00488830(void)
{
    if (g_027ca558 == 0)
        g_027ca558 = sub_01ad7030();
    return g_027ca558->sub_01ab5e50();
}

extern C* g_02663d00;
extern "C" C* __cdecl sub_00488670(void);
// @baa 0x0048aff0
short __cdecl sub_0048aff0(void)
{
    if (g_02663d00 == 0)
        g_02663d00 = sub_00488670();
    return g_02663d00->sub_01ab5e50();
}

struct S_02663d88
{
	int sub_0041ed60(int A);
};

extern S_02663d88* g_02663d88;
// @baa 0x00488a40
unsigned char sub_00488a40(int A)
{
	if (g_02663d88 != 0)
		return g_02663d88->sub_0041ed60(A);
	return 0;
}
