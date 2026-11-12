// RCapeStateController.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x016cec00
UBOOL URCapeStateController::GetIsPausedOrPendingPaused()
{
	return IsCapePauseRequested || IsCapePaused;
}

// @baa 0x016cebb0
/* A new, empty object of the class the editor asked for. */
UObject* URCapeCollisionShapeConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x016ce5b0
/* A new, empty object of the class the editor asked for. */
UObject* URCapeCollisionConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}

// @baa 0x016ce8b0
/* A new, empty object of the class the editor asked for. */
UObject* URCapeStateBoneConfigFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, QWORD Flags, UObject* Context, FFeedbackContext* Warn)
{
	return StaticConstructObject(InClass, InParent, InName, Flags);
}
