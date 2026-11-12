// GFxUI_0e50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

/* GFx.h only forward-declares FGFxEngine; Tick(FLOAT DeltaTime) is out of line at 00e531e0. */
class FGFxEngine {
public:
    void Tick(FLOAT DeltaTime); /* 0x00e531e0 */
};

/* Slot 0x110 is UInteraction::Tick(FLOAT DeltaTime); the kit declares it `INT vf_110(INT)`, so
 * the override is written on a helper. */
struct UGFxInteraction_ : public UGFxInteraction
{
    void Tick(FLOAT DeltaTime);
};

// @baa 0x00e53890
void UGFxInteraction_::Tick(FLOAT DeltaTime)
{
    if (GGFxEngine)
    {
        GGFxEngine->Tick(DeltaTime);
    }
}
