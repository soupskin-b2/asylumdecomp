// UnrealEd_0480000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct X_
{
	void DoIt(int a); /* 0x004190f0 */
};

extern X_ *g_02663d88;
// @baa 0x00488c90
unsigned char sub_00488c90(int a)
{
	if (g_02663d88)
	{
		g_02663d88->DoIt(a);
		return 1;
	}
	return 0;
}
