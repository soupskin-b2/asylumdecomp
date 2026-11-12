// GFxUIMovie.cpp: 1 function
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
