// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

// @baa 0x00da8cf0
void UUIRoot::execSetMouseCaptureOverride(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bCaptureMouse);
    P_FINISH;

    if (GEngine != NULL && GEngine->GameViewport != NULL && GEngine->GameViewport->UIController != NULL)
    {
        GEngine->GameViewport->UIController->GetOuterUGameViewportClient()->bUIMouseCaptureOverride = bCaptureMouse;
    }
}
