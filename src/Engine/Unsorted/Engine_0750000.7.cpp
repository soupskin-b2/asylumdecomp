// Engine_0750000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gaps: UWorld::HasBegunPlay (0x009c8ed0), GIsGarbageCollecting (0x0266e820) and RF_ClassDefaultObject aren't
 * declared, and ObjectFlags is the script struct FQWord where the native member is a QWORD. */
struct UWorld_ : public UWorld
{
    UBOOL HasBegunPlay() const; /* 0x009c8ed0 */
};

extern UBOOL GIsGarbageCollecting;
 /* 0x0266e820 */
#define RF_ClassDefaultObject QWORD(0x00000200)
// @baa 0x00757db0
/* Actors only run script events once play has begun (or on the class default object), never during GC. */
void AActor::ProcessEvent(UFunction* Function, void* Parms, void* Result)
{
    if (((GWorld && ((UWorld_*)GWorld)->HasBegunPlay()) || (*(QWORD*)&ObjectFlags & RF_ClassDefaultObject) != 0) && !GIsGarbageCollecting)
    {
        Super::ProcessEvent(Function, Parms, Result);
    }
}
