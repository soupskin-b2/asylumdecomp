// GFxUIInteraction.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Native.h"

/* Inlined here: FSeqOpOutputLink::ActivateOutputLink (Classes.h declares the out-of-line copy, 0x008aa370). */
struct FSeqOpOutputLink_ : public FSeqOpOutputLink
{
    UBOOL ActivateOutputLink()
    {
        if (!bDisabled)
        {
            bHasImpulse = TRUE;
            return TRUE;
        }
        return FALSE;
    }
};

/* this function's TArray<UObject**> destructor is out of line (008c26a0) */
struct FObjectVarArray : public TArray<UObject**>
{
    FObjectVarArray() {}
    ~FObjectVarArray();
};

/* UGFxMovie's Start script event (00e42060) and SetFocus(captureInput, Focus) (00e68b40). */

// @baa 0x00e6b210
/* vf_174 is USequenceOp::Activated (USequenceAction::Activated is 008d1890). */
void UGFxAction_OpenMovie::Activated()
{
    if (GEngine && GEngine->GameViewport)
    {
        Super::Activated();
        if (Movie)
        {
            FObjectVarArray ObjVars;
            this->GetObjectVars(ObjVars, TEXT("External Interface"));
            if (ObjVars.Num() > 0)
            {
                Movie->ExternalInterface = *ObjVars(0);
            }
            ObjVars.Empty();
            this->GetObjectVars(ObjVars, TEXT("Player Owner"));
            if (ObjVars.Num() > 0)
            {
                Movie->PlayerOwner = Cast<APlayerController>(*ObjVars(0));
            }
            else
            {
                Movie->PlayerOwner = NULL;
            }

            UBOOL bStarted = Movie->eventStart(bStartPaused);
            if (bTakeFocus)
            {
                Movie->SetFocus(bCaptureInput, bTakeFocus);
            }
            if (OutputLinks.Num() > 0)
            {
                if (bStarted)
                {
                    ((FSeqOpOutputLink_&)OutputLinks(0)).ActivateOutputLink();
                }
                else if (OutputLinks.Num() > 1)
                {
                    ((FSeqOpOutputLink_&)OutputLinks(1)).ActivateOutputLink();
                }
            }
        }
        else if (OutputLinks.Num() > 1)
        {
            ((FSeqOpOutputLink_&)OutputLinks(1)).ActivateOutputLink();
        }
    }
}
