// RPawnPlayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Native.h"
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x01699eb0
/* Forwards the Trioviz (stereoscopic 3D) setting to the engine's console command. */
void ARGameInfo::SetTrioviz(const FString& Value)
{
	FString Command;
	Command = FString::Printf(TEXT("Trioviz %s"), *(const FString&)Value);
	GEngine->Exec(*(const FString&)Command, *GLog);
}

#line 50 "candidate.cpp"
