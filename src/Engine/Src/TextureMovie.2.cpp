// TextureMovie.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8f720
void UTextureMovie::execPlay( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_130();
}

// @baa 0x00c8f760
void UTextureMovie::execPause( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_134();
}

// @baa 0x00c8f7a0
void UTextureMovie::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_138();
}
