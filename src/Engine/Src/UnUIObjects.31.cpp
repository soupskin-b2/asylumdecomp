// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: FGuid's comparison (UnMisc.h), for the script-struct mirror FWIDGET_ID. */
inline UBOOL operator==(const FGuidImplementation& X, const FGuidImplementation& Y)
{
    return ((X.A ^ Y.A) | (X.B ^ Y.B) | (X.C ^ Y.C) | (X.D ^ Y.D)) == 0;
}

// @baa 0x00daf4f0
/* UE3's UUIScreenObject::FindChildUsingID(FWIDGET_ID WidgetID, UBOOL bRecurse): the child tagged WidgetName (FindChildIndex inlined), else, with bRecurse, the first match among the descendants. */
UUIObject* UUIScreenObject::FindChildUsingID(FWIDGET_ID WidgetID, UBOOL bRecurse) const
{
    UUIObject* Result = NULL;
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i)->WidgetID == WidgetID)
        {
            Result = Children(i);
            break;
        }
    }
    if (Result == NULL && bRecurse)
    {
        for (INT i = 0; i < Children.Num(); i++)
        {
            Result = Children(i)->FindChildUsingID(WidgetID, TRUE);
            if (Result != NULL)
            {
                break;
            }
        }
    }
    return Result;
}
