// Engine_1a20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern int g_024052d8;
// Interface whose first virtual takes a pointer to a global and an int.
struct S01a296b0
{
	virtual void __stdcall sub_01a29000(int* A, int B) = 0;
};

// @baa 0x01a296b0
void __stdcall sub_01a296b0(S01a296b0* Obj, int Arg)
{
	Obj->sub_01a29000(&g_024052d8, Arg);
}
