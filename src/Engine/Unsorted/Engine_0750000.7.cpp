// Engine_0750000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gap: GIsGarbageCollecting (0x0266e820) isn't declared. */

extern UBOOL GIsGarbageCollecting;
 /* 0x0266e820 */
// @baa 0x00757db0
/* Actors only run script events once play has begun (or on the class default object), never during GC. */
void AActor::ProcessEvent(UFunction* Function, void* Parms, void* Result)
{
    if (((GWorld && GWorld->HasBegunPlay()) || (ObjectFlags & RF_ClassDefaultObject) != 0) && !GIsGarbageCollecting)
    {
        Super::ProcessEvent(Function, Parms, Result);
    }
}
