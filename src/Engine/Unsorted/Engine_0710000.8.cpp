// Engine_0710000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00716bb0
void USurface::execGetSurfaceWidth( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetSurfaceWidth();
}

// @baa 0x00716bf0
void USurface::execGetSurfaceHeight( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetSurfaceHeight();
}
