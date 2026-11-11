// Engine_09f0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009ffb90
void UPrimitiveComponent::execSetRBChannel(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Channel);
	P_FINISH;
	RBChannel = Channel;
	vf_20c();
}
