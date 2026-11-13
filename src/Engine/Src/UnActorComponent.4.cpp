// UnActorComponent.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c80980
void UActorComponent::execSetTickGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewTickGroup);
	P_FINISH;
	SetTickGroup(NewTickGroup);
}


// @baa 0x00c809e0
void UActorComponent::execDetachFromAny( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DetachFromAny();
}


// @baa 0x00c9ef60
void UFogVolumeDensityComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bSetEnabled);
	P_FINISH;
	this->sub_006ab520(bSetEnabled);
}

/* UActorComponent::BeginDeferredUpdateTransform (007596c0) and BeginDeferredReattach (00765d00)
 * aren't declared in Classes.h. */

// @baa 0x0076a290
void UActorComponent::execQueueReattach(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bTransformOnly);
	P_FINISH;

	if (bAttached && Owner && Owner->Components.ContainsItem(this))
	{
		if (bTransformOnly)
		{
			BeginDeferredUpdateTransform();
		}
		else
		{
			BeginDeferredReattach();
		}
	}
}

// @baa 0x00c80900
void UActorComponent::execSetComponentRBFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bFixed);
	P_FINISH;
	SetComponentRBFixed(bFixed);
}

// @baa 0x006c0c10
/* Slot 0x14c (unnamed in the kit; UE3's CreateFogVolumeDensityInfo(const FBox&)). */
INT UFogVolumeDensityComponent::vf_14c(INT) PURE_VIRTUAL(UFogVolumeDensityComponent::CreateFogVolumeDensityInfo, return NULL;);
