// CommonEditor_1730000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern char g_023d4a58[];
struct C_0173edb0
{
	INT Field0;
	INT Field1;
	INT Field2;
	C_0173edb0* sub_0173edb0(INT Param1, INT Param2);
};

// @baa 0x0173edb0
C_0173edb0* C_0173edb0::sub_0173edb0(INT Param1, INT Param2)
{
	Field0 = (INT)g_023d4a58;
	Field1 = Param1;
	Field2 = Param2;
	return this;
}
