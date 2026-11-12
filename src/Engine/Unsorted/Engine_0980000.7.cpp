// Engine_0980000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma once
struct F00981e90Obj
{
	virtual int sub_00000000();
	virtual void sub_00000001(void* A, int B);
};

// @baa 0x00981e90
F00981e90Obj* sub_00981e90(F00981e90Obj* Self, void* Other)
{
	Self->sub_00000001(Other, 1);
	return Self;
}
