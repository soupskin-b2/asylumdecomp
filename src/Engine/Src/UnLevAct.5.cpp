// UnLevAct.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

struct UWorld_ : public UWorld {
    UBOOL sub_007ed180(AActor* ThisActor, UBOOL bShouldModifyLevel); // EditorDestroyActor
};

// @baa 0x007ed180
UBOOL UWorld_::sub_007ed180(AActor* ThisActor, UBOOL bShouldModifyLevel)
{
#line 650 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevAct.cpp"
    check(ThisActor);
    check(ThisActor->IsValid());

    if (ObjectIsA(ThisActor, ANavigationPoint::StaticClass()))
    {
        // the exe reads the flag back through a second GetWorldInfo() call before clearing it
        GetWorldInfo()->bPathsRebuilt = GetWorldInfo()->bPathsRebuilt && FALSE;
    }

    return sub_007e72a0(ThisActor, FALSE, bShouldModifyLevel); // DestroyActor
}

#line 32 "candidate.cpp"
