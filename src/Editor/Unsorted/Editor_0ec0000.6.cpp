// Editor_0ec0000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ec36b0
void UBrushBuilder::execPolyEnd( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PolyEnd();
}

// @baa 0x00ec3010
void UBrushBuilder::execEndBrush(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = EndBrush();
}

// @baa 0x00ec3050
void UBrushBuilder::execGetVertexCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetVertexCount();
}

// @baa 0x00ec3120
void UBrushBuilder::execGetPolyCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetPolyCount();
}

// @baa 0x00ec3640
void UBrushBuilder::execPolyi(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	Polyi(Index);
}

// @baa 0x00ec3160
void UBrushBuilder::execVertexv(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, V);
    P_FINISH;
    *(INT*)Result = Vertexv(V);
}

// @baa 0x00ec3090
/* vector GetVertex(int i) */
void UBrushBuilder::execGetVertex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(i);
	P_FINISH;
	*(FVector*)Result = GetVertex(i);
}
