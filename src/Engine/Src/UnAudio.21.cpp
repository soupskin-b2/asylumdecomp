// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gaps: ObjectFlags is the script struct FQWord where the native member is a QWORD, and RF_PendingKill /
 * UObject::MarkPendingKill (inline in UnObjBas.h) aren't declared; FScriptDelegate::IsCallable (00784f80),
 * UAudioComponent::Cleanup (00799ca0) and the delegateOnAudioFinished glue (out of line, 007850d0) aren't either. */
#define RF_PendingKill ((QWORD)0x2000000000000000ULL)
struct FScriptDelegate_ : public FScriptDelegate
{
	UBOOL IsCallable(const UObject* OwningObject) const; /* 0x00784f80 */
};

struct UAudioComponent_ : public UAudioComponent
{
	void Cleanup(); /* 0x00799ca0 */
	void delegateOnAudioFinished(UAudioComponent* AC); /* 0x007850d0 */
	void MarkPendingKill()
	{
		*(QWORD*)&ObjectFlags |= RF_PendingKill;
	}
};

// @baa 0x00799e00
/* Stops the sound: cleans up its wave instances, tells the OnAudioFinished delegate (once) if it was playing, and
 * marks an auto-destroying component for deletion after detaching it from its last owner. */
void UAudioComponent::Stop()
{
	// We're done.
	bFinished = TRUE;

	// For safety, clear out the cached root sound node pointer.
	CueFirstNode = NULL;

	const UBOOL bOldWasPlaying = bWasPlaying;

	// Clean up all the wave instances and sources.
	((UAudioComponent_*)this)->Cleanup();

	// Notify the delegate that the sound has finished, then clear it.
	if (bOldWasPlaying && GWorld && ((FScriptDelegate_&)__OnAudioFinished__Delegate).IsCallable(this))
	{
		if (__OnAudioFinished__Delegate.Object != NULL)
		{
			((UAudioComponent_*)this)->delegateOnAudioFinished(this);
		}
		__OnAudioFinished__Delegate.Object = NULL;
		__OnAudioFinished__Delegate.FunctionName = FName(NAME_None);
	}

	// Auto destruction is handled via marking the object for deletion.
	if (bAutoDestroy)
	{
		// Remove it from its last owner's components.
		if (LastOwner)
		{
			LastOwner->sub_008c7f00(this); // DetachComponent
			LastOwner = NULL;
		}

		// Mark the object for deletion and reference removal.
		((UAudioComponent_*)this)->MarkPendingKill();
	}

	bPlaying = FALSE;
}
