// RBmAIClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x015e6170
/* ARBMAIController slot 0x42c (kit vf_42c): the longest of the controller's sight ranges. */
FLOAT ARBMAIController::GetMaxSightRange()
{
    return Max(ExtendedSightRange, Max(PeripheralSightRange, FocusedSightRange));
}
