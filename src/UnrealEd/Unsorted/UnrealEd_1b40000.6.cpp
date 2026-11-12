// UnrealEd_1b40000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A 24-byte payload of three doubles, copied member by member.
struct FDoubleTri
{
	double X;
	double Y;
	double Z;
};

// The payload lives at 0x18 in the receiving object; declare the field there.
struct sub_01b4f5e0_obj
{
	char pad[0x18];
	double D01b4f5e0_X;
	double D01b4f5e0_Y;
	double D01b4f5e0_Z;

	void sub_01b4f5e0(const FDoubleTri* Src);
};

// @baa 0x01b4f5e0
void sub_01b4f5e0_obj::sub_01b4f5e0(const FDoubleTri* Src)
{
	D01b4f5e0_X = Src->X;
	D01b4f5e0_Y = Src->Y;
	D01b4f5e0_Z = Src->Z;
}
