// RCapeComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2d68;
	/* BMGAME_UpdateDamageLevel */
/* Kit gap: the generated glue for RCapeSkeletalMeshComponent's script event UpdateDamageLevel (BmGameClasses.h) isn't declared. */
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
void URCapeComponent::sub_016ae7b0(UMaterialInstance* NewMat)
{
	((URCapeSkeletalMeshComponent_*)ClothSkeletalMesh)->eventUpdateDamageLevel(NewMat);
}
