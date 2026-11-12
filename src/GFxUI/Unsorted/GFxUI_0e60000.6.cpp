// GFxUI_0e60000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
struct UClass_;
extern template UGFxFSCmdHandler_Kismet* Cast<UGFxFSCmdHandler_Kismet>(UObject* Src);
/* UnObjBas.h ConstructObject<T>; the UGFxFSCmdHandler_Kismet instance is out of line (00e6fb00). */
template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer = INVALID_OBJECT, FName Name = NAME_None, QWORD SetFlags = 0, UObject* Template = NULL, UObject* SubobjectRoot = NULL, FObjectInstancingGraph* InstanceGraph = NULL);
/* USequenceEvent::RegisterEvent (008be6c0); slot 0x1a0 (vf_1a0) is RegisterEvent. */

/* UGFxFSCmdHandler_Kismet::RegisterFSCommand (00e68ac0): adds the event to Events under its
 * FSCommand name. */

// @baa 0x00e6ffb0
INT UGFxEvent_FsCommand::RegisterEvent()
{
    UBOOL bResult = ((USequenceEvent*)this)->USequenceEvent::RegisterEvent();
    if (Movie && bResult)
    {
        UGFxFSCmdHandler_Kismet* Handler;
        if (Movie->FSCmdHandler)
        {
            Handler = Cast<UGFxFSCmdHandler_Kismet>(Movie->FSCmdHandler);
            if (!Handler)
            {
                return FALSE;
            }
        }
        else
        {
            Handler = ConstructObject<UGFxFSCmdHandler_Kismet>((UClass_*)UGFxFSCmdHandler_Kismet::StaticClass());
            Movie->FSCmdHandler = Handler;
        }
        ((UGFxFSCmdHandler_Kismet*)Handler)->RegisterFSCommand(this);
    }
    return bResult;
}
