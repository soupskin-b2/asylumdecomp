// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Unnamed in the kit: the director group of this action's InterpData (UInterpData::FindDirectorGroup inlined, first
 * match). */
struct USeqAct_Interp_ : public USeqAct_Interp
{
    UInterpGroupDirector* sub_00d141c0();
};

// @baa 0x00d141c0
UInterpGroupDirector* USeqAct_Interp_::sub_00d141c0()
{
    if (InterpData != NULL)
    {
        for (INT i = 0; i < InterpData->InterpGroups.Num(); i++)
        {
            UInterpGroup* Group = InterpData->InterpGroups(i);
            UInterpGroupDirector* DirGroup = Cast<UInterpGroupDirector>(Group);
            if (DirGroup != NULL)
            {
                return DirGroup;
            }
        }
    }
    return NULL;
}
