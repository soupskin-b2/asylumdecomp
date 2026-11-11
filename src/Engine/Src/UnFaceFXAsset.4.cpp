// UnFaceFXAsset.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8c910
void UFaceFXAsset::execMountFaceFXAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UFaceFXAnimSet, AnimSet);
	P_FINISH;
	sub_00bf70e0(AnimSet);
}

// @baa 0x00c8c970
void UFaceFXAsset::execUnmountFaceFXAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UFaceFXAnimSet, AnimSet);
	P_FINISH;
	sub_00bf71b0(AnimSet);
}
