// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Cast<UAnimNodeSequence> is the out-of-line instantiation at 009109d0. */
extern template UAnimNodeSequence* Cast<UAnimNodeSequence>(UObject* Src);
/* UAnimNodeCrossfader::GetActiveChild isn't declared in Classes.h. */
struct UAnimNodeCrossfader_ : public UAnimNodeCrossfader
{
	UAnimNodeSequence* GetActiveChild();
};

// @baa 0x00c7a590
UAnimNodeSequence* UAnimNodeCrossfader_::GetActiveChild()
{
	if (Children.Num() != 2 || !Children(0).Anim || !Children(1).Anim)
	{
		return NULL;
	}

	// the child we are blending towards
	return Cast<UAnimNodeSequence>(Child2WeightTarget < 0.5f ? Children(0).Anim : Children(1).Anim);
}
