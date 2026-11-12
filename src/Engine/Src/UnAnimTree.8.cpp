// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* UAnimNodeSlot::SetActorAnimEndNotification isn't declared in Classes.h. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	void SetActorAnimEndNotification(UBOOL bNewStatus);
};

// @baa 0x00c7cbb0
void UAnimNodeSlot_::SetActorAnimEndNotification(UBOOL bNewStatus)
{
	// only the custom animation that is playing may notify the actor
	for (INT i = 1; i < Children.Num(); i++)
	{
		UAnimNodeSequence* SeqNode = Cast<UAnimNodeSequence>(Children(i).Anim);
		if (SeqNode)
		{
			SeqNode->bCauseActorAnimEnd = (bIsPlayingCustomAnim && i == CustomChildIndex) ? bNewStatus : FALSE;
		}
	}
}
