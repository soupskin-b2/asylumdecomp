// Engine_0da0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

struct F00dab860Record
{
	INT First;
	INT Second;
	INT Third;

	F00dab860Record* sub_00dab860(INT A, INT B, INT C);
};

// @baa 0x00dab860
F00dab860Record* F00dab860Record::sub_00dab860(INT A, INT B, INT C)
{
	First = A;
	Second = B;
	Third = C;
	return this;
}

void sub_00dab870(F00dab860Record& Rec, INT X, INT Y, INT Z)
{
	Rec.sub_00dab860(X, Y, Z);
}
