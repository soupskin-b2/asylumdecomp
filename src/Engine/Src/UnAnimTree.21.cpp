// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Array.h"

/* Cast<UAnimNodeSequence> is out of line in this build. */
extern template UAnimNodeSequence* Cast<UAnimNodeSequence>(UObject* Src);

// @baa 0x00c7ccb0
UAnimNodeSequence* UAnimNodeSlot::GetCustomAnimNodeSeq()
{
	// child 0 is the normal animation; the custom animation plays on the others
	if (CustomChildIndex > 0)
	{
		return Cast<UAnimNodeSequence>(Children(CustomChildIndex).Anim);
	}

	return NULL;
}

#line 48 "candidate.cpp"
