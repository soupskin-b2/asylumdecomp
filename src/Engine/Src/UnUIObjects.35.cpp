// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Enums.h"


// @baa 0x00da94a0
/* UIScreenObject.cpp */
FLOAT UUIScreenObject::ResolveUIExtent(const FUIScreenValue_Extent& ExtentToResolve, UUIScreenObject* OwnerWidget, BYTE OutputType)
{
	return ((const FUIScreenValue_Extent&)ExtentToResolve).GetValue(OwnerWidget, (EUIExtentEvalType)OutputType);
}
