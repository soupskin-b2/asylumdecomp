// UnClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00572a50
/* Slot 0x2c (unnamed in the kit; UE3's FinishDestroy): frees the bytecode. Native_48 is UStruct::Script. */
void UStruct::vf_02c()
{
	Native_48.Empty();
	Super::vf_02c();
}
