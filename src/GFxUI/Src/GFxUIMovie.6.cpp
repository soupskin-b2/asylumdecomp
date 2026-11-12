// GFxUIMovie.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/GFx.h"

// @baa 0x00e515b0
void UGFxMovie::execAdvance(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Time);
    P_FINISH;
    if (GGFxEngine && pMovie.Dummy)
    {
        FGFxMovie* Movie = (FGFxMovie*)pMovie.Dummy;
        Movie->pView->Advance(Time);
    }
}

/* GFx.h only forward-declares FGFxEngine; SetFocus(FGFxMovie*, UBOOL CaptureInput) is out of
 * line at 00e688b0. */
class FGFxEngine {
public:
    void SetFocus(FGFxMovie* Movie, UBOOL CaptureInput); /* 0x00e688b0 */
};

// @baa 0x00e6a360
void UGFxMovie::execSetFocus(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(captureInput);
    P_GET_UBOOL_OPTX(Focus, TRUE);
    P_FINISH;
    if (GGFxEngine && pMovie.Dummy)
    {
        GGFxEngine->SetFocus(Focus ? (FGFxMovie*)pMovie.Dummy : NULL, captureInput);
    }
}
