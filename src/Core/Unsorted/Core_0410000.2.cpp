// Core_0410000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_0266385c;
extern "C" C* __cdecl sub_0045f620(void);
// @baa 0x00417530
short __cdecl sub_00417530(void)
{
    if (g_0266385c == 0)
        g_0266385c = sub_0045f620();
    return g_0266385c->sub_01ab5e50();
}

struct Sub
{
    void sub_00414a60(INT Value);
};

// @baa 0x004167f0
void sub_004167f0(INT A1, Sub* Object)
{
    Object->sub_00414a60(A1);
}
