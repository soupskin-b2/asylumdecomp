// Engine_08a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

// @baa 0x008a9220
void AActor::execSetRoomMixBin(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMixBin, mixToStart);
	P_FINISH;

	if (GEngine->Client) {
		UAudioDevice* AD = (UAudioDevice*)GEngine->Client->GetAudioDevice();
		if (AD) {
			AD->vf_190((INT)mixToStart);
		}
	}
}
