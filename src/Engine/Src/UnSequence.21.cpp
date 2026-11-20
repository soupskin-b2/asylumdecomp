// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FVisiblePortalInfo::operator== (PlayerController.uc cpptext); the kit's struct has none. */
inline UBOOL operator==(const FVisiblePortalInfo& A, const FVisiblePortalInfo& B)
{
    return B.Source == A.Source && B.Destination == A.Destination;
}

// @baa 0x008b1da0
/* the out-of-line TArray<FVisiblePortalInfo>::RemoveItem instantiation (AController::VisiblePortals) */
template INT TArray<FVisiblePortalInfo>::RemoveItem(const FVisiblePortalInfo& Item);

// @baa 0x008b1c90
/* the out-of-line TArray<USequenceEvent*>::AddUniqueItem instantiation (AActor::GeneratedEvents) */
template INT TArray<USequenceEvent*>::AddUniqueItem(USequenceEvent* const& Item);
