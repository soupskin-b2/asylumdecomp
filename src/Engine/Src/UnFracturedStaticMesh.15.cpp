// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c41cc;
	/* ENGINE_BreakOffIsolatedIslands */
// @baa 0x007c5680
void AFracturedStaticMeshActor::eventBreakOffIsolatedIslands(TArray<BYTE>& FragmentVis, const TArray<INT>& IgnoreFrags, FVector ChunkDir, const TArray<AFracturedStaticMeshPart*>& DisableCollWithPart, UBOOL bWantPhysChunks, UBOOL bArg6)
{
	struct FracturedStaticMeshActor_eventBreakOffIsolatedIslands_Parms
	{
		TArray<BYTE> FragmentVis;
		TArray<INT> IgnoreFrags;
		FVector ChunkDir;
		TArray<AFracturedStaticMeshPart*> DisableCollWithPart;
		UBOOL bWantPhysChunks;
		UBOOL bArg6;
	} Parms;
	Parms.FragmentVis = FragmentVis;
	Parms.IgnoreFrags = IgnoreFrags;
	Parms.ChunkDir = ChunkDir;
	Parms.DisableCollWithPart = DisableCollWithPart;
	Parms.bWantPhysChunks = bWantPhysChunks ? TRUE : FALSE;
	Parms.bArg6 = bArg6 ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c41cc), &Parms);
	FragmentVis = Parms.FragmentVis;
}
