// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no EName and no comparison operators. */
enum EName_ { NAME_None_ = 0 };

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

inline UBOOL operator==(const FName& A, EName_ N) { return A.Index == N && A.Number == 0; }

/* UAnimTree::FindSkelControl isn't declared in Classes.h. */
struct UAnimTree_ : public UAnimTree
{
	USkelControlBase* FindSkelControl(FName InControlName);
};

// @baa 0x00c55810
USkelControlBase* UAnimTree_::FindSkelControl(FName InControlName)
{
	if (InControlName == NAME_None_)
	{
		return NULL;
	}

	// walk each bone's chain of controls
	for (INT i = 0; i < SkelControlLists.Num(); i++)
	{
		USkelControlBase* Control = SkelControlLists(i).ControlHead;
		while (Control)
		{
			if (Control->ControlName == InControlName)
			{
				return Control;
			}
			Control = Control->NextControl;
		}
	}

	return NULL;
}
