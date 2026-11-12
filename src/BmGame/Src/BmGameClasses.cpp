// BmGameClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C
{
	INT X;
	INT Y;
	INT Z;

	C * sub_0154b6b0(INT NewX, INT NewY, INT NewZ)
	{
		X = NewX;
		Y = NewY;
		Z = NewZ;
		return this;
	}
};

C g_0154b6b0C;
// @baa 0x0154b6b0
C * g_0154b6b0Use(C * c, INT X, INT Y, INT Z)
{
	return c->sub_0154b6b0(X, Y, Z);
}
