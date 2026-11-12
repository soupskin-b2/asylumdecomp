// Engine_08a0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x008a94b0
void AVolume::execEncompassesPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Point);
	P_FINISH;
	*(UBOOL*)Result = sub_00877b70(Point);
}

// @baa 0x008a90f0
void AActor::execIsOverlapping(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = sub_00763730(A, 0, 0, 0);
}

// @baa 0x008a9430
void AVolume::execEncompasses(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Other);
    P_FINISH;
    /* sub_00877b70 is AVolume::Encompasses(FVector point) */
    *(UBOOL*)Result = sub_00877b70(Other->Location);
}
