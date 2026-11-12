// Engine_1a20000.cpp: 4 functions
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

extern char g_02405318;
typedef void (__stdcall *SThingFn)(void*, char*, int);

struct SThing
{
    SThingFn Fn;
};

// @baa 0x01a29870
void __stdcall sub_01a29870(SThing** P, int Arg2)
{
    (*P)->Fn(P, &g_02405318, Arg2);
}

void sub_00402660(INT Value);
// @baa 0x01a288d0
void __stdcall sub_01a288d0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01a28970
void __stdcall sub_01a28970(INT A, INT B)
{
    sub_00402660(A);
}
