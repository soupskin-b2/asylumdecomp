// UnrealEd_0480000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct S_02663d88
{
	unsigned char sub_0040c5f0(unsigned char A);
};

extern S_02663d88* g_02663d88;
// @baa 0x00488f90
unsigned char sub_00488f90(unsigned char Value)
{
	if (g_02663d88 != 0)
		return g_02663d88->sub_0040c5f0(Value);
	return 0;
}
