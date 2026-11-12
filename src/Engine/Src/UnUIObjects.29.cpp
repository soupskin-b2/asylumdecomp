// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x00daf790
/* UE3's UUIScreenObject::ContainsChildOfClass(UClass* SearchClass, UBOOL bRecurse): whether a child (or, with
 * bRecurse, any descendant) is a SearchClass. */
UBOOL UUIScreenObject::ContainsChildOfClass(UClass* SearchClass, UBOOL bRecurse)
{
    const TArray<UUIObject*>& ChildList = Children;
    UBOOL bResult = FALSE;
    if (SearchClass != NULL)
    {
        for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
        {
            if (ObjectIsA(ChildList(ChildIndex), SearchClass))
            {
                bResult = TRUE;
                break;
            }
        }
        if (!bResult && bRecurse)
        {
            for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
            {
                if (ChildList(ChildIndex)->ContainsChildOfClass(SearchClass, TRUE))
                {
                    bResult = TRUE;
                    break;
                }
            }
        }
    }
    return bResult;
}
