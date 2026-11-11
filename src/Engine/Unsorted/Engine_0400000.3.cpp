// Engine_0400000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    short sub_01ab5e50();
};

extern C* g_02616f14;
extern "C" C* __cdecl sub_0040ccd0(void);
// @baa 0x0040e790
short __cdecl sub_0040e790(void)
{
    if (g_02616f14 == 0)
        g_02616f14 = sub_0040ccd0();
    return g_02616f14->sub_01ab5e50();
}

struct C_0040ce70 {
    unsigned int unknown;
    unsigned int value;
    double sub_0040ce70();
};

// @baa 0x0040ce70
double C_0040ce70::sub_0040ce70()
{
    return value * 6.25e-05;
}

// @baa 0x0040dd40
double sub_0040dd40(double * A, double * B)
{
	return (*A <= *B) ? *A : *B;
}
