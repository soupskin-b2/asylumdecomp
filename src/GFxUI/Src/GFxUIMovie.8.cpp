// GFxUIMovie.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

/* GFx.h only forward-declares FGFxEngine; SetFocus(FGFxMovie*, UBOOL CaptureInput) is out of
 * line at 00e688b0. */
class FGFxEngine {
public:
    void SetFocus(FGFxMovie* Movie, UBOOL CaptureInput); /* 0x00e688b0 */
};

// @baa 0x00e68a80
/* vf_174 is USequenceOp::Activated (USequenceAction::Activated is 008d1890). */
void UGFxAction_SetFocus::vf_174()
{
    Super::vf_174();
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
 * GFxAction_OpenMovie; the kit doesn't declare it. */
struct UGFxMovie_ : public UGFxMovie
{
    void SetFocus(UBOOL captureInput, UBOOL Focus);
};

// @baa 0x00e68b40
void UGFxMovie_::SetFocus(UBOOL captureInput, UBOOL Focus)
{
    if (GGFxEngine && pMovie.Dummy)
    {
        GGFxEngine->SetFocus(Focus ? (FGFxMovie*)pMovie.Dummy : NULL, captureInput);
    }
}
