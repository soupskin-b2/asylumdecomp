// GFxUIMovie.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

// @baa 0x00e68a80
void UGFxAction_SetFocus::Activated()
{
    Super::Activated();
    if (Movie)
    {
        GGFxEngine->SetFocus((FGFxMovie*)Movie->pMovie.Dummy, bCaptureInput);
    }
    else
    {
        GGFxEngine->SetFocus(NULL, FALSE);
    }
}

/* UGFxMovie::SetFocus(UBOOL captureInput, UBOOL Focus), the native behind execSetFocus and
 * GFxAction_OpenMovie. */

// @baa 0x00e68b40
void UGFxMovie::SetFocus(UBOOL captureInput, UBOOL Focus)
{
    if (GGFxEngine && pMovie.Dummy)
    {
        GGFxEngine->SetFocus(Focus ? (FGFxMovie*)pMovie.Dummy : NULL, captureInput);
    }
}
