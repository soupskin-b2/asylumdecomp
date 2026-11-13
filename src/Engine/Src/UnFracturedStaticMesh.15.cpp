// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c41cc;
	/* ENGINE_BreakOffIsolatedIslands */
/* Kit gap: the generated glue for FracturedStaticMeshActor's script event BreakOffIsolatedIslands
 * (EngineClasses.h) isn't declared; this build keeps it out of line (UFracturedStaticMeshComponent calls it).
 * Batman's version has a sixth parameter, a bool whose script name isn't known (bArg6). */
struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void eventBreakOffIsolatedIslands(TArray<BYTE>& FragmentVis, const TArray<INT>& IgnoreFrags, FVector ChunkDir, const TArray<AFracturedStaticMeshPart*>& DisableCollWithPart, UBOOL bWantPhysChunks, UBOOL bArg6);
};

// @baa 0x007c5680
void AFracturedStaticMeshActor_::eventBreakOffIsolatedIslands(TArray<BYTE>& FragmentVis, const TArray<INT>& IgnoreFrags, FVector ChunkDir, const TArray<AFracturedStaticMeshPart*>& DisableCollWithPart, UBOOL bWantPhysChunks, UBOOL bArg6)
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
