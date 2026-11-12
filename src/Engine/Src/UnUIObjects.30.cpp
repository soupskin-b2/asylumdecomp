// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x00daf3e0
/* UE3's UUIScreenObject::FindChild(FName WidgetName, UBOOL bRecurse): the child tagged WidgetName (FindChildIndex inlined), else, with bRecurse, the first match among the descendants. */
UUIObject* UUIScreenObject::FindChild(FName WidgetName, UBOOL bRecurse) const
{
    UUIObject* Result = NULL;
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i)->WidgetTag == WidgetName)
        {
            Result = Children(i);
            break;
        }
    }
    if (Result == NULL && bRecurse)
    {
        for (INT i = 0; i < Children.Num(); i++)
        {
            Result = Children(i)->FindChild(WidgetName, TRUE);
            if (Result != NULL)
            {
                break;
            }
        }
    }
    return Result;
}
