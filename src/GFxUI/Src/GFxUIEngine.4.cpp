// GFxUIEngine.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

/* GFx.h only forward-declares FGFxEngine; InputChar(INT ControllerId, TCHAR Character) is out
 * of line at 00e5fae0. */
class FGFxEngine {
public:
    UBOOL InputChar(INT ControllerId, TCHAR Character); /* 0x00e5fae0 */
};

/* Slot 0x11c is UInteraction::InputChar(INT ControllerId, TCHAR Character); the kit declares
 * it `INT vf_11c(INT, INT)`, so the override is written on a helper. */
struct UGFxInteraction_ : public UGFxInteraction
{
    UBOOL InputChar(INT ControllerId, TCHAR Character);
};

// @baa 0x00e5fce0
UBOOL UGFxInteraction_::InputChar(INT ControllerId, TCHAR Character)
{
    if (GGFxEngine)
    {
        return GGFxEngine->InputChar(ControllerId, Character);
    }
    return FALSE;
}
