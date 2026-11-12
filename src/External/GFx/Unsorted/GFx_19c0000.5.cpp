// GFx_19c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// The 12-byte record stored at offset 0x38 of the owner; handed to the handler by address.
struct FHandlerBuffer
{
	INT	A;
	INT	B;
	INT	C;
};

// Object whose method at 019729b0 consumes a buffer and a flag.
struct FHandler
{
	INT sub_019729b0(FHandlerBuffer* Buffer, INT Flags);
};

struct FOwner
{
	INT	A;
	INT	B;
	INT	C;
	INT	D;
	INT	E;
	INT	F;
	INT	G;
	INT	H;
	INT	I;
	INT	J;
	INT	K;
	INT	L;
	INT	M;
	INT	N;
	FHandlerBuffer	Buffer;	// 0x38

	FHandler& sub_019c6c70(FHandler& Handler);
};

// @baa 0x019c6c70
FHandler& FOwner::sub_019c6c70(FHandler& Handler)
{
	Handler.sub_019729b0(&Buffer, 0);
	return Handler;
}
