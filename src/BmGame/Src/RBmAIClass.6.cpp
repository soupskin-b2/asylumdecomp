// RBmAIClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x015ec780
/* The alert this AI already has about the given instigator, if any. */
UAlertInstance* ARBMAIController::FindAlertFor(AActor* Instigator)
{
	for (INT i = 0; i < CurrentAlert.Num(); i++)
	{
		if (CurrentAlert(i) && CurrentAlert(i)->AlertInstigator == Instigator)
		{
			return CurrentAlert(i);
		}
	}
	return NULL;
}
