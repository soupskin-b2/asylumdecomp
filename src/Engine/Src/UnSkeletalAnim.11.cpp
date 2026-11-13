// UnSkeletalAnim.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Callees Classes.h doesn't declare. */
struct UActorComponent_ : public UActorComponent
{
	void sub_00759640(UBOOL bWillReattach);			/* ConditionalDetach */
};

struct FAttachmentArray : public TArray<FAttachment>
{
	void sub_00920ee0(INT Index, INT Count);		/* Remove */
};

// @baa 0x0093fde0
/* DetachComponent: undoes AttachComponent (0093fba0) for Component, if it's attached. */
void USkeletalMeshComponent::DetachComponent(UActorComponent* Component)
{
	if (!Component)
	{
		return;
	}

	for (INT AttachmentIndex = 0; AttachmentIndex < Attachments.Num(); AttachmentIndex++)
	{
		if (Attachments(AttachmentIndex).Component == Component)
		{
			((UActorComponent_*)Component)->sub_00759640(FALSE);
			((FAttachmentArray&)Attachments).sub_00920ee0(AttachmentIndex, 1);
			bEnableUpdateChildComponents = Attachments.Num() > 0;

			USkeletalMeshComponent* SkelComp = Cast<USkeletalMeshComponent>(Component);
			if (SkelComp)
			{
				SkelComp->AttachedToSkelComponent = NULL;
			}
			return;
		}
	}
}
