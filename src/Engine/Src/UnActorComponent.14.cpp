// UnActorComponent.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x007650e0
/* AActor slot 0x31c (kit vf_31c): marks the actor's components pending kill, all of them or (bOnlyFiltered) only
 * those whose slot 0x144 says so. */
void AActor::vf_31c(INT bOnlyFiltered)
{
    for (INT ComponentIndex = 0; ComponentIndex < Components.Num(); ComponentIndex++)
    {
        UActorComponent* Component = Components(ComponentIndex);
        if (Component && (!bOnlyFiltered || Component->vf_144()))
        {
            Component->MarkPendingKill();
        }
    }
    for (INT ComponentIndex = 0; ComponentIndex < AllComponents.Num(); ComponentIndex++)
    {
        UActorComponent* Component = AllComponents(ComponentIndex);
        if (Component && (!bOnlyFiltered || Component->vf_144()))
        {
            Component->MarkPendingKill();
        }
    }
}

/* Unnamed in the kit: re-runs the transform update (slot 0x118, UE3 UpdateTransform) when attached. */

// @baa 0x00759620
void UActorComponent::sub_00759620()
{
    if (bAttached)
    {
        vf_118();
    }
}

// @baa 0x00765060
/* ClearComponents: detaches every attached component and clears its scene and owner. */
void AActor::vf_310(UBOOL bWillReattach)
{
	for (INT ComponentIndex = 0; ComponentIndex < Components.Num(); ComponentIndex++)
	{
		UActorComponent* Component = Components(ComponentIndex);
		if (Component)
		{
			if (Component->bAttached)
			{
				Component->Detach(bWillReattach);
			}
			Component->Scene.Dummy = 0;
			Component->Owner = NULL;
		}
	}
}

// @baa 0x00759430
/* Calls slot 0x314 for live, non-template actors. */
void ATerrain::sub_00759430(UBOOL bParam)
{
	if (!bDeleteMe && !HasAnyFlags(RF_PendingKill) && !HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		vf_314(bParam);
	}
}

// @baa 0x00772410
/* Forwards the first parameter to slot 0x314 for live, non-template actors. */
void AActor::vf_318(INT A, INT B)
{
	if (!bDeleteMe && !HasAnyFlags(RF_PendingKill) && !HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		vf_314(A);
	}
}
