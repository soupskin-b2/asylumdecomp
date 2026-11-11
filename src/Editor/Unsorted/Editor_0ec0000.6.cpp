// Editor_0ec0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ec36b0
void UBrushBuilder::execPolyEnd( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_13c();
}

// Classes.h declares vf_110 as returning void, but EndBrush returns UBOOL.
typedef UBOOL(__thiscall* FEndBrush)(void*);

// @baa 0x00ec3010
void UBrushBuilder::execEndBrush(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FEndBrush)(*(void***)this)[0x110 / 4])(this);
}

// Classes.h declares vf_114 as returning void, but GetVertexCount returns INT.
typedef INT(__thiscall* FGetVertexCount)(void*);

// @baa 0x00ec3050
void UBrushBuilder::execGetVertexCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = ((FGetVertexCount)(*(void***)this)[0x114 / 4])(this);
}

// Classes.h declares vf_11c as returning void, but GetPolyCount returns INT.
typedef INT(__thiscall* FGetPolyCount)(void*);

// @baa 0x00ec3120
void UBrushBuilder::execGetPolyCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = ((FGetPolyCount)(*(void***)this)[0x11c / 4])(this);
}

// @baa 0x00ec3640
void UBrushBuilder::execPolyi(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	vf_138(Index);
}
