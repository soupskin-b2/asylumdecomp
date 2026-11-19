// TextureMovie.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8f720
void UTextureMovie::execPlay( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Play();
}

// @baa 0x00c8f760
void UTextureMovie::execPause( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Pause();
}

// @baa 0x00c8f7a0
void UTextureMovie::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
}

#include "ue3/ConstructObject.h"

// @baa 0x00760530
template UCodecMovie* ConstructObject<UCodecMovie>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 65 "candidate.cpp"

// @baa 0x007605d0
template UCodecMovieFallback* ConstructObject<UCodecMovieFallback>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
