// UnActorComponent.cpp: 4 functions
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

struct UActorComponent_ : public UActorComponent
{
	void DetachFromAny();
	void execDetachFromAny(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c809e0
void UActorComponent_::execDetachFromAny( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DetachFromAny();
}

struct UFogVolumeDensityComponent_ : public UFogVolumeDensityComponent
{
	void sub_006ab520(UBOOL);
};

// @baa 0x00c9ef60
void UFogVolumeDensityComponent::execSetEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bSetEnabled);
	P_FINISH;
	((UFogVolumeDensityComponent_*)this)->sub_006ab520(bSetEnabled);
}

/* UActorComponent::BeginDeferredUpdateTransform (007596c0) and BeginDeferredReattach (00765d00)
 * aren't declared in Classes.h. */
struct UActorComponent__0076a290 : public UActorComponent
{
	void BeginDeferredUpdateTransform();
	void BeginDeferredReattach();
	void execQueueReattach(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0076a290
void UActorComponent__0076a290::execQueueReattach(FFrame& Stack, RESULT_DECL)
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
