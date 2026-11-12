// RLadder.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x017332e0
IMPLEMENT_CLASS_AT(ARLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLadder.cpp", 13);

// @baa 0x017342d0

// @baa 0x01717b80
int ARLadder::vf_000(void) { return 1; }

// @baa 0x01717b90
void ARLadder::vf_184(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  return;
}

/* Kit gap: TArray::AddItem isn't declared; this build calls it out of line (TArray<AActor*>::AddItem, 0x0075ef50). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x01720540
/* The ladder's related actors: its top and bottom path nodes (those that are set). */
void ARLadder::vf_340(TArray<AActor*>& Actors)
{
	if (TopNode)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)TopNode);
	}
	if (BottomNode)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)BottomNode);
	}
}
