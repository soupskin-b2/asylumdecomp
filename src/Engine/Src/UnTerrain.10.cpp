// UnTerrain.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FRenderCommandFence has no constructor, BeginFence (0x00719c60) or GetNumPendingFences (0x0071f7e0)
 * (RenderingThread.h). */
struct FRenderCommandFence_ : public FRenderCommandFence
{
	FRenderCommandFence_() { NumPendingFences = 0; }
	void BeginFence();
	UINT GetNumPendingFences() const;
};

/* Named accessor for the FPointer field (ISSUES.md 19). */
static __forceinline FRenderCommandFence_*& GetReleaseResourcesFence(ATerrain* Terrain)
{
	return (FRenderCommandFence_*&)Terrain->ReleaseResourcesFence.Dummy;
}

// @baa 0x009827d0
UBOOL ATerrain::IsReadyForFinishDestroy()
{
	// Wait until the rendering thread is done with the terrain's resources.
	UBOOL bResourcesReleased = TRUE;
	if (GetReleaseResourcesFence(this))
	{
		bResourcesReleased = GetReleaseResourcesFence(this)->GetNumPendingFences() == 0;
	}
	return Super::IsReadyForFinishDestroy() && bResourcesReleased;
}
