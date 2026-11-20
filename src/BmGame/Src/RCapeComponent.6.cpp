// RCapeComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2d68;
	/* BMGAME_UpdateDamageLevel */
/* Inlined here: the script-event glue for eventUpdateDamageLevel (0x016ad7e0);
 * Classes.h declares the out-of-line copy. */
struct URCapeSkeletalMeshComponent_ : public URCapeSkeletalMeshComponent
{
	void eventUpdateDamageLevel(class UMaterialInstance* NewMat)
	{
		struct RCapeSkeletalMeshComponent_eventUpdateDamageLevel_Parms
		{
			UMaterialInstance* NewMat;
		} Parms;
		Parms.NewMat = NewMat;
		ProcessEvent(FindFunctionChecked(g_026e2d68), &Parms);
	}
};

// @baa 0x016ae7b0
/* Passes the new damage material on to the cloth mesh's script. */
void URCapeComponent::UpdateDamageState(UMaterialInstance* NewMat)
{
	((URCapeSkeletalMeshComponent_*)ClothSkeletalMesh)->eventUpdateDamageLevel(NewMat);
}
