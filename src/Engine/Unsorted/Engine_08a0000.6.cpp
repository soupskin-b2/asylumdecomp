// Engine_08a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AVolume_ : public AVolume
{
	UBOOL sub_00877b70(FVector);
};

// @baa 0x008a94b0
void AVolume::execEncompassesPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Point);
	P_FINISH;
	*(UBOOL*)Result = ((AVolume_*)this)->sub_00877b70(Point);
}
